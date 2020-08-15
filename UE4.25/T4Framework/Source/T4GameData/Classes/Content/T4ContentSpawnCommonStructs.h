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
		: WaypointName(NAME_None)
#if WITH_EDITORONLY_DATA
		, LineColor(FColorList::Red)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (WaypointName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4SpawnWaypointData& InRhs) const
	{
		return (WaypointName == InRhs.WaypointName) ? true : false;
	}

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FName WaypointName;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TSoftObjectPtr<UT4PathSegmentData> PathSegmentData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FColor LineColor;
#endif
};
