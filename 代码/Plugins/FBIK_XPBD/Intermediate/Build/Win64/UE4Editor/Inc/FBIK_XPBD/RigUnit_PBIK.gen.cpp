// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/RigUnit_PBIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PBIK() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PBIK();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKEffector();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKBoneSetting();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKDebug();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_PBIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PBIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_PBIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_PBIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PBIK, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_PBIK"), sizeof(FRigUnit_PBIK), Get_Z_Construct_UScriptStruct_FRigUnit_PBIK_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PBIK::Execute"), &FRigUnit_PBIK::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_PBIK>()
{
	return FRigUnit_PBIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_PBIK(FRigUnit_PBIK::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_PBIK"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_PBIK
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_PBIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_PBIK")),new UScriptStruct::TCppStructOps<FRigUnit_PBIK>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_PBIK;
	struct Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectorSolverIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorSolverIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectorSolverIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Solver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "PBIK" },
		{ "Keywords", "Position Based, PBIK, IK, Full Body, Multi, Effector, FB" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PBIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, Root), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPBIKEffector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_Inner = { "EffectorSolverIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices = { "EffectorSolverIndices", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, EffectorSolverIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_Inner = { "BoneSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPBIKBoneSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings = { "BoneSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, BoneSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, Settings), Z_Construct_UScriptStruct_FPBIKSolverSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, Debug), Z_Construct_UScriptStruct_FPBIKDebug, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PBIK, Solver), Z_Construct_UScriptStruct_FPBIKSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_PBIK",
		sizeof(FRigUnit_PBIK),
		alignof(FRigUnit_PBIK),
		Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PBIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_PBIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_PBIK"), sizeof(FRigUnit_PBIK), Get_Z_Construct_UScriptStruct_FRigUnit_PBIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_PBIK_Hash() { return 123250872U; }

void FRigUnit_PBIK::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	FRigVMFixedArray<FPBIKEffector> Effectors_1_Array(Effectors);
	FRigVMByteArray EffectorSolverIndices_2_Array_Bytes;
	FRigVMDynamicArray<int32> EffectorSolverIndices_2_Array(EffectorSolverIndices_2_Array_Bytes);
	EffectorSolverIndices_2_Array.CopyFrom(EffectorSolverIndices);
	FRigVMFixedArray<FPBIKBoneSetting> BoneSettings_3_Array(BoneSettings);
	
    StaticExecute(
		RigVMExecuteContext,
		Root,
		Effectors_1_Array,
		EffectorSolverIndices_2_Array,
		BoneSettings_3_Array,
		Settings,
		Debug,
		Solver,
		ExecuteContext,
		Context
	);
	EffectorSolverIndices_2_Array.CopyTo(EffectorSolverIndices);
	
}

class UScriptStruct* FPBIKEffector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FPBIKEffector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKEffector, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("PBIKEffector"), sizeof(FPBIKEffector), Get_Z_Construct_UScriptStruct_FPBIKEffector_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FPBIKEffector>()
{
	return FPBIKEffector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPBIKEffector(FPBIKEffector::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("PBIKEffector"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKEffector
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKEffector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PBIKEffector")),new UScriptStruct::TCppStructOps<FPBIKEffector>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKEffector;
	struct Z_Construct_UScriptStruct_FPBIKEffector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrengthAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKEffector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKEffector, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKEffector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKEffector, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_OffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha = { "StrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKEffector, StrengthAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKEffector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_OffsetAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"PBIKEffector",
		sizeof(FPBIKEffector),
		alignof(FPBIKEffector),
		Z_Construct_UScriptStruct_FPBIKEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKEffector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPBIKEffector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PBIKEffector"), sizeof(FPBIKEffector), Get_Z_Construct_UScriptStruct_FPBIKEffector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPBIKEffector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPBIKEffector_Hash() { return 854675338U; }
class UScriptStruct* FPBIKDebug::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FPBIKDebug_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKDebug, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("PBIKDebug"), sizeof(FPBIKDebug), Get_Z_Construct_UScriptStruct_FPBIKDebug_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FPBIKDebug>()
{
	return FPBIKDebug::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPBIKDebug(FPBIKDebug::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("PBIKDebug"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKDebug
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKDebug()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PBIKDebug")),new UScriptStruct::TCppStructOps<FPBIKDebug>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKDebug;
	struct Z_Construct_UScriptStruct_FPBIKDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKDebug_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKDebug>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale = { "DrawScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKDebug, DrawScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FPBIKDebug*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPBIKDebug), &Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKDebug_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"PBIKDebug",
		sizeof(FPBIKDebug),
		alignof(FPBIKDebug),
		Z_Construct_UScriptStruct_FPBIKDebug_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKDebug_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKDebug()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPBIKDebug_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PBIKDebug"), sizeof(FPBIKDebug), Get_Z_Construct_UScriptStruct_FPBIKDebug_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPBIKDebug_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPBIKDebug_Hash() { return 577489849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
