// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/RigUnit_ProcessFootOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ProcessFootOffset() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PrintTransform();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterp();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_PrintTransform>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PrintTransform cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_PrintTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PrintTransform, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_PrintTransform"), sizeof(FRigUnit_PrintTransform), Get_Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PrintTransform::Execute"), &FRigUnit_PrintTransform::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_PrintTransform>()
{
	return FRigUnit_PrintTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_PrintTransform(FRigUnit_PrintTransform::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_PrintTransform"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_PrintTransform
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_PrintTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_PrintTransform")),new UScriptStruct::TCppStructOps<FRigUnit_PrintTransform>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_PrintTransform;
	struct Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "Print Transform" },
		{ "Keywords", "Print Transform" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PrintTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::NewProp_InputBoneName_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::NewProp_InputBoneName = { "InputBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PrintTransform, InputBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::NewProp_InputBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::NewProp_InputBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::NewProp_InputBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_PrintTransform",
		sizeof(FRigUnit_PrintTransform),
		alignof(FRigUnit_PrintTransform),
		Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PrintTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_PrintTransform"), sizeof(FRigUnit_PrintTransform), Get_Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_PrintTransform_Hash() { return 3468888123U; }

void FRigUnit_PrintTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		InputBoneName,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_SpringInterp>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SpringInterp cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_SpringInterp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterp, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_SpringInterp"), sizeof(FRigUnit_SpringInterp), Get_Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringInterp::Execute"), &FRigUnit_SpringInterp::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_SpringInterp>()
{
	return FRigUnit_SpringInterp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_SpringInterp(FRigUnit_SpringInterp::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_SpringInterp"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_SpringInterp
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_SpringInterp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_SpringInterp")),new UScriptStruct::TCppStructOps<FRigUnit_SpringInterp>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_SpringInterp;
	struct Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "Spring Interpolate" },
		{ "Keywords", "Spring Interpolate" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringInterp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SpringInterp, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Strength_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SpringInterp, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SpringInterp, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SpringInterp, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
		{ "output", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SpringInterp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_SpringInterp",
		sizeof(FRigUnit_SpringInterp),
		alignof(FRigUnit_SpringInterp),
		Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_SpringInterp"), sizeof(FRigUnit_SpringInterp), Get_Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Hash() { return 2811780726U; }

void FRigUnit_SpringInterp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Target,
		Strength,
		CriticalDamping,
		Current,
		Result,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_ProcessFootTrace>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ProcessFootTrace cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_ProcessFootTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_ProcessFootTrace"), sizeof(FRigUnit_ProcessFootTrace), Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ProcessFootTrace::Execute"), &FRigUnit_ProcessFootTrace::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_ProcessFootTrace>()
{
	return FRigUnit_ProcessFootTrace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_ProcessFootTrace(FRigUnit_ProcessFootTrace::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_ProcessFootTrace"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ProcessFootTrace
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ProcessFootTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_ProcessFootTrace")),new UScriptStruct::TCppStructOps<FRigUnit_ProcessFootTrace>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ProcessFootTrace;
	struct Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "ProcessFootTrace" },
		{ "Keywords", "ProcessFootTrace" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ProcessFootTrace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootTrace, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Strength_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootTrace, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootTrace, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Current_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootTrace, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
		{ "output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootTrace, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_CriticalDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ProcessFootTrace",
		sizeof(FRigUnit_ProcessFootTrace),
		alignof(FRigUnit_ProcessFootTrace),
		Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_ProcessFootTrace"), sizeof(FRigUnit_ProcessFootTrace), Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootTrace_Hash() { return 4040916717U; }

void FRigUnit_ProcessFootTrace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Target,
		Strength,
		CriticalDamping,
		Current,
		Result,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_ProcessFootOffset>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ProcessFootOffset cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_ProcessFootOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_ProcessFootOffset"), sizeof(FRigUnit_ProcessFootOffset), Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ProcessFootOffset::Execute"), &FRigUnit_ProcessFootOffset::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_ProcessFootOffset>()
{
	return FRigUnit_ProcessFootOffset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_ProcessFootOffset(FRigUnit_ProcessFootOffset::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_ProcessFootOffset"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ProcessFootOffset
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ProcessFootOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_ProcessFootOffset")),new UScriptStruct::TCppStructOps<FRigUnit_ProcessFootOffset>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_ProcessFootOffset;
	struct Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentHitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DidTraceHit_MetaData[];
#endif
		static void NewProp_DidTraceHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DidTraceHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPelvisOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPelvisOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewOffsetZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "ProcessFootOffset" },
		{ "Keywords", "ProcessFootOffset" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ProcessFootOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootOffset, IKFootBone), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_IKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_IKFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurOffsetZ_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurOffsetZ = { "CurOffsetZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootOffset, CurOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_TargetOffsetZ_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_TargetOffsetZ = { "TargetOffsetZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootOffset, TargetOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_TargetOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_TargetOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentHitNormal_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentHitNormal = { "CurrentHitNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootOffset, CurrentHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentHitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentHitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit_SetBit(void* Obj)
	{
		((FRigUnit_ProcessFootOffset*)Obj)->DidTraceHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit = { "DidTraceHit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ProcessFootOffset), &Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentPelvisOffsetZ_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentPelvisOffsetZ = { "CurrentPelvisOffsetZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootOffset, CurrentPelvisOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentPelvisOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentPelvisOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_NewOffsetZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_ProcessFootOffset.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_NewOffsetZ = { "NewOffsetZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProcessFootOffset, NewOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_NewOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_NewOffsetZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_IKFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_TargetOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentHitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_DidTraceHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_CurrentPelvisOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::NewProp_NewOffsetZ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ProcessFootOffset",
		sizeof(FRigUnit_ProcessFootOffset),
		alignof(FRigUnit_ProcessFootOffset),
		Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_ProcessFootOffset"), sizeof(FRigUnit_ProcessFootOffset), Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_ProcessFootOffset_Hash() { return 3768546028U; }

void FRigUnit_ProcessFootOffset::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		IKFootBone,
		CurOffsetZ,
		TargetOffsetZ,
		CurrentHitNormal,
		DidTraceHit,
		CurrentPelvisOffsetZ,
		NewOffsetZ,
		ExecuteContext,
		Context
	);
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
