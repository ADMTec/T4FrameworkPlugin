// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4ItemTableRowBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBehaviorTree;
USTRUCT()
struct FT4ItemTableRowBase : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath; // DropItem

public:
	FT4ItemTableRowBase()
	{
	}
};
