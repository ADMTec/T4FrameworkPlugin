// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4AssetTypes.h"
#include "Engine/Scene.h" // #98
#include "T4PostProcessAsset.generated.h"

/**
  * #98, #158
 */
struct FT4PostProcessCustomVersion
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
	FT4PostProcessCustomVersion() {}
};

// #98
USTRUCT()
struct T4ASSET_API FT4PostProcessData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4PostProcessData()

	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FPostProcessSettings Settings; // #98
};

class UTexture2D;
class UT4WorldExploreAsset;
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4PostProcessAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4PostProcessData PostProcessData;

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
