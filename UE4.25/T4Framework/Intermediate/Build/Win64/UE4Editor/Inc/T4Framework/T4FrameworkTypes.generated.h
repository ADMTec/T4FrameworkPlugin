// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4FrameworkTypes_generated_h
#error "T4FrameworkTypes.generated.h already included, missing '#pragma once' in T4FrameworkTypes.h"
#endif
#define T4FRAMEWORK_T4FrameworkTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Framework_Public_T4FrameworkTypes_h


#define FOREACH_ENUM_ET4CONTROLLERTYPE(op) \
	op(ET4ControllerType::Player) \
	op(ET4ControllerType::NPCAI) \
	op(ET4ControllerType::Max) 

enum class ET4ControllerType : uint8;
template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4ControllerType>();

#define FOREACH_ENUM_ET4FRAMEWORKTYPE(op) \
	op(ET4FrameworkType::Null) \
	op(ET4FrameworkType::Client) \
	op(ET4FrameworkType::Server) \
	op(ET4FrameworkType::Max) 

enum class ET4FrameworkType : uint8;
template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4FrameworkType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
