
#include "Core/PBIKSolver.h"
#include "Core/PBIKBody.h"
#include "Core/PBIKConstraint.h"
#include "Core/PBIKDebug.h"

namespace PBIK
{
	FEffector::FEffector(FBone* InBone)
	{
		check(InBone);
		Bone = InBone;
		SetGoal(Bone->Position, Bone->Rotation, 1.0f, 1.0f);
	}

	void FEffector::SetGoal(
		const FVector InPositionGoal,
		const FQuat& InRotationGoal,
		float InTransformAlpha,
		float InStrengthAlpha)
	{
		PositionOrig = Bone->Position;
		RotationOrig = Bone->Rotation;

		Position = PositionGoal = InPositionGoal;
		Rotation = RotationGoal = InRotationGoal;

		TransformAlpha = InTransformAlpha;
		StrengthAlpha = InStrengthAlpha;
	}

	void FEffector::UpdateFromInputs()
	{
		Position = FMath::Lerp(PositionOrig, PositionGoal, TransformAlpha);
		Rotation = FMath::Lerp(RotationOrig, RotationGoal, TransformAlpha);
		Pin.Pin()->GoalPoint = Position;
		Pin.Pin()->Alpha = StrengthAlpha;
	}

	void FEffector::SquashSubRoots()
	{
		
		// 使用偏好角让求解器计算旋转时有大概的方向

		if (!ParentSubRoot || DistToSubRootOrig <= SMALL_NUMBER)
		{
			return;
		}

		//计算到父骨骼的距离时必须注意.
		// 如果父骨骼直接与末端相连，则使用末端位置进行计算
		// 除此以外使用父骨骼本身的位置计算
		FEffector* ParentEffector = ParentSubRoot->AttachedEffector;
		FVector ParentSubRootPosition = ParentEffector ? ParentEffector->Position : ParentSubRoot->Position;
		float DistToNearestSubRoot = (ParentSubRootPosition - Position).Size();
		if (DistToNearestSubRoot >= DistToSubRootOrig)
		{
			return; // 四肢拉伸到极限
		}

		// 收缩距离以满足偏好角
		float ScaledDistOrig = DistToSubRootOrig * 0.3f;
		// 收缩量
		float DeltaSquash = DistToSubRootOrig - DistToNearestSubRoot;
		DeltaSquash = DeltaSquash > ScaledDistOrig ? ScaledDistOrig : DeltaSquash;
		float SquashPercent = DeltaSquash / ScaledDistOrig;
		if (SquashPercent < 0.01f)
		{
			return; // 四肢收缩量较小
		}

		FBone* Parent = Bone->Parent;
		while (Parent && Parent->bIsSolved)
		{
			if (Parent->Body->J.bUsePreferredAngles)
			{
				FRotator Clamped = Parent->Body->J.PreferredAngles;
				FQuat PartialRotation = FQuat::FastLerp(FQuat::Identity, FQuat(Parent->Body->J.PreferredAngles), SquashPercent);
				Parent->Body->Rotation = Parent->Body->Rotation * PartialRotation;
				Parent->Body->Rotation.Normalize();
			}

			if (Parent == ParentSubRoot->Bone)
			{
				return;
			}

			Parent = Parent->Parent;
		}
	}

} 

void FPBIKSolver::Solve(const FPBIKSolverSettings& Settings)
{
	SCOPE_CYCLE_COUNTER(STAT_PBIK_Solve);

	using PBIK::FEffector;
	using PBIK::FRigidBody;
	using PBIK::FBone;
	using PBIK::FBoneSettings;

	// 初始化
	if (!Initialize())
	{
		return;
	}

	//初始化骨骼相对位置
	//每一帧输入动画的Pose
	//在这之后根据输入Pose更新骨骼的相对位置
	for (FBone& Bone : Bones)
	{
		FBone* Parent = Bone.Parent;
		if (!Parent)
		{
			continue;
		}

		Bone.LocalPositionOrig = Parent->Rotation.Inverse() * (Bone.Position - Parent->Position);
		Bone.LocalRotationOrig = Parent->Rotation.Inverse() * Bone.Rotation;
	}

	// 更新骨骼位置和约束设置
	for (FRigidBody& Body : Bodies)
	{
		Body.UpdateFromInputs(Settings);
	}

	// 是否固定根骨骼（一般需要固定）
	if (RootPin.IsValid())
	{
		RootPin.Pin()->bEnabled = Settings.bPinRoot;
	}

	// 更新末端位移的目标位置
	for (FEffector& Effector : Effectors)
	{
		Effector.UpdateFromInputs();
	}

	// 压缩骨骼以应用偏好角设置
	for (FEffector& Effector : Effectors)
	{
		Effector.SquashSubRoots();
	}

	//允许拉伸的同时进行约束迭代，以满足目标姿势
	for (int32  I = 0; I < Settings.Iterations; ++I)
	{
		bool bMoveSubRoots = true;
		for (auto Constraint : Constraints)
		{
			Constraint->Solve(bMoveSubRoots);
		}
	}

	if (!Settings.bAllowStretch)
	{
		for (int32 C = Constraints.Num() - 1; C >= 0; --C)
		{
			Constraints[C]->RemoveStretch();
		}

		for (FEffector& Effector : Effectors)
		{
			Effector.SquashSubRoots(); // 更新拉伸
		}

		for (int32  I = 0; I < Settings.Iterations; ++I)
		{
			bool bMoveSubRoots = false;
			for (auto Constraint : Constraints)
			{
				Constraint->Solve(bMoveSubRoots);
			}
		}

		for (int32  C = Constraints.Num() - 1; C >= 0; --C)
		{
			Constraints[C]->RemoveStretch();
		}
	}

	// 更新身体中的骨骼位置
	for (FRigidBody& Body : Bodies)
	{
		Body.Bone->Position = Body.Position + Body.Rotation * Body.BoneLocalPosition;
		Body.Bone->Rotation = Body.Rotation;
	}

	// 更新末端效应器中的骨骼位置
	for (const FEffector& Effector : Effectors)
	{
		FBone* Bone = Effector.Bone;
		if (Bone->bIsSolverRoot)
		{
			continue; // if there's an effector on the root, leave it where the body ended up
		}
		Bone->Position = Bone->Parent->Position + Bone->Parent->Rotation * Bone->LocalPositionOrig;
		Bone->Rotation = Effector.Rotation;
	}

	// 将位置变化传递到其余骨骼
	for (FBone& Bone : Bones)
	{
		if (Bone.bIsSolved || !Bone.Parent)
		{
			continue;
		}

		Bone.Position = Bone.Parent->Position + Bone.Parent->Rotation * Bone.LocalPositionOrig;
		Bone.Rotation = Bone.Parent->Rotation * Bone.LocalRotationOrig;
	}
}

bool FPBIKSolver::Initialize()
{
	if (bReadyToSimulate)
	{
		return true;
	}

	bReadyToSimulate = false;

	if (!InitBones())
	{
		return false;
	}

	if (!InitBodies())
	{
		return false;
	}

	InitConstraints();

	bReadyToSimulate = true;

	return true;
}

bool FPBIKSolver::InitBones()
{
	using PBIK::FEffector;
	using PBIK::FBone;

	if (!ensureMsgf(Bones.Num() > 0, TEXT("PBIK: no bones added to solver. Cannot initialize.")))
	{
		return false;
	}

	if (!ensureMsgf(Effectors.Num() > 0, TEXT("PBIK: no effectors added to solver. Cannot initialize.")))
	{
		return false;
	}

	//记录求解器根骨骼id
	int32  NumSolverRoots = 0;
	for (FBone& Bone : Bones)
	{
		if (Bone.bIsSolverRoot)
		{
			SolverRoot = &Bone;
			++NumSolverRoots;
		}
	}

	if (!ensureMsgf(SolverRoot, TEXT("PBIK: root bone not set. Cannot initialize.")))
	{
		return false;
	}

	if (!ensureMsgf(NumSolverRoots == 1, TEXT("PBIK: more than 1 bone was marked as solver root. Cannot initialize.")))
	{
		return false;
	}

	//初始化父骨骼
	for (FBone& Bone : Bones)
	{
		// 没有父骨骼
		if (Bone.ParentIndex == -1)
		{
			continue;
		}

		// 有父骨骼
		bool bIndexInRange = Bone.ParentIndex >= 0 && Bone.ParentIndex < Bones.Num();
		if (!ensureMsgf(bIndexInRange,
			TEXT("PBIK: bone found with invalid parent index. Cannot initialize.")))
		{
			return false;
		}

		// 记录父骨骼
		Bone.Parent = &Bones[Bone.ParentIndex];
	}

	// 从末端向根部迭代记录求解状态
	for (FEffector& Effector : Effectors)
	{
		FBone* NextBone = Effector.Bone;
		while (NextBone)
		{
			NextBone->bIsSolved = true;
			NextBone = NextBone->Parent;
			if (NextBone && NextBone->bIsSolverRoot)
			{
				NextBone->bIsSolved = true;
				break;
			}
		}
	}

	// 初始化子骨骼列表
	for (FBone& Parent : Bones)
	{
		for (FBone& Child : Bones)
		{
			if (Child.bIsSolved && Child.Parent == &Parent)
			{
				Parent.Children.Add(&Child);
			}
		}
	}

	// 初始化子根骨骼
	for (FBone& Bone : Bones)
	{
		Bone.bIsSubRoot = Bone.Children.Num() > 1 || Bone.bIsSolverRoot;
	}

	return true;
}

bool FPBIKSolver::InitBodies()
{
	using PBIK::FEffector;
	using PBIK::FRigidBody;
	using PBIK::FBone;

	Bodies.Empty();
	

	for (FEffector& Effector : Effectors)
	{
		FBone* NextBone = Effector.Bone;
		while (true)
		{
			FBone* BodyBone = NextBone->bIsSolverRoot ? NextBone : NextBone->Parent;
			if (!ensureMsgf(BodyBone, TEXT("PBIK: effector is on bone that is not on or below root bone.")))
			{
				return false;
			}

			AddBodyForBone(BodyBone);

			NextBone = BodyBone;
			if (NextBone == SolverRoot)
			{
				break;
			}
		}
	}

	// 初始化身体骨骼
	for (FRigidBody& Body : Bodies)
	{
		Body.Initialize(SolverRoot);
	}

	// 将骨骼按照序号排序
	Bodies.Sort();
	Algo::Reverse(Bodies);

	// 排序后储存指向身体的指针
	for (FRigidBody& Body : Bodies)
	{
		Body.Bone->Body = &Body;
	}

	// 初始化距离末端最近的骨骼
	
	for (FEffector& Effector : Effectors)
	{
		FBone* Parent = Effector.Bone->Parent;
		while (Parent)
		{
			if (!Parent->bIsSolved)
			{
				break; 
			}

			if (Parent->bIsSubRoot || Parent->bIsSolverRoot)
			{
				Effector.ParentSubRoot = Parent->Body;
				Effector.DistToSubRootOrig = (Parent->Body->Position - Effector.Bone->Position).Size();
				break;
			}

			Parent = Parent->Parent;
		}
	}

	return true;
}

void FPBIKSolver::AddBodyForBone(PBIK::FBone* Bone)
{
	for (PBIK::FRigidBody& Body : Bodies)
	{
		if (Body.Bone == Bone)
		{
			return; 
		}
	}
	Bodies.Emplace(Bone);
}

void FPBIKSolver::InitConstraints()
{
	using PBIK::FEffector;
	using PBIK::FBone;
	using PBIK::FRigidBody;
	using PBIK::FPinConstraint;
	using PBIK::FJointConstraint;

	Constraints.Empty();

	// 将身体骨骼与末端效应器连接，确定约束
	for (FEffector& Effector : Effectors)
	{
		FBone* BodyBone = Effector.Bone->bIsSolverRoot ? Effector.Bone : Effector.Bone->Parent;
		if (!ensureMsgf(BodyBone, TEXT("PBIK: effector is on bone that does not have a parent.")))
		{
			return;
		}

		FRigidBody* Body = BodyBone->Body;
		TSharedPtr<FPinConstraint> Constraint = MakeShared<FPinConstraint>(Body, Effector.Position);
		Effector.Pin = Constraint;
		Body->AttachedEffector = &Effector;
		Constraints.Add(Constraint);
	}

	//将身体骨骼与根骨骼连接
	//如果未指定根骨骼
	if (!SolverRoot->Body->AttachedEffector) 
	{
		TSharedPtr<FPinConstraint> RootConstraint = MakeShared<FPinConstraint>(SolverRoot->Body, SolverRoot->Position);
		Constraints.Add(RootConstraint);
		RootPin = RootConstraint;
	}

	// 将身体的骨骼之间通过约束连接起来
	for (FRigidBody& Body : Bodies)
	{
		FRigidBody* ParentBody = Body.GetParentBody();
		if (!ParentBody)
		{
			continue; // root
		}

		TSharedPtr<FJointConstraint> Constraint = MakeShared<FJointConstraint>(ParentBody, &Body);
		Constraints.Add(Constraint);
	}
}

PBIK::FDebugDraw* FPBIKSolver::GetDebugDraw()
{
	DebugDraw.Solver = this;
	return &DebugDraw;
}

void FPBIKSolver::Reset()
{
	bReadyToSimulate = false;
	SolverRoot = nullptr;
	RootPin = nullptr;
	Bodies.Empty();
	Bones.Empty();
	Constraints.Empty();
	Effectors.Empty();
}

bool FPBIKSolver::IsReadyToSimulate()
{
	return bReadyToSimulate;
}

int32 FPBIKSolver::AddBone(
	const FName Name,
	const int32 ParentIndex,
	const FVector& InOrigPosition,
	const FQuat& InOrigRotation,
	bool bIsSolverRoot)
{
	return Bones.Emplace(Name, ParentIndex, InOrigPosition, InOrigRotation, bIsSolverRoot);
}

int32 FPBIKSolver::AddEffector(FName BoneName)
{
	for (PBIK::FBone& Bone : Bones)
	{
		if (Bone.Name == BoneName)
		{
			Effectors.Emplace(&Bone);
			return Effectors.Num() - 1;
		}
	}

	return -1;
}

void FPBIKSolver::SetBoneTransform(
	const int32 Index,
	const FTransform& InTransform)
{
	check(Index >= 0 && Index < Bones.Num());
	Bones[Index].Position = InTransform.GetLocation();
	Bones[Index].Rotation = InTransform.GetRotation();
}

PBIK::FBoneSettings* FPBIKSolver::GetBoneSettings(const int32 Index)
{
	
	if (!ensureMsgf(bReadyToSimulate, TEXT("PBIK: trying to access Bone Settings before Solver is initialized.")))
	{
		return nullptr;
	}

	if (!ensureMsgf(Bones.IsValidIndex(Index), TEXT("PBIK: trying to access Bone Settings with invalid bone index.")))
	{
		return nullptr;
	}

	if (!Bones[Index].Body)
	{
		UE_LOG(LogTemp, Warning, TEXT("PBIK: trying to apply Bone Settings to bone that is not simulated (not between root and effector)."));
		return nullptr;
	}

	return &Bones[Index].Body->J;
}

void FPBIKSolver::GetBoneGlobalTransform(const int32 Index, FTransform& OutTransform)
{
	check(Index >= 0 && Index < Bones.Num());
	PBIK::FBone& Bone = Bones[Index];
	OutTransform.SetLocation(Bone.Position);
	OutTransform.SetRotation(Bone.Rotation);
}

void FPBIKSolver::SetEffectorGoal(
	const int32 Index,
	const FVector& InPosition,
	const FQuat& InRotation,
	const float OffsetAlpha,
	const float StrengthAlpha)
{
	check(Index >= 0 && Index < Effectors.Num());
	Effectors[Index].SetGoal(InPosition, InRotation, OffsetAlpha, StrengthAlpha);
}
