// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/ClimbIKSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbIKSolver() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FClimbIKSolver();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FFootClimbHitInfo();
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FHandClimbHitInfo();
// End Cross Module References
class UScriptStruct* FClimbIKSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FClimbIKSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbIKSolver, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("ClimbIKSolver"), sizeof(FClimbIKSolver), Get_Z_Construct_UScriptStruct_FClimbIKSolver_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FClimbIKSolver>()
{
	return FClimbIKSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClimbIKSolver(FClimbIKSolver::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("ClimbIKSolver"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFClimbIKSolver
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFClimbIKSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClimbIKSolver")),new UScriptStruct::TCppStructOps<FClimbIKSolver>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFClimbIKSolver;
	struct Z_Construct_UScriptStruct_FClimbIKSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimbIKSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClimbIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClimbIKSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbIKSolver>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbIKSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"ClimbIKSolver",
		sizeof(FClimbIKSolver),
		alignof(FClimbIKSolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClimbIKSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbIKSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClimbIKSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClimbIKSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClimbIKSolver"), sizeof(FClimbIKSolver), Get_Z_Construct_UScriptStruct_FClimbIKSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClimbIKSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClimbIKSolver_Hash() { return 4186129586U; }
class UScriptStruct* FFootClimbHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FFootClimbHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootClimbHitInfo, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("FootClimbHitInfo"), sizeof(FFootClimbHitInfo), Get_Z_Construct_UScriptStruct_FFootClimbHitInfo_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FFootClimbHitInfo>()
{
	return FFootClimbHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootClimbHitInfo(FFootClimbHitInfo::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("FootClimbHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFFootClimbHitInfo
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFFootClimbHitInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootClimbHitInfo")),new UScriptStruct::TCppStructOps<FFootClimbHitInfo>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFFootClimbHitInfo;
	struct Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClimbIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootClimbHitInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"FootClimbHitInfo",
		sizeof(FFootClimbHitInfo),
		alignof(FFootClimbHitInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootClimbHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootClimbHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootClimbHitInfo"), sizeof(FFootClimbHitInfo), Get_Z_Construct_UScriptStruct_FFootClimbHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootClimbHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootClimbHitInfo_Hash() { return 2000741783U; }
class UScriptStruct* FHandClimbHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FHandClimbHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandClimbHitInfo, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("HandClimbHitInfo"), sizeof(FHandClimbHitInfo), Get_Z_Construct_UScriptStruct_FHandClimbHitInfo_Hash());
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FHandClimbHitInfo>()
{
	return FHandClimbHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHandClimbHitInfo(FHandClimbHitInfo::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("HandClimbHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFHandClimbHitInfo
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFHandClimbHitInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HandClimbHitInfo")),new UScriptStruct::TCppStructOps<FHandClimbHitInfo>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFHandClimbHitInfo;
	struct Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClimbIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandClimbHitInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		nullptr,
		&NewStructOps,
		"HandClimbHitInfo",
		sizeof(FHandClimbHitInfo),
		alignof(FHandClimbHitInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHandClimbHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHandClimbHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HandClimbHitInfo"), sizeof(FHandClimbHitInfo), Get_Z_Construct_UScriptStruct_FHandClimbHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHandClimbHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHandClimbHitInfo_Hash() { return 4169203088U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
