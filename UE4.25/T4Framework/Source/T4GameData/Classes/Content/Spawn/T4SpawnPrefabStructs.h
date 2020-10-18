// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDBTypes.h"
#include "T4SpawnCommonStructs.h" // #155
#include "T4SpawnPrefabStructs.generated.h"

/**
  * #118
 */

// #114
USTRUCT()
struct T4GAMEDATA_API FT4SpawnOverrideBehaviorData // #114
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnOverrideBehaviorData()
		: bOverride_EnemyType(false)
		, bOverride_Aggressive(false)
		, bOverride_ActiveOrKeepAggroTimeSec(false)
		, bOverride_SensoryRange(false)
		, bOverride_RomaingRange(false)
		, bOverride_RoamingRate(false)
		, bOverride_JumpRate(false) // #140
		, bOverride_IdleWaitTimeSec(false)
		, EnemyType(ET4GameEnemyType::None) // #104
		, bAggressive(false)
		, ActiveOrKeepAggroTimeSec(0.0f)
		, SensoryRange(0.0f)
		, RomaingRange(0.0f)
		, RoamingRate(0.0f)
		, JumpRate(0.0f)
		, IdleWaitTimeSec(5.0f)
	{
	}

	// #114
	// FT4BuiltinNPCAIBehaviorData : AIController (Runtime)
	// FT4NPCBehaviorData : NPC DataTable (Original Set)
	// FT4SpawnOverrideBehaviorData : Spawn Asset (Instance Set)

	// Override
	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_EnemyType;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_Aggressive;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_ActiveOrKeepAggroTimeSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_SensoryRange;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_RomaingRange;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_RoamingRate;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_JumpRate; // #140

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_IdleWaitTimeSec; // #140
	
	// Properties
	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_EnemyType"))
	ET4GameEnemyType EnemyType; // #104

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_Aggressive"))
	bool bAggressive;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_ActiveOrKeepAggroTimeSec"))
	float ActiveOrKeepAggroTimeSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_SensoryRange"))
	float SensoryRange;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_RomaingRange"))
	float RomaingRange;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_RoamingRate", ClampMin = "0.0", ClampMax = "1.0"))
	float RoamingRate;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_JumpRate", ClampMin = "0.0", ClampMax = "1.0"))
	float JumpRate; // #140

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_JumpRate", ClampMin = "0.0", ClampMax = "10.0"))
	float IdleWaitTimeSec; // #140
};

USTRUCT()
struct T4GAMEDATA_API FT4SpawnPrefabData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnPrefabData()
#if WITH_EDITORONLY_DATA
		: ParentID(NAME_None) // #122
		, FolderName(NAME_None) // #122
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ID == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4SpawnPrefabData& InRhs) const
	{
		return (ID == InRhs.ID) ? true : false;
	}

	// FT4SpawnPrefabDetails::CustomizeDetails

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName ID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4NPCDBKey NPCDBKey;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4SpawnOverrideBehaviorData OverrideBehaviorData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FString Description;

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName ParentID; // #122

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName FolderName; // #122
#endif
};
