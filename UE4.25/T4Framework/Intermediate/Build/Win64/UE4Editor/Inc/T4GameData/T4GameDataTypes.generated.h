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

#define FOREACH_ENUM_ET4GAMESTATITEMCATEGORY(op) \
	op(ET4GameStatItemCategory::Weapon) \
	op(ET4GameStatItemCategory::Costume) \
	op(ET4GameStatItemCategory::Goods) \
	op(ET4GameStatItemCategory::None) 

enum class ET4GameStatItemCategory : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameStatItemCategory>();

#define FOREACH_ENUM_ET4GAMEDIALOGUESPEAKERTYPE(op) \
	op(ET4GameDialogueSpeakerType::Player) \
	op(ET4GameDialogueSpeakerType::NPC) \
	op(ET4GameDialogueSpeakerType::None) 

enum class ET4GameDialogueSpeakerType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameDialogueSpeakerType>();

#define FOREACH_ENUM_ET4GAMETEXTCATEGORY(op) \
	op(ET4GameTextCategory::Name) \
	op(ET4GameTextCategory::Title) \
	op(ET4GameTextCategory::World) \
	op(ET4GameTextCategory::Quest) \
	op(ET4GameTextCategory::Mission) \
	op(ET4GameTextCategory::Dialogue) \
	op(ET4GameTextCategory::None) 

enum class ET4GameTextCategory : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameTextCategory>();

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
	op(ET4GameEffectType::Hit) \
	op(ET4GameEffectType::Area) \
	op(ET4GameEffectType::Knockback) \
	op(ET4GameEffectType::Stun) \
	op(ET4GameEffectType::Airborne) \
	op(ET4GameEffectType::Buff) \
	op(ET4GameEffectType::Debuff) \
	op(ET4GameEffectType::None) 

enum class ET4GameEffectType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameEffectType>();

#define FOREACH_ENUM_ET4GAMEATTACKTYPE(op) \
	op(ET4GameAttackType::Swing) \
	op(ET4GameAttackType::Throw) \
	op(ET4GameAttackType::Launch) \
	op(ET4GameAttackType::Air) \
	op(ET4GameAttackType::Dash) \
	op(ET4GameAttackType::AreaOfEffect) \
	op(ET4GameAttackType::None) 

enum class ET4GameAttackType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameAttackType>();

#define FOREACH_ENUM_ET4GAMEITEMBEHAVIORTYPE(op) \
	op(ET4GameItemBehaviorType::None) 

enum class ET4GameItemBehaviorType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameItemBehaviorType>();

#define FOREACH_ENUM_ET4GAMENPCBEHAVIORTYPE(op) \
	op(ET4GameNPCBehaviorType::HumanBasic) \
	op(ET4GameNPCBehaviorType::Prop) \
	op(ET4GameNPCBehaviorType::Environment) \
	op(ET4GameNPCBehaviorType::None) 

enum class ET4GameNPCBehaviorType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameNPCBehaviorType>();

#define FOREACH_ENUM_ET4GAMEMISSIONRULE(op) \
	op(ET4GameMissionRule::Spawn_All) \
	op(ET4GameMissionRule::Spawn_Target) \
	op(ET4GameMissionRule::None) 

enum class ET4GameMissionRule : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameMissionRule>();

#define FOREACH_ENUM_ET4GAMEMISSIONTYPE(op) \
	op(ET4GameMissionType::Kill) \
	op(ET4GameMissionType::None) 

enum class ET4GameMissionType : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameMissionType>();

#define FOREACH_ENUM_ET4GAMEQUESTTARGET(op) \
	op(ET4GameQuestTarget::All) 

enum class ET4GameQuestTarget : uint8;
template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
