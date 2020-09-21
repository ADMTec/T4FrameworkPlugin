// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4QuestTableRow.generated.h"

/**
  * #146
 */
class UT4ContentSpawnAsset;

// #164
class UT4QuestFlowAsset;
USTRUCT()
struct FT4ContentMissionData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameQuestTarget QuestTarget; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TSoftObjectPtr<UT4QuestFlowAsset> QuestFlowAsset;

public:
	FT4ContentMissionData()
		: QuestTarget(ET4GameQuestTarget::Personal)
	{
	}
};

USTRUCT()
struct FT4ContentWorldSettings
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bApplyTimeSync;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bApplyTimeSync", ClampMin = "0.0", ClampMax = "24.0"))
	float WorldTimeHour;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bApplyTimeSync", ClampMin = "0.1", ClampMax = "5000.0"))
	float WorldTimeScale;

public:
	FT4ContentWorldSettings()
		: bApplyTimeSync(false)
		, WorldTimeHour(12.0f)
		, WorldTimeScale(1.0f)
	{
	}
};

USTRUCT()
struct FT4QuestTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4QuestDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Title_Text; // #164

	UPROPERTY(EditAnywhere, Category = Common)
	FText UI_Description_Text; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameQuestTarget QuestTarget; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TSoftObjectPtr<UT4QuestFlowAsset> QuestFlowAsset;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameMissionType QuestMissionType;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameMissionRule QuestMissionRule; // #164

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UT4ContentSpawnAsset> QuestSpawnAsset;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ContentWorldSettings WorldSettings;

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4WorldDBKey WorldDBKey;

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4QuestTableRow()
		: Version(EVersion::LatestVersion) // #135
		, QuestTarget(ET4GameQuestTarget::Personal) // #164
		, QuestMissionType(ET4GameMissionType::None)
		, QuestMissionRule(ET4GameMissionRule::None)
	{
	}
};
