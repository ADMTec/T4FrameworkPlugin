// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ENGINE_T4ActionTypes_generated_h
#error "T4ActionTypes.generated.h already included, missing '#pragma once' in T4ActionTypes.h"
#endif
#define T4ENGINE_T4ActionTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Engine_Public_Action_T4ActionTypes_h


#define FOREACH_ENUM_ET4ACTIONCOMMANDTYPE(op) \
	op(ET4ActionCommandType::WorldTravel) \
	op(ET4ActionCommandType::WorldTimeSync) \
	op(ET4ActionCommandType::WorldSpawn) \
	op(ET4ActionCommandType::WorldDespawn) \
	op(ET4ActionCommandType::MoveAsync) \
	op(ET4ActionCommandType::MoveSync) \
	op(ET4ActionCommandType::MoveStop) \
	op(ET4ActionCommandType::MoveSpeedSync) \
	op(ET4ActionCommandType::MoveSegments) \
	op(ET4ActionCommandType::Jump) \
	op(ET4ActionCommandType::Teleport) \
	op(ET4ActionCommandType::Rotation) \
	op(ET4ActionCommandType::Turn) \
	op(ET4ActionCommandType::Aim) \
	op(ET4ActionCommandType::LockOn) \
	op(ET4ActionCommandType::AnimSet) \
	op(ET4ActionCommandType::Stance) \
	op(ET4ActionCommandType::EquipWeapon) \
	op(ET4ActionCommandType::UnequipWeapon) \
	op(ET4ActionCommandType::Costume) \
	op(ET4ActionCommandType::Skin) \
	op(ET4ActionCommandType::Hit) \
	op(ET4ActionCommandType::CrowdControl) \
	op(ET4ActionCommandType::Die) \
	op(ET4ActionCommandType::Resurrect) \
	op(ET4ActionCommandType::ReactionStop) \
	op(ET4ActionCommandType::ActionPack) \
	op(ET4ActionCommandType::Stop) \
	op(ET4ActionCommandType::Editor) \
	op(ET4ActionCommandType::None) 

enum class ET4ActionCommandType : uint32;
template<> T4ENGINE_API UEnum* StaticEnum<ET4ActionCommandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
