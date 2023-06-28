// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/RigUnit_ClimbIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ClimbIK() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ClimbIK();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FClimbIKSolver();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FMySpringInterp();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ClimbIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ClimbIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_ClimbIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ClimbIK, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_ClimbIK"), sizeof(FRigUnit_ClimbIK), Get_Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ClimbIK::Execute"), &FRigUnit_ClimbIK::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_ClimbIK>()
{
	return FRigUnit_ClimbIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_ClimbIK(FRigUnit_ClimbIK::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_ClimbIK"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ClimbIK
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ClimbIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_ClimbIK")),new UScriptStruct::TCppStructOps<FRigUnit_ClimbIK>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ClimbIK;
	struct Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootEffector_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootEffector_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootEffector_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootEffector_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandEffector_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandEffector_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandEffector_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandEffector_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootEffector_L_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootEffector_L_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootEffector_R_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootEffector_R_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandEffector_L_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandEffector_L_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandEffector_R_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandEffector_R_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootName_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootName_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootName_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootName_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandName_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandName_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandName_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandName_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MovingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbIKControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClimbIKControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prediction_MetaData[];
#endif
		static void NewProp_Prediction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Prediction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Solver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyCapsuleWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyCapsuleWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_L_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot_L_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_R_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot_R_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_L_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand_L_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_R_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand_R_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBodyOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentBodyOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableComplexCollision_MetaData[];
#endif
		static void NewProp_EnableComplexCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableComplexCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformOutput_MetaData[];
#endif
		static void NewProp_TransformOutput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransformOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalInput_MetaData[];
#endif
		static void NewProp_ExternalInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExternalInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_L_Transform_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot_L_Transform_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_R_Transform_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot_R_Transform_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_L_Transform_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand_L_Transform_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_R_Transform_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand_R_Transform_Input;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFootOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFootOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFootOffsetV_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFootOffsetV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFootOffsetV;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHandOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHandOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentHandOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFootRotate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFootRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFootRotate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentHandRotate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHandRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentHandRotate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootInterps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootInterps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootInterps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandInterps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandInterps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandInterps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBodyPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentBodyPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "Climb IK" },
		{ "Keywords", "Climb IK" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ClimbIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Root_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Root), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_MetaData[] = {
		{ "Comment", "//Control Rig???????????\xd4\xb2\xee\xa3\xac????\xd6\xbb?\xdc\xb6??\xd6\xbd\xc5\xb7\xd6\xbf?????\n" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "Control Rig???????????\xd4\xb2\xee\xa3\xac????\xd6\xbb?\xdc\xb6??\xd6\xbd\xc5\xb7\xd6\xbf?????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L = { "FootEffector_L", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootEffector_L), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R = { "FootEffector_R", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootEffector_R), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L = { "HandEffector_L", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandEffector_L), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R = { "HandEffector_R", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandEffector_R), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_Idle_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_Idle = { "FootEffector_L_Idle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootEffector_L_Idle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_Idle_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_Idle = { "FootEffector_R_Idle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootEffector_R_Idle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_Idle_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_Idle = { "HandEffector_L_Idle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandEffector_L_Idle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_Idle_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_Idle = { "HandEffector_R_Idle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandEffector_R_Idle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_L_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_L = { "FootName_L", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootName_L), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_R_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_R = { "FootName_R", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootName_R), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_L_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_L = { "HandName_L", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandName_L), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_R_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_R = { "HandName_R", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandName_R), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_MovingState_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_MovingState = { "MovingState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, MovingState), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_MovingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_MovingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ClimbIKControl_MetaData[] = {
		{ "Comment", "//0-Climb Idle 1-Hang Idle 2-Others 3- Others But no IK\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "0-Climb Idle 1-Hang Idle 2-Others 3- Others But no IK" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ClimbIKControl = { "ClimbIKControl", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, ClimbIKControl), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ClimbIKControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ClimbIKControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction_MetaData[] = {
		{ "Comment", "//IK Control 0-No IK\x09""1-Full IK\x09""2-Only Idle Rotate Body\x09\x09""3-Only HandIK\x09""4-Only FootIK\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "IK Control 0-No IK      1-Full IK       2-Only Idle Rotate Body         3-Only HandIK   4-Only FootIK" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction_SetBit(void* Obj)
	{
		((FRigUnit_ClimbIK*)Obj)->Prediction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction = { "Prediction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ClimbIK), &Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Solver_MetaData[] = {
		{ "Comment", "//????\xd4\xa4?\xe2\xa3\xa8???\xe9\xbf\xaa?????\xe1\xbd\xab\xc6\xab??????\xc7\xb0?\xd3\xb5??????\xcf\xa3???\xd6\xb9idle\xcd\xbb?\xe4\xa3\xa9\n" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "????\xd4\xa4?\xe2\xa3\xa8???\xe9\xbf\xaa?????\xe1\xbd\xab\xc6\xab??????\xc7\xb0?\xd3\xb5??????\xcf\xa3???\xd6\xb9idle\xcd\xbb?\xe4\xa3\xa9" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Solver), Z_Construct_UScriptStruct_FClimbIKSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Solver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_RootTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_RootTransform = { "RootTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, RootTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_RootTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_RootTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, DeltaSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_BodyCapsuleWidth_MetaData[] = {
		{ "Comment", "//???\xeb\xbd\xba???????\xc8\xa3????\xda\xbe??????????????\xc4\xbe???\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "???\xeb\xbd\xba???????\xc8\xa3????\xda\xbe??????????????\xc4\xbe???" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_BodyCapsuleWidth = { "BodyCapsuleWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, BodyCapsuleWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_BodyCapsuleWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_BodyCapsuleWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_MetaData[] = {
		{ "Comment", "//Output to PBIK\n" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "Output", "" },
		{ "ToolTip", "Output to PBIK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform = { "Foot_L_Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Foot_L_Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform = { "Foot_R_Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Foot_R_Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform = { "Hand_L_Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Hand_L_Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform = { "Hand_R_Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Hand_R_Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyOffset = { "CurrentBodyOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentBodyOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision_SetBit(void* Obj)
	{
		((FRigUnit_ClimbIK*)Obj)->EnableComplexCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision = { "EnableComplexCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ClimbIK), &Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput_MetaData[] = {
		{ "Comment", "//?????????????\xdf\xbc??\xe2\xa3\xa8\xd2\xbb?\xe3\xb2\xbb???\xc3\xa3?\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "?????????????\xdf\xbc??\xe2\xa3\xa8\xd2\xbb?\xe3\xb2\xbb???\xc3\xa3?" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput_SetBit(void* Obj)
	{
		((FRigUnit_ClimbIK*)Obj)->TransformOutput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput = { "TransformOutput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ClimbIK), &Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput_MetaData[] = {
		{ "Comment", "//????Effector????\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "????Effector????" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput_SetBit(void* Obj)
	{
		((FRigUnit_ClimbIK*)Obj)->ExternalInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput = { "ExternalInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ClimbIK), &Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_Input_MetaData[] = {
		{ "Comment", "//?????\xc7\xb7??????\xe2\xb2\xbf????\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "?????\xc7\xb7??????\xe2\xb2\xbf????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_Input = { "Foot_L_Transform_Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Foot_L_Transform_Input), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_Input_MetaData[] = {
		{ "Comment", "//?\xe2\xb2\xbf???\xeb\xa3\xa8?\xc5\xb2?\xce\xbb?\xc3\xa3?\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "?\xe2\xb2\xbf???\xeb\xa3\xa8?\xc5\xb2?\xce\xbb?\xc3\xa3?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_Input = { "Foot_R_Transform_Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Foot_R_Transform_Input), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_Input_MetaData[] = {
		{ "Comment", "//?\xe2\xb2\xbf???\xeb\xa3\xa8?\xc5\xb2?\xce\xbb?\xc3\xa3?\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "?\xe2\xb2\xbf???\xeb\xa3\xa8?\xc5\xb2?\xce\xbb?\xc3\xa3?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_Input = { "Hand_L_Transform_Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Hand_L_Transform_Input), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_Input_MetaData[] = {
		{ "Comment", "//?\xe2\xb2\xbf???\xeb\xa3\xa8?\xd6\xb2?\xce\xbb?\xc3\xa3?\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "?\xe2\xb2\xbf???\xeb\xa3\xa8?\xd6\xb2?\xce\xbb?\xc3\xa3?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_Input = { "Hand_R_Transform_Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, Hand_R_Transform_Input), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_Input_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset_Inner = { "CurrentFootOffset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset_MetaData[] = {
		{ "Comment", "//?\xe2\xb2\xbf???\xeb\xa3\xa8?\xd6\xb2?\xce\xbb?\xc3\xa3?\n" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "?\xe2\xb2\xbf???\xeb\xa3\xa8?\xd6\xb2?\xce\xbb?\xc3\xa3?" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset = { "CurrentFootOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentFootOffset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV_Inner = { "CurrentFootOffsetV", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV = { "CurrentFootOffsetV", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentFootOffsetV), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset_Inner = { "CurrentHandOffset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset = { "CurrentHandOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentHandOffset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate_Inner = { "CurrentFootRotate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate = { "CurrentFootRotate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentFootRotate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate_Inner = { "CurrentHandRotate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate = { "CurrentHandRotate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentHandRotate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps_Inner = { "FootInterps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySpringInterp, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps = { "FootInterps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, FootInterps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps_Inner = { "HandInterps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySpringInterp, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps_MetaData[] = {
		{ "Comment", "//Spring Interp\n" },
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
		{ "ToolTip", "Spring Interp" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps = { "HandInterps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, HandInterps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ClimbIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyPitch = { "CurrentBodyPitch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ClimbIK, CurrentBodyPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_L_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootEffector_R_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_L_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandEffector_R_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootName_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandName_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_MovingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ClimbIKControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Prediction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Solver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_RootTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_BodyCapsuleWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_EnableComplexCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_TransformOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_ExternalInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_L_Transform_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Foot_R_Transform_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_L_Transform_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_Hand_R_Transform_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootOffsetV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentFootRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentHandRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_FootInterps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_HandInterps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::NewProp_CurrentBodyPitch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ClimbIK",
		sizeof(FRigUnit_ClimbIK),
		alignof(FRigUnit_ClimbIK),
		Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ClimbIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_ClimbIK"), sizeof(FRigUnit_ClimbIK), Get_Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ClimbIK_Hash() { return 1093691129U; }

void FRigUnit_ClimbIK::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	FRigVMByteArray CurrentFootOffset_32_Array_Bytes;
	FRigVMDynamicArray<float> CurrentFootOffset_32_Array(CurrentFootOffset_32_Array_Bytes);
	CurrentFootOffset_32_Array.CopyFrom(CurrentFootOffset);
	FRigVMByteArray CurrentFootOffsetV_33_Array_Bytes;
	FRigVMDynamicArray<FVector> CurrentFootOffsetV_33_Array(CurrentFootOffsetV_33_Array_Bytes);
	CurrentFootOffsetV_33_Array.CopyFrom(CurrentFootOffsetV);
	FRigVMByteArray CurrentHandOffset_34_Array_Bytes;
	FRigVMDynamicArray<float> CurrentHandOffset_34_Array(CurrentHandOffset_34_Array_Bytes);
	CurrentHandOffset_34_Array.CopyFrom(CurrentHandOffset);
	FRigVMByteArray CurrentFootRotate_35_Array_Bytes;
	FRigVMDynamicArray<FQuat> CurrentFootRotate_35_Array(CurrentFootRotate_35_Array_Bytes);
	CurrentFootRotate_35_Array.CopyFrom(CurrentFootRotate);
	FRigVMByteArray CurrentHandRotate_36_Array_Bytes;
	FRigVMDynamicArray<FQuat> CurrentHandRotate_36_Array(CurrentHandRotate_36_Array_Bytes);
	CurrentHandRotate_36_Array.CopyFrom(CurrentHandRotate);
	FRigVMByteArray FootInterps_37_Array_Bytes;
	FRigVMDynamicArray<FMySpringInterp> FootInterps_37_Array(FootInterps_37_Array_Bytes);
	FootInterps_37_Array.CopyFrom(FootInterps);
	FRigVMByteArray HandInterps_38_Array_Bytes;
	FRigVMDynamicArray<FMySpringInterp> HandInterps_38_Array(HandInterps_38_Array_Bytes);
	HandInterps_38_Array.CopyFrom(HandInterps);
	
    StaticExecute(
		RigVMExecuteContext,
		Root,
		FootEffector_L,
		FootEffector_R,
		HandEffector_L,
		HandEffector_R,
		FootEffector_L_Idle,
		FootEffector_R_Idle,
		HandEffector_L_Idle,
		HandEffector_R_Idle,
		FootName_L,
		FootName_R,
		HandName_L,
		HandName_R,
		MovingState,
		ClimbIKControl,
		Prediction,
		Solver,
		RootTransform,
		DeltaSeconds,
		BodyCapsuleWidth,
		Foot_L_Transform,
		Foot_R_Transform,
		Hand_L_Transform,
		Hand_R_Transform,
		CurrentBodyOffset,
		EnableComplexCollision,
		TransformOutput,
		ExternalInput,
		Foot_L_Transform_Input,
		Foot_R_Transform_Input,
		Hand_L_Transform_Input,
		Hand_R_Transform_Input,
		CurrentFootOffset_32_Array,
		CurrentFootOffsetV_33_Array,
		CurrentHandOffset_34_Array,
		CurrentFootRotate_35_Array,
		CurrentHandRotate_36_Array,
		FootInterps_37_Array,
		HandInterps_38_Array,
		CurrentBodyPitch,
		ExecuteContext,
		Context
	);
	CurrentFootOffset_32_Array.CopyTo(CurrentFootOffset);
	CurrentFootOffsetV_33_Array.CopyTo(CurrentFootOffsetV);
	CurrentHandOffset_34_Array.CopyTo(CurrentHandOffset);
	CurrentFootRotate_35_Array.CopyTo(CurrentFootRotate);
	CurrentHandRotate_36_Array.CopyTo(CurrentHandRotate);
	FootInterps_37_Array.CopyTo(FootInterps);
	HandInterps_38_Array.CopyTo(HandInterps);
	
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
