// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDBTypes.h"
#include "T4GameDataStructs.generated.h"

/**
  * #168
 */
USTRUCT()
struct FT4RewardItemPackageData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4GameDBKey ItemDBKey;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0", ClampMax = "100"))
	int32 ItemCount;

public:
	FT4RewardItemPackageData()
		: ItemCount(0)
	{
	}

	FORCEINLINE bool operator==(const FT4GameDBKey& InKey) const
	{
		return (ItemDBKey == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4RewardItemPackageData& InRhs) const
	{
		return (ItemDBKey == InRhs.ItemDBKey) ? true : false;
	}
};

USTRUCT()
struct T4GAMEDATA_API FT4GameWorldSettings
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bApplyTimeSync;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bApplyTimeSync", ClampMin = "0.0", ClampMax = "24.0"))
	float WorldTimeHour;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bApplyTimeSync", ClampMin = "0.1", ClampMax = "5000.0"))
	float WorldTimeScale;

public:
	FT4GameWorldSettings()
		: bApplyTimeSync(false)
		, WorldTimeHour(12.0f)
		, WorldTimeScale(1.0f)
	{
	}
};