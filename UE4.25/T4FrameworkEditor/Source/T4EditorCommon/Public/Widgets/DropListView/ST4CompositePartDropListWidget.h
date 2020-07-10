// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ST4DropListViewWidget.h"

/**
  * #71
 */
struct FT4EntityCharacterCompositeMeshData;
class T4EDITORCOMMON_API ST4CompositePartDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4CompositePartDropListWidget)
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
		const FT4EntityCharacterCompositeMeshData* InCopmpositeMeshData // #131
	);

	ST4CompositePartDropListWidget();
	~ST4CompositePartDropListWidget();

protected:
	void UpdateItemLists() override;

private:
	bool bNoAddExistItem; // #131 : 이미 포함된 Item 은 리스트에서 제외한다.
	const FT4EntityCharacterCompositeMeshData* CopmpositeMeshData;
};
