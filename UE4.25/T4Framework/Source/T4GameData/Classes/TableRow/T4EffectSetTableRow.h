// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataTypes.h" // #116

#include "T4EffectSetTableRow.generated.h"

/**
  * #135
 */
USTRUCT()
struct FT4EffectSetTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4EffectSetDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Title_Text; // #164

	// #T4_ADD_EFFECT_TAG_DATA

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FT4EffectDBKey HitDBKey_Normal;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FT4EffectDBKey KnockbackDBKey_Normal;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FT4EffectDBKey AirborneDBKey_Normal;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FT4EffectDBKey StunDBKey_Normal;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FT4EffectDBKey MisDBKey_Normal;

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4EffectSetTableRow()
		: Version(EVersion::LatestVersion) // #135
	{
	}
};
