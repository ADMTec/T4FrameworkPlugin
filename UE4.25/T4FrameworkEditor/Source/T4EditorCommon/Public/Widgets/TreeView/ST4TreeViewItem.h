// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "DragAndDrop/DecoratedDragDropOp.h"

#include "Widgets/Views/STableRow.h"
#include "Widgets/Views/STableViewBase.h"

static const FName T4Editor_TreeViewColumnLabel = TEXT("Label");
static const FName T4Editor_TreeViewColumnOne = TEXT("One");
static const FName T4Editor_TreeViewColumnTwo = TEXT("Two");

enum ET4TreeViewColumn
{
	TreeViewColumn_Label,
	TreeViewColumn_One,
	TreeViewColumn_Two,
};

/**
  * #122
 */
using FT4TreeViewNodePtr = TSharedPtr<class FT4TreeViewNode>;
class T4EDITORCOMMON_API FT4TreeViewNode : public TSharedFromThis<FT4TreeViewNode>
{
public:
	FT4TreeViewNode()
		: bFolder(false) // #122
		, bError(false) // #124
		, ValueName(NAME_None)
		, SortOrder(-1)
	{
	}

	FT4TreeViewNodePtr GetParent() const { return ParentNodePtr; }
	const TArray<FT4TreeViewNodePtr>& GetChildren() const { return Children; }

	bool IsFolder() const { return bFolder; }
	bool IsError() const { return bError; } // #124

	FName GetValueName() { return ValueName; }
	bool Contains(const FString& InSearchText) const
	{
		if (LabelString.Contains(InSearchText) ||
			ColumnOneString.Contains(InSearchText) ||
			ColumnTwoString.Contains(InSearchText))
		{
			return true;
		}
		return false;
	}

	void HandleDragEnter(const FDragDropEvent& DragDropEvent);
	void HandleDragLeave(const FDragDropEvent& DragDropEvent);
	FReply HandleDrop(const FDragDropEvent& DragDropEvent);

	FString GetLabelString() const { return LabelString; }
	FString GetColumnOneString() const { return ColumnOneString; }
	FString GetColumnTwoString() const { return ColumnTwoString; }

	/** Delegate for hooking up an inline editable text block to be notified that a rename is requested. */
	DECLARE_DELEGATE(FOnRenameRequest);

	/** Broadcasts whenever a rename is requested */
	FOnRenameRequest RenameRequestEvent;

public:
	FT4TreeViewNodePtr ParentNodePtr;
	TArray<FT4TreeViewNodePtr> Children;

	FString LabelString; // #122
	FString ColumnOneString; // #122
	FString ColumnTwoString; // #122

	bool bFolder; // #122
	bool bError; // #124

	FName ValueName;
	int32 SortOrder;
};

class ST4TreeViewWidget;
class T4EDITORCOMMON_API ST4TreeViewRow : public SMultiColumnTableRow<TSharedPtr<FT4TreeViewNode>>
{
public:
	SLATE_BEGIN_ARGS(ST4TreeViewRow) { }
		SLATE_ARGUMENT(TSharedPtr<FT4TreeViewNode>, Node)
		SLATE_ARGUMENT(ET4TreeViewColumn, TreeViewColumn)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, TSharedRef<ST4TreeViewWidget> InTreeViewWidget);

public:
	TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnName) override;

	FName GetValueName() const;

	void SetIsDragDrop(bool bInIsDragDrop);

protected:
	void ConstructChildren(ETableViewMode::Type InOwnerTableMode, const TAttribute<FMargin>& InPadding, const TSharedRef<SWidget>& InContent) override;

	FReply OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	FReply HandleOnRowDrop(const FDragDropEvent& DragDropEvent);
	void HandleOnRowDragEnter(const FDragDropEvent& DragDropEvent);
	void HandleOnRowDragLeave(const FDragDropEvent& DragDropEvent);

	FText HandleOnGetDisplayText() const;
	bool HandleOnVerifyItemLabelChanged(const FText& InLabel, FText& OutErrorMessage);
	void HandleOnLabelCommitted(const FText& InLabel, ETextCommit::Type InCommitInfo);

	TSharedPtr<FDragDropOperation> CreateDragDropOperation(TSharedPtr<ST4TreeViewRow> InRow);

private:
	TWeakPtr<ST4TreeViewWidget> WidgetWeakPtr;
	TSharedPtr<FT4TreeViewNode> NodePtr;
	ET4TreeViewColumn Column;

	bool bIsDragDropObject;
	bool bIsHoveredDragTarget;
};
