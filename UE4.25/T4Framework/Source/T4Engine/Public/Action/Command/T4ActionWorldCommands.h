// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionCommandBase.h"
#include "T4Asset/Public/T4AssetConstants.h" // #73
#include "T4Asset/Public/Entity/T4EntityKey.h"

#include "T4ActionWorldCommands.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CMD

// ET4ActionCommandType::WorldTravel
// ET4ActionCommandType::WorldTimeSync // #146
// ET4ActionCommandType::WorldSpawn
// ET4ActionCommandType::WorldDespawn

USTRUCT()
struct T4ENGINE_API FT4WorldTravelActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FSoftObjectPath MapEntityOrLevelAssetPath; // def MapEntity or LevelAsset

	UPROPERTY(EditAnywhere, Category = Common)
	FName WorldKeyName; // #146 : NAME_None 이면 C/S 월드 이동이 아니다.

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Common)
	bool bPreveiwScene; // #87
#endif

	UPROPERTY(Transient)
	FVector StartLocation; // #87

public:
	FT4WorldTravelActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, WorldKeyName(NAME_None) // #146
#if WITH_EDITOR
		, bPreveiwScene(false) // #87
#endif
		, StartLocation(FVector::ZeroVector) // #87
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::WorldTravel; }

	bool Validate(FString& OutMsg) override
	{
		if (!MapEntityOrLevelAssetPath.IsValid())
		{
			OutMsg = TEXT("Invalid MapEntityOrLevelAssetPath");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WorldTravelAction"));
	}
};

// #146
USTRUCT()
struct T4ENGINE_API FT4WorldTimeSyncActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	float WorldTimeHour; // #146 : 0 ~ 24, -1.0f 무시

	UPROPERTY(EditAnywhere, Category = Common)
	float WorldTimeScale;

public:
	FT4WorldTimeSyncActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, WorldTimeHour(-1.0f)
		, WorldTimeScale(1.0f)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::WorldTimeSync; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WorldTimeSyncAction"));
	}
};


USTRUCT()
struct T4ENGINE_API FT4WorldSpawnActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	// SaveReplaySnapshot() // #68

	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActorID ActorID;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4ObjectID OwnerObjectID; // #114 : GameObject ID

	UPROPERTY(EditAnywhere, Category = Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4EntityType EntityType;

	UPROPERTY(EditAnywhere, Category = Common)
	FSoftObjectPath EntityAssetPath;

	UPROPERTY(EditAnywhere, Category = Common)
	FName SkinName; // #135 : 기본 스킨

	UPROPERTY(EditAnywhere, Category = Common)
	FName AnimSetName; // #73 : 초기 애니메이션 로딩 타임이 있음으로 가급적 스폰시에도 설정하도록 처리한다.
	
	UPROPERTY(EditAnywhere, Category = Common)
	FName StanceName; // #73, #111

	UPROPERTY(EditAnywhere, Category = Common)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, Category = Common)
	FRotator SpawnRotation;

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveSpeed; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	FName DBKeyName;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bPlayer;
	   
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Common)
	bool bUseMirrorActor; // #140 : 미러링 Actor 로 생성 여부

	UPROPERTY(EditAnywhere, Category = Common)
	ET4LayerType MirrorSourceType; // #140 : 미러링 Actor 하 후킹할 Source Layer Type
#endif

public:
	FT4WorldSpawnActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, Name(NAME_None)
		, EntityType(ET4EntityType::None)
		, SkinName(NAME_None) // #135
		, AnimSetName(NAME_None) // #73
		, StanceName(NAME_None) // #73, #111
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
		, MoveSpeed(0.0f) // #140
		, DBKeyName(NAME_None)
		, bPlayer(false)
#if WITH_EDITORONLY_DATA
		, bUseMirrorActor(false) // #140 : 미러링 Actor 로 생성 여부
		, MirrorSourceType(ET4LayerType::Max) // #140 : 미러링 Actor 하 후킹할 Source Layer Type
#endif
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::WorldSpawn; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EntityType::None == EntityType)
		{
			OutMsg = TEXT("Not set EntityType");
			return false;
		}
		if (!EntityAssetPath.IsValid())
		{
			OutMsg = TEXT("Invalid EntityAssetPath");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WorldSpawnAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4WorldDespawnActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActorID ActorID;

	UPROPERTY(EditAnywhere, Category = Common)
	float FadeOutTimeSec; // #67, #78

public:
	FT4WorldDespawnActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, FadeOutTimeSec(T4Const_ObjectWorldLeaveTimeSec) // #67, #78
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::WorldDespawn; }

	bool Validate(FString& OutMsg) override
	{
		if (!ActorID.IsValid())
		{
			OutMsg = TEXT("Invalid ActorID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WorldDespawnAction"));
	}
};