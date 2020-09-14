// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4ContentTableRow.generated.h"

/**
  * #146
 */
class UT4ContentSpawnAsset;

USTRUCT()
struct FT4ContentWorldData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4WorldDBKey WorldDBKey;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	FName WorldTimeTag;

	UPROPERTY(EditAnywhere, Category= ServerOnly, meta = (ClampMin = "0.1", ClampMax = "5000"))
	float WorldTimeScale;

public:
	FT4ContentWorldData()
		: WorldTimeTag(NAME_None)
		, WorldTimeScale(1.0f)
	{
	}
};

// #164
USTRUCT()
struct FT4ContentQuestData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameQuestTarget QuestTarget; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameQuestType QuestType; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameQuestRule QuestRule; // #164

public:
	FT4ContentQuestData()
		: QuestTarget(ET4GameQuestTarget::None) // #164
		, QuestType(ET4GameQuestType::None) // #164
		, QuestRule(ET4GameQuestRule::None) // #164
	{
	}
};

USTRUCT()
struct FT4ContentTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4ContentDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ContentWorldData ContentWorldData;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bUseQuestContent; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bUseQuestContent"))
	FT4ContentQuestData ContentQuestData;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UT4ContentSpawnAsset> ContentSpawnAsset;

	UPROPERTY(EditAnywhere, Category = Hide)
	ET4GameChainCallFunction ChainCallFunction; // #164

	UPROPERTY(EditAnywhere, Category = Hide)
	FT4ContentDBKey ChainContentDBKey; // #164

public:
	FT4ContentTableRow()
		: Version(0) // #135
		, bUseQuestContent(false) // #164
		, ChainCallFunction(ET4GameChainCallFunction::None) // #164
	{
	}
};
