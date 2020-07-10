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
};
