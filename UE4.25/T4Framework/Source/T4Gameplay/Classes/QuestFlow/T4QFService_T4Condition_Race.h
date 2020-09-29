// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4QFService_T4ConditionBase.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "T4QFService_T4Condition_Race.generated.h"

/**
  * #168
 */
class UBehaviorTreeComponent;
UCLASS()
class T4GAMEPLAY_API UT4QFService_T4Condition_Race : public UT4QFService_T4ConditionBase
{
	GENERATED_BODY()

public:
	UT4QFService_T4Condition_Race();

	ET4QFBranchConditionType GetConditionType() const override { return ET4QFBranchConditionType::Race; }

	bool CheckCondition(UBehaviorTreeComponent& InOwnerComp) const override;

	FString GetStaticDescription() const override;

protected:
	void TickNode(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float InDeltaTime) override;

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FName RaceName; // #168
};