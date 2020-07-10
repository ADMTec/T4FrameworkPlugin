// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ST4DropListViewWidget.h"

/**
  * #92
 */
class T4EDITORCOMMON_API ST4MapZoneDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4MapZoneDropListWidget) {}
		SLATE_ARGUMENT(TSharedPtr<IPropertyHandle>, PropertyHandle) // #88 : DetailView 를 통해 Object Dirty 가 됨으로 사용 유의 (즉, 테스트 했는데 Asset Dirty 가 됨)
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs);

	ST4MapZoneDropListWidget();
	~ST4MapZoneDropListWidget();

protected:
	void UpdateItemLists() override;
};
