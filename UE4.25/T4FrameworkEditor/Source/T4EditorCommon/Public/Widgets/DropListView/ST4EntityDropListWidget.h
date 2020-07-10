// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Public/Entity/T4EntityTypes.h"
#include "ST4DropListViewWidget.h"

/**
  * #87
 */
class T4EDITORCOMMON_API ST4EntityDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4EntityDropListWidget) {}
		SLATE_ARGUMENT(TSharedPtr<IPropertyHandle>, PropertyHandle) // #88 : DetailView 를 통해 Object Dirty 가 됨으로 사용 유의 (즉, 테스트 했는데 Asset Dirty 가 됨)
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs, ET4EntityType InEntityType);

	ST4EntityDropListWidget();
	~ST4EntityDropListWidget();

protected:
	void UpdateItemLists() override;

private:
	ET4EntityType EntityType;
};
