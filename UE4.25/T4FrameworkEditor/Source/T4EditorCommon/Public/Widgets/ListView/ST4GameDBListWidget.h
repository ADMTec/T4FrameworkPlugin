// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "Widgets/ListView/ST4ListViewWidget.h"

/**
  * #118
 */
class UDataTable;
class T4EDITORCOMMON_API ST4GameDBListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4GameDBListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked) // #122
		SLATE_EVENT(FT4OnMoveUpItem, OnMoveUpItem)
		SLATE_EVENT(FT4OnMoveDownItem, OnMoveDownItem)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #111
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #111
		SLATE_EVENT(FT4OnRenameItem, OnRenameItem) // #118
		SLATE_EVENT(FT4OnDuplicateItem, OnDuplicateItem) // #118
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs, ET4GameDBType InGameDBType);

	ST4GameDBListWidget();
	~ST4GameDBListWidget();
	
protected:
	void Reset();
	void UpdateLists() override;

private:
	ET4GameDBType GameDataType;
};
