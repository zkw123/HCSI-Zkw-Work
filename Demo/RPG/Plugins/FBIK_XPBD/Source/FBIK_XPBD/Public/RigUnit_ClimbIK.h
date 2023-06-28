#pragma once
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "Drawing/ControlRigDrawInterface.h"
#include "ClimbIKSolver.h"
#include "Kismet/KismetMathLibrary.h"
#include "MySpringInterp.h"
#include "RigUnit_ClimbIK.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogIK, Log, All);
USTRUCT(meta = (DisplayName = "Climb IK", Category = "Hierarchy", Keywords = "Climb IK"))
struct FRigUnit_ClimbIK : public FRigUnit_HighlevelBaseMutable
{
	GENERATED_BODY()

		RIGVM_METHOD()
		virtual void Execute(const FRigUnitContext& Context) override;

	FRigUnit_ClimbIK()
		: Root(NAME_None)
	{
	}
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName Root;
	//Control Rig对数组兼容性差，因此只能对手脚分开处理
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName FootEffector_L;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName FootEffector_R;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName HandEffector_L;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName HandEffector_R;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName FootEffector_L_Idle;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName FootEffector_R_Idle;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName HandEffector_L_Idle;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName HandEffector_R_Idle;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName FootName_L;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName FootName_R;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName HandName_L;
	UPROPERTY(meta = (Input, Constant, CustomWidget = "BoneName"))
		FName HandName_R;
	UPROPERTY(meta = (Input))
		int MovingState;	//0-Climb Idle 1-Hang Idle 2-Others 3- Others But no IK
	UPROPERTY(meta = (Input))
		int ClimbIKControl;	//IK Control 0-No IK	1-Full IK	2-Only Idle Rotate Body		3-Only HandIK	4-Only FootIK
	UPROPERTY(meta = (Input))
		bool Prediction;			//开启预测（建议开启，会将偏移量提前加到动作上，防止idle突变）
	UPROPERTY()
		FClimbIKSolver Solver;
	UPROPERTY()
		FTransform RootTransform;
	UPROPERTY(meta = (Input))
		float DeltaSeconds;
	UPROPERTY(meta = (Input))			//传入胶囊体宽度，用于决定射线向后打的距离
		float BodyCapsuleWidth;
	UPROPERTY(meta = (Output))			//Output to PBIK
		FTransform Foot_L_Transform;	
	UPROPERTY(meta = (Output))
		FTransform Foot_R_Transform;
	UPROPERTY(meta = (Output))
		FTransform Hand_L_Transform;
	UPROPERTY(meta = (Output))
		FTransform Hand_R_Transform;
	UPROPERTY()
		FVector CurrentBodyOffset;
	UPROPERTY(meta = (Input))
		bool EnableComplexCollision;	//启用立方体射线检测（一般不启用）
	UPROPERTY(meta = (Input))
		bool TransformOutput;			//输出Effector坐标
	UPROPERTY(meta = (Input))
		bool ExternalInput;				//标记是否接受外部输入
	UPROPERTY(meta = (Input))
		FTransform Foot_L_Transform_Input;			//外部输入（脚部位置）
	UPROPERTY(meta = (Input))
		FTransform Foot_R_Transform_Input;			//外部输入（脚部位置）
	UPROPERTY(meta = (Input))
		FTransform Hand_L_Transform_Input;			//外部输入（手部位置）
	UPROPERTY(meta = (Input))
		FTransform Hand_R_Transform_Input;			//外部输入（手部位置）
	UPROPERTY()
		TArray<float> CurrentFootOffset;
	UPROPERTY()
		TArray<FVector> CurrentFootOffsetV;
	UPROPERTY()
		TArray<float> CurrentHandOffset;
	UPROPERTY()
		TArray<FQuat> CurrentFootRotate;
	UPROPERTY()
		TArray<FQuat> CurrentHandRotate;
	UPROPERTY()
		TArray<FMySpringInterp> FootInterps;	//Spring Interp
	UPROPERTY()
		TArray<FMySpringInterp> HandInterps;

	UPROPERTY()
		float CurrentBodyPitch;		//Body Pitch Rotate
	
};