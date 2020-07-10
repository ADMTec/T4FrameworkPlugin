// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "Entity/T4MapEntityAsset.h" // #87
#include "Common/T4CommonAssetStructs.h" // #103
#include "T4WorldExploreAsset.generated.h"

/**
  * #83
 */
struct FT4WorldExploreCustomVersion
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
	FT4WorldExploreCustomVersion() {}
};

class UTexture2D;
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4WorldExploreAsset : public UObject
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
	UPROPERTY(EditAnywhere, Category = Common, meta = (DisplayName = "Map Entity Asset"))
	TSoftObjectPtr<UT4MapEntityAsset> MapEntityAsset; // #87

#if WITH_EDITORONLY_DATA
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
