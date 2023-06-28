// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FBIK_XPBD_RigUnit_RandomPoint_generated_h
#error "RigUnit_RandomPoint.generated.h already included, missing '#pragma once' in RigUnit_RandomPoint.h"
#endif
#define FBIK_XPBD_RigUnit_RandomPoint_generated_h


#define FRigUnit_RandomPoint_Execute() \
	void FRigUnit_RandomPoint::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Effector1, \
		const FName& Effector2, \
		const FName& Effector3, \
		const FName& Effector4, \
		const float Radius, \
		const float ReachThreshold, \
		const bool bPBIKFinished, \
		const FTransform& TargetTransformInput1, \
		const FTransform& TargetTransformInput2, \
		const FTransform& TargetTransformInput3, \
		const FTransform& TargetTransformInput4, \
		FTransform& TargetTransformOutput1, \
		FTransform& TargetTransformOutput2, \
		FTransform& TargetTransformOutput3, \
		FTransform& TargetTransformOutput4, \
		FRigVMDynamicArray<bool>& bReachable, \
		FRigVMDynamicArray<float>& ReachError, \
		FVector& TargetLocation, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_RandomPoint_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Effector1, \
		const FName& Effector2, \
		const FName& Effector3, \
		const FName& Effector4, \
		const float Radius, \
		const float ReachThreshold, \
		const bool bPBIKFinished, \
		const FTransform& TargetTransformInput1, \
		const FTransform& TargetTransformInput2, \
		const FTransform& TargetTransformInput3, \
		const FTransform& TargetTransformInput4, \
		FTransform& TargetTransformOutput1, \
		FTransform& TargetTransformOutput2, \
		FTransform& TargetTransformOutput3, \
		FTransform& TargetTransformOutput4, \
		FRigVMDynamicArray<bool>& bReachable, \
		FRigVMDynamicArray<float>& ReachError, \
		FVector& TargetLocation, \
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
		const FName& Effector1 = *(FName*)RigVMMemoryHandles[0].GetData(); \
		const FName& Effector2 = *(FName*)RigVMMemoryHandles[1].GetData(); \
		const FName& Effector3 = *(FName*)RigVMMemoryHandles[2].GetData(); \
		const FName& Effector4 = *(FName*)RigVMMemoryHandles[3].GetData(); \
		const float Radius = *(float*)RigVMMemoryHandles[4].GetData(); \
		const float ReachThreshold = *(float*)RigVMMemoryHandles[5].GetData(); \
		const bool bPBIKFinished = *(bool*)RigVMMemoryHandles[6].GetData(); \
		const FTransform& TargetTransformInput1 = *(FTransform*)RigVMMemoryHandles[7].GetData(); \
		const FTransform& TargetTransformInput2 = *(FTransform*)RigVMMemoryHandles[8].GetData(); \
		const FTransform& TargetTransformInput3 = *(FTransform*)RigVMMemoryHandles[9].GetData(); \
		const FTransform& TargetTransformInput4 = *(FTransform*)RigVMMemoryHandles[10].GetData(); \
		FTransform& TargetTransformOutput1 = *(FTransform*)RigVMMemoryHandles[11].GetData(); \
		FTransform& TargetTransformOutput2 = *(FTransform*)RigVMMemoryHandles[12].GetData(); \
		FTransform& TargetTransformOutput3 = *(FTransform*)RigVMMemoryHandles[13].GetData(); \
		FTransform& TargetTransformOutput4 = *(FTransform*)RigVMMemoryHandles[14].GetData(); \
		FRigVMNestedByteArray& bReachable_15_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[15].GetData(0, false); \
		bReachable_15_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), bReachable_15_Array.Num())); \
		FRigVMDynamicArray<bool> bReachable(bReachable_15_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMNestedByteArray& ReachError_16_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[16].GetData(0, false); \
		ReachError_16_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), ReachError_16_Array.Num())); \
		FRigVMDynamicArray<float> ReachError(ReachError_16_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMDynamicArray<FVector> TargetLocation_17_Array(*((FRigVMByteArray*)RigVMMemoryHandles[17].GetData(0, false))); \
		TargetLocation_17_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FVector& TargetLocation = TargetLocation_17_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[18].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Effector1, \
			Effector2, \
			Effector3, \
			Effector4, \
			Radius, \
			ReachThreshold, \
			bPBIKFinished, \
			TargetTransformInput1, \
			TargetTransformInput2, \
			TargetTransformInput3, \
			TargetTransformInput4, \
			TargetTransformOutput1, \
			TargetTransformOutput2, \
			TargetTransformOutput3, \
			TargetTransformOutput4, \
			bReachable, \
			ReachError, \
			TargetLocation, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_RandomPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_RandomPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
