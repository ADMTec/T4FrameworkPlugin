// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "T4QFComposite_T4Quest.generated.h"

/**
  * #168
 */
class UBehaviorTreeComponent;
UCLASS()
class T4GAMEPLAY_API UT4QFComposite_T4Quest : public UBTComposite_Sequence
{
	GENERATED_BODY()

public:
	UT4QFComposite_T4Quest();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;

#if WITH_EDITOR
	FName GetNodeIconName() const override;
#endif
};
