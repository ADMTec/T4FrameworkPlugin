// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #130
 */
struct FT4EntityCharacterFullBodyMeshData;
class T4EDITORCOMMON_API ST4FullBodySkinListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4FullBodySkinListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #124
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #124
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const FT4EntityCharacterFullBodyMeshData* InFullBodyMeshData
	);

	ST4FullBodySkinListWidget();
	~ST4FullBodySkinListWidget();

protected:
	void UpdateLists() override;

private:
	const FT4EntityCharacterFullBodyMeshData* FullBodyMeshData;
};
