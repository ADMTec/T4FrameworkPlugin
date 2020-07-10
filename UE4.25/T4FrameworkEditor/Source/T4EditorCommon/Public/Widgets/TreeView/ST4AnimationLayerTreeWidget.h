// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Classes/AnimSet/T4AnimSetAsset.h"
#include "T4Engine/Public/T4EngineConstants.h" // #39
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
		const TArray<FT4AnimSetAnimSequenceData>* InSelectArray,
		ET4EngineConstantTable InEngineConstantType
	);

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimSetAnimSequenceData>* InSelectArray,
		ET4AnimSetTemplate InAnimSetTemplate
	); // #131

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimSetAnimSystemData>* InSelectArray
	); // #131

	void Construct(
		const FArguments& InArgs,
		const TArray<FT4AnimSetAnimStateData>* InSelectArray
	); // #131

	ST4AnimationLayerTreeWidget();
	~ST4AnimationLayerTreeWidget();

protected:
	void UpdateLists() override;

	TSharedPtr<SHeaderRow> GenerateHeaderWidget() override;

private:
	ET4EngineConstantTable EngineConstantType;
	const TArray<FT4AnimSetAnimSequenceData>* AnimSequenceArrayRef; // #107
	const TArray<FT4AnimSetAnimSystemData>* AnimSystemDataArrayRef; // #131
	const TArray<FT4AnimSetAnimStateData>* AnimStateDataArrayRef; // #131
};
