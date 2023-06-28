#include "RigUnit_ProcessFootOffset.h"

#include "MySpringInterp.h"
#include "Units/RigUnitContext.h"

FRigUnit_ProcessFootOffset_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()
	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}

	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;
	
	float Target;
	if(DidTraceHit)
	{
		Target = TargetOffsetZ - CurrentPelvisOffsetZ;
		//UE_LOG(LogTemp,Log,TEXT("Normal: %s"),*CurrentHitNormal.ToString());
		//UE_LOG(LogTemp,Log,TEXT("CurrentPelvisOffsetZ : %f"),CurrentPelvisOffsetZ);
		//UE_LOG(LogTemp,Log,TEXT("TargetOffset : %f"),TargetOffsetZ);
		//UE_LOG(LogTemp,Log,TEXT("CurrentOffset : %f"),CurOffsetZ);
	}
	else
	{
		//UE_LOG(LogTemp,Log,TEXT("no hit"));
		Target = TargetOffsetZ;
	}
	
	FMySpringInterp SpringInterp;
	if (Context.State == EControlRigState::Init)
	{
		SpringInterp.SpringState.Reset();
	}
	else
	{
		SpringInterp.CriticalDamping = 8.0;
		SpringInterp.Stiffness = 2.0;
		SpringInterp.Target = Target;
		SpringInterp.Current = CurOffsetZ;
		SpringInterp.Execute(Context.DeltaTime);
	
	}
	float Result = SpringInterp.Result;
	
	
	
	NewOffsetZ = Result;
	
	
}

FRigUnit_ProcessFootTrace_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()
	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}
	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;
	FMySpringInterpVector SpringInterp;
	if (Context.State == EControlRigState::Init)
	{
		SpringInterp.SpringState.Reset();
		Result = FVector::ZeroVector;
	}
	else
	{
		SpringInterp.CriticalDamping = CriticalDamping;
		SpringInterp.Stiffness = Strength;
		SpringInterp.Target = Target;
		SpringInterp.Current = Current;
		SpringInterp.Execute(Context.DeltaTime);
		Result = SpringInterp.Result;
	}

	
}

FRigUnit_SpringInterp_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()
	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}
	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;
	FMySpringInterp SpringInterp;
	if (Context.State == EControlRigState::Init)
	{
		SpringInterp.SpringState.Reset();
		Result = 0;
	}
	else
	{
		SpringInterp.CriticalDamping = CriticalDamping;
		SpringInterp.Stiffness = Strength;
		SpringInterp.Target = Target;
		SpringInterp.Current = Current;
		SpringInterp.Execute(Context.DeltaTime);
		Result = SpringInterp.Result;
	}

}

FRigUnit_PrintTransform_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()

	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}
	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;

	FTransform transform = Bones.GetGlobalTransform(InputBoneName);
	//UE_LOG(LogTemp,Log,TEXT("BoneName: %s , Transform: %s"),*InputBoneName.ToString(),*transform.ToString());
}