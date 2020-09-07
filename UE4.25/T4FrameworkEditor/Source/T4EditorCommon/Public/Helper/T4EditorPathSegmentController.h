// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Classes/Data/T4PathSegmentAsset.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4EditorPathSegmentController.generated.h"

/**
  * #155
 */
class UT4PathSegmentAsset;
UCLASS()
class T4EDITORCOMMON_API UT4EditorPathSegmentController : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	DECLARE_MULTICAST_DELEGATE(FT4OnItemRefresh);
	DECLARE_MULTICAST_DELEGATE(FT4OnItemChanged);
	DECLARE_MULTICAST_DELEGATE(FT4OnSelectionChanged);
	DECLARE_MULTICAST_DELEGATE(FT4OnFocusChanged);

	FT4OnItemRefresh& OnItemRefresh() { return OnItemRefreshDelegate; } // #155 : ViewModel 에서 호출
	FT4OnItemChanged& OnItemChanged() { return OnItemChangedDelegate; } // #155 : PathSegmentDetails 에서 호출
	FT4OnSelectionChanged& OnSelectionChanged() { return OnSelectionChangedDelegate; }  // #155 : PathSegmentDetails 에서 호출
	FT4OnFocusChanged& OnFocusChanged() { return OnFocusChangedDelegate; }  // #155 : PathSegmentDetails 에서 호출

	void Reset();

	void SetData(UT4PathSegmentAsset* InPathSegmentAsset);

	int32 GetSelected() const { return PathSegmentIndex; }
	void Select(int32 InPathSegmentIndex) { PathSegmentIndex = InPathSegmentIndex; }

	uint32 NumPoints() const;

	int32 Insert(); // Success != INDEX_NONE
	int32 AddTail(); // Success != INDEX_NONE

	bool Duplicate(const TArray<int32>& InSourceIndices, TArray<int32>& OutNewIndices);

	int32 Remove(int32 InRemoveIndex); // Success != INDEX_NONE
	bool Remove(const TArray<int32>& InRemoveIndices);

	void Flush();

	bool CopyTo(FT4PathSegmentPoint& OutData);
	bool CopyFrom(const FT4PathSegmentPoint& InData);

private:
	void GeneratePathSegmentPoint(int32 InSourceIndex, FT4PathSegmentPoint& OutNewPoint);

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FVector Location;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4PathMovementType MovementType; // #156

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bOnNavMesh; // #156

private:
	TWeakObjectPtr<UT4PathSegmentAsset> PathSegmentAssetPtr;
	int32 PathSegmentIndex;
	FT4OnItemRefresh OnItemRefreshDelegate;
	FT4OnItemChanged OnItemChangedDelegate;
	FT4OnSelectionChanged OnSelectionChangedDelegate;
	FT4OnFocusChanged OnFocusChangedDelegate;
};
