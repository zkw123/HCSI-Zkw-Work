#include "RigUnit_RandomPoint.h"
#include "RigUnit_ClimbIK.h"

FRigUnit_RandomPoint_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()
	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}
	
	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;
	FTransform BoneTransform1=Bones.GetGlobalTransform(Effector1);
	FTransform BoneTransform2=Bones.GetGlobalTransform(Effector2);
	FTransform BoneTransform3=Bones.GetGlobalTransform(Effector3);
	FTransform BoneTransform4=Bones.GetGlobalTransform(Effector4);
	if(!bPBIKFinished)
	{
		//TargetLocation=BoneTransform.GetLocation()+FMath::RandRange(0.0f,Radius)*FMath::VRand();
		TargetLocation=BoneTransform1.GetLocation()+Radius*FMath::VRand();
		BoneTransform1.SetLocation(TargetLocation);
		TargetTransformOutput1=BoneTransform1;

		TargetLocation=BoneTransform2.GetLocation()+Radius*FMath::VRand();
		BoneTransform2.SetLocation(TargetLocation);
		TargetTransformOutput2=BoneTransform2;

		TargetLocation=BoneTransform3.GetLocation()+Radius*FMath::VRand();
		BoneTransform3.SetLocation(TargetLocation);
		TargetTransformOutput3=BoneTransform3;

		TargetLocation=BoneTransform4.GetLocation()+Radius*FMath::VRand();
		BoneTransform4.SetLocation(TargetLocation);
		TargetTransformOutput4=BoneTransform4;
	}
	else
	{
		
		
		FVector DifferVector1=TargetTransformInput1.GetLocation()-BoneTransform1.GetLocation();
		FVector DifferVector2=TargetTransformInput2.GetLocation()-BoneTransform2.GetLocation();
		FVector DifferVector3=TargetTransformInput3.GetLocation()-BoneTransform3.GetLocation();
		FVector DifferVector4=TargetTransformInput4.GetLocation()-BoneTransform4.GetLocation();
		
		//check(!FMath::IsNaN(Differ.Size()));
		//UE_LOG(LogIK,Log,TEXT("Error: %f"),DifferVector.Size());
		//UE_LOG(LogIK,Log,TEXT("Threshold: %f"),ReachThreshold);
		ReachError.Add(DifferVector1.Size()+DifferVector2.Size()+DifferVector3.Size()+DifferVector4.Size());
		if(DifferVector1.Size()<ReachThreshold&&DifferVector2.Size()<ReachThreshold&&DifferVector3.Size()<ReachThreshold&&DifferVector4.Size()<ReachThreshold)
		{
			bReachable.Add(true);
		}
		else
		{
			bReachable.Add(false);
		}
		if(bReachable.Num()>=1000)
		{
			int ReachablePoint=0;
			float TotalReachError=0;
			for(int i=0;i<bReachable.Num();i++)
			{
				if(bReachable[i]==true)
				{
					ReachablePoint+=1;
				}
				TotalReachError+=ReachError[i];
			}
			UE_LOG(LogIK,Log,TEXT("ReachablePoint: %f"),ReachablePoint*1.0f/1000);
			UE_LOG(LogIK,Log,TEXT("TotalReachError: %f"),TotalReachError/1000);
			bReachable.Reset();
			ReachError.Reset();
		}
	}
	
}

