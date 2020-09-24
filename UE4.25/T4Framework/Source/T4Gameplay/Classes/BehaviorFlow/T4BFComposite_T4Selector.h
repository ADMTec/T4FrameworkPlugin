// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "T4BFComposite_T4Selector.generated.h"

/**
  * #167
 */
UCLASS()
class T4GAMEPLAY_API UT4BFComposite_T4Selector : public UBTComposite_Selector
{
	GENERATED_BODY()

public:
	UT4BFComposite_T4Selector();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;
};
