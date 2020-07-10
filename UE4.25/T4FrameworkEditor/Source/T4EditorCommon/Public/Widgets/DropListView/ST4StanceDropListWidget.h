// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ST4DropListViewWidget.h"

/**
  * #73, #111
 */
struct FT4EntityCharacterStanceSetData;
class T4EDITORCOMMON_API ST4StanceDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4StanceDropListWidget)
		: _bNoAddExistItem(false)
		{
		}
		SLATE_ARGUMENT(bool, bNoAddExistItem) // #131 : 이미 포함된 Item 은 리스트에서 제외한다.
		SLATE_ARGUMENT(TSharedPtr<IPropertyHandle>, PropertyHandle) // #88 : DetailView 를 통해 Object Dirty 가 됨으로 사용 유의 (즉, 테스트 했는데 Asset Dirty 가 됨)
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs);

	void Construct(
		const FArguments& InArgs,
		const FT4EntityCharacterStanceSetData* InStanceSetData
	); // #111

	ST4StanceDropListWidget();
	~ST4StanceDropListWidget();

protected:
	void UpdateItemLists() override;

private:
	bool bNoAddExistItem; // #131 : 이미 포함된 Item 은 리스트에서 제외한다.
	const FT4EntityCharacterStanceSetData* StanceSetData; // #111
};
