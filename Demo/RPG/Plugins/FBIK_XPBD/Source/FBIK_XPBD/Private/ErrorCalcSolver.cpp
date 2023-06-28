#include "ErrorCalcSolver.h"

TArray<FTransform> FErrorCalcSolver::GetCurrentBoneTransforms(FRigBoneHierarchy& Bones)
{
	TArray<FTransform>CurrentBoneTransforms;

	int32 CurrentBoneIndex;
	FName CurrentBoneName;
	for(int i=0;i<Effectors.Num();i++)
	{
		if(Effectors[i]!=FName("None"))
		{
			CurrentBoneIndex=Bones.GetIndex(Effectors[i]);
			while(Bones[CurrentBoneIndex].ParentName!=Root)
			{
				CurrentBoneTransforms.Add(Bones[CurrentBoneIndex].GlobalTransform);
				CurrentBoneIndex=Bones[CurrentBoneIndex].ParentIndex;
				
			}
		}
	}
	return CurrentBoneTransforms;
}

float FErrorCalcSolver::CalculateError(TArray<FTransform> Origin, TArray<FTransform> Latest)
{
	if(Origin.Num()!=Latest.Num())
	{
		UE_LOG(LogIK,Error,TEXT("Size not equal!"));
		return -1;
	}
	else
	{
		float Error=0;
		for(int i=0;i<Origin.Num();i++)
		{
			Error+=(Origin[i].GetLocation()-Latest[i].GetLocation()).Size();
		}
		return Error/Origin.Num();
	}
}
/*
void FErrorCalcSolver::SetToZero(FRigBoneHierarchy& Bones)
{
	int32 CurrentBoneIndex;
	FName CurrentBoneName;
	for(int i=0;i<Effectors.Num();i++)
	{
		if(Effectors[i]!=FName("None"))
		{
			CurrentBoneIndex=Bones.GetIndex(Effectors[i]);
			while(Bones[CurrentBoneIndex].ParentName!=Root && Bones[CurrentBoneIndex].ParentName!= FName("Bip001_Pelvis")&&Bones[CurrentBoneIndex].ParentName!=FName("Bip001"))
			{
				
				Bones.SetGlobalTransform(CurrentBoneIndex,Bones.GetInitialGlobalTransform(CurrentBoneIndex),false);
				CurrentBoneIndex=Bones[CurrentBoneIndex].ParentIndex;
				
			}
		}
	}
}
*/