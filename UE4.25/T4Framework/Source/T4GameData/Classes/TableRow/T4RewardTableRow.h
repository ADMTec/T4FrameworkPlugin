// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataTypes.h" // #68

#include "T4RewardTableRow.generated.h"

/**
  * #164
 */
USTRUCT()
struct FT4RewardTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4RewardDBRowDetails::CustomizeDetails

	// #T4_ADD_Reward_CONTENT_TAG
	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameDBKey ItemGameDBKey;

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4RewardTableRow()
		: Version(EVersion::LatestVersion) // #135
	{
	}
};
