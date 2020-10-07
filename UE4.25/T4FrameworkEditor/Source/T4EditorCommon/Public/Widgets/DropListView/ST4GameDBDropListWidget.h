// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "Widgets/DropListView/ST4DropListViewWidget.h"

/**
  * #118 : DataTable, Content Editor 에서만 사용할 것! T4Gameplay 모듈을 직접 링크해 사용한다.
 */
class T4EDITORCOMMON_API ST4GameDBDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4GameDBDropListWidget) {}
		SLATE_ARGUMENT(TSharedPtr<IPropertyHandle>, PropertyHandle) // #88 : DetailView 를 통해 Object Dirty 가 됨으로 사용 유의 (즉, 테스트 했는데 Asset Dirty 가 됨)
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs, ET4GameDBType InGameDBType);
	void Construct(const FArguments& InArgs, ET4GameDBType InGameDBType, ET4GameStatCategory InGameStatCategory); // #114
	void Construct(const FArguments& InArgs, ET4GameDBType InGameDBType, ET4GameTextCategory InGameTextCategory); // #163

	ST4GameDBDropListWidget();
	~ST4GameDBDropListWidget();

protected:
	void UpdateItemLists() override;

private:
	ET4GameDBType GameDBType;
	ET4GameStatCategory GameStatCategory; // #114
	ET4GameTextCategory GameTextCategory; // #163
};
