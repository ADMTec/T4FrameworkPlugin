// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4ItemTableRowBase.h" // #48
#include "T4GoodsTableRow.generated.h"

/**
  * #164
 */
class UT4GoodsEntityAsset;

USTRUCT()
struct FT4GoodsTableRow : public FT4ItemTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4GoodsDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ItemStatDBKey ItemStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4EffectDBKey InitializeEffectDBKey; // #158 : Exchange 시 자신에게 사용될 Effect 효과

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4GoodsEntityAsset> EntityAsset;

public:
	FT4GoodsTableRow()
		: Version(0) // #135
	{
	}
};
