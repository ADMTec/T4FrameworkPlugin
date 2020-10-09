// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameData/Public/T4GameDBTypes.h" // #163
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "T4QFComposite_T4Dialogue.generated.h"

/**
  * #163
 */
class UBehaviorTreeComponent;
UCLASS()
class T4GAMEPLAY_API UT4QFComposite_T4Dialogue : public UBTComposite_Sequence
{
	GENERATED_BODY()

public:
	UT4QFComposite_T4Dialogue();

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;

#if WITH_EDITOR
	FName GetNodeIconName() const override;
#endif

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4TitleTextDBKey TitleTextDBKey; // #163
};
