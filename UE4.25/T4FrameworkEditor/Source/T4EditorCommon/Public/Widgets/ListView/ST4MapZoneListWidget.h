// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "Widgets/ListView/ST4ListViewWidget.h"

/**
  * #90
 */
class UWorld;
class UT4MapEntityAsset; // #125
class T4EDITORCOMMON_API ST4MapZoneListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4MapZoneListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
		SLATE_EVENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_ARGUMENT(FName, InInitializeValue) // #92
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs, UWorld* InWorld);
	void Construct(const FArguments& InArgs, UT4MapEntityAsset* InMapEntityAsset); // #125, #147

	ST4MapZoneListWidget();
	~ST4MapZoneListWidget();

	bool HasMapZoneName(FName InName) const; // #92

protected:
	void UpdateLists() override;

private:
	UWorld* WorldRef;
	const UT4MapEntityAsset* MapEntityAssetRef; // #125, #147
};
