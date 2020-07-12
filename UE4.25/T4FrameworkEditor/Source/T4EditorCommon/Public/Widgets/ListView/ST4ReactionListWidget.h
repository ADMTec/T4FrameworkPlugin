// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #76
 */
class UT4AnimsetAsset;
struct FT4EntityCharacterReactionSetData;
class T4EDITORCOMMON_API ST4ReactionListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4ReactionListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_EVENT(FT4OnAddItem, OnAddItem) // #124
		SLATE_EVENT(FT4OnRemoveItem, OnRemoveItem) // #124
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const FT4EntityCharacterReactionSetData* InReactionSetData
	);

	ST4ReactionListWidget();
	~ST4ReactionListWidget();

protected:
	void UpdateLists() override;

private:
	const FT4EntityCharacterReactionSetData* ReactionSetData;
};
