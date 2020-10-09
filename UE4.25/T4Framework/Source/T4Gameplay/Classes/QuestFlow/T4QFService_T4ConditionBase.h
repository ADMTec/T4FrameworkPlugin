// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "T4QFService_T4ConditionBase.generated.h"

/**
  * #168
 */
UENUM()
enum class ET4QFBranchConditionType : int8
{
	Race, // Mission
	HP, // Mission
	Level, // Mission

	FirstMeet, // Dialogue

	None,
};

UCLASS()
class T4GAMEPLAY_API UT4QFService_T4ConditionBase : public UBTService
{
	GENERATED_BODY()

public:
	UT4QFService_T4ConditionBase();

	virtual ET4QFBranchConditionType GetConditionType() const { return ET4QFBranchConditionType::None; }
	
	virtual bool CheckCondition(UBehaviorTreeComponent& InOwnerComp) const { return false; }
};
