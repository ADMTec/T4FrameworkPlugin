// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "T4QFComposite_T4Mission.generated.h"

/**
  * #168
 */
UCLASS()
class T4GAMEPLAY_API UT4QFComposite_T4Mission : public UBTComposite_Sequence
{
	GENERATED_BODY()

public:
	UT4QFComposite_T4Mission();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;
};
