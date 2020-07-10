// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "T4BTTask_T4Attack.generated.h"

/**
  * #50, #114
 */
class UBehaviorTree;
UCLASS(hidecategories = Wait)
class UT4BTTask_T4Attack : public UBTTask_Wait
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory
	) override;

protected:
	/** ticks this task
	 * this function should be considered as const (don't modify state of object) if node is not instanced! */
	void TickTask(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory,
		float InDeltaSeconds
	) override;
};
