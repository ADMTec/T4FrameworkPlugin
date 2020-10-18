// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4SpawnCommonStructs.h" // #155
#include "T4SpawnObjectStructs.generated.h"

/**
  * #118
 */
USTRUCT()
struct T4GAMEDATA_API FT4SpawnObjectData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SpawnObjectData()
		: ID(NAME_None)
		, PrefabID(NAME_None)
#if WITH_EDITORONLY_DATA
		, DebugColor(FColorList::Black)
		, ParentID(NAME_None) // #122
		, FolderName(NAME_None) // #122
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ID == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4SpawnObjectData& InRhs) const
	{
		return (ID == InRhs.ID) ? true : false;
	}

	// FT4SpawnObjectDetails::CustomizeDetails

	UPROPERTY(VisibleAnywhere, Category = ServerOnly)
	FName ID;

	UPROPERTY(VisibleAnywhere, Category = ServerOnly)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FName PrefabID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FTransform Transform;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	TArray<FT4SpawnWaypointData> WaypointDatas;

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
