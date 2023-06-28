// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/ErrorCalcSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorCalcSolver() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FErrorCalcSolver();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
// End Cross Module References
class UScriptStruct* FErrorCalcSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FErrorCalcSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrorCalcSolver, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("ErrorCalcSolver"), sizeof(FErrorCalcSolver), Get_Z_Construct_UScriptStruct_FErrorCalcSolver_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FErrorCalcSolver>()
{
	return FErrorCalcSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrorCalcSolver(FErrorCalcSolver::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("ErrorCalcSolver"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFErrorCalcSolver
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFErrorCalcSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ErrorCalcSolver")),new UScriptStruct::TCppStructOps<FErrorCalcSolver>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFErrorCalcSolver;
	struct Z_Construct_UScriptStruct_FErrorCalcSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorCalcSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ErrorCalcSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrorCalcSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrorCalcSolver>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrorCalcSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"ErrorCalcSolver",
		sizeof(FErrorCalcSolver),
		alignof(FErrorCalcSolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorCalcSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCalcSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrorCalcSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrorCalcSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ErrorCalcSolver"), sizeof(FErrorCalcSolver), Get_Z_Construct_UScriptStruct_FErrorCalcSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrorCalcSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrorCalcSolver_Hash() { return 4195671287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
