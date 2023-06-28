// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FBIK_XPBD_RigUnit_ProcessFootOffset_generated_h
#error "RigUnit_ProcessFootOffset.generated.h already included, missing '#pragma once' in RigUnit_ProcessFootOffset.h"
#endif
#define FBIK_XPBD_RigUnit_ProcessFootOffset_generated_h


#define FRigUnit_PrintTransform_Execute() \
	void FRigUnit_PrintTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InputBoneName, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ProcessFootOffset_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InputBoneName, \
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
		const FName& InputBoneName = *(FName*)RigVMMemoryHandles[0].GetData(); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[1].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			InputBoneName, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_PrintTransform>();


#define FRigUnit_SpringInterp_Execute() \
	void FRigUnit_SpringInterp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Target, \
		const float Strength, \
		const float CriticalDamping, \
		const float Current, \
		float& Result, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ProcessFootOffset_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Target, \
		const float Strength, \
		const float CriticalDamping, \
		const float Current, \
		float& Result, \
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
		const float Target = *(float*)RigVMMemoryHandles[0].GetData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetData(); \
		const float Current = *(float*)RigVMMemoryHandles[3].GetData(); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Target, \
			Strength, \
			CriticalDamping, \
			Current, \
			Result, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_SpringInterp>();


#define FRigUnit_ProcessFootTrace_Execute() \
	void FRigUnit_ProcessFootTrace::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Current, \
		FVector& Result, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ProcessFootOffset_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Current, \
		FVector& Result, \
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
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetData(); \
		const FVector& Current = *(FVector*)RigVMMemoryHandles[3].GetData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Target, \
			Strength, \
			CriticalDamping, \
			Current, \
			Result, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_ProcessFootTrace>();


#define FRigUnit_ProcessFootOffset_Execute() \
	void FRigUnit_ProcessFootOffset::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& IKFootBone, \
		const float CurOffsetZ, \
		const float TargetOffsetZ, \
		const FVector& CurrentHitNormal, \
		const bool DidTraceHit, \
		const float CurrentPelvisOffsetZ, \
		float& NewOffsetZ, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ProcessFootOffset_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& IKFootBone, \
		const float CurOffsetZ, \
		const float TargetOffsetZ, \
		const FVector& CurrentHitNormal, \
		const bool DidTraceHit, \
		const float CurrentPelvisOffsetZ, \
		float& NewOffsetZ, \
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
		const FRigElementKey& IKFootBone = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(); \
		const float CurOffsetZ = *(float*)RigVMMemoryHandles[1].GetData(); \
		const float TargetOffsetZ = *(float*)RigVMMemoryHandles[2].GetData(); \
		const FVector& CurrentHitNormal = *(FVector*)RigVMMemoryHandles[3].GetData(); \
		const bool DidTraceHit = *(bool*)RigVMMemoryHandles[4].GetData(); \
		const float CurrentPelvisOffsetZ = *(float*)RigVMMemoryHandles[5].GetData(); \
		float& NewOffsetZ = *(float*)RigVMMemoryHandles[6].GetData(); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			IKFootBone, \
			CurOffsetZ, \
			TargetOffsetZ, \
			CurrentHitNormal, \
			DidTraceHit, \
			CurrentPelvisOffsetZ, \
			NewOffsetZ, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_ProcessFootOffset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ProcessFootOffset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
