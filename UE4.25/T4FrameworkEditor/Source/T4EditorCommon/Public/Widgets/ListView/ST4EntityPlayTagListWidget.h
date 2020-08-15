// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Public/ActionPack/T4ActionPackTypes.h" // #81
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #74
 */
struct FT4EntityPlayTagData;
class T4EDITORCOMMON_API ST4EntityPlayTagListWidget : public ST4ListViewWidget
{
public:
	DECLARE_DELEGATE_TwoParams(FT4OnSelectedByIndex, ET4PlayTagType, int32); // #74, #81
	DECLARE_DELEGATE_TwoParams(FT4OnDoubleClickedByIndex, ET4PlayTagType, int32); // #81

public:
	SLATE_BEGIN_ARGS(ST4EntityPlayTagListWidget) {}
		SLATE_EVENT(FT4OnSelectedByIndex, OnSelectedByIndex)
		SLATE_EVENT(FT4OnDoubleClickedByIndex, OnDoubleClickedByIndex)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #124
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #124
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const ET4PlayTagType InPlayTagType,
		const FT4EntityPlayTagData* InPlayTagData
	);

	ST4EntityPlayTagListWidget();
	~ST4EntityPlayTagListWidget();

	void SetInitializeIndex(int32 InIndex) { SelectedIndex = InIndex; } // #104

	int32 GetSelectedIndex() const { return SelectedIndex; }
	void ClearSelectedIndex() { SelectedIndex = -1; }

protected:
	void UpdateLists() override;

	void OnItemSelected(TSharedPtr<FT4ListViewItem> InSelectedItem, bool bForced) override; // #74
	void OnItemDoubleClicked(TSharedPtr<FT4ListViewItem> InSelectedItem) override; // #81

private:
	int32 SelectedIndex;
	FT4OnSelectedByIndex OnSelectedByIndex; // #74, #81
	FT4OnDoubleClickedByIndex OnDoubleClickedByIndex; // #81
	ET4PlayTagType PlayTagType;
	const FT4EntityPlayTagData* PlayTagData;
};
