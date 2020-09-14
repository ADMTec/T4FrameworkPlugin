// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEDATA_T4GameDataTypes_generated_h
#error "T4GameDataTypes.generated.h already included, missing '#pragma once' in T4GameDataTypes.h"
#endif
#define T4GAMEDATA_T4GameDataTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4GameData_Public_T4GameDataTypes_h


#define FOREACH_ENUM_ET4GAMESKILLSETPLAYMODE(op) \
	op(ET4GameSkillSetPlayMode::Primary) \
	op(ET4GameSkillSetPlayMode::Sequential) \
	op(ET4GameSkillSetPlayMode::Combo) \
	op(ET4GameSkillSetPlayMode::HotKey) \
	op(ET4GameSkillSetPlayMode::Random) 

enum class ET4GameSkillSetPlayMode;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameSkillSetPlayMode>();

#define FOREACH_ENUM_ET4GAMEENEMYTYPE(op) \
	op(ET4GameEnemyType::None) \
	op(ET4GameEnemyType::Player) \
	op(ET4GameEnemyType::Human) \
	op(ET4GameEnemyType::Hostile_Tribe) \
	op(ET4GameEnemyType::All) \
	op(ET4GameEnemyType::NoEnemy) 

enum class ET4GameEnemyType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameEnemyType>();

#define FOREACH_ENUM_ET4GAMESTATLEVEL(op) \
	op(ET4GameStatLevel::Level_1) \
	op(ET4GameStatLevel::Level_2) \
	op(ET4GameStatLevel::Level_3) \
	op(ET4GameStatLevel::Level_4) \
	op(ET4GameStatLevel::Level_5) \
	op(ET4GameStatLevel::Level_6) \
	op(ET4GameStatLevel::Level_7) \
	op(ET4GameStatLevel::Level_8) \
	op(ET4GameStatLevel::Level_9) \
	op(ET4GameStatLevel::Level_10) \
	op(ET4GameStatLevel::Max) 

enum class ET4GameStatLevel : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameStatLevel>();

#define FOREACH_ENUM_ET4GAMESTATCATEGORY(op) \
	op(ET4GameStatCategory::Player) \
	op(ET4GameStatCategory::NPC) \
	op(ET4GameStatCategory::Item) \
	op(ET4GameStatCategory::Skill) \
	op(ET4GameStatCategory::Effect) \
	op(ET4GameStatCategory::None) 

enum class ET4GameStatCategory : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameStatCategory>();

#define FOREACH_ENUM_ET4GAMEFINDTARGET(op) \
	op(ET4GameFindTarget::All) \
	op(ET4GameFindTarget::Static) \
	op(ET4GameFindTarget::Dynamic) \
	op(ET4GameFindTarget::None) 

enum class ET4GameFindTarget : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameFindTarget>();

#define FOREACH_ENUM_ET4GAMEEFFECTTYPE(op) \
	op(ET4GameEffectType::Buff) \
	op(ET4GameEffectType::Debuff) \
	op(ET4GameEffectType::DirectDamage) \
	op(ET4GameEffectType::AreaDamage) \
	op(ET4GameEffectType::Knockback) \
	op(ET4GameEffectType::Airborne) \
	op(ET4GameEffectType::Stun) \
	op(ET4GameEffectType::Mis) \
	op(ET4GameEffectType::None) 

enum class ET4GameEffectType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameEffectType>();

#define FOREACH_ENUM_ET4GAMEATTACKTYPE(op) \
	op(ET4GameAttackType::Swing) \
	op(ET4GameAttackType::Throw) \
	op(ET4GameAttackType::Launch) \
	op(ET4GameAttackType::Air) \
	op(ET4GameAttackType::Dash) \
	op(ET4GameAttackType::None) 

enum class ET4GameAttackType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameAttackType>();

#define FOREACH_ENUM_ET4GAMECHAINCALLFUNCTION(op) \
	op(ET4GameChainCallFunction::ImmediateCall) \
	op(ET4GameChainCallFunction::CallAfterCompletion) \
	op(ET4GameChainCallFunction::None) 

enum class ET4GameChainCallFunction : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameChainCallFunction>();

#define FOREACH_ENUM_ET4GAMEQUESTRESULT(op) \
	op(ET4GameQuestResult::Completed_By_QuestKey) \
	op(ET4GameQuestResult::Completed_By_ContentDBKey) \
	op(ET4GameQuestResult::Completed_All) \
	op(ET4GameQuestResult::None) 

enum class ET4GameQuestResult : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestResult>();

#define FOREACH_ENUM_ET4GAMEQUESTRULE(op) \
	op(ET4GameQuestRule::QuestSpawn_All) \
	op(ET4GameQuestRule::QuestSpawn_Target) \
	op(ET4GameQuestRule::None) 

enum class ET4GameQuestRule : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestRule>();

#define FOREACH_ENUM_ET4GAMEQUESTTYPE(op) \
	op(ET4GameQuestType::Kill) \
	op(ET4GameQuestType::None) 

enum class ET4GameQuestType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestType>();

#define FOREACH_ENUM_ET4GAMEQUESTTARGET(op) \
	op(ET4GameQuestTarget::World) \
	op(ET4GameQuestTarget::Personal) \
	op(ET4GameQuestTarget::PlayerAll) \
	op(ET4GameQuestTarget::None) 

enum class ET4GameQuestTarget : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
