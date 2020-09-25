// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataTypes.h" // #68

#include "T4StatTableRow.generated.h"

/**
  * #114
 */
USTRUCT()
struct FT4StatTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4StatDBRowDetails::CustomizeDetails

	// #T4_ADD_STAT_CONTENT_TAG
	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FString UI_Title; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatCategory StatCategory; // #114 : 사용처를 명시한다.

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "10000"))
	float Health_Point; // #114 : 피, 체력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1000"))
	float Striking_Power; // #114 : 공격력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1000"))
	float Defensive_Power; // #114 : 방어력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float Hit_Rate; // #114 : 명중률

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float Dodge_Rate; // #114 : 회피률

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4StatTableRow()
		: Version(EVersion::LatestVersion) // #135
		, StatCategory(ET4GameStatCategory::None) // #114 : 사용처를 명시한다.
		, Health_Point(100.0f)
		, Striking_Power(10.0f)
		, Defensive_Power(10.0f)
		, Hit_Rate(0.1f)
		, Dodge_Rate(0.1f)
	{
	}
};
