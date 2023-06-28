// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FBIK_XPBD_RigUnit_ErrorCalc_generated_h
#error "RigUnit_ErrorCalc.generated.h already included, missing '#pragma once' in RigUnit_ErrorCalc.h"
#endif
#define FBIK_XPBD_RigUnit_ErrorCalc_generated_h


#define FRigUnit_ErrorCalc_Execute() \
	void FRigUnit_ErrorCalc::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FRigVMFixedArray<FEffectorName>& Effectors, \
		const FVector& Forward, \
		const bool bPBIKFinished, \
		FPBIKEffector& Foot_L_Output, \
		FPBIKEffector& Foot_R_Output, \
		FPBIKEffector& Hand_L_Output, \
		FPBIKEffector& Hand_R_Output, \
		FErrorCalcSolver& Solver, \
		const FBoneTransforms& CurrentBoneTransformsInput, \
		FBoneTransforms& CurrentBoneTransformsOutput, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ErrorCalc_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FRigVMFixedArray<FEffectorName>& Effectors, \
		const FVector& Forward, \
		const bool bPBIKFinished, \
		FPBIKEffector& Foot_L_Output, \
		FPBIKEffector& Foot_R_Output, \
		FPBIKEffector& Hand_L_Output, \
		FPBIKEffector& Hand_R_Output, \
		FErrorCalcSolver& Solver, \
		const FBoneTransforms& CurrentBoneTransformsInput, \
		FBoneTransforms& CurrentBoneTransformsOutput, \
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
		FRigVMFixedArray<FEffectorName> Effectors((FEffectorName*)RigVMMemoryHandles[1].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[2].GetData())); \
		const FVector& Forward = *(FVector*)RigVMMemoryHandles[3].GetData(); \
		const bool bPBIKFinished = *(bool*)RigVMMemoryHandles[4].GetData(); \
		FPBIKEffector& Foot_L_Output = *(FPBIKEffector*)RigVMMemoryHandles[5].GetData(); \
		FPBIKEffector& Foot_R_Output = *(FPBIKEffector*)RigVMMemoryHandles[6].GetData(); \
		FPBIKEffector& Hand_L_Output = *(FPBIKEffector*)RigVMMemoryHandles[7].GetData(); \
		FPBIKEffector& Hand_R_Output = *(FPBIKEffector*)RigVMMemoryHandles[8].GetData(); \
		FRigVMDynamicArray<FErrorCalcSolver> Solver_9_Array(*((FRigVMByteArray*)RigVMMemoryHandles[9].GetData(0, false))); \
		Solver_9_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FErrorCalcSolver& Solver = Solver_9_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		const FBoneTransforms& CurrentBoneTransformsInput = *(FBoneTransforms*)RigVMMemoryHandles[10].GetData(); \
		FBoneTransforms& CurrentBoneTransformsOutput = *(FBoneTransforms*)RigVMMemoryHandles[11].GetData(); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[12].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Root, \
			Effectors, \
			Forward, \
			bPBIKFinished, \
			Foot_L_Output, \
			Foot_R_Output, \
			Hand_L_Output, \
			Hand_R_Output, \
			Solver, \
			CurrentBoneTransformsInput, \
			CurrentBoneTransformsOutput, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FRigUnit_ErrorCalc>();

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ErrorCalc_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneTransforms_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct();


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FBoneTransforms>();

#define RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ErrorCalc_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectorName_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct();


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FEffectorName>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_RigUnit_ErrorCalc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
