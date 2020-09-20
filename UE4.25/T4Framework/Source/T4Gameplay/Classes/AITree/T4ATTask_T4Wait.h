// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "T4ATTask_T4Wait.generated.h"

/**
 * #50, #114 : refer BTTask_WaitBlackboardTime
 */
class UBehaviorTreeComponent;
UCLASS(hidecategories= (Wait, Task))
class T4GAMEPLAY_API UT4ATTask_T4Wait : public UBTTask_Wait
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;

protected:
	void TickTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float InDeltaSeconds) override;
};
