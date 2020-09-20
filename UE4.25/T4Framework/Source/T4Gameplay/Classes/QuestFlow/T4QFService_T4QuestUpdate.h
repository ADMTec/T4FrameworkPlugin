// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "BehaviorTree/BTService.h"
#include "T4QFService_T4QuestUpdate.generated.h"

/**
  * #164
 */
class UBehaviorTreeComponent;
UCLASS()
class T4GAMEPLAY_API UT4QFService_T4QuestUpdate : public UBTService
{
	GENERATED_BODY()

public:
	UT4QFService_T4QuestUpdate();

protected:
	void TickNode(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float InDeltaTime) override;
};
