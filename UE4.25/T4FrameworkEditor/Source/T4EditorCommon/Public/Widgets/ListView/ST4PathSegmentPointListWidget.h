// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #90
 */
class UT4PathSegmentAsset;
class T4EDITORCOMMON_API ST4PathSegmentPointListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4PathSegmentPointListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #124
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #124
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const UT4PathSegmentAsset* InEnvironmentAsset
	);

	ST4PathSegmentPointListWidget();
	~ST4PathSegmentPointListWidget();

	void SetInitializeValueIndex(int32 InValueIndex) { InitializeValueIndex = InValueIndex; }
	void SetPathSegmentAsset(const UT4PathSegmentAsset* InPathSegmentAsset);

protected:
	void UpdateLists() override;

	void OnItemSelected(TSharedPtr<FT4ListViewItem> InSelectedItem, bool bForced) override;

private:
	TWeakObjectPtr<const UT4PathSegmentAsset> PathSegmentAssetPtr;

	int32 InitializeValueIndex;
};
