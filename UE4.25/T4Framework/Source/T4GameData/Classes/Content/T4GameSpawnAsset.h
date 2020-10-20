// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "Common/T4CommonAssetStructs.h" // #103
#include "Spawn/T4SpawnPrefabStructs.h" // #155
#include "Spawn/T4SpawnObjectStructs.h" // #155
#include "T4GameSpawnAsset.generated.h"

/**
  * #118
 */
struct FT4GameSpawnVersion
{
	enum Type
	{
		InitializeVer = 0,

		PropertyNameChanged, // #158 : PathSegmentData => PathSegmentAsset

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4GAMEDATA_API const static FGuid GUID;

private:
	FT4GameSpawnVersion() {}
};

// #163
USTRUCT()
struct T4GAMEDATA_API FT4SpawnDefaultSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnDefaultSettings()
		: StartSpawnLocation(FVector::ZeroVector)
		, StartSpawnRotation(FRotator::ZeroRotator)
	{
	}

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FVector StartSpawnLocation;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FRotator StartSpawnRotation;
};

// #126
USTRUCT()
struct T4GAMEDATA_API FT4SpawnTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnTestSettings()
#if WITH_EDITOR
		: PlayerDBKeyName(NAME_None)
		, WeaponDBKeyName(NAME_None)
		, StanceName(NAME_None)
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
#endif
};

class UTexture2D;
class UT4GameProjectAsset;
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4GAMEDATA_API UT4GameSpawnAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	void PostLoad() override;

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4SpawnDefaultSettings DefaultSettings; // #163

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TArray<FT4SpawnPrefabData> SpawnPrefabArray;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TArray<FT4SpawnObjectData> SpawnObjectArray;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor, AssetRegistrySearchable)
	TSoftObjectPtr<UT4GameProjectAsset> GameProjectAsset;

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4SpawnTestSettings TestSettings; // #126

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif
};