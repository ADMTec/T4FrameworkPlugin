// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EditorCommon/Classes/ContentTable/T4EditorConstantDataTable.h" // #39
#include "T4ContentConstantDataTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UDataTable;
USTRUCT()
struct T4CONTENTEDITOR_API FT4ContentConstantMasterTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ContentConstantTable)
	TSoftObjectPtr<UDataTable> RacesConstantDataTable; // #114

	UPROPERTY(EditAnywhere, Category = ContentConstantTable)
	TSoftObjectPtr<UDataTable> WaypointConstantDataTable; // #155
};