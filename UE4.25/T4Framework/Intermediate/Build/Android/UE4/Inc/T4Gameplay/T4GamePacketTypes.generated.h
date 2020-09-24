// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4GamePacketTypes_generated_h
#error "T4GamePacketTypes.generated.h already included, missing '#pragma once' in T4GamePacketTypes.h"
#endif
#define T4GAMEPLAY_T4GamePacketTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Public_Protocol_T4GamePacketTypes_h


#define FOREACH_ENUM_ET4GAMEPACKETSC(op) \
	op(ET4GamePacketSC::StartToPlay) \
	op(ET4GamePacketSC::QuestStart) \
	op(ET4GamePacketSC::QuestFinish) \
	op(ET4GamePacketSC::MissionStart) \
	op(ET4GamePacketSC::MissionFinish) \
	op(ET4GamePacketSC::DialogueStart) \
	op(ET4GamePacketSC::DialogueUpdate) \
	op(ET4GamePacketSC::DialogueFinish) \
	op(ET4GamePacketSC::InventoryAdd) \
	op(ET4GamePacketSC::WorldTravel) \
	op(ET4GamePacketSC::WorldTimeSync) \
	op(ET4GamePacketSC::WorldExplore) \
	op(ET4GamePacketSC::MyPCEnter) \
	op(ET4GamePacketSC::MyPCChange) \
	op(ET4GamePacketSC::PCEnter) \
	op(ET4GamePacketSC::PCLeave) \
	op(ET4GamePacketSC::NPCEnter) \
	op(ET4GamePacketSC::NPCLeave) \
	op(ET4GamePacketSC::ItemEnter) \
	op(ET4GamePacketSC::ItemLeave) \
	op(ET4GamePacketSC::Move) \
	op(ET4GamePacketSC::Jump) \
	op(ET4GamePacketSC::Rotation) \
	op(ET4GamePacketSC::Teleport) \
	op(ET4GamePacketSC::MoveStop) \
	op(ET4GamePacketSC::MoveSpeedSync) \
	op(ET4GamePacketSC::LockOn) \
	op(ET4GamePacketSC::LockOff) \
	op(ET4GamePacketSC::AnimSet) \
	op(ET4GamePacketSC::Stance) \
	op(ET4GamePacketSC::EquipItem) \
	op(ET4GamePacketSC::UnequipItem) \
	op(ET4GamePacketSC::ExchangeItem) \
	op(ET4GamePacketSC::SkillCasting) \
	op(ET4GamePacketSC::SkillCancel) \
	op(ET4GamePacketSC::SkillTarget) \
	op(ET4GamePacketSC::EffectBuff) \
	op(ET4GamePacketSC::EffectDebuff) \
	op(ET4GamePacketSC::EffectDirect) \
	op(ET4GamePacketSC::EffectArea) \
	op(ET4GamePacketSC::EffectKnockback) \
	op(ET4GamePacketSC::EffectAirborne) \
	op(ET4GamePacketSC::EffectStun) \
	op(ET4GamePacketSC::Die) \
	op(ET4GamePacketSC::Resurrect) \
	op(ET4GamePacketSC::DebugAIStatus) \
	op(ET4GamePacketSC::None) 

enum class ET4GamePacketSC : uint32;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GamePacketSC>();

#define FOREACH_ENUM_ET4GAMEPACKETCS(op) \
	op(ET4GamePacketCS::ReadyToPlay) \
	op(ET4GamePacketCS::Move) \
	op(ET4GamePacketCS::Jump) \
	op(ET4GamePacketCS::Rotation) \
	op(ET4GamePacketCS::LockOn) \
	op(ET4GamePacketCS::LockOff) \
	op(ET4GamePacketCS::AnimSet) \
	op(ET4GamePacketCS::Stance) \
	op(ET4GamePacketCS::EquipItem) \
	op(ET4GamePacketCS::UnequipItem) \
	op(ET4GamePacketCS::ExchangeItem) \
	op(ET4GamePacketCS::SkillCasting) \
	op(ET4GamePacketCS::SkillCancel) \
	op(ET4GamePacketCS::SkillTarget) \
	op(ET4GamePacketCS::CmdQuestStart) \
	op(ET4GamePacketCS::CmdQuestFinish) \
	op(ET4GamePacketCS::CmdWorldTravel) \
	op(ET4GamePacketCS::CmdWorldTimeSync) \
	op(ET4GamePacketCS::CmdChangePlayer) \
	op(ET4GamePacketCS::CmdPCEnter) \
	op(ET4GamePacketCS::CmdNPCEnter) \
	op(ET4GamePacketCS::CmdItemEnter) \
	op(ET4GamePacketCS::CmdRespawn) \
	op(ET4GamePacketCS::CmdLeave) \
	op(ET4GamePacketCS::CmdTeleport) \
	op(ET4GamePacketCS::CmdBookmark) \
	op(ET4GamePacketCS::None) 

enum class ET4GamePacketCS : uint32;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GamePacketCS>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
