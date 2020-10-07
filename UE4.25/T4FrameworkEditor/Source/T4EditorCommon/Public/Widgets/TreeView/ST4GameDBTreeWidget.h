// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameDBTreeStructs.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "Widgets/TreeView/ST4TreeViewWidget.h"

/**
  * #122
 */
class SHeaderRow;
class ST4TreeViewRow;
class FDragDropOperation;
struct FT4GameDBRowBase;
class T4EDITORCOMMON_API ST4GameDBTreeWidget : public ST4TreeViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4GameDBTreeWidget) {}
		SLATE_ARGUMENT(bool, bAutoHeight) // #135
		SLATE_ARGUMENT(int32, MaxHeight) // #135
		SLATE_ARGUMENT(float, ColumnIDWidth) // #158
		SLATE_ARGUMENT(float, ColumnInfoWidth) // #158
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_EVENT(FT4OnAddItem, OnAddItem)
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem)
		SLATE_EVENT(FT4OnVerifyRenameItem, OnVerifyRenameItem)
		SLATE_EVENT(FT4OnRenameItem, OnRenameItem)
		SLATE_EVENT(FT4OnDragAndDropItem, OnDragAndDropItem)
		SLATE_EVENT(FT4OnDuplicateItem, OnDuplicateItem) // #118
		SLATE_EVENT(FT4OnNewFolder, OnNewFolder) // #122
		SLATE_EVENT(FT4OnTreeExpanded, OnTreeExpanded) // #122
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs, ET4GameDBType InGameDBType);

	ST4GameDBTreeWidget();
	~ST4GameDBTreeWidget();

	TSharedPtr<FDragDropOperation> CreateDragDropOperation(TSharedPtr<ST4TreeViewRow> InRow) override; // #135

	bool IsItemExpanded(FName InValueName) const override;
	void SetItemExpansion(FName InValueName, bool bInExpand) override;

	void SetColumnManualWidth(const FT4GameDBTreeColumnWidthInfo& InTreeColumnWidthInfo); // #158
	void GetColumnManualWidth(FT4GameDBTreeColumnWidthInfo& OutTreeColumnWidthInfo); // #158

protected:
	void Reset();
	void UpdateLists() override;

	void AddExtensionMenuBuilder(FMenuBuilder& InMenuBuilder) override; // #120

	void GetColumnData(const FT4GameDBRowBase* InDBRowBase, FT4TreeViewNodePtr OutItem);
	TSharedPtr<SHeaderRow> GenerateHeaderWidget() override;

	void HandleOnMakeConsoleCommand();

private:
	ET4GameDBType GameDBType;

	TSharedPtr<SHeaderRow> HeaderRowWidgetPtr;
	FT4GameDBTreeColumnWidthInfo HeaderColumnWidthInfo; // #158
};
