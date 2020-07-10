// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4ItemTableRowBase.h" // #48
#include "T4CostumeTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4CostumeEntityAsset;

USTRUCT()
struct FT4CostumeTableRow : public FT4ItemTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4CostumeDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ItemStatDBKey ItemStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4CostumeEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	FName ExchangePartName;

public:
	FT4CostumeTableRow()
		: Version(0) // #135
	{
	}
};
