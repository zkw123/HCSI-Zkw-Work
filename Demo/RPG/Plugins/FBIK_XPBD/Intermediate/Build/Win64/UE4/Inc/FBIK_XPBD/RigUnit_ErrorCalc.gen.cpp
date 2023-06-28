// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/RigUnit_ErrorCalc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ErrorCalc() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ErrorCalc();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FEffectorName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKEffector();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FErrorCalcSolver();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FBoneTransforms();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ErrorCalc>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ErrorCalc cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_ErrorCalc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_ErrorCalc"), sizeof(FRigUnit_ErrorCalc), Get_Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ErrorCalc::Execute"), &FRigUnit_ErrorCalc::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_ErrorCalc>()
{
	return FRigUnit_ErrorCalc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_ErrorCalc(FRigUnit_ErrorCalc::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_ErrorCalc"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ErrorCalc
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ErrorCalc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_ErrorCalc")),new UScriptStruct::TCppStructOps<FRigUnit_ErrorCalc>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ErrorCalc;
	struct Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPBIKFinished_MetaData[];
#endif
		static void NewProp_bPBIKFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPBIKFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_L_Output_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot_L_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_R_Output_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot_R_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_L_Output_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand_L_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_R_Output_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand_R_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Solver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBoneTransformsInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentBoneTransformsInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBoneTransformsOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentBoneTransformsOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "Error Calculation" },
		{ "Keywords", "Error Calculation" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ErrorCalc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Root_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Root), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffectorName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Forward_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "State" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished_SetBit(void* Obj)
	{
		((FRigUnit_ErrorCalc*)Obj)->bPBIKFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished = { "bPBIKFinished", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ErrorCalc), &Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_L_Output_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_L_Output = { "Foot_L_Output", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Foot_L_Output), Z_Construct_UScriptStruct_FPBIKEffector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_L_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_L_Output_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_R_Output_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_R_Output = { "Foot_R_Output", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Foot_R_Output), Z_Construct_UScriptStruct_FPBIKEffector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_R_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_R_Output_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_L_Output_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_L_Output = { "Hand_L_Output", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Hand_L_Output), Z_Construct_UScriptStruct_FPBIKEffector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_L_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_L_Output_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_R_Output_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_R_Output = { "Hand_R_Output", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Hand_R_Output), Z_Construct_UScriptStruct_FPBIKEffector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_R_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_R_Output_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Solver_MetaData[] = {
		{ "Comment", "/*\n\x09UPROPERTY(meta = (Output))\n\x09""FPBIKEffector  Head_Output;\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
		{ "ToolTip", "UPROPERTY(meta = (Output))\nFPBIKEffector  Head_Output;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, Solver), Z_Construct_UScriptStruct_FErrorCalcSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Solver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsInput_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsInput = { "CurrentBoneTransformsInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, CurrentBoneTransformsInput), Z_Construct_UScriptStruct_FBoneTransforms, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsOutput = { "CurrentBoneTransformsOutput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ErrorCalc, CurrentBoneTransformsOutput), Z_Construct_UScriptStruct_FBoneTransforms, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsOutput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Effectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_bPBIKFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_L_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Foot_R_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_L_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Hand_R_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_Solver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::NewProp_CurrentBoneTransformsOutput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ErrorCalc",
		sizeof(FRigUnit_ErrorCalc),
		alignof(FRigUnit_ErrorCalc),
		Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ErrorCalc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_ErrorCalc"), sizeof(FRigUnit_ErrorCalc), Get_Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ErrorCalc_Hash() { return 883762589U; }

void FRigUnit_ErrorCalc::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	FRigVMFixedArray<FEffectorName> Effectors_1_Array(Effectors);
	
    StaticExecute(
		RigVMExecuteContext,
		Root,
		Effectors_1_Array,
		Forward,
		bPBIKFinished,
		Foot_L_Output,
		Foot_R_Output,
		Hand_L_Output,
		Hand_R_Output,
		Solver,
		CurrentBoneTransformsInput,
		CurrentBoneTransformsOutput,
		ExecuteContext,
		Context
	);
}

class UScriptStruct* FBoneTransforms::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FBoneTransforms_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneTransforms, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("BoneTransforms"), sizeof(FBoneTransforms), Get_Z_Construct_UScriptStruct_FBoneTransforms_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FBoneTransforms>()
{
	return FBoneTransforms::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneTransforms(FBoneTransforms::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("BoneTransforms"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFBoneTransforms
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFBoneTransforms()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneTransforms")),new UScriptStruct::TCppStructOps<FBoneTransforms>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFBoneTransforms;
	struct Z_Construct_UScriptStruct_FBoneTransforms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransforms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneTransforms>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"BoneTransforms",
		sizeof(FBoneTransforms),
		alignof(FBoneTransforms),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneTransforms()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneTransforms_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneTransforms"), sizeof(FBoneTransforms), Get_Z_Construct_UScriptStruct_FBoneTransforms_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneTransforms_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneTransforms_Hash() { return 3391453332U; }
class UScriptStruct* FEffectorName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FEffectorName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectorName, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("EffectorName"), sizeof(FEffectorName), Get_Z_Construct_UScriptStruct_FEffectorName_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FEffectorName>()
{
	return FEffectorName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectorName(FEffectorName::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("EffectorName"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFEffectorName
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFEffectorName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EffectorName")),new UScriptStruct::TCppStructOps<FEffectorName>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFEffectorName;
	struct Z_Construct_UScriptStruct_FEffectorName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectorName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectorName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectorName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_EffectorName_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_EffectorName = { "EffectorName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectorName, EffectorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_EffectorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_EffectorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ErrorCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectorName, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_OffsetAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_EffectorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectorName_Statics::NewProp_OffsetAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectorName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"EffectorName",
		sizeof(FEffectorName),
		alignof(FEffectorName),
		Z_Construct_UScriptStruct_FEffectorName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectorName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectorName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectorName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectorName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectorName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectorName"), sizeof(FEffectorName), Get_Z_Construct_UScriptStruct_FEffectorName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectorName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectorName_Hash() { return 2733485699U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
