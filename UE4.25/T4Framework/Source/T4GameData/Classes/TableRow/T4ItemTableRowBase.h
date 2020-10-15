// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4ItemTableRowBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4BehaviorFlowAsset;
USTRUCT()
struct FT4ItemTableRowBase : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= ServerOnly)
	ET4GameItemBehaviorType DropItemBehaviorType; // DropItem (TODO)

public:
	FT4ItemTableRowBase()
		: DropItemBehaviorType(ET4GameItemBehaviorType::None) // TODO
	{
	}
};
