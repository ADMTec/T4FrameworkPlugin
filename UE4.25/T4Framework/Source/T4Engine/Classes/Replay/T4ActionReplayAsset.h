// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"

#include "Action/T4ActionCommandStatus.h"
#include "Action/T4ActionCommandMoves.h"
#include "Action/T4ActionCommandCommons.h"
#include "Action/T4ActionCommandWorlds.h"
#if WITH_EDITOR
#include "Action/T4ActionCommandEditors.h"
#endif

#include "Action/T4ActionParameters.h"

#include "T4ActionReplayAsset.generated.h"

/**
  * #68
 */
struct ET4ActionReplayVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ENGINE_API const static FGuid GUID;

private:
	ET4ActionReplayVersion() {}
};

USTRUCT()
struct T4ENGINE_API FT4ActionReplayHeader
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	float TotalPlayTimeSec;
	
public:
	FT4ActionReplayHeader()
		: TotalPlayTimeSec(0.0f)
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4ActionReplayItem
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	float Time;

	UPROPERTY(VisibleAnywhere, Category = Default)
	uint32 UniqueKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ActorID ActorID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4ActionCommandType ActionCommandType;

	UPROPERTY(VisibleAnywhere, Category = Default)
	int32 ActionArrayIndex;
	
public:
	FT4ActionReplayItem()
		: Time(0.0f)
		, UniqueKey(INDEX_NONE)
		, ActionCommandType(ET4ActionCommandType::None)
		, ActionArrayIndex(INDEX_NONE)
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4ActionReplayData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ActionReplayHeader Header;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4ActionReplayItem> PlayActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TMap<uint32, FT4ActionParameters> PlayActionParameters; // PlayUniqueKey


	// #T4_ADD_ACTION_TAG_CMD

	// T4ActionCommandWorlds.h

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4WorldTravelActionCommand> WorldTravelActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4WorldTimeSyncActionCommand> WorldTimeSyncActions; // #146

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4WorldSpawnActionCommand> SpawnActorActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4WorldDespawnActionCommand> DespawnActorActions;


	// T4ActionCommandMoves.h

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4MoveAsyncActionCommand> MoveAsyncActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4MoveSyncActionCommand> MoveSyncActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4JumpActionCommand> JumpActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4TeleportActionCommand> TeleportActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4RotationActionCommand> RotationActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4MoveStopActionCommand> MoveStopActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4MoveSpeedSyncActionCommand> MoveSpeedSyncActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4LaunchActionCommand> LaunchActions;


	// T4ActionCommandStatus.h

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4AimActionCommand> AimActions; // #113

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4LockOnActionCommand> LockOnActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4StanceActionCommand> StanceActions; // #73

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4PostureActionCommand> PostureActions; // #106

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4EquipWeaponActionCommand> EquipWeaponActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4UnequipWeaponActionCommand> UnequipWeaponActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4CostumeActionCommand> CostumeActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4SkinActionCommand> SkinActions; // #130

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4HitActionCommand> HitActions; // #76

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4CrowdControlActionCommand> CrowdControlActions; // #131

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4DieActionCommand> DieActions; // #76

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4ResurrectActionCommand> ResurrectActions; // #76


	// T4ActionCommandCommons.h

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4ActionSetActionCommand> SetActions;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4StopActionCommand> StopActions;


#if WITH_EDITORONLY_DATA
	// T4ActionCommandEditors.h
	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4EditorActionCommand> EditorActions; // #80
#endif
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ENGINE_API UT4ActionReplayAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ActionReplayData ReplayData;
};