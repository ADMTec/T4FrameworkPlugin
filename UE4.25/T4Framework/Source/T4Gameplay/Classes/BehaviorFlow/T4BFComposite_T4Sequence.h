// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "T4BFComposite_T4Sequence.generated.h"

/**
  * #167
 */
UCLASS()
class T4GAMEPLAY_API UT4BFComposite_T4Sequence : public UBTComposite_Sequence
{
	GENERATED_BODY()

public:
	UT4BFComposite_T4Sequence();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;
};
