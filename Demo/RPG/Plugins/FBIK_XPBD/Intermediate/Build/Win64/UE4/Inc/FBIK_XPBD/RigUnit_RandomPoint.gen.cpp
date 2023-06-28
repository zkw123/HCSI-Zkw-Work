// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIK_XPBD/Public/RigUnit_RandomPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_RandomPoint() {}
// Cross Module References
	FBIK_XPBD_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RandomPoint();
	UPackage* Z_Construct_UPackage__Script_FBIK_XPBD();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_RandomPoint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_RandomPoint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FRigUnit_RandomPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FBIK_XPBD_API uint32 Get_Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RandomPoint, Z_Construct_UPackage__Script_FBIK_XPBD(), TEXT("RigUnit_RandomPoint"), sizeof(FRigUnit_RandomPoint), Get_Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Hash());
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RandomPoint::Execute"), &FRigUnit_RandomPoint::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> FBIK_XPBD_API UScriptStruct* StaticStruct<FRigUnit_RandomPoint>()
{
	return FRigUnit_RandomPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigUnit_RandomPoint(FRigUnit_RandomPoint::StaticStruct, TEXT("/Script/FBIK_XPBD"), TEXT("RigUnit_RandomPoint"), false, nullptr, nullptr);
static struct FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_RandomPoint
{
	FScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_RandomPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigUnit_RandomPoint")),new UScriptStruct::TCppStructOps<FRigUnit_RandomPoint>);
	}
} ScriptStruct_FBIK_XPBD_StaticRegisterNativesFRigUnit_RandomPoint;
	struct Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector1_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Effector1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector2_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Effector2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector3_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Effector3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector4_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Effector4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPBIKFinished_MetaData[];
#endif
		static void NewProp_bPBIKFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPBIKFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformInput1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformInput1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformInput2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformInput2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformInput3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformInput3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformInput4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformInput4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformOutput1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformOutput1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformOutput2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformOutput2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformOutput3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformOutput3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransformOutput4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransformOutput4;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReachable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReachable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bReachable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachError_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachError_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReachError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "Random Point" },
		{ "Keywords", "Random Point" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RandomPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector1_MetaData[] = {
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector1 = { "Effector1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, Effector1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector2_MetaData[] = {
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector2 = { "Effector2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, Effector2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector3_MetaData[] = {
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector3 = { "Effector3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, Effector3), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector4_MetaData[] = {
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector4 = { "Effector4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, Effector4), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Radius_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachThreshold_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachThreshold = { "ReachThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, ReachThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished_SetBit(void* Obj)
	{
		((FRigUnit_RandomPoint*)Obj)->bPBIKFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished = { "bPBIKFinished", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_RandomPoint), &Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput1_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput1 = { "TargetTransformInput1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformInput1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput2_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput2 = { "TargetTransformInput2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformInput2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput3_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput3 = { "TargetTransformInput3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformInput3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput4_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput4 = { "TargetTransformInput4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformInput4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput1_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput1 = { "TargetTransformOutput1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformOutput1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput2_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput2 = { "TargetTransformOutput2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformOutput2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput3_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput3 = { "TargetTransformOutput3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformOutput3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput4_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
		{ "Output", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput4 = { "TargetTransformOutput4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetTransformOutput4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput4_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable_Inner = { "bReachable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable = { "bReachable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, bReachable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError_Inner = { "ReachError", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError = { "ReachError", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, ReachError), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_RandomPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_RandomPoint, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Effector4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bPBIKFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformInput4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetTransformOutput4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_bReachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_ReachError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::NewProp_TargetLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FBIK_XPBD,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_RandomPoint",
		sizeof(FRigUnit_RandomPoint),
		alignof(FRigUnit_RandomPoint),
		Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RandomPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FBIK_XPBD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigUnit_RandomPoint"), sizeof(FRigUnit_RandomPoint), Get_Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigUnit_RandomPoint_Hash() { return 4060654928U; }

void FRigUnit_RandomPoint::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	FRigVMByteArray bReachable_15_Array_Bytes;
	FRigVMDynamicArray<bool> bReachable_15_Array(bReachable_15_Array_Bytes);
	bReachable_15_Array.CopyFrom(bReachable);
	FRigVMByteArray ReachError_16_Array_Bytes;
	FRigVMDynamicArray<float> ReachError_16_Array(ReachError_16_Array_Bytes);
	ReachError_16_Array.CopyFrom(ReachError);
	
    StaticExecute(
		RigVMExecuteContext,
		Effector1,
		Effector2,
		Effector3,
		Effector4,
		Radius,
		ReachThreshold,
		bPBIKFinished,
		TargetTransformInput1,
		TargetTransformInput2,
		TargetTransformInput3,
		TargetTransformInput4,
		TargetTransformOutput1,
		TargetTransformOutput2,
		TargetTransformOutput3,
		TargetTransformOutput4,
		bReachable_15_Array,
		ReachError_16_Array,
		TargetLocation,
		ExecuteContext,
		Context
	);
	bReachable_15_Array.CopyTo(bReachable);
	ReachError_16_Array.CopyTo(ReachError);
	
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
