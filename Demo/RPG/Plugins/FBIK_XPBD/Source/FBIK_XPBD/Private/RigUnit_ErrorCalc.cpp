#include "RigUnit_ErrorCalc.h"
#include "Units/RigUnitContext.h"
#include "RigUnit_ClimbIK.h"




FRigUnit_ErrorCalc_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()
	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}
	
	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;
	Solver.Root=Root;
	for(int i=0;i<Effectors.Num();i++)
	{
		Solver.Effectors.Add(Effectors[i].EffectorName);
	}
	TArray<FTransform> CurrentBoneTransforms = Solver.GetCurrentBoneTransforms(Bones);
	if(!bPBIKFinished)
	{
		CurrentBoneTransformsOutput.BoneTransforms.Reset();
		CurrentBoneTransformsOutput.BoneTransforms.Append(CurrentBoneTransforms);
		//Solver.SetToZero(Bones);
		
		
	}
	else
	{
		
		float Error = Solver.CalculateError(CurrentBoneTransformsInput.BoneTransforms,CurrentBoneTransforms);
		if(Error!=-1)
		{
			UE_LOG(LogIK,Log,TEXT("Error: %f"),Error);
		}
	}

	
	
	Foot_L_Output.Bone=Effectors[0].EffectorName;
	Foot_L_Output.Transform=Bones.GetGlobalTransform(Effectors[0].EffectorName);
	Foot_L_Output.Transform.SetLocation(Foot_L_Output.Transform.GetLocation()+10*Forward);
	Foot_R_Output.Bone=Effectors[1].EffectorName;
	Foot_R_Output.Transform=Bones.GetGlobalTransform(Effectors[1].EffectorName);
	Foot_R_Output.Transform.SetLocation(Foot_R_Output.Transform.GetLocation()+10*Forward);
	Hand_L_Output.Bone=Effectors[2].EffectorName;
	Hand_L_Output.Transform=Bones.GetGlobalTransform(Effectors[2].EffectorName);
	Hand_L_Output.Transform.SetLocation(Hand_L_Output.Transform.GetLocation()+10*Forward);
	Hand_R_Output.Bone=Effectors[3].EffectorName;
	Hand_R_Output.Transform=Bones.GetGlobalTransform(Effectors[3].EffectorName);
	Hand_R_Output.Transform.SetLocation(Hand_R_Output.Transform.GetLocation()+10*Forward);
	/*
	Head_Output.Bone=Effectors[4].EffectorName;
	Head_Output.Transform=Bones.GetGlobalTransform(Effectors[4].EffectorName);
	*/
}

