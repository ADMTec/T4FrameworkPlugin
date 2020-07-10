// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #71
 */
struct FT4EntityCharacterCompositeMeshData;
class T4EDITORCOMMON_API ST4CompositePartListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4CompositePartListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #124
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #124
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const FT4EntityCharacterCompositeMeshData* InCompositeMeshData
	);

	ST4CompositePartListWidget();
	~ST4CompositePartListWidget();

protected:
	void UpdateLists() override;

private:
	const FT4EntityCharacterCompositeMeshData* CompositeMeshData;
};
