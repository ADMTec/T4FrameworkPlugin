// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ST4TreeViewItem.h"

#include "T4Framework/Public/T4FrameworkEditor.h"

#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/STreeView.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Types/SlateEnums.h"
#include "PropertyCustomizationHelpers.h"

/**
  * #122
 */
class ST4TreeViewRow;
class T4EDITORCOMMON_API FT4TreeViewRowDragDropOp : public FT4DecoratedDragDropOp
{
public:
	DRAG_DROP_OPERATOR_TYPE(FT4TreeViewRowDragDropOp, FDecoratedDragDropOp)

	FT4TreeViewRowDragDropOp(
		TSharedPtr<ST4TreeViewRow> InRow,
		const TArray<FT4TreeViewNodePtr>& InDragItems,
		uint32 inParamValue
	);

	virtual void OnDrop(bool bDropWasHandled, const FPointerEvent& MouseEvent);

	TSharedPtr<SWidget> GetDefaultDecorator() const override { return DecoratorWidget; }
	const TArray<FT4TreeViewNodePtr>& GetDragItems() const { return DragItems; }

protected:
	TSharedPtr<SWidget> DecoratorWidget;
	TWeakPtr<ST4TreeViewRow> RowWeakPtr;
	TArray<FT4TreeViewNodePtr> DragItems;
};

class SComboButton;
class IPropertyHandle;
class FDragDropOperation;
class T4EDITORCOMMON_API ST4TreeViewWidget : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnSelected, const FName);
	DECLARE_DELEGATE_OneParam(FT4OnDoubleClicked, const FName);
	DECLARE_DELEGATE(FT4OnAddItem);
	DECLARE_DELEGATE_OneParam(FT4OnRemoveItem, const TArray<FName>&);
	DECLARE_DELEGATE_RetVal_TwoParams(bool, FT4OnVerifyRenameItem, const FName, FString&);
	DECLARE_DELEGATE_TwoParams(FT4OnRenameItem, const FName, const FName);
	DECLARE_DELEGATE_TwoParams(FT4OnDragAndDropItem, const FName, const TArray<FName>&); // #122
	DECLARE_DELEGATE_OneParam(FT4OnDuplicateItem, const FName); // #118
	DECLARE_DELEGATE(FT4OnNewFolder); // #122
	DECLARE_DELEGATE_TwoParams(FT4OnTreeExpanded, const FName, bool);

public:
	ST4TreeViewWidget();
	virtual ~ST4TreeViewWidget();

	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) override;

	TSharedRef<STreeView<FT4TreeViewNodePtr>> GetTreeViewRef() const { return TreeViewPtr.ToSharedRef(); }

	bool CanSupportDragAndDrop() const { return true; }

	// #104 : 초기 선택시 선택 정보를 전달한다. 
	//        bInExecuteSelection = true 를 사용할때는 OnRefresh 를 하위 Property 를 모두 업데이트 한 후 호출할 것!
	virtual void OnRefresh(bool bInExecuteSelection); // #104

	void SetInitializeValue(FName InValue) { InitializeValue = InValue; } // #88
	FText GetSearchString() const { return SearchString; };

	bool IsSameSelection() const; // #118 : 업데이트 이후 같은 Value Selection 일 경우 동작처리를 위한 처리 추가
	const FName GetItemValueSelected() const;

	bool GetSelectionItemNames(TArray<FName>& OutSelectionItemNames); // #142

	virtual TSharedPtr<FDragDropOperation> CreateDragDropOperation(TSharedPtr<ST4TreeViewRow> InRow); // #135

	virtual bool IsItemExpanded(FName InValueName) const;
	virtual void SetItemExpansion(FName InValueName, bool bInExpand);

	bool OnDragAndDrop(FT4TreeViewNodePtr InParentNodePtr, const TArray<FT4TreeViewNodePtr>& InChildNodePtrs);

	bool IsVerifyName(FName InRename, FText& OutErrorMessage) const;
	bool OnRename(FT4TreeViewNodePtr InNodePtr, FName InRename);

protected:
	virtual void UpdateLists() {}
	virtual void ItemSelection(); // #142

	virtual void AddExtensionMenuBuilder(FMenuBuilder& InMenuBuilder) {} // #120

	virtual TSharedPtr<SHeaderRow> GenerateHeaderWidget() { return SNew(SHeaderRow); }

	TSharedPtr<SWidget> HandleOnContextMenuOpening();
	virtual FText GetContextMenuSectionText() const; // #124

	void HandleOnGetChildNodes(FT4TreeViewNodePtr InNodePtr, TArray<FT4TreeViewNodePtr>& OutChildren);
	TSharedRef<ITableRow> HandleOnGenerateRow(FT4TreeViewNodePtr InNodePtr, const TSharedRef<STableViewBase>& InOwnerTable);

	void HandleOnScrolledIntoView(FT4TreeViewNodePtr InNodePtr, const TSharedPtr<ITableRow>& Widget);
	void HandleOnExpandRecursive(FT4TreeViewNodePtr InNodePtr, bool bInExpansionState) const;

	void HandleOnAddExecute();
	void HandleOnDuplicateExecute();
	void HandleOnRefreshExecute();
	void HandleOnNewFolderExecute();

	void HandleOnSelectionChanged(FT4TreeViewNodePtr InNewSelection);
	void HandleOnDoubleClicked(FT4TreeViewNodePtr InNewSelection);

	void HandleOnSearchBoxTextChanged(const FText& InSearchText);
	void HandleOnSearchBoxTextCommitted(const FText& NewText, ETextCommit::Type CommitInfo);

	void GenerateFilteredElementList(const FString& InSearchText);

	virtual void OnItemSelected(FT4TreeViewNodePtr InSelectedItem);
	virtual void OnItemDoubleClicked(FT4TreeViewNodePtr InSelectedItem);

	virtual const FSlateBrush* GetComponentIcon() const { return nullptr; }

protected:
	void Create();
	void Refresh();

	void FindFilteredElementList(FT4TreeViewNodePtr InNodePtr, const FString& InSearchText);

	FString GetConfigStateFileName() const; // #122
	bool LoadConfigState(); // #122
	void SaveConfigState(); // #122

protected:
	FT4OnSelected OnSelected;
	FT4OnDoubleClicked OnDoubleClicked;

	FT4OnAddItem OnAddItem; // #111
	FT4OnRemoveItem OnRemoveItem;

	FT4OnVerifyRenameItem OnVerifyRenameItem;
	FT4OnRenameItem OnRenameItem;

	FT4OnDragAndDropItem OnDragAndDropItem;
	FT4OnDuplicateItem OnDuplicateItem;

	FT4OnNewFolder OnNewFolder;
	FT4OnTreeExpanded OnTreeExpanded;

	TArray<FT4TreeViewNodePtr> ItemNodes;
	TArray<FT4TreeViewNodePtr> FilteredItemNodes;

	FT4TreeViewNodePtr ItemSelected;

	TMap<FName, bool> ItemExpanded;

	FText SearchString;
	TSharedPtr<SSearchBox> SearchBoxPtr;
	TSharedPtr<STreeView<FT4TreeViewNodePtr>> TreeViewPtr;

	FName InitializeValue;
	FName PrevItemValueSelected; // #118 : 업데이트 이후 같은 Value Selection 일 경우 동작처리를 위한 처리 추가

	bool bAutoHeight; // #135
	int32 MaxHeight;

	bool bItemSorting; // #92

	FString ConfigStateKey; // #122

	ESelectionMode::Type SelectionMode;
	ET4TreeViewColumn TreeViewColumn;

	bool bUpdating; // #71 : 자기 이벤트에 대한 업데이트 방지
};
