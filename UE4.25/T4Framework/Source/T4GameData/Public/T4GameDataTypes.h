// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"

#include "T4GameDataTypes.generated.h"

/**
  * #148
 */
UENUM(BlueprintType)
enum class ET4GameQuestTarget : uint8 // #164
{
	World,

	Personal,
	PlayerAll,

	None,
};

UENUM(BlueprintType)
enum class ET4GameQuestType : uint8 // #164
{
	Kill					UMETA(DisplayName = "Kill Quests"),
	//Talk,
	//Combo,
	//Delivery,
	//Escort,
	//Gather,

	None,
};

UENUM(BlueprintType)
enum class ET4GameQuestRule : uint8 // #164
{
	QuestSpawn_All,
	QuestSpawn_Target,

	None,
};

UENUM(BlueprintType)
enum class ET4GameQuestResult: uint8 // #164
{
	Completed_By_QuestKey,
	Completed_By_ContentDBKey,
	Completed_All,

	None,
};

UENUM(BlueprintType)
enum class ET4GameChainCallFunction : uint8 // #164
{
	ImmediateCall			UMETA(DisplayName = "Immediate Call"),
	CallAfterCompletion		UMETA(DisplayName = "Call After Completion"),

	None,
};

UENUM(BlueprintType)
enum class ET4GameAttackType : uint8 // #63
{
	Swing,
	Throw,
	Launch, // #135, 특수, 발사체와 반동이 함께 있음 (TODO : 적당한 이름이 있다면 수정할 것)

	Air, // #135 : Jump Attack
	Dash, // #135

	None,
};

UENUM(BlueprintType)
enum class ET4GameEffectType : uint8 // #68
{
	Buff, // #158 : Zone Weather
	Debuff, // #158 : Zone Weather

	DirectDamage,
	AreaDamage,

	Knockback, // CC
	Airborne, // CC
	Stun, // CC

	Mis, // #135, #142

	None UMETA(Hidden),
};

UENUM(BlueprintType)
enum class ET4GameFindTarget : uint8 // #117 : 공객 대상을 찾을 경우에 대한 옵션 (TODO : Tribe or Enemy)
{
	All,
	Static,
	Dynamic,

	None UMETA(Hidden),
};

UENUM()
enum class ET4GameStatCategory : uint8 // #114
{
	Player,
	NPC,
	Item,

	Skill,
	Effect,

	None UMETA(Hidden),
};

UENUM()
enum class ET4GameStatLevel : uint8 // #114
{
	Level_1,
	Level_2,
	Level_3,
	Level_4,
	Level_5,
	Level_6,
	Level_7,
	Level_8,
	Level_9,
	Level_10,

	Max UMETA(Hidden),
};

UENUM()
enum class ET4GameEnemyType : uint8 // #104
{
	None,

	Player, // Only Player
	Human, // Player + Human Races
	Hostile_Tribe,

	All,

	NoEnemy,
};

UENUM()
enum class ET4GameSkillSetPlayMode // #142
{
	Primary,
	Sequential,
	Combo,

	HotKey,
	Random,
};