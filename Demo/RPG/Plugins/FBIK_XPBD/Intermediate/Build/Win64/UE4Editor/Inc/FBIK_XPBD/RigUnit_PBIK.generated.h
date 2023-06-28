// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FBIK_XPBD_RigUnit_PBIK_generated_h
#error "RigUnit_PBIK.generated.h already included, missing '#pragma once' in RigUnit_PBIK.h"
#endif
#define FBIK_XPBD_RigUnit_PBIK_generated_h


#define FRigUnit_PBIK_Execute() \
	void FRigUnit_PBIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FRigVMFixedArray<FPBIKEffector>& Effectors, \
		FRigVMDynamicArray<int32>& EffectorSolverIndices, \
		const FRigVMFixedArray<FPBIKBoneSetting>& BoneSettings, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		FPBIKSolver& Solver, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_PBIK_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FRigVMFixedArray<FPBIKEffector>& Effectors, \
		FRigVMDynamicArray<int32>& EffectorSolverIndices, \
		const FRigVMFixedArray<FPBIKBoneSetting>& BoneSettings, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		FPBIKSolver& Solver, \
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
		FRigVMFixedArray<FPBIKEffector> Effectors((FPBIKEffector*)RigVMMemoryHandles[1].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[2].GetData())); \
		FRigVMNestedByteArray& EffectorSolverIndices_3_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[3].GetData(0, false); \
		EffectorSolverIndices_3_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), EffectorSolverIndices_3_Array.Num())); \
		FRigVMDynamicArray<int32> EffectorSolverIndices(EffectorSolverIndices_3_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMFixedArray<FPBIKBoneSetting> BoneSettings((FPBIKBoneSetting*)RigVMMemoryHandles[4].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[5].GetData())); \
		const FPBIKSolverSettings& Settings = *(FPBIKSolverSettings*)RigVMMemoryHandles[6].GetData(); \
		const FPBIKDebug& Debug = *(FPBIKDebug*)RigVMMemoryHandles[7].GetData(); \
		FRigVMDynamicArray<FPBIKSolver> Solver_8_Array(*((FRigVMByteArray*)RigVMMemoryHandles[8].GetData(0, false))); \
		Solver_8_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FPBIKSolver& Solver = Solver_8_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Root, \
			Effectors, \
			EffectorSolverIndices, \
			BoneSettings, \
			Settings, \
			Debug, \
			Solver, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_PBIK>();

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_PBIK_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKEffector_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct();


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FPBIKEffector>();

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_PBIK_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKDebug_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct();


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FPBIKDebug>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_PBIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
