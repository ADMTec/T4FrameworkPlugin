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


#define FOREACH_ENUM_ET4BUILTINAITASKSTATE(op) \
	op(ET4BuiltinAITaskState::None) \
	op(ET4BuiltinAITaskState::Dead) \
	op(ET4BuiltinAITaskState::Abnormal) \
	op(ET4BuiltinAITaskState::FindNearestEnemy) \
	op(ET4BuiltinAITaskState::Approach) \
	op(ET4BuiltinAITaskState::Attack) \
	op(ET4BuiltinAITaskState::Roaming) \
	op(ET4BuiltinAITaskState::Jump) \
	op(ET4BuiltinAITaskState::Wait) 

enum class ET4BuiltinAITaskState : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAITaskState>();

#define FOREACH_ENUM_ET4BUILTINAISTATE(op) \
	op(ET4BuiltinAIState::Ready) \
	op(ET4BuiltinAIState::Invisible) \
	op(ET4BuiltinAIState::Active) \
	op(ET4BuiltinAIState::Deactive) 

enum class ET4BuiltinAIState : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
