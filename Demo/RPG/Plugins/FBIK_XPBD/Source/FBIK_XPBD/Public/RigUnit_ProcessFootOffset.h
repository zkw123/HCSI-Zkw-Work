#pragma once
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "RigUnit_ProcessFootOffset.generated.h"


USTRUCT(meta = (DisplayName = "ProcessFootOffset", Category = "Hierarchy", Keywords = "ProcessFootOffset"))
struct FRigUnit_ProcessFootOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	GENERATED_BODY()
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;

	UPROPERTY(meta = (Input))
	FRigElementKey IKFootBone;

	UPROPERTY(meta = (Input))
	float CurOffsetZ;

	UPROPERTY(meta = (Input))
	float TargetOffsetZ;

	UPROPERTY(meta = (Input))
	FVector CurrentHitNormal;

	UPROPERTY(meta = (Input))
	bool DidTraceHit;

	UPROPERTY(meta = (Input))
	float CurrentPelvisOffsetZ;
	
	UPROPERTY(meta = (Output))
	float NewOffsetZ;
	
};


USTRUCT(meta = (DisplayName = "ProcessFootTrace", Category = "Hierarchy", Keywords = "ProcessFootTrace"))
struct FRigUnit_ProcessFootTrace : public FRigUnit_HighlevelBaseMutable
{
public:
	GENERATED_BODY()
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;

	UPROPERTY(meta = (Input))
	FVector Target;

	UPROPERTY(meta = (Input))
	float Strength;

	UPROPERTY(meta = (Input))
	float CriticalDamping;
	
	UPROPERTY(meta = (Input))
	FVector Current;

	UPROPERTY(meta = (output))
	FVector Result;
};

USTRUCT(meta = (DisplayName = "Spring Interpolate", Category = "Hierarchy", Keywords = "Spring Interpolate"))
struct FRigUnit_SpringInterp : public FRigUnit_HighlevelBaseMutable
{
	GENERATED_BODY()
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;

	UPROPERTY(meta = (Input))
	float Target;

	UPROPERTY(meta = (Input))
	float Strength;

	UPROPERTY(meta = (Input))
	float CriticalDamping;
	
	UPROPERTY(meta = (Input))
	float Current;

	UPROPERTY(meta = (output))
	float Result;
};

USTRUCT(meta = (DisplayName = "Print Transform", Category = "Hierarchy", Keywords = "Print Transform"))
struct FRigUnit_PrintTransform : public FRigUnit_HighlevelBaseMutable
{
	GENERATED_BODY()
	
	RIGVM_METHOD()
	virtual void Execute(const FRigUnitContext& Context) override;

	UPROPERTY(meta = (Input))
	FName InputBoneName;

	
	
};
