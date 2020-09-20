// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "T4QFTask_T4MissionStart.generated.h"

/**
  * #164
 */
class UBehaviorTreeComponent;
UCLASS(hidecategories = (Task))
class T4GAMEPLAY_API UT4QFTask_T4MissionStart : public UBTTask_Wait
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;

protected:
	void TickTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float InDeltaSeconds) override;

#if WITH_EDITOR
	FName GetNodeIconName() const override;
#endif
};
