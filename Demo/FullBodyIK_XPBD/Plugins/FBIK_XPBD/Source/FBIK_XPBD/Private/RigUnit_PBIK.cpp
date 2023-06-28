
#include "RigUnit_PBIK.h"
#include "Units/RigUnitContext.h"

FRigUnit_PBIK_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()

	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}

	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;

	if (Context.State == EControlRigState::Init)
	{
		// 获取末端效应器的数量
		int NumEffectors = 0;
		for (const FPBIKEffector& Effector : Effectors)
		{
			if (Bones.GetIndex(Effector.Bone) != INDEX_NONE)
			{
				++NumEffectors; 
			}
		}

		// 初始化
		bool bHasEffectors = NumEffectors > 0;
		bool bRootIsAssigned = Root != NAME_None;
		if (!(bHasEffectors && bRootIsAssigned))
		{
			return; 
		}
		
		Solver.Reset();

		// 创建骨骼节点
		for (int B = 0; B < Bones.Num(); ++B)
		{
			FName Name = Bones[B].Name;
			int ParentIndex = Bones[B].ParentIndex;
			FVector InOrigPosition = Bones[B].InitialTransform.GetLocation();
			FQuat InOrigRotation = Bones[B].InitialTransform.GetRotation();
			bool bIsRoot = Bones[B].Name == Root;
			Solver.AddBone(Name, ParentIndex, InOrigPosition, InOrigRotation, bIsRoot);
		}
		
		// 创建末端效应器节点
		EffectorSolverIndices.Reset();
		for (const FPBIKEffector& Effector : Effectors)
		{
			int32 IndexInSolver = Solver.AddEffector(Effector.Bone);
			EffectorSolverIndices.Add(IndexInSolver);
		}
		
		// 初始化求解器
		Solver.Initialize();

		return; 
	}
	
	
	if (!Solver.IsReadyToSimulate())
	{
		return;
	}

	// 初始化骨骼位置
	for (int B = 0; B < Bones.Num(); ++B)
	{
		Solver.SetBoneTransform(B, Bones[B].GlobalTransform);
	}

	// 更新骨骼配置信息
	for (const FPBIKBoneSetting& BoneSetting : BoneSettings)
	{
		int32 BoneIndex = Bones.GetIndex(BoneSetting.Bone);
		if (BoneIndex == -1)
		{
			continue; 
		}

		if (PBIK::FBoneSettings* InternalSettings = Solver.GetBoneSettings(BoneIndex))
		{
			BoneSetting.CopyToCoreStruct(*InternalSettings);
		}
	}

	// 更新末端效应器位置
	for (int E = 0; E < Effectors.Num(); ++E)
	{
		if (EffectorSolverIndices[E] == -1)
		{
			continue;
		}

		const FPBIKEffector& Effector = Effectors[E];
		FVector Position = Effector.Transform.GetLocation();
		FQuat Rotation = Effector.Transform.GetRotation();
		Solver.SetEffectorGoal(EffectorSolverIndices[E], Position, Rotation, Effector.OffsetAlpha, Effector.StrengthAlpha);
	}

	// 开始求解
	Solver.Solve(Settings);

	// 输出求解后的骨骼坐标
	bool bPropagateTransform = false;
	for (int BoneIndex = 0; BoneIndex < Bones.Num(); ++BoneIndex)
	{
		FTransform NewTransform;
		Solver.GetBoneGlobalTransform(BoneIndex, NewTransform);
		Bones.SetGlobalTransform(BoneIndex, NewTransform, bPropagateTransform);
	}
	
	// 绘制Debug信息
	Debug.Draw(Context.DrawInterface, &Solver);
}
