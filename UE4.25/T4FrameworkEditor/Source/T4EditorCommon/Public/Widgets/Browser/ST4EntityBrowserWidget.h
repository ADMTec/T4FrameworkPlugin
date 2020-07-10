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
  * #36 : refer SAnimationSequenceBrowser
 */

class FUICommandList;
class SMenuAnchor;
class UT4EntityAsset;
class FFrontendFilter_Folder;

class T4EDITORCOMMON_API ST4EntityBrowserWidget : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnSelectAsset, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnSpawnAsset, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnOpenAsset, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnSaveAsset, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnUpdateThumbnail, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnDoubleClicked, UObject* /* InAsset */);
	DECLARE_DELEGATE_ThreeParams(FT4OnSubMenuSelected, UObject* /* InAsset */, FName, bool); // #72

public:
	SLATE_BEGIN_ARGS(ST4EntityBrowserWidget) {}
		SLATE_ARGUMENT(FT4OnSelectAsset, OnSelectAsset)
		SLATE_ARGUMENT(FT4OnSpawnAsset, OnSpawnAsset)
		SLATE_ARGUMENT(FT4OnOpenAsset, OnOpenAsset)
		SLATE_ARGUMENT(FT4OnSaveAsset, OnSaveAsset)
		SLATE_ARGUMENT(FT4OnUpdateThumbnail, OnUpdateThumbnail)
		SLATE_ARGUMENT(FT4OnDoubleClicked, OnDoubleClicked)
		SLATE_ARGUMENT(FT4OnSubMenuSelected, OnEquipItemSubMenuSelected) // #72
		SLATE_ARGUMENT(FT4OnSubMenuSelected, OnExchangeItemSubMenuSelected) // #72
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);

	virtual ~ST4EntityBrowserWidget();

	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);

	virtual void SelectAsset(UT4EntityAsset* InEntityAsset);

	TSharedPtr<SWidget> HandleOnGetAssetContextMenu(const TArray<FAssetData>& SelectedAssets);

	void FindInContentBrowser();

	bool CanFindInContentBrowser() const;

	void HandleOnSelectAsset(const FAssetData& AssetData);
	void HandleOnDoubleClicked(const FAssetData& AssetData, bool bFromHistory);

	bool HandleOnCanSelectedAssets(TArray<FAssetData> InObjects) const;
	void HandleOnSpawnOrDropSelectedAssets(TArray<FAssetData> InObjects) const;

	// #72
	TSharedRef<SWidget> HandleOnEquipItemSubMenu(UT4EntityAsset* InEntityAssetSelected);
	TSharedRef<SWidget> HandleOnEquipItemSubMenuExecute(
		UT4EntityAsset* InEntityAssetSelected, 
		FName InActionPointName
	);
	TSharedRef<SWidget> HandleOnExchangeItemSubMenu(UT4EntityAsset* InEntityAssetSelected);
	TSharedRef<SWidget> HandleOnExchangeItemSubMenuExecute(
		UT4EntityAsset* InEntityAssetSelected,
		FName InCompositePartName
	);
	void HandleOnEquipOrUnequipItem(UT4EntityAsset* InEntityAssetSelected, FName InActionPointName, bool bEquip) const;
	void HandleOnExchangeItem(UT4EntityAsset* InEntityAssetSelected, FName InCompositePartName, bool bSet) const;
	// ~#72

	void HandleOnLoadMapSelectedAssets(TArray<FAssetData> InObjects) const; // #81

	void HandleOnOpenSelectedAssets(TArray<FAssetData> InObjects) const;
	bool HandleCanOpenSelectedAssets(TArray<FAssetData> InObjects) const;

	void HandleOnSaveSelectedAssets(TArray<FAssetData> InObjects) const; // #73
	bool HandleCanSaveSelectedAssets(TArray<FAssetData> InObjects) const; // #73

	void HandleOnUpdateThumbnailSelectedAsset(TArray<FAssetData> InObjects) const;
	bool HandleCanUpdateThumbnailSelectedAsset(TArray<FAssetData> InObjects) const;

protected:
	bool CanShowColumnForAssetRegistryTag(FName AssetType, FName TagName) const;
	
	void GetSelectedPackages(const TArray<FAssetData>& Assets, TArray<UPackage*>& OutPackages) const;

	bool HandleOnFilterAsset(const FAssetData& InAssetData) const;

protected:
	TSharedPtr<FUICommandList> Commands;

	TSet<FName> AssetRegistryTagsToIgnore;

	FT4OnSpawnAsset OnSpawnAsset;
	FT4OnSelectAsset OnSelectAsset;
	FT4OnOpenAsset OnOpenAsset;
	FT4OnSaveAsset OnSaveAsset;
	FT4OnUpdateThumbnail OnUpdateThumbnail;
	FT4OnDoubleClicked OnDoubleClicked;
	FT4OnSubMenuSelected OnEquipItemSubMenuSelected; // #72
	FT4OnSubMenuSelected OnExchangeItemSubMenuSelected; // #72

	FSyncToAssetsDelegate SyncToAssetsDelegate;
	FGetCurrentSelectionDelegate GetCurrentSelectionDelegate;

	FSetARFilterDelegate SetFilterDelegate;
	FARFilter Filter;
	TArray<TSharedPtr<FFrontendFilter_Folder>> FolderFilters;

public:
	static const FString SettingsIniSection;
};
