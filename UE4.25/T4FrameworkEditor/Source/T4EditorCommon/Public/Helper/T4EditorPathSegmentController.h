// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Classes/Data/T4PathSegmentData.h"
#include "T4EditorPathSegmentController.generated.h"

/**
  * #155
 */
UCLASS()
class T4EDITORCOMMON_API UT4EditorPathSegmentController : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	DECLARE_MULTICAST_DELEGATE(FT4OnItemRefresh);
	FT4OnItemRefresh& OnItemRefresh() { return OnItemRefreshDelegate; } // #155 : ViewModel 에서 호출

	DECLARE_MULTICAST_DELEGATE(FT4OnItemChanged);
	FT4OnItemChanged& OnItemChanged() { return OnItemChangedDelegate; } // #155 : PathSegmentDetails 에서 호출

	DECLARE_MULTICAST_DELEGATE(FT4OnSelectionChanged);
	FT4OnSelectionChanged& OnSelectionChanged() { return OnSelectionChangedDelegate; }  // #155 : PathSegmentDetails 에서 호출

	int32 GetPathSegmentPointSelected() const { return SegmentIndex; }
	void SelectPathSegmentPoint(int32 InSegmentIndex) { SegmentIndex = InSegmentIndex; }

public:
	bool CopyTo(FT4PathSegmentPoint& OutData);
	bool CopyFrom(const FT4PathSegmentPoint& InData);

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FVector Location;

private:
	int32 SegmentIndex;
	FT4OnItemRefresh OnItemRefreshDelegate;
	FT4OnItemChanged OnItemChangedDelegate;
	FT4OnSelectionChanged OnSelectionChangedDelegate;
};
