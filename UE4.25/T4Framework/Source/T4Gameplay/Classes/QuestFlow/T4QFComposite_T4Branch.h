// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "T4QFComposite_T4Branch.generated.h"

/**
  * #168
 */
class UBTCompositeNode;
UCLASS()
class T4GAMEPLAY_API UT4QFComposite_T4Branch : public UBTComposite_Selector
{
	GENERATED_BODY()

public:
	UT4QFComposite_T4Branch();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;

private:
	bool CheckConditionInServices(UBehaviorTreeComponent& InOwnerComp, const TArray<UBTService*>& InChildServices) const;
};
