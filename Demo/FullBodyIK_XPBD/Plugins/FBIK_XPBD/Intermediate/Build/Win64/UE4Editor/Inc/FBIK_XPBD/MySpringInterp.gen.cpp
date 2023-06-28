// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/MySpringInterp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySpringInterp() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FMySpringInterpVector();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorSpringState();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FMySpringInterp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatSpringState();
// End Cross Module References
class UScriptStruct* FMySpringInterpVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FMySpringInterpVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySpringInterpVector, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("MySpringInterpVector"), sizeof(FMySpringInterpVector), Get_Z_Construct_UScriptStruct_FMySpringInterpVector_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FMySpringInterpVector>()
{
	return FMySpringInterpVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySpringInterpVector(FMySpringInterpVector::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("MySpringInterpVector"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFMySpringInterpVector
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFMySpringInterpVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySpringInterpVector")),new UScriptStruct::TCppStructOps<FMySpringInterpVector>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFMySpringInterpVector;
	struct Z_Construct_UScriptStruct_FMySpringInterpVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySpringInterpVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Current_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Mass_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterpVector, SpringState), Z_Construct_UScriptStruct_FVectorSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_SpringState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_CriticalDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::NewProp_SpringState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"MySpringInterpVector",
		sizeof(FMySpringInterpVector),
		alignof(FMySpringInterpVector),
		Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySpringInterpVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySpringInterpVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySpringInterpVector"), sizeof(FMySpringInterpVector), Get_Z_Construct_UScriptStruct_FMySpringInterpVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySpringInterpVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySpringInterpVector_Hash() { return 3450762826U; }
class UScriptStruct* FMySpringInterp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FMySpringInterp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySpringInterp, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("MySpringInterp"), sizeof(FMySpringInterp), Get_Z_Construct_UScriptStruct_FMySpringInterp_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FMySpringInterp>()
{
	return FMySpringInterp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySpringInterp(FMySpringInterp::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("MySpringInterp"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFMySpringInterp
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFMySpringInterp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySpringInterp")),new UScriptStruct::TCppStructOps<FMySpringInterp>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFMySpringInterp;
	struct Z_Construct_UScriptStruct_FMySpringInterp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySpringInterp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Current_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Mass_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySpringInterp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySpringInterp, SpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_SpringState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySpringInterp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_CriticalDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySpringInterp_Statics::NewProp_SpringState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySpringInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"MySpringInterp",
		sizeof(FMySpringInterp),
		alignof(FMySpringInterp),
		Z_Construct_UScriptStruct_FMySpringInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySpringInterp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySpringInterp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySpringInterp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySpringInterp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySpringInterp"), sizeof(FMySpringInterp), Get_Z_Construct_UScriptStruct_FMySpringInterp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMySpringInterp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySpringInterp_Hash() { return 3101360479U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
