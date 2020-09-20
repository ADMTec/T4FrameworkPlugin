// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "T4ATTask_T4DetermineNextPoint.generated.h"

/**
  * #50, #156
 */
class UBehaviorTreeComponent;
UCLASS(hidecategories = (Task))
class T4GAMEPLAY_API UT4ATTask_T4DetermineNextPoint : public UBTTaskNode
{
	GENERATED_UCLASS_BODY()

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;
};
