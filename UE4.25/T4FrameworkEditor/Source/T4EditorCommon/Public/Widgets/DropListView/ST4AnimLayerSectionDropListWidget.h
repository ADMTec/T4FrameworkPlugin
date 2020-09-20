// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EditorCommonConstants.h" // #39
#include "T4Asset/Classes/Animset/T4AnimsetAsset.h"
#include "ST4DropListViewWidget.h"

/**
  * #39 
 */
class UT4AnimsetAsset;
class FT4EditorViewTargetSelector;
class FT4EditorAnimsetAssetSelector;
class T4EDITORCOMMON_API ST4AnimLayerSectionDropListWidget : public ST4DropListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4AnimLayerSectionDropListWidget)
		: _bNoAddExistItem(false)
		{
		}
		SLATE_ARGUMENT(bool, bNoAddExistItem) // #130 : 이미 포함된 Item 은 리스트에서 제외한다.
		SLATE_ARGUMENT(TSharedPtr<IPropertyHandle>, PropertyHandle) // #88 : DetailView 를 통해 Object Dirty 가 됨으로 사용 유의 (즉, 테스트 했는데 Asset Dirty 가 됨)
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs,
		TSharedRef<FT4EditorViewTargetSelector> InViewTargetSelector // #131 : Valid Check
	);

	void Construct(
		const FArguments& InArgs,
		TSharedRef<FT4EditorViewTargetSelector> InViewTargetSelector, // #131 : Valid Check
		FName InQuestTableName
	);

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimsetAnimSequenceData>* InSelectArray,
		ET4AnimsetTemplate InAnimsetTemplate
	); // #131

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimsetAnimSequenceData>* InSelectArray,
		FName InQuestTableName
	);

	void Construct(
		const FArguments& InArgs,
		TSharedRef<FT4EditorAnimsetAssetSelector> InAnimsetAssetSelector
	);

	ST4AnimLayerSectionDropListWidget();
	~ST4AnimLayerSectionDropListWidget();

	void SetUseAdditiveLayer(bool bInUse) { bUseAdditive = bInUse; } // #138

protected:
	void UpdateItemLists() override;

	void GetConstantTableSelected(ET4AnimsetTemplate InAnimsetTemplate); // #131

	void HandleOnAnimsetChanged(UT4AnimsetAsset* InAnimsetAsset, bool bFullRefresh);

private:
	bool bNoAddExistItem; // #130 : 이미 포함된 Item 은 리스트에서 제외한다.
	bool bRefreshConstantType; // #134 : Update 시 마다 갱신 ViewTargetSelector 이 있을 경우만 사용됨

	bool bUseAdditive; // #138

	FName QuestTableName;
	TWeakPtr<FT4EditorViewTargetSelector> ViewTargetSelector;
	const TArray<FT4AnimsetAnimSequenceData>* AnimSequenceArrayRef; // #107

	TWeakPtr<FT4EditorAnimsetAssetSelector> AnimsetAssetSelector;
	FDelegateHandle AnimSetSelectDelegate;
};
