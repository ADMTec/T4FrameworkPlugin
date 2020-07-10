// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #100
 */
struct FT4EditorTestAutomationData;
class T4EDITORCOMMON_API ST4BookmarkListWidget : public ST4ListViewWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnSelectedByIndex, int32);
	DECLARE_DELEGATE_OneParam(FT4OnDoubleClickedByIndex, int32);

public:
	SLATE_BEGIN_ARGS(ST4BookmarkListWidget) {}
		SLATE_EVENT(FT4OnSelectedByIndex, OnSelectedByIndex)
		SLATE_EVENT(FT4OnDoubleClickedByIndex, OnDoubleClickedByIndex)
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const FT4EditorTestAutomationData* InTestAutomation
	);

	ST4BookmarkListWidget();
	~ST4BookmarkListWidget();

	void SetInitializeIndex(int32 InIndex) { SelectedIndex = InIndex; } // #103

protected:
	void UpdateLists() override;

	void OnItemSelected(TSharedPtr<FT4ListViewItem> InSelectedItem) override; // #74
	void OnItemDoubleClicked(TSharedPtr<FT4ListViewItem> InSelectedItem) override; // #81

private:
	int32 SelectedIndex;
	FT4OnSelectedByIndex OnSelectedByIndex; // #74, #81
	FT4OnDoubleClickedByIndex OnDoubleClickedByIndex; // #81
	const FT4EditorTestAutomationData* TestAutomatioRef;
};
