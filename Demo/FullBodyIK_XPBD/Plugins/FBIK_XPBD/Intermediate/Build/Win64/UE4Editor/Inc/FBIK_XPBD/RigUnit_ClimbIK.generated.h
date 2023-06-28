// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FBIK_XPBD_RigUnit_ClimbIK_generated_h
#error "RigUnit_ClimbIK.generated.h already included, missing '#pragma once' in RigUnit_ClimbIK.h"
#endif
#define FBIK_XPBD_RigUnit_ClimbIK_generated_h


#define FRigUnit_ClimbIK_Execute() \
	void FRigUnit_ClimbIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FName& FootEffector_L, \
		const FName& FootEffector_R, \
		const FName& HandEffector_L, \
		const FName& HandEffector_R, \
		const FName& FootEffector_L_Idle, \
		const FName& FootEffector_R_Idle, \
		const FName& HandEffector_L_Idle, \
		const FName& HandEffector_R_Idle, \
		const FName& FootName_L, \
		const FName& FootName_R, \
		const FName& HandName_L, \
		const FName& HandName_R, \
		const int32 MovingState, \
		const int32 ClimbIKControl, \
		const bool Prediction, \
		FClimbIKSolver& Solver, \
		FTransform& RootTransform, \
		const float DeltaSeconds, \
		const float BodyCapsuleWidth, \
		FTransform& Foot_L_Transform, \
		FTransform& Foot_R_Transform, \
		FTransform& Hand_L_Transform, \
		FTransform& Hand_R_Transform, \
		FVector& CurrentBodyOffset, \
		const bool EnableComplexCollision, \
		const bool TransformOutput, \
		const bool ExternalInput, \
		const FTransform& Foot_L_Transform_Input, \
		const FTransform& Foot_R_Transform_Input, \
		const FTransform& Hand_L_Transform_Input, \
		const FTransform& Hand_R_Transform_Input, \
		FRigVMDynamicArray<float>& CurrentFootOffset, \
		FRigVMDynamicArray<FVector>& CurrentFootOffsetV, \
		FRigVMDynamicArray<float>& CurrentHandOffset, \
		FRigVMDynamicArray<FQuat>& CurrentFootRotate, \
		FRigVMDynamicArray<FQuat>& CurrentHandRotate, \
		FRigVMDynamicArray<FMySpringInterp>& FootInterps, \
		FRigVMDynamicArray<FMySpringInterp>& HandInterps, \
		float& CurrentBodyPitch, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FullBodyIK_XPBD_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ClimbIK_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FName& FootEffector_L, \
		const FName& FootEffector_R, \
		const FName& HandEffector_L, \
		const FName& HandEffector_R, \
		const FName& FootEffector_L_Idle, \
		const FName& FootEffector_R_Idle, \
		const FName& HandEffector_L_Idle, \
		const FName& HandEffector_R_Idle, \
		const FName& FootName_L, \
		const FName& FootName_R, \
		const FName& HandName_L, \
		const FName& HandName_R, \
		const int32 MovingState, \
		const int32 ClimbIKControl, \
		const bool Prediction, \
		FClimbIKSolver& Solver, \
		FTransform& RootTransform, \
		const float DeltaSeconds, \
		const float BodyCapsuleWidth, \
		FTransform& Foot_L_Transform, \
		FTransform& Foot_R_Transform, \
		FTransform& Hand_L_Transform, \
		FTransform& Hand_R_Transform, \
		FVector& CurrentBodyOffset, \
		const bool EnableComplexCollision, \
		const bool TransformOutput, \
		const bool ExternalInput, \
		const FTransform& Foot_L_Transform_Input, \
		const FTransform& Foot_R_Transform_Input, \
		const FTransform& Hand_L_Transform_Input, \
		const FTransform& Hand_R_Transform_Input, \
		FRigVMDynamicArray<float>& CurrentFootOffset, \
		FRigVMDynamicArray<FVector>& CurrentFootOffsetV, \
		FRigVMDynamicArray<float>& CurrentHandOffset, \
		FRigVMDynamicArray<FQuat>& CurrentFootRotate, \
		FRigVMDynamicArray<FQuat>& CurrentHandRotate, \
		FRigVMDynamicArray<FMySpringInterp>& FootInterps, \
		FRigVMDynamicArray<FMySpringInterp>& HandInterps, \
		float& CurrentBodyPitch, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Root = *(FName*)RigVMMemoryHandles[0].GetData(); \
		const FName& FootEffector_L = *(FName*)RigVMMemoryHandles[1].GetData(); \
		const FName& FootEffector_R = *(FName*)RigVMMemoryHandles[2].GetData(); \
		const FName& HandEffector_L = *(FName*)RigVMMemoryHandles[3].GetData(); \
		const FName& HandEffector_R = *(FName*)RigVMMemoryHandles[4].GetData(); \
		const FName& FootEffector_L_Idle = *(FName*)RigVMMemoryHandles[5].GetData(); \
		const FName& FootEffector_R_Idle = *(FName*)RigVMMemoryHandles[6].GetData(); \
		const FName& HandEffector_L_Idle = *(FName*)RigVMMemoryHandles[7].GetData(); \
		const FName& HandEffector_R_Idle = *(FName*)RigVMMemoryHandles[8].GetData(); \
		const FName& FootName_L = *(FName*)RigVMMemoryHandles[9].GetData(); \
		const FName& FootName_R = *(FName*)RigVMMemoryHandles[10].GetData(); \
		const FName& HandName_L = *(FName*)RigVMMemoryHandles[11].GetData(); \
		const FName& HandName_R = *(FName*)RigVMMemoryHandles[12].GetData(); \
		const int32 MovingState = *(int32*)RigVMMemoryHandles[13].GetData(); \
		const int32 ClimbIKControl = *(int32*)RigVMMemoryHandles[14].GetData(); \
		const bool Prediction = *(bool*)RigVMMemoryHandles[15].GetData(); \
		FRigVMDynamicArray<FClimbIKSolver> Solver_16_Array(*((FRigVMByteArray*)RigVMMemoryHandles[16].GetData(0, false))); \
		Solver_16_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FClimbIKSolver& Solver = Solver_16_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		FRigVMDynamicArray<FTransform> RootTransform_17_Array(*((FRigVMByteArray*)RigVMMemoryHandles[17].GetData(0, false))); \
		RootTransform_17_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FTransform& RootTransform = RootTransform_17_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		const float DeltaSeconds = *(float*)RigVMMemoryHandles[18].GetData(); \
		const float BodyCapsuleWidth = *(float*)RigVMMemoryHandles[19].GetData(); \
		FTransform& Foot_L_Transform = *(FTransform*)RigVMMemoryHandles[20].GetData(); \
		FTransform& Foot_R_Transform = *(FTransform*)RigVMMemoryHandles[21].GetData(); \
		FTransform& Hand_L_Transform = *(FTransform*)RigVMMemoryHandles[22].GetData(); \
		FTransform& Hand_R_Transform = *(FTransform*)RigVMMemoryHandles[23].GetData(); \
		FRigVMDynamicArray<FVector> CurrentBodyOffset_24_Array(*((FRigVMByteArray*)RigVMMemoryHandles[24].GetData(0, false))); \
		CurrentBodyOffset_24_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FVector& CurrentBodyOffset = CurrentBodyOffset_24_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		const bool EnableComplexCollision = *(bool*)RigVMMemoryHandles[25].GetData(); \
		const bool TransformOutput = *(bool*)RigVMMemoryHandles[26].GetData(); \
		const bool ExternalInput = *(bool*)RigVMMemoryHandles[27].GetData(); \
		const FTransform& Foot_L_Transform_Input = *(FTransform*)RigVMMemoryHandles[28].GetData(); \
		const FTransform& Foot_R_Transform_Input = *(FTransform*)RigVMMemoryHandles[29].GetData(); \
		const FTransform& Hand_L_Transform_Input = *(FTransform*)RigVMMemoryHandles[30].GetData(); \
		const FTransform& Hand_R_Transform_Input = *(FTransform*)RigVMMemoryHandles[31].GetData(); \
		FRigVMNestedByteArray& CurrentFootOffset_32_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[32].GetData(0, false); \
		CurrentFootOffset_32_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), CurrentFootOffset_32_Array.Num())); \
		FRigVMDynamicArray<float> CurrentFootOffset(CurrentFootOffset_32_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& CurrentFootOffsetV_33_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[33].GetData(0, false); \
		CurrentFootOffsetV_33_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), CurrentFootOffsetV_33_Array.Num())); \
		FRigVMDynamicArray<FVector> CurrentFootOffsetV(CurrentFootOffsetV_33_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& CurrentHandOffset_34_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[34].GetData(0, false); \
		CurrentHandOffset_34_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), CurrentHandOffset_34_Array.Num())); \
		FRigVMDynamicArray<float> CurrentHandOffset(CurrentHandOffset_34_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& CurrentFootRotate_35_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[35].GetData(0, false); \
		CurrentFootRotate_35_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), CurrentFootRotate_35_Array.Num())); \
		FRigVMDynamicArray<FQuat> CurrentFootRotate(CurrentFootRotate_35_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& CurrentHandRotate_36_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[36].GetData(0, false); \
		CurrentHandRotate_36_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), CurrentHandRotate_36_Array.Num())); \
		FRigVMDynamicArray<FQuat> CurrentHandRotate(CurrentHandRotate_36_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& FootInterps_37_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[37].GetData(0, false); \
		FootInterps_37_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), FootInterps_37_Array.Num())); \
		FRigVMDynamicArray<FMySpringInterp> FootInterps(FootInterps_37_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& HandInterps_38_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[38].GetData(0, false); \
		HandInterps_38_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), HandInterps_38_Array.Num())); \
		FRigVMDynamicArray<FMySpringInterp> HandInterps(HandInterps_38_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMDynamicArray<float> CurrentBodyPitch_39_Array(*((FRigVMByteArray*)RigVMMemoryHandles[39].GetData(0, false))); \
		CurrentBodyPitch_39_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		float& CurrentBodyPitch = CurrentBodyPitch_39_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[40].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Root, \
			FootEffector_L, \
			FootEffector_R, \
			HandEffector_L, \
			HandEffector_R, \
			FootEffector_L_Idle, \
			FootEffector_R_Idle, \
			HandEffector_L_Idle, \
			HandEffector_R_Idle, \
			FootName_L, \
			FootName_R, \
			HandName_L, \
			HandName_R, \
			MovingState, \
			ClimbIKControl, \
			Prediction, \
			Solver, \
			RootTransform, \
			DeltaSeconds, \
			BodyCapsuleWidth, \
			Foot_L_Transform, \
			Foot_R_Transform, \
			Hand_L_Transform, \
			Hand_R_Transform, \
			CurrentBodyOffset, \
			EnableComplexCollision, \
			TransformOutput, \
			ExternalInput, \
			Foot_L_Transform_Input, \
			Foot_R_Transform_Input, \
			Hand_L_Transform_Input, \
			Hand_R_Transform_Input, \
			CurrentFootOffset, \
			CurrentFootOffsetV, \
			CurrentHandOffset, \
			CurrentFootRotate, \
			CurrentHandRotate, \
			FootInterps, \
			HandInterps, \
			CurrentBodyPitch, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_ClimbIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FullBodyIK_XPBD_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ClimbIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
