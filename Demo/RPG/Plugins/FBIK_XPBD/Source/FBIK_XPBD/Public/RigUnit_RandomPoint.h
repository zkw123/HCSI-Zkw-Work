#pragma once

#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "RigUnit_RandomPoint.generated.h"

USTRUCT(meta = (DisplayName = "Random Point", Category = "Hierarchy", Keywords = "Random Point"))

struct FRigUnit_RandomPoint: public FRigUnit_HighlevelBaseMutable
{
public:
	GENERATED_BODY()

	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;

	
	FRigUnit_RandomPoint()
	{
	}

	UPROPERTY(meta = (Input, CustomWidget = "BoneName"))
	FName Effector1;

	UPROPERTY(meta = (Input, CustomWidget = "BoneName"))
	FName Effector2;
	
	UPROPERTY(meta = (Input, CustomWidget = "BoneName"))
	FName Effector3;

	UPROPERTY(meta = (Input, CustomWidget = "BoneName"))
	FName Effector4;
	
	UPROPERTY(meta=(Input))
	float Radius;

	UPROPERTY(meta=(Input))
	float ReachThreshold;
	
	UPROPERTY(meta=(Input))
	bool bPBIKFinished;

	UPROPERTY(meta=(Input))
	FTransform TargetTransformInput1;

	UPROPERTY(meta=(Input))
	FTransform TargetTransformInput2;

	UPROPERTY(meta=(Input))
	FTransform TargetTransformInput3;

	UPROPERTY(meta=(Input))
	FTransform TargetTransformInput4;

	UPROPERTY(meta=(Output))
	FTransform TargetTransformOutput1;

	UPROPERTY(meta=(Output))
	FTransform TargetTransformOutput2;

	UPROPERTY(meta=(Output))
	FTransform TargetTransformOutput3;

	UPROPERTY(meta=(Output))
	FTransform TargetTransformOutput4;

	UPROPERTY()
	TArray<bool>bReachable;
	
	UPROPERTY()
	TArray<float>ReachError;
	

	UPROPERTY()
	FVector TargetLocation;
	//void CalculateAverage();
};
