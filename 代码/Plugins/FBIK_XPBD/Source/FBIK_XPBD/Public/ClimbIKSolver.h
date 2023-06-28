#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Units/RigUnitContext.h"
#include "ClimbIKSolver.generated.h"

DECLARE_CYCLE_STAT(TEXT("ClimbIK Solve"), STAT_ClimbIK_Solve, STATGROUP_Anim);
DECLARE_LOG_CATEGORY_EXTERN(LogIKTest, Log, All);
USTRUCT(BlueprintType, Blueprintable)
struct FHandClimbHitInfo
{
	GENERATED_USTRUCT_BODY();
public:
	FName HandName_L;
	FName HandEffector_L;
	FName HandEffector_L_Idle;
	FName HandName_R;
	FName HandEffector_R;
	FName HandEffector_R_Idle;

	FTransform HandTransform_L;
	FTransform HandTransform_R;
	FTransform HandEffectorTransform_L_Target;
	FTransform HandEffectorTransform_R_Target;
	FTransform HandEffectorTransform_L_Idle;
	FTransform HandEffectorTransform_R_Idle;
	FTransform HandEffectorTransform_L;
	FTransform HandEffectorTransform_R;
	FHitResult HandHit_L;
	FHitResult HandHit_R;
	float HandOffset_L;
	float HandOffset_R;
};
USTRUCT(BlueprintType, Blueprintable)
struct FFootClimbHitInfo
{
	GENERATED_USTRUCT_BODY();
public:
	FName FootName_L;
	FName FootEffector_L;
	FName FootEffector_L_Idle;
	FName FootName_R;
	FName FootEffector_R;
	FName FootEffector_R_Idle;

	FTransform FootTransform_L;
	FTransform FootTransform_R;
	FTransform FootEffectorTransform_L_Target;
	FTransform FootEffectorTransform_R_Target;
	FTransform FootEffectorTransform_L_Idle;
	FTransform FootEffectorTransform_R_Idle;
	FTransform FootEffectorTransform_L;
	FTransform FootEffectorTransform_R;
	FHitResult FootHit_L;
	FHitResult FootHit_R;
	float FootOffset_L;
	float FootOffset_R;

	FHitResult FootHit_L_Extra;			//针对脚手架等中空结构进行范围射线检测
	FHitResult FootHit_R_Extra;
};

USTRUCT(BlueprintType, Blueprintable)
struct FClimbIKSolver
{
	GENERATED_USTRUCT_BODY();
public:
	FHandClimbHitInfo HandHitInfo;
	FFootClimbHitInfo FootHitInfo;
	FVector Forward;
	int MovingState;
	int ClimbIkControl;
	bool EnableComplexCollision;
	bool Prediction;
	bool TransformOutput;
	void GetHitInfo(const UWorld* World, FTransform WorldSpaceTransform, FCollisionQueryParams Params,float BodyCapsuleWidth);
	void UpdateGlobalTransform(FRigBoneHierarchy& Bone);
	FQuat GetRotator(FVector Axis, FVector Normal,FTransform RootTransform);
	void Initialize(FName HandName_L, FName HandEffector_L, FName HandEffector_L_Idle,FName HandName_R, FName HandEffector_R, FName HandEffector_R_Idle, FName FootName_L, FName FootEffector_L, FName FootEffector_L_Idle,FName FootName_R, FName FootEffector_R, FName FootEffector_R_Idle);
	void PrintTransform(FTransform Transform, FString s);
	void LinePlaneCross(FVector PlanePoint, FVector Normal, FVector StartPoint, FVector& Result);
	void UpdateHitInfo(FTransform WorldSpaceTransform);
	float GetDistanceInControlRig(FTransform Effector, FTransform Idle);
	FQuat RotateWithinLimits(FQuat Rotation, float LimitX_Max, float LimitX_Min, float LimitY_Max, float LimitY_Min, float LimitZ_Max, float LimitZ_Min);
};