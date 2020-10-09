// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameData/Public/T4GameDataTypes.h"
#include "T4GameData/Public/T4GameDataStructs.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "T4QFComposite_T4Mission.generated.h"

/**
  * #168, #163
 */
class UT4SpawnAsset;
UCLASS()
class T4GAMEPLAY_API UT4QFComposite_T4Mission : public UBTComposite_Sequence
{
	GENERATED_BODY()

public:
	UT4QFComposite_T4Mission();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4MissionTextDBKey MissionTextDBKey; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameMissionType MissionType; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameMissionRule MissionRule; // #164

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UT4SpawnAsset> MissionSpawnAsset;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4GameWorldSettings OverrideWorldSettings;
};
