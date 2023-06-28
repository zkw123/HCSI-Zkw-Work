#pragma once
#include "RigUnit_ClimbIK.h"
#include "CoreMinimal.h"
//#include "RigUnit_ErrorCalc.h"
#include "UObject/NoExportTypes.h"
#include "Units/RigUnitContext.h"
#include "Rigs/RigBoneHierarchy.h"
#include "ErrorCalcSolver.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FErrorCalcSolver
{
	GENERATED_BODY()

	FName Root;
	TArray<FName>Effectors;
	
	TArray<FTransform> GetCurrentBoneTransforms(FRigBoneHierarchy& Bones);

	//void SetToZero(FRigBoneHierarchy& Bones);
	float CalculateError(TArray<FTransform>Origin,TArray<FTransform>Latest);
};
