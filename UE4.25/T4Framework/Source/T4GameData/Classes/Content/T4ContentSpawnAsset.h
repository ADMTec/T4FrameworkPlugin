// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDBTypes.h"
#include "Common/T4CommonAssetStructs.h" // #103
#include "T4ContentSpawnAsset.generated.h"

/**
  * #118
 */
struct FT4ContentSpawnVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4GAMEDATA_API const static FGuid GUID;

private:
	FT4ContentSpawnVersion() {}
};

// #114
USTRUCT()
struct T4GAMEDATA_API FT4ContentOverrideBehaviorData // #114
{
	GENERATED_USTRUCT_BODY()

public:
	// #114
	// FT4BuiltinNPCAIBehaviorData : AIController (Runtime)
	// FT4NPCBehaviorData : NPC DataTable (Original Set)
	// FT4ContentOverrideBehaviorData : Spawn Asset (Instance Set)

	// Override
	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_EnemyType;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_Aggressive;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_ActiveOrKeepAggroTimeSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bOverride_AgentRadius;

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

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (editcondition = "bOverride_AgentRadius"))
	float AgentRadius; // #114 : Agent 크기 및 Attack/Stop Distance 에서 겹치지 않기 위한 값으로 사용 (WorldActor = BoundRadius)

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

public:
	FT4ContentOverrideBehaviorData()
		: bOverride_EnemyType(false)
		, bOverride_Aggressive(false)
		, bOverride_ActiveOrKeepAggroTimeSec(false)
		, bOverride_AgentRadius(false)
		, bOverride_SensoryRange(false)
		, bOverride_RomaingRange(false)
		, bOverride_RoamingRate(false)
		, bOverride_JumpRate(false) // #140
		, bOverride_IdleWaitTimeSec(false)
		, EnemyType(ET4GameEnemyType::None) // #104
		, bAggressive(false)
		, ActiveOrKeepAggroTimeSec(0.0f)
		, AgentRadius(0.0f) // #114 : Agent 크기 및 Attack/Stop Distance 에서 겹치지 않기 위한 값으로 사용 (WorldActor = BoundRadius)
		, SensoryRange(0.0f)
		, RomaingRange(0.0f)
		, RoamingRate(0.0f)
		, JumpRate(0.0f)
		, IdleWaitTimeSec(5.0f)
	{
	}
};

USTRUCT()
struct T4GAMEDATA_API FT4ContentSpawnEntityData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ContentSpawnEntityData()
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

	FORCEINLINE bool operator==(const FT4ContentSpawnEntityData& InRhs) const
	{
		return (ID == InRhs.ID) ? true : false;
	}

	// FT4ContentSpawnEntityDetails::CustomizeDetails

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName ID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4NPCDBKey NPCDBKey;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ContentOverrideBehaviorData OverrideBehaviorData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FString Description;

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName ParentID; // #122

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName FolderName; // #122
#endif
};

USTRUCT()
struct T4GAMEDATA_API FT4ContentSpawnActorData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ContentSpawnActorData()
		: SpawnEntityID(NAME_None)
#if WITH_EDITORONLY_DATA
		, DebugColor(FColorList::White)
		, ParentID(NAME_None) // #122
		, FolderName(NAME_None) // #122
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ID == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4ContentSpawnActorData& InRhs) const
	{
		return (ID == InRhs.ID) ? true : false;
	}

	// FT4ContentSpawnActorDetails::CustomizeDetails

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName ID;

	UPROPERTY(VisibleAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FName SpawnEntityID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FTransform Transform;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FString Description;

	UPROPERTY(EditAnywhere, Category = Editor)
	FColor DebugColor;

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName ParentID; // #122

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName FolderName; // #122
#endif
};

// #126
USTRUCT()
struct T4GAMEDATA_API FT4ContentSpawnTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ContentSpawnTestSettings()
#if WITH_EDITOR
		: PlayerDBKeyName(NAME_None)
		, WeaponDBKeyName(NAME_None)
		, StanceName(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FName PlayerDBKeyName;

	UPROPERTY(EditAnywhere, Category = Editor)
	FName WeaponDBKeyName;

	UPROPERTY(EditAnywhere, Category = Editor)
	FName StanceName;

	UPROPERTY(EditAnywhere, Category = Editor)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, Category = Editor)
	FRotator SpawnRotation;
#endif
};

class UTexture2D;
class UT4ContentBuildAsset;
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4GAMEDATA_API UT4ContentSpawnAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	void PostLoad() override;

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TArray<FT4ContentSpawnEntityData> SpawnEntityArray;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TArray<FT4ContentSpawnActorData> SpawnActorArray;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor, AssetRegistrySearchable)
	TSoftObjectPtr<UT4ContentBuildAsset> ContentBuildAsset;

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4ContentSpawnTestSettings TestSettings; // #126

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif
};