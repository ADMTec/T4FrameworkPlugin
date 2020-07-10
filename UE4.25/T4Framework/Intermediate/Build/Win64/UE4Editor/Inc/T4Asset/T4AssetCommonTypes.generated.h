// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ASSET_T4AssetCommonTypes_generated_h
#error "T4AssetCommonTypes.generated.h already included, missing '#pragma once' in T4AssetCommonTypes.h"
#endif
#define T4ASSET_T4AssetCommonTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Asset_Public_T4AssetCommonTypes_h


#define FOREACH_ENUM_ET4MOVEANGLETYPE(op) \
	op(ET4MoveAngleType::Back) \
	op(ET4MoveAngleType::Back_Left) \
	op(ET4MoveAngleType::Back_Right) \
	op(ET4MoveAngleType::Front) \
	op(ET4MoveAngleType::Front_Left) \
	op(ET4MoveAngleType::Front_Right) \
	op(ET4MoveAngleType::Left) \
	op(ET4MoveAngleType::Right) \
	op(ET4MoveAngleType::Up) \
	op(ET4MoveAngleType::None) 

enum class ET4MoveAngleType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4MoveAngleType>();

#define FOREACH_ENUM_ET4BUILTINEASING(op) \
	op(ET4BuiltInEasing::Linear) \
	op(ET4BuiltInEasing::SinIn) \
	op(ET4BuiltInEasing::SinOut) \
	op(ET4BuiltInEasing::SinInOut) \
	op(ET4BuiltInEasing::QuadIn) \
	op(ET4BuiltInEasing::QuadOut) \
	op(ET4BuiltInEasing::QuadInOut) \
	op(ET4BuiltInEasing::CubicIn) \
	op(ET4BuiltInEasing::CubicOut) \
	op(ET4BuiltInEasing::CubicInOut) \
	op(ET4BuiltInEasing::QuartIn) \
	op(ET4BuiltInEasing::QuartOut) \
	op(ET4BuiltInEasing::QuartInOut) \
	op(ET4BuiltInEasing::QuintIn) \
	op(ET4BuiltInEasing::QuintOut) \
	op(ET4BuiltInEasing::QuintInOut) \
	op(ET4BuiltInEasing::ExpoIn) \
	op(ET4BuiltInEasing::ExpoOut) \
	op(ET4BuiltInEasing::ExpoInOut) \
	op(ET4BuiltInEasing::CircIn) \
	op(ET4BuiltInEasing::CircOut) \
	op(ET4BuiltInEasing::CircInOut) 

enum class ET4BuiltInEasing : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4BuiltInEasing>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
