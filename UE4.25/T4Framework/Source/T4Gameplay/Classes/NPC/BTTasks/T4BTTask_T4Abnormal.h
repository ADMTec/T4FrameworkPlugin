// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "T4BTTask_T4Abnormal.generated.h"

/**
  * #135
 */
class UBehaviorTreeComponent;
UCLASS(hidecategories = Wait)
class UT4BTTask_T4Abnormal : public UBTTask_Wait
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;

protected:
	void TickTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float InDeltaSeconds) override;
};
