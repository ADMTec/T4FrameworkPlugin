// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4ContentSpawnCommonStructs.h" // #155
#include "T4ContentSpawnObjectStructs.generated.h"

/**
  * #118
 */
USTRUCT()
struct T4GAMEDATA_API FT4ContentSpawnObjectData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ContentSpawnObjectData()
		: ID(NAME_None)
		, PrefabID(NAME_None)
#if WITH_EDITORONLY_DATA
		, DebugColor(FColorList::White)
		, ParentID(NAME_None) // #122
		, FolderName(NAME_None) // #122
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ID == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4ContentSpawnObjectData& InRhs) const
	{
		return (ID == InRhs.ID) ? true : false;
	}

	// FT4ContentSpawnObjectDetails::CustomizeDetails

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName ID;

	UPROPERTY(VisibleAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FName PrefabID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FTransform Transform;

	//UPROPERTY(EditAnywhere, Category = ServerOnly)
	//FT4SpawnWaypointData WaypointData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FString Description;

	UPROPERTY(EditAnywhere, Category = Editor)
	FColor DebugColor;

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName ParentID; // #122

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName FolderName; // #122
#endif
};
