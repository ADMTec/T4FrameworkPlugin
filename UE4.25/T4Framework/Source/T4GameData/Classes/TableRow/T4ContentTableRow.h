// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4ContentTableRow.generated.h"

/**
  * #146
 */
class UT4ContentSpawnAsset;

USTRUCT()
struct FT4ContentTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4ContentDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4WorldDBKey WorldDBKey;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FName WorldTimeTag;

	UPROPERTY(EditAnywhere, Category= ServerOnly, meta = (ClampMin = "0.1", ClampMax = "5000"))
	float WorldTimeScale;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UT4ContentSpawnAsset> ContentSpawnAsset;

public:
	FT4ContentTableRow()
		: Version(0) // #135
		, WorldTimeTag(NAME_None)
		, WorldTimeScale(1.0f)
	{
	}
};
