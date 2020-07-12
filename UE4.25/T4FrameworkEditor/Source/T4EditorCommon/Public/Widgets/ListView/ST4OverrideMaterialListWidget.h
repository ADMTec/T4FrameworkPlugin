// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #73
 */
class UT4AnimsetAsset;
struct FT4EntityMaterialData;
class T4EDITORCOMMON_API ST4OverrideMaterialListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4OverrideMaterialListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
	SLATE_END_ARGS();

	void Construct(
		const FArguments& InArgs, 
		const FT4EntityMaterialData* InMaterialData
	); // #124

	ST4OverrideMaterialListWidget();
	~ST4OverrideMaterialListWidget();

	void UpdateMaterialData(const FT4EntityMaterialData* InMaterialData) // #124
	{
		MaterialData = InMaterialData;
		OnRefresh(false);
	}

protected:
	void UpdateLists() override;

private:
	const FT4EntityMaterialData* MaterialData; // #124
};
