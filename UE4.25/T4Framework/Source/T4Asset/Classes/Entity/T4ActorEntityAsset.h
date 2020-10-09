// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4EntityAsset.h"
#include "T4ActorEntityAsset.generated.h"

/**
  * #118
 */
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4ActorEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	void SetThumbnailImage(UTexture2D* InImage) override; // #163 : 에디터용에서 컨텐츠 용도로 변경
	void SetThumbnailData(const FVector& InLocation, const FRotator& InRotation) // #163
	{
		ThumbnailData.Location = InLocation;
		ThumbnailData.Rotation = InRotation;
	}
	const FT4EntityThumbnailData* GetThumbnailData() const { return &ThumbnailData; } // #163

public:
	UPROPERTY(EditAnywhere, Category = Hide)
	FT4EntityThumbnailData ThumbnailData;

	UPROPERTY(EditAnywhere, Category = Hide)
	UTexture2D* ThumbnailImage; // #163 : 에디터용에서 컨텐츠 용도로 변경
};
