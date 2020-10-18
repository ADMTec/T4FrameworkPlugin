// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDBTypes.h"
#include "Common/T4CommonAssetStructs.h" // #103
#include "T4GameProjectAsset.generated.h"

/**
  * #118
 */
struct FT4GameProjectVersion
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
	FT4GameProjectVersion() {}
};

class UT4GameSpawnAsset;
class UT4MapEntityAsset;
USTRUCT()
struct T4GAMEDATA_API FT4SpawnLayerData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnLayerData()
		: ID(NAME_None)
#if WITH_EDITORONLY_DATA
		, WorldTimeTag(NAME_None)
		, ParentID(NAME_None) // #122
		, FolderName(NAME_None) // #122
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ID == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4SpawnLayerData& InRhs) const
	{
		return (ID == InRhs.ID) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = Editor)
	FName ID;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4GameSpawnAsset> SpawnAsset;

	UPROPERTY(VisibleAnywhere, Category = Editor)
	FName WorldTimeTag;
	
	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4MapEntityAsset> MapEntityAsset; // #140

	UPROPERTY(EditAnywhere, Category = Editor)
	FString Description;

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName ParentID; // #122

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName FolderName; // #122
#endif
};

class UTexture2D;
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4GAMEDATA_API UT4GameProjectAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	void PostLoad() override;

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif // WITH_EDITOR

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FName ProjectGameName; // #172 : 이 Project 가 사용하는 GameDB

	UPROPERTY(EditAnywhere, Category = Editor)
	TArray<FT4SpawnLayerData> SpawnLayerArray;

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4EditorTestAutomationData TestAutomation; // #100, #103

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};