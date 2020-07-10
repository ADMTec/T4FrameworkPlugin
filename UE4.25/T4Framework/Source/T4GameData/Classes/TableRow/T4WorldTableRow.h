// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4WorldTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4MapEntityAsset;

USTRUCT()
struct FT4WorldTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4WorldDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4MapEntityAsset> EntityAsset;

public:
	FT4WorldTableRow()
		: Version(0) // #135
	{
	}
};
