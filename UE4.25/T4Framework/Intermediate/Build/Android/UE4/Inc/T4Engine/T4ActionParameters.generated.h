// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ENGINE_T4ActionParameters_generated_h
#error "T4ActionParameters.generated.h already included, missing '#pragma once' in T4ActionParameters.h"
#endif
#define T4ENGINE_T4ActionParameters_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h_452_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EditorActionContext_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4EditorActionContext>();

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__DefaultParams() { return STRUCT_OFFSET(FT4ActionParameters, DefaultParams); } \
	FORCEINLINE static uint32 __PPO__TargetParams() { return STRUCT_OFFSET(FT4ActionParameters, TargetParams); } \
	FORCEINLINE static uint32 __PPO__OverrideParams() { return STRUCT_OFFSET(FT4ActionParameters, OverrideParams); } \
	FORCEINLINE static uint32 __PPO__AnimationParams() { return STRUCT_OFFSET(FT4ActionParameters, AnimationParams); }


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionParameters>();

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionAnimationParameters>();

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionOverrideParameters>();

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionTargetParameters>();

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActionDefaultParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionParameters_h


#define FOREACH_ENUM_ET4ANIMATIONPARAMBITS(op) \
	op(ET4AnimationParamBits::PlaySkipBit) \
	op(ET4AnimationParamBits::NoBlendInTimeWithOffsetPlayBit) 

enum class ET4AnimationParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimationParamBits>();

#define FOREACH_ENUM_ET4OVERRIDEPARAMBITS(op) \
	op(ET4OverrideParamBits::DurationBit) \
	op(ET4OverrideParamBits::OffsetTimeBit) \
	op(ET4OverrideParamBits::MovementMaxHeightBit) \
	op(ET4OverrideParamBits::MovementMaxHeightSpeedBit) \
	op(ET4OverrideParamBits::MovementCollideLocationBit) \
	op(ET4OverrideParamBits::MovementCollideTimeSecBit) \
	op(ET4OverrideParamBits::MovementReverseAngleBit) \
	op(ET4OverrideParamBits::ProjectileSpeedBit) \
	op(ET4OverrideParamBits::ProjectileHitTargetBit) \
	op(ET4OverrideParamBits::ProjectileDurationBit) \
	op(ET4OverrideParamBits::MaxPlayTimeBit) \
	op(ET4OverrideParamBits::TargetBoneBit) \
	op(ET4OverrideParamBits::ActionPointBit) \
	op(ET4OverrideParamBits::ProjectileAttachTransformRuleBit) \
	op(ET4OverrideParamBits::LocalOrWorldLocationBit) \
	op(ET4OverrideParamBits::LocalOrWorldRotationBit) 

enum class ET4OverrideParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4OverrideParamBits>();

#define FOREACH_ENUM_ET4TARGETPARAMBITS(op) \
	op(ET4TargetParamBits::ActorIDBit) \
	op(ET4TargetParamBits::LocationBit) \
	op(ET4TargetParamBits::DirectionBit) 

enum class ET4TargetParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4TargetParamBits>();

#define FOREACH_ENUM_ET4DEFAULTPARAMBITS(op) \
	op(ET4DefaultParamBits::ActionKeyBit) \
	op(ET4DefaultParamBits::ContidionNameBit) 

enum class ET4DefaultParamBits;
template<> T4ENGINE_API UEnum* StaticEnum<ET4DefaultParamBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
