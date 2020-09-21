// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameData/Public/T4GameDataTypes.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "T4QFTask_T4MissionCue.generated.h"

/**
  * #164
 */
class UT4SpawnAsset;
class UBehaviorTreeComponent;
UCLASS(hidecategories = (Task))
class T4GAMEPLAY_API UT4QFTask_T4MissionCue : public UBTTaskNode
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4TextDBKey TextDBKey; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FGuid MissionGuid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameMissionType MissionType; // #164

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameMissionRule MissionRule; // #164

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UT4SpawnAsset> MissionSpawnAsset;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bApplyTimeSync;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bApplyTimeSync", ClampMin = "0.0", ClampMax = "24.0"))
	float WorldTimeHour;

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bApplyTimeSync", ClampMin = "0.1", ClampMax = "5000.0"))
	float WorldTimeScale;
};
