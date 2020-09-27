// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "T4BFTask_T4JumpToTarget.generated.h"

/**
 * #140
 */
class UBehaviorTree;
UCLASS(hidecategories= (Task))
class T4GAMEPLAY_API UT4BFTask_T4JumpToTarget : public UBTTask_Wait
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;
};
