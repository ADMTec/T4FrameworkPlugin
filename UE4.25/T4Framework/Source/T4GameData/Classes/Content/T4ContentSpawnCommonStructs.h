// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4Asset/Classes/Data/T4PathSegmentData.h" // #155
#include "T4ContentSpawnCommonStructs.generated.h"

/**
  * #155
 */
USTRUCT()
struct T4GAMEDATA_API FT4SpawnWaypointData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnWaypointData()
#if WITH_EDITORONLY_DATA
		: DebugColor(FColorList::White)
#endif
	{
	}

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TSoftObjectPtr<UT4PathSegmentData> PathSegmentData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FColor DebugColor;
#endif
};
