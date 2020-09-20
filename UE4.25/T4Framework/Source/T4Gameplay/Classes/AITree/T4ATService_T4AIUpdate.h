// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/BTService.h"
#include "T4ATService_T4AIUpdate.generated.h"

/**
  * #50, #114
 */
class UBehaviorTreeComponent;
UCLASS(hidecategories = (Service))
class T4GAMEPLAY_API UT4ATService_T4AIUpdate : public UBTService
{
	GENERATED_BODY()

public:
	UT4ATService_T4AIUpdate();

protected:
	void TickNode(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float InDeltaTime) override;
};
