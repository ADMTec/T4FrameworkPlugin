// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/BTService.h"
#include "T4BTService_T4Update.generated.h"

/**
  * #50, #114
 */
class UBehaviorTreeComponent;
UCLASS()
class UT4BTService_T4Update : public UBTService
{
	GENERATED_BODY()

public:
	UT4BTService_T4Update();

protected:
	void TickNode(
		UBehaviorTreeComponent& InOwnerComp, 
		uint8* InNodeMemory, 
		float InDeltaTime
	) override;
};
