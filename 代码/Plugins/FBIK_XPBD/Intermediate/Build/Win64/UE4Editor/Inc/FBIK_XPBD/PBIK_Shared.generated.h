// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FBIK_XPBD_PBIK_Shared_generated_h
#error "PBIK_Shared.generated.h already included, missing '#pragma once' in PBIK_Shared.h"
#endif
#define FBIK_XPBD_PBIK_Shared_generated_h

#define FullBodyIK_XPBD_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_PBIK_Shared_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics; \
	FBIK_XPBD_API static class UScriptStruct* StaticStruct();


template<> FBIK_XPBD_API UScriptStruct* StaticStruct<struct FPBIKBoneSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FullBodyIK_XPBD_Plugins_FBIK_XPBD_Source_FBIK_XPBD_Public_PBIK_Shared_h


#define FOREACH_ENUM_EPBIKLIMITTYPE(op) \
	op(EPBIKLimitType::Free) \
	op(EPBIKLimitType::Limited) \
	op(EPBIKLimitType::Locked) 

enum class EPBIKLimitType : uint8;
template<> FBIK_XPBD_API UEnum* StaticEnum<EPBIKLimitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
