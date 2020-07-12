// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Public/ActionPak/T4ActionPakTypes.h" // #81
#include "ST4DropListViewWidget.h"

/**
  * #74
 */
class IT4WorldActor;
class FT4EditorViewTargetSelector;
class T4EDITORCOMMON_API ST4PlayTagDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4PlayTagDropListWidget) {}
		SLATE_ARGUMENT(TSharedPtr<IPropertyHandle>, PropertyHandle) // #88 : DetailView 를 통해 Object Dirty 가 됨으로 사용 유의 (즉, 테스트 했는데 Asset Dirty 가 됨)
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs,
		const ET4PlayTagType InPlayTagType, // #81
		TSharedRef<FT4EditorViewTargetSelector> InViewTargetSelector
	);

	ST4PlayTagDropListWidget();
	~ST4PlayTagDropListWidget();

protected:
	void UpdateItemLists() override;

	void HandleOnViewTargetChanged(IT4WorldActor* InViewTarget);

private:
	ET4PlayTagType PlayTagType; // #81
	TWeakPtr<FT4EditorViewTargetSelector> ViewTargetSelector;
	FDelegateHandle ViewTargetSelectDelegate;
};
