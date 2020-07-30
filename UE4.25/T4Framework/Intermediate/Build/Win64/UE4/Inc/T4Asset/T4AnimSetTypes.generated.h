// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ASSET_T4AnimsetTypes_generated_h
#error "T4AnimsetTypes.generated.h already included, missing '#pragma once' in T4AnimsetTypes.h"
#endif
#define T4ASSET_T4AnimsetTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Asset_Public_Animset_T4AnimsetTypes_h


#define FOREACH_ENUM_ET4ANIMSETTEMPLATE(op) \
	op(ET4AnimsetTemplate::Basic) \
	op(ET4AnimsetTemplate::Paragon) \
	op(ET4AnimsetTemplate::None) 

enum class ET4AnimsetTemplate : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4AnimsetTemplate>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
