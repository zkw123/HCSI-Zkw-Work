#pragma once
#include "ErrorCalcSolver.h"
#include "RigUnit_PBIK.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "RigUnit_ErrorCalc.generated.h"

USTRUCT(BlueprintType)
struct FEffectorName
{
	GENERATED_BODY()


	FEffectorName()	: EffectorName(NAME_None) {}
	
	UPROPERTY(meta = (Constant, CustomWidget = "BoneName"))
	FName EffectorName;

	UPROPERTY()
	float OffsetAlpha = 1.0f;
};


USTRUCT(BlueprintType)
struct FBoneTransforms
{
	GENERATED_BODY()

	TArray<FTransform> BoneTransforms;
	
};



USTRUCT(meta = (DisplayName = "Error Calculation", Category = "Hierarchy", Keywords = "Error Calculation"))
struct FRigUnit_ErrorCalc: public FRigUnit_HighlevelBaseMutable
{
	GENERATED_BODY()

	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;

	
	FRigUnit_ErrorCalc(): Root(NAME_None)
	{
	}
	
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
	FName Root;
	
	UPROPERTY(meta = (Input))
	TArray<FEffectorName>Effectors;

	UPROPERTY(meta = (Input))
	FVector Forward;
	
	UPROPERTY(meta = (Input, Constant, CustomWidget = "State"))
	bool bPBIKFinished;

	
	UPROPERTY(meta = (Output))
	FPBIKEffector  Foot_L_Output;

	UPROPERTY(meta = (Output))
	FPBIKEffector  Foot_R_Output;

	UPROPERTY(meta = (Output))
	FPBIKEffector  Hand_L_Output;

	UPROPERTY(meta = (Output))
	FPBIKEffector  Hand_R_Output;
	
	/*
	UPROPERTY(meta = (Output))
	FPBIKEffector  Head_Output;

	*/
	UPROPERTY()
	FErrorCalcSolver Solver;
	
	UPROPERTY(meta = (Input))
	FBoneTransforms CurrentBoneTransformsInput;

	
	UPROPERTY(meta = (Output))
	FBoneTransforms CurrentBoneTransformsOutput;
	
	

	
	
};
