// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"
#include "T4GameDataStructs.h"
#include "T4QuestTableRow.generated.h"

/**
  * #146
 */
class UT4SpawnAsset;

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
		: QuestTarget(ET4GameQuestTarget::All)
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
	FT4QuestTextDBKey TitleTextDBKey; // #164

	UPROPERTY(EditAnywhere, Category = Common)
	FT4QuestTextDBKey DescriptionTextDBKey; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4WorldDBKey WorldDBKey;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4GameWorldSettings OverrideWorldSettings;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameQuestTarget QuestTarget; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bUseMultipleMissions; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bUseMultipleMissions"))
	TSoftObjectPtr<UT4QuestFlowAsset> QuestFlowAsset;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "!bUseMultipleMissions"))
	ET4GameMissionType QuestMissionType;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "!bUseMultipleMissions"))
	ET4GameMissionRule QuestMissionRule; // #164

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UT4SpawnAsset> QuestSpawnAsset;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4RewardDBKey RewardDBKey; // #168

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
		, QuestTarget(ET4GameQuestTarget::All) // #164
		, bUseMultipleMissions(false)
		, QuestMissionType(ET4GameMissionType::None)
		, QuestMissionRule(ET4GameMissionRule::None)
	{
	}
};
