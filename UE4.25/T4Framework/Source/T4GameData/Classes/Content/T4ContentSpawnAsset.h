// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "Common/T4CommonAssetStructs.h" // #103
#include "T4ContentSpawnPrefabStructs.h" // #155
#include "T4ContentSpawnObjectStructs.h" // #155
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
	TArray<FT4ContentSpawnPrefabData> SpawnPrefabArray;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TArray<FT4ContentSpawnObjectData> SpawnObjectArray;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor, AssetRegistrySearchable)
	TSoftObjectPtr<UT4ContentBuildAsset> ContentBuildAsset;

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4ContentSpawnTestSettings TestSettings; // #126

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif
};