// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"
#include "T4GameDataTypes.h" // #163
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

	UPROPERTY(EditAnywhere, Category = Hide)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4GameTextCategory TextCategory; // #163 : 어디에서 사용되는지 명시적으로 지정

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FString SourceString; // #164

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
		, TextCategory(ET4GameTextCategory::Name)
	{
	}
};
