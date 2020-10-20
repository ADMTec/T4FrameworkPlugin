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
struct T4EDITORCOMMON_API FT4DropListViewItem // #88
{
	FT4DropListViewItem()
		: ValueName(NAME_None)
		, SortOrder(0)
	{
	}
	FString DisplayString;
	FName ValueName;
	int32 SortOrder;
};

class SComboButton;
class IPropertyHandle;
class T4EDITORCOMMON_API ST4DropListViewWidget : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnSelected, const FName);

public:
	ST4DropListViewWidget();
	virtual ~ST4DropListViewWidget();

	void OnRefresh() { Refresh(); }

	const FName GetItemValueSelected() const; // #90
	const FName GetItemOldValueSelected() const { return OldSelectionValue; } // #158

	void SetInitializeValue(FName InValue) { InitializeValue = InValue; OldSelectionValue = InValue; } // #88
	void SetNoNameDescription(const TCHAR* InNoNameDescription) { NoNameDescription = InNoNameDescription; } // #58 : None 대신 출력할 Description

protected:
	virtual void UpdateItemLists() {}

protected:
	void Create();
	void Refresh();

	FReply HandleOnRefreshButton();
	void HandleOnComboOpening();

	void HandleOnSelectionChanged(TSharedPtr<FT4DropListViewItem> InNewSelection, ESelectInfo::Type);

	void HandleOnSearchBoxTextChanged(const FText& InSearchText);
	void HandleOnSearchBoxTextCommitted(const FText& NewText, ETextCommit::Type CommitInfo);

	FText GetComboText() const;
	
	TSharedRef<ITableRow> GenerateAddElementRow(
		TSharedPtr<FT4DropListViewItem> Entry,
		const TSharedRef<STableViewBase> &OwnerTable
	) const;

	void GenerateFilteredElementList(const FString& InSearchText);
	
	FText GetCurrentSearchString() const { return CurrentSearchString; };

	void AddNoSelectionItem(FName InDefaultValue);// #95

protected:
	FT4OnSelected OnSelected;
	TSharedPtr<IPropertyHandle> PropertyHandle;

	TArray<TSharedPtr<FT4DropListViewItem>> ItemList;
	TArray<TSharedPtr<FT4DropListViewItem>> FilteredItemList;

	TSharedPtr<FT4DropListViewItem> ItemSelected;

	TSharedPtr<SSearchBox> SearchBox;
	TSharedPtr<SListView<TSharedPtr<FT4DropListViewItem>>> ElementsListView;
	
	FText CurrentSearchString;
	FName InitializeValue; // #90
	FName OldSelectionValue; // #158
	FString NoNameDescription; // #58 : None 대신 출력할 Description

	bool bItemSorting; // #92
	bool bInitializeRefresh; // #58, #158 : OnRefresh 를 외부에서 호출하는 것으로 변경되며. 호출이 불가능할 경우를 대비한 옵션

	TSharedPtr<SComboButton> ElementButton;

	bool bUpdating; // #71 : 자기 이벤트에 대한 업데이트 방지
};
