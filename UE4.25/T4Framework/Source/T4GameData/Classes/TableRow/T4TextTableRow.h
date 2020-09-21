// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"
#include "T4Engine/Public/T4EngineConstants.h"
#include "T4TextTableRow.generated.h"

/**
  * #164
 */
USTRUCT()
struct FT4TextTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4TextDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Title_Text; // #164

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Description_Text; // #164

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4TextTableRow()
		: Version(EVersion::LatestVersion) // #135
	{
	}
};
