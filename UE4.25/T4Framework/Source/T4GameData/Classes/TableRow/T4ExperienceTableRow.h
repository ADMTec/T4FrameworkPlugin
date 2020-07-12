// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataTypes.h" // #68

#include "T4ExperienceTableRow.generated.h"

/**
  * #114
 */
class UT4ActionPakAsset;

USTRUCT()
struct FT4ExperienceTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4ExperienceDBRowDetails::CustomizeDetails

	// #T4_ADD_EXPERIENCE_CONTENT_TAG
	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatCategory StatCategory; // #114 : 사용처를 명시한다.

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatLevel StatLevel;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1000"))
	float Required_EXP; // #114 : 경험치, 상대적, Required EXP

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1000000"))
	float Total_Required_EXP; // #114 : 경험치, 절대적, Total Required EXP

public:
	FT4ExperienceTableRow()
		: Version(0) // #135
		, StatCategory(ET4GameStatCategory::None) // #114 : 사용처를 명시한다.
		, StatLevel(ET4GameStatLevel::Max)
		, Required_EXP(0.0f)
		, Total_Required_EXP(0.0f)
	{
	}
};
