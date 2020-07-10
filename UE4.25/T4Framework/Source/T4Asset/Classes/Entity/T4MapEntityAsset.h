// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4EntityAsset.h"
#include "T4MapEntityAsset.generated.h"

/**
  * #35
 */
struct FT4MapEntityCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4MapEntityCustomVersion() {}
};

// #84, #104 : WorldAsset 의 Tile 을 MapEntity 로 이전!
static const FName T4Const_DefaultPersistentThumbnailName = TEXT("PersistentLevel"); // #118
USTRUCT()
struct T4ASSET_API FT4LevelThumbnailData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4LevelThumbnailData()
#if WITH_EDITOR
		: ImageWidth(0)
		, ImageHeight(0)
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor) /** Thumbnail width (serialized) */
	int32 ImageWidth;

	UPROPERTY(EditAnywhere, Category = Editor) /** Thumbnail height (serialized) */
	int32 ImageHeight;

	UPROPERTY(EditAnywhere, Category = Editor) /** Compressed image data (serialized) */
	TArray<uint8> CompressedImageData;

	UPROPERTY(Transient) /** Image data bytes */
	TArray<uint8> RawImageData;
#endif
};

// #147 : WorldExplorer 에서 채운다. AT4MapZoneVolume 런타임 생성.
class UT4EnvironmentAsset;
USTRUCT()
struct T4ASSET_API FT4EntityMapZoneData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityMapZoneData()
		: ZoneName(NAME_None)
		, Transform(FTransform::Identity)
		, BlendPriority(0)
		, BlendInTimeSec(1.0f)
		, BlendOutTimeSec(1.0f)
#if WITH_EDITOR
		, DebugColor(FColor::White)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ZoneName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EntityMapZoneData& InRhs) const
	{
		return (ZoneName == InRhs.ZoneName) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	FName ZoneName;

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	FTransform Transform;

	UPROPERTY(VisibleAnywhere, Category = ClientOnly, meta = (ClampMin = "0", UIMin = "0", UIMax = "5"))
	int32 BlendPriority; // #92

	UPROPERTY(VisibleAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "10.0"))
	float BlendInTimeSec; // #92

	UPROPERTY(VisibleAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "10.0"))
	float BlendOutTimeSec; // #92

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4EnvironmentAsset> EnvironmentAsset; // #90, #92

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Editor)
	FColor DebugColor; // #92
#endif
};

USTRUCT()
struct T4ASSET_API FT4EntityMapData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityMapData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UWorld> LevelAsset;
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4MapEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Map; }

#if WITH_EDITOR
	virtual bool IsSpawnable() override // #131
	{
		if (MapData.LevelAsset.IsNull())
		{
			return false;
		}
		return true;
	}
#endif

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4EntityMapData MapData;

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	TArray<FT4EntityMapZoneData> MapZoneDatas; // #147 : WorldExplorer 에서 채운다. AT4MapZoneVolume 런타임 생성.

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TMap<FName, FT4LevelThumbnailData> LevelThumbnailDatas; // #84, #104 : WorldAsset 의 Tile 을 MapEntity 로 이전!
#endif
};
