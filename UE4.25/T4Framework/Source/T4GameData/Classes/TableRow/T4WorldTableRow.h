// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"
#include "T4Engine/Public/T4EngineConstants.h"
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

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Title_Text; // #164

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Description_Text; // #164

	UPROPERTY(EditAnywhere, Category= Common)
	FName WorldTimeTag;

	UPROPERTY(EditAnywhere, Category= Common, meta = (ClampMin = "0.1", ClampMax = "5000"))
	float WorldTimeScale;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4MapEntityAsset> EntityAsset;

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4WorldTableRow()
		: Version(EVersion::LatestVersion) // #135
		, WorldTimeTag(T4Const_WorldTimeTagDayName)
		, WorldTimeScale(1.0f)
	{
	}
};
