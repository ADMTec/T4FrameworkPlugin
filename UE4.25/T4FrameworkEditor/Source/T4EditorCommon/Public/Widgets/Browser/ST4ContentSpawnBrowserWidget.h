// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Layout/Visibility.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Input/Reply.h"
#include "Widgets/SWidget.h"
#include "AssetData.h"
#include "Widgets/SToolTip.h"
#include "Widgets/SCompoundWidget.h"
#include "Editor/ContentBrowser/Public/ContentBrowserDelegates.h"
#include "ARFilter.h"

/**
  * #149 : refer SAnimationSequenceBrowser
 */

class FUICommandList;
class SMenuAnchor;
class UT4ContentSpawnAsset;
class FFrontendFilter_Folder;

class T4EDITORCOMMON_API ST4ContentSpawnBrowserWidget : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnCallback, UObject* /* InAsset */);

public:
	SLATE_BEGIN_ARGS(ST4ContentSpawnBrowserWidget) {}
		SLATE_ARGUMENT(FT4OnCallback, OnSelectAsset)
		SLATE_ARGUMENT(FT4OnCallback, OnOpenAsset)
		SLATE_ARGUMENT(FT4OnCallback, OnDoubleClicked)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);

	virtual ~ST4ContentSpawnBrowserWidget();

	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);

	virtual void SelectAsset(UT4ContentSpawnAsset* InSpawnAsset);

	TSharedPtr<SWidget> HandleOnGetAssetContextMenu(const TArray<FAssetData>& SelectedAssets);

	void FindInContentBrowser();

	bool CanFindInContentBrowser() const;

	void HandleOnSelectAsset(const FAssetData& AssetData);
	void HandleOnDoubleClicked(const FAssetData& AssetData, bool bFromHistory);

	bool HandleCanOpenSelectedAssets(TArray<FAssetData> InObjects) const;
	void HandleOnOpenSelectedAssets(TArray<FAssetData> InObjects) const;

protected:
	bool CanShowColumnForAssetRegistryTag(FName AssetType, FName TagName) const;
	
	void GetSelectedPackages(const TArray<FAssetData>& Assets, TArray<UPackage*>& OutPackages) const;

	bool HandleOnFilterAsset(const FAssetData& InAssetData) const;

protected:
	TSharedPtr<FUICommandList> Commands;

	TSet<FName> AssetRegistryTagsToIgnore;

	FT4OnCallback OnSelectAsset;
	FT4OnCallback OnOpenAsset;
	FT4OnCallback OnDoubleClicked;

	FSyncToAssetsDelegate SyncToAssetsDelegate;
	FGetCurrentSelectionDelegate GetCurrentSelectionDelegate;

	FSetARFilterDelegate SetFilterDelegate;
	FARFilter Filter;
	TArray<TSharedPtr<FFrontendFilter_Folder>> FolderFilters;

public:
	static const FString SettingsIniSection;
};
