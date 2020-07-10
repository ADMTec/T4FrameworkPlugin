// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Types/SlateEnums.h"
#include "PropertyCustomizationHelpers.h"

/**
  * #39
 */

static const int32 T4Editor_ListViewMaxSortOrder = 100000;

struct T4EDITORCOMMON_API FT4ListViewItem // #88
{
	FT4ListViewItem()
		: ValueName(NAME_None)
		, ValueIndex(0)
		, SortOrder(0)
	{
	}

	FString DisplayString;
	FName ValueName;
	uint32 ValueIndex;
	int32 SortOrder;
};

class SComboButton;
class IPropertyHandle;
class T4EDITORCOMMON_API ST4ListViewWidget : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnSelected, const FName);
	DECLARE_DELEGATE_OneParam(FT4OnMultiSelected, const TArray<FName>&); // #104
	DECLARE_DELEGATE_OneParam(FT4OnDoubleClicked, const FName);
	DECLARE_DELEGATE_OneParam(FT4OnMoveUpItem, const FName);
	DECLARE_DELEGATE_OneParam(FT4OnMoveDownItem, const FName);
	DECLARE_DELEGATE(FT4OnAddItem); // #111
	DECLARE_DELEGATE_OneParam(FT4OnRemoveItem, const FName); // #111
	DECLARE_DELEGATE_OneParam(FT4OnRenameItem, const FName); // #118
	DECLARE_DELEGATE_OneParam(FT4OnDuplicateItem, const FName); // #118

public:
	ST4ListViewWidget();
	virtual ~ST4ListViewWidget();

	// #104 : 초기 선택시 선택 정보를 전달한다. 
	//        bInExecuteSelection = true 를 사용할때는 OnRefresh 를 하위 Property 를 모두 업데이트 한 후 호출할 것!
	void OnRefresh(bool bInExecuteSelection);

	const FName GetItemValueSelected() const; // #90
	const int32 GetItemValueIndexSelected() const; // #100
	bool GetItemValueMultiSelected(TArray<FName>& OutItemMultiSelected); // #104

	int32 GetItemCount() const { return ItemList.Num(); } // #92

	void SetInitializeValue(FName InValue) { InitializeValue = InValue; } // #88
	void SetNoNameDescription(const TCHAR* InNoNameDescription) { NoNameDescription = InNoNameDescription; } // #58 : None 대신 출력할 Description

	bool IsSameSelection() const // #118 : 업데이트 이후 같은 Value Selection 일 경우 동작처리를 위한 처리 추가
	{ 
		if (!ItemSelected.IsValid())
		{
			return false;
		}
		return (PrevItemValueSelected == ItemSelected->ValueName) ? true : false;
	}

protected:
	virtual void UpdateLists() {}
	virtual void AddExtensionMenuBuilder(FMenuBuilder& InMenuBuilder) {} // #120

	virtual void OnItemSelected(TSharedPtr<FT4ListViewItem> InSelectedItem); // #74
	virtual void OnItemDoubleClicked(TSharedPtr<FT4ListViewItem> InSelectedItem); // #81

	virtual void OnItemAdd(); // #134
	virtual void OnItemRemove(TSharedPtr<FT4ListViewItem> InSelectedItem); // #134

	virtual void OnItemMultiSelected(const TArray<FName>& InMultiSelected); // #104

protected:
	void Create();
	void Refresh();

	TSharedPtr<SWidget> HandleOnContextMenuOpening(); // #122

	void HandleOnRefreshExecute();
	void HandleOnUpExecute();
	void HandleOnDownExecute();
	void HandleOnAddExecute(); // #111
	void HandleOnRemoveExecute(); // #111
	void HandleOnRenameExecute(); // #118
	void HandleOnDuplicateExecute(); // #118

	void HandleOnSelectionChanged(TSharedPtr<FT4ListViewItem> InNewSelection, ESelectInfo::Type);
	void HandleOnDoubleClicked(TSharedPtr<FT4ListViewItem> InNewSelection);

	void HandleOnSearchBoxTextChanged(const FText& InSearchText);
	void HandleOnSearchBoxTextCommitted(const FText& NewText, ETextCommit::Type CommitInfo);

	TSharedRef<ITableRow> GenerateAddElementRow(
		TSharedPtr<FT4ListViewItem> Entry,
		const TSharedRef<STableViewBase> &OwnerTable
	) const;

	void GenerateFilteredElementList(const FString& InSearchText);
	
	FText GetSearchString() const { return SearchString; };

	void AddEmptyItem();// #95

protected:
	FT4OnSelected OnSelected;
	FT4OnDoubleClicked OnDoubleClicked;

	FT4OnMultiSelected OnMultiSelected; // #104

	FT4OnMoveUpItem OnMoveUpItem;
	FT4OnMoveDownItem OnMoveDownItem;

	FT4OnAddItem OnAddItem; // #111
	FT4OnRemoveItem OnRemoveItem; // #111
	FT4OnRenameItem OnRenameItem; // #118
	FT4OnDuplicateItem OnDuplicateItem; // #118

	TArray<TSharedPtr<FT4ListViewItem>> ItemList;
	TArray<TSharedPtr<FT4ListViewItem>> FilteredItemList;

	TSharedPtr<FT4ListViewItem> ItemSelected;

	TSharedPtr<SSearchBox> SearchBoxPtr;
	TSharedPtr<SListView<TSharedPtr<FT4ListViewItem>>> ListViewPtr;
	
	FText SearchString;

	FName InitializeValue; // #88
	FName PrevItemValueSelected; // #118 : 업데이트 이후 같은 Value Selection 일 경우 동작처리를 위한 처리 추가

	FString NoNameDescription; // #58 : None 대신 출력할 Description

	bool bSearchBox; // #124
	bool bItemSorting; // #92

	int32 MaxHeight; // #104
	ESelectionMode::Type SelectionMode; // #104

	bool bUpdating; // #71 : 자기 이벤트에 대한 업데이트 방지
};
