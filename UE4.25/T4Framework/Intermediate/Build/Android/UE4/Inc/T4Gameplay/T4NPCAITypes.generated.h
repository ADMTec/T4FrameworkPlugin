// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4NPCAITypes_generated_h
#error "T4NPCAITypes.generated.h already included, missing '#pragma once' in T4NPCAITypes.h"
#endif
#define T4GAMEPLAY_T4NPCAITypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_MainFrame_Server_AIController_T4NPCAITypes_h


#define FOREACH_ENUM_ET4GAMEAITASKSTATE(op) \
	op(ET4GameAITaskState::None) \
	op(ET4GameAITaskState::Dead) \
	op(ET4GameAITaskState::Abnormal) \
	op(ET4GameAITaskState::FindNearestEnemy) \
	op(ET4GameAITaskState::Approach) \
	op(ET4GameAITaskState::Attack) \
	op(ET4GameAITaskState::Roaming) \
	op(ET4GameAITaskState::Jump) \
	op(ET4GameAITaskState::Wait) 

enum class ET4GameAITaskState : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameAITaskState>();

#define FOREACH_ENUM_ET4GAMEAISTATE(op) \
	op(ET4GameAIState::Ready) \
	op(ET4GameAIState::Invisible) \
	op(ET4GameAIState::Active) \
	op(ET4GameAIState::Deactive) 

enum class ET4GameAIState : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
