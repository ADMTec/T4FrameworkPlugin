// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataConstants.h"
#include "T4GameDataTypes.h" // #104

#include "T4Asset/Public/T4AssetConstants.h"

#include "T4NPCTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBehaviorTree;
class UT4ActorEntityAsset;

USTRUCT()
struct FT4NPCLocomotionData // #108
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	float DefaultMoveSpeed; // #50, #108

	UPROPERTY(EditAnywhere, Category = Common)
	TMap<FName, float> StanceMoveSpeeds; // #154 : FName = StanceName

	UPROPERTY(EditAnywhere, Category = Common)
	float JumpMaxHeight; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float JumpHeightSpeed; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float InPlaceRotationRate; // #135

public:
	FT4NPCLocomotionData()
		: DefaultMoveSpeed(500.0f)
		, JumpMaxHeight(200.0f)
		, JumpHeightSpeed(500.0f)
		, InPlaceRotationRate(300.0f)
	{
	}
};

USTRUCT()
struct FT4NPCBehaviorData // #108
{
	GENERATED_USTRUCT_BODY()

public:
	// #114
	// FT4BuiltinNPCAIBehaviorData : AIController (Runtime)
	// FT4NPCBehaviorData : NPC DataTable (Original Set)
	// FT4GameOverrideNPCBehaviorData : Spawn Asset (Instance Set)

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameEnemyType EnemyType; // #104

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bAggressive; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float ActiveOrKeepAggroTimeSec; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float AgentRadius; // #114 : Agent 크기 및 Attack/Stop Distance 에서 겹치지 않기 위한 값으로 사용 (WorldActor = BoundRadius)

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float SensoryRange; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float RomaingRange; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float RoamingRate; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float JumpRate; // #140

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "10.0"))
	float IdleWaitTimeSec; // #140

public:
	FT4NPCBehaviorData()
		: EnemyType(ET4GameEnemyType::NoEnemy) // #104
		, bAggressive(false)
		, ActiveOrKeepAggroTimeSec(5.0f/*60.0f * 5.0f*/)
		, AgentRadius(50.0f) // #114 : Agent 크기 및 Attack/Stop Distance 에서 겹치지 않기 위한 값으로 사용 (WorldActor = BoundRadius)
		, SensoryRange(1000.0f)
		, RomaingRange(1000.0f)
		, RoamingRate(0.5f)
		, JumpRate(0.2f) // #140
		, IdleWaitTimeSec(5.0f) // #140
	{
	}
};

USTRUCT()
struct FT4NPCTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4NPCDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FName RaceName; // #104, #114

	UPROPERTY(EditAnywhere, Category = Common)
	FName InitializeAnimSetName; // #142 : NPC 기본 스탠스 

	UPROPERTY(EditAnywhere, Category = Common)
	FName InitializeStanceName; // #142 : NPC 기본 스탠스 

	UPROPERTY(EditAnywhere, Category = Common)
	FT4NPCLocomotionData LocomotionData; // #50, #108, #109

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatLevel InitializeLevel; // #114 : Stat 레벨

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4NPCStatDBKey InitializeNPCStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4WeaponDBKey InitializeWeaponDBKey; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4EffectSetDBKey InitializeEffectSetDBKey; // #142 : 피격 효과(Effect)를 처리할 자신의 EffectSet 설정

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4NPCBehaviorData BehaviorData; // #50

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActorEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName InitializeSkinName; // #135

public:
	FT4NPCTableRow()
		: Version(0) // #135
		, RaceName(NAME_None) // #104, #114
		, InitializeAnimSetName(T4Const_DefaultAnimSetName) // #142
		, InitializeStanceName(T4Const_DefaultStanceName) // #142
		, InitializeLevel(ET4GameStatLevel::Level_1) // #114
		, InitializeSkinName(NAME_None) // #135
	{
	}
};