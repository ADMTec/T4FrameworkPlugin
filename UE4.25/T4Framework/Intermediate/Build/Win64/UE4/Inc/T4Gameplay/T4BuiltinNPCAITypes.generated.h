// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4BuiltinNPCAITypes_generated_h
#error "T4BuiltinNPCAITypes.generated.h already included, missing '#pragma once' in T4BuiltinNPCAITypes.h"
#endif
#define T4GAMEPLAY_T4BuiltinNPCAITypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Classes_NPC_T4BuiltinNPCAITypes_h


#define FOREACH_ENUM_ET4BUILTINAITASKTYPE(op) \
	op(ET4BuiltinAITaskType::None) \
	op(ET4BuiltinAITaskType::Dead) \
	op(ET4BuiltinAITaskType::Entering) \
	op(ET4BuiltinAITaskType::AbnormalStatus) \
	op(ET4BuiltinAITaskType::FindNearestEnemy) \
	op(ET4BuiltinAITaskType::Approaching) \
	op(ET4BuiltinAITaskType::Attacking) \
	op(ET4BuiltinAITaskType::Roaming) \
	op(ET4BuiltinAITaskType::Jumping) \
	op(ET4BuiltinAITaskType::Waiting) 

enum class ET4BuiltinAITaskType : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAITaskType>();

#define FOREACH_ENUM_ET4BUILTINAISTATETYPE(op) \
	op(ET4BuiltinAIStateType::Ready) \
	op(ET4BuiltinAIStateType::Invisible) \
	op(ET4BuiltinAIStateType::Active) \
	op(ET4BuiltinAIStateType::Deactive) 

enum class ET4BuiltinAIStateType : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAIStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
