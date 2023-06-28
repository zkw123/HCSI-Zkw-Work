// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/Core/PBIKSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBIKSolver() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings();
// End Cross Module References
class UScriptStruct* FPBIKSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FPBIKSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolver, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("PBIKSolver"), sizeof(FPBIKSolver), Get_Z_Construct_UScriptStruct_FPBIKSolver_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FPBIKSolver>()
{
	return FPBIKSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPBIKSolver(FPBIKSolver::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("PBIKSolver"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKSolver
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PBIKSolver")),new UScriptStruct::TCppStructOps<FPBIKSolver>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKSolver;
	struct Z_Construct_UScriptStruct_FPBIKSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKSolver>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"PBIKSolver",
		sizeof(FPBIKSolver),
		alignof(FPBIKSolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPBIKSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PBIKSolver"), sizeof(FPBIKSolver), Get_Z_Construct_UScriptStruct_FPBIKSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPBIKSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPBIKSolver_Hash() { return 3703482814U; }
class UScriptStruct* FPBIKSolverSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FPBIKSolverSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolverSettings, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("PBIKSolverSettings"), sizeof(FPBIKSolverSettings), Get_Z_Construct_UScriptStruct_FPBIKSolverSettings_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FPBIKSolverSettings>()
{
	return FPBIKSolverSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPBIKSolverSettings(FPBIKSolverSettings::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("PBIKSolverSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKSolverSettings
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKSolverSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PBIKSolverSettings")),new UScriptStruct::TCppStructOps<FPBIKSolverSettings>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFPBIKSolverSettings;
	struct Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStretch_MetaData[];
#endif
		static void NewProp_bAllowStretch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPinRoot_MetaData[];
#endif
		static void NewProp_bPinRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPinRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKSolverSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKSolverSettings, Iterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKSolverSettings, MassMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit(void* Obj)
	{
		((FPBIKSolverSettings*)Obj)->bAllowStretch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch = { "bAllowStretch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPBIKSolverSettings), &Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot_SetBit(void* Obj)
	{
		((FPBIKSolverSettings*)Obj)->bPinRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot = { "bPinRoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPBIKSolverSettings), &Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bPinRoot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"PBIKSolverSettings",
		sizeof(FPBIKSolverSettings),
		alignof(FPBIKSolverSettings),
		Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPBIKSolverSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PBIKSolverSettings"), sizeof(FPBIKSolverSettings), Get_Z_Construct_UScriptStruct_FPBIKSolverSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPBIKSolverSettings_Hash() { return 4044220540U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
