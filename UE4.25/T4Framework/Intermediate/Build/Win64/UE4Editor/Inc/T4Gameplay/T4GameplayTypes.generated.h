// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4GameplayTypes_generated_h
#error "T4GameplayTypes.generated.h already included, missing '#pragma once' in T4GameplayTypes.h"
#endif
#define T4GAMEPLAY_T4GameplayTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Public_T4GameplayTypes_h


#define FOREACH_ENUM_ET4GAMETARGETPARAMTYPE(op) \
	op(ET4GameTargetParamType::ObjectID) \
	op(ET4GameTargetParamType::ObjectIDAndLocation) \
	op(ET4GameTargetParamType::ObjectIDAndDirection) \
	op(ET4GameTargetParamType::Location) \
	op(ET4GameTargetParamType::Direction) \
	op(ET4GameTargetParamType::None) 

enum class ET4GameTargetParamType : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameTargetParamType>();

#define FOREACH_ENUM_ET4GAMEDIALOGUERESULT(op) \
	op(ET4GameDialogueResult::OK) \
	op(ET4GameDialogueResult::Yes) \
	op(ET4GameDialogueResult::NO) \
	op(ET4GameDialogueResult::None) 

enum class ET4GameDialogueResult : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameDialogueResult>();

#define FOREACH_ENUM_ET4CONTROLMODETYPE(op) \
	op(ET4ControlModeType::TPS) \
	op(ET4ControlModeType::QuarterView) \
	op(ET4ControlModeType::ShoulderView) \
	op(ET4ControlModeType::FPS) \
	op(ET4ControlModeType::Free) \
	op(ET4ControlModeType::None) 

enum class ET4ControlModeType : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ControlModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
