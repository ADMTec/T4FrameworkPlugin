// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4ServerServiceTypes_generated_h
#error "T4ServerServiceTypes.generated.h already included, missing '#pragma once' in T4ServerServiceTypes.h"
#endif
#define T4GAMEPLAY_T4ServerServiceTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_MainFrame_Server_Services_T4ServerServiceTypes_h


#define FOREACH_ENUM_ET4QUESTFLOWRESULT(op) \
	op(ET4QuestFlowResult::StopTask) \
	op(ET4QuestFlowResult::NextTask) 

enum class ET4QuestFlowResult : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4QuestFlowResult>();

#define FOREACH_ENUM_ET4QUESTATE(op) \
	op(ET4QueState::None) \
	op(ET4QueState::Ready) \
	op(ET4QueState::Binding) \
	op(ET4QueState::Binded) \
	op(ET4QueState::Playing) \
	op(ET4QueState::Stoping) 

enum class ET4QueState : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4QueState>();

#define FOREACH_ENUM_ET4SERVERJOBTYPE(op) \
	op(ET4ServerJobType::DespawnNPC) \
	op(ET4ServerJobType::DieNPC) \
	op(ET4ServerJobType::EffectSet) \
	op(ET4ServerJobType::Effect) \
	op(ET4ServerJobType::None) 

enum class ET4ServerJobType;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ServerJobType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
