// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EditorCommonConstants.h" // #39
#include "T4Asset/Classes/Animset/T4AnimsetAsset.h"
#include "ST4TreeViewWidget.h"

/**
  * #71, #124
 */
class T4EDITORCOMMON_API ST4AnimationLayerTreeWidget : public ST4TreeViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4AnimationLayerTreeWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_EVENT(FT4OnVerifyRenameItem, OnVerifyRenameItem)
		SLATE_EVENT(FT4OnRenameItem, OnRenameItem)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #111
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #111
		SLATE_EVENT(FT4OnDragAndDropItem, OnDragAndDropItem)
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimsetAnimSequenceData>* InSelectArray,
		FName InQuestTableName
	);

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimsetAnimSequenceData>* InSelectArray,
		ET4AnimsetTemplate InAnimsetTemplate
	); // #131

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimsetAnimSystemData>* InSelectArray
	); // #131

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimsetAnimStateData>* InSelectArray
	); // #131

	ST4AnimationLayerTreeWidget();
	~ST4AnimationLayerTreeWidget();

protected:
	void UpdateLists() override;

	TSharedPtr<SHeaderRow> GenerateHeaderWidget() override;

private:
	FName ConstantTableName;
	const TArray<FT4AnimsetAnimSequenceData>* AnimSequenceArrayRef; // #107
	const TArray<FT4AnimsetAnimSystemData>* AnimSystemDataArrayRef; // #131
	const TArray<FT4AnimsetAnimStateData>* AnimStateDataArrayRef; // #131
};
