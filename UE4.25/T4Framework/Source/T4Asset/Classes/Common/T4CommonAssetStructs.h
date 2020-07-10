// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4CommonAssetStructs.generated.h"

/**
  * #100
 */
USTRUCT()
struct T4ASSET_API FT4EditorBookmarkData
{
	GENERATED_USTRUCT_BODY()

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FString Name; // #103

	UPROPERTY(EditAnywhere, Category = Hide)
	FName MapEntityName;

	UPROPERTY(EditAnywhere, Category = Hide)
	float WorldTimeHour;

	UPROPERTY(EditAnywhere, Category = Hide)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, Category = Hide)
	FRotator SpawnRotation;
#endif

public:
	FT4EditorBookmarkData()
#if WITH_EDITORONLY_DATA
		: MapEntityName(NAME_None)
		, WorldTimeHour(12.0f)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
#endif
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4EditorTestAutomationData
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	TArray<FT4EditorBookmarkData> Bookmarks;
#endif
};
