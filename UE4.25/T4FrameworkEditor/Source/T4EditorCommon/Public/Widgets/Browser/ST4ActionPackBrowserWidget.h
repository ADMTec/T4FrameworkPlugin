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
class UT4ActionPackAsset;
class FFrontendFilter_Folder;
class T4EDITORCOMMON_API ST4ActionPackBrowserWidget : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FT4OnSelectAsset, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnDoubleClicked, UObject* /* InAsset */);
	DECLARE_DELEGATE_OneParam(FT4OnOpenAsset, UObject* /* InAsset */); // #134
	DECLARE_DELEGATE_OneParam(FT4OnPlayAsset, UObject* /* InAsset */); // #134

public:
	SLATE_BEGIN_ARGS(ST4ActionPackBrowserWidget) {}
		SLATE_ARGUMENT(FT4OnSelectAsset, OnSelectAsset)
		SLATE_ARGUMENT(FT4OnDoubleClicked, OnDoubleClicked) // #71
		SLATE_ARGUMENT(FT4OnOpenAsset, OnOpenAsset) // #134
		SLATE_ARGUMENT(FT4OnPlayAsset, OnPlayAsset) // #134
		SLATE_ARGUMENT(bool, bFilterEntityOnly) // #135 : Entity 는 오직 해당 Entity 만 사용 처리
		SLATE_ARGUMENT(FString, FilterEntityPath) // #71
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);

	virtual ~ST4ActionPackBrowserWidget();

	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);

	virtual void SelectAsset(UT4ActionPackAsset* InActionPackAsset);

	void SetFilterEntityPath(const FString& InFilterEntityPath);

	TSharedPtr<SWidget> OnGetAssetContextMenu(const TArray<FAssetData>& SelectedAssets);

	void FindInContentBrowser();

	bool CanFindInContentBrowser() const;

	void HandleOnNewAsset();

	void HandleOnSelectAsset(const FAssetData& AssetData);
	void HandleOnDoubleClicked(const FAssetData& AssetData, bool bFromHistory);

	void HandleOnOpenSelectedAssets(TArray<FAssetData> InObjects) const;
	bool HandleCanOpenSelectedAssets(TArray<FAssetData> InObjects) const;

	void HandleOnPlaySelectedAssets(TArray<FAssetData> InObjects) const; // #71
	bool HandleCanPlaySelectedAssets(TArray<FAssetData> InObjects) const; // #71

	void HandleOnSaveSelectedAssets(TArray<FAssetData> InObjects) const;
	bool HandleCanSaveSelectedAssets(TArray<FAssetData> InObjects) const;

	bool HandleOnFilterAsset(const FAssetData& InAssetData, bool bForceEntityFilter) const;

protected:
	bool CanShowColumnForAssetRegistryTag(FName AssetType, FName TagName) const;
	
	void GetSelectedPackages(const TArray<FAssetData>& Assets, TArray<UPackage*>& OutPackages) const;

protected:
	TSharedPtr<FUICommandList> Commands;
	TSharedPtr<SWidget> AssetPickerPtr;

	TSet<FName> AssetRegistryTagsToIgnore;

	FT4OnSelectAsset OnSelectAsset;
	FT4OnDoubleClicked OnDoubleClicked;
	FT4OnOpenAsset OnOpenAsset; // #134
	FT4OnPlayAsset OnPlayAsset; // #134

	FSyncToAssetsDelegate SyncToAssetsDelegate;
	FGetCurrentSelectionDelegate GetCurrentSelectionDelegate;

	FSetARFilterDelegate SetFilterDelegate;
	FARFilter Filter;

	bool bFilterEntityOnly; // #135 : Entity 는 오직 해당 Entity 만 사용 처리
	FString FilterEntityPath; // #71

public:
	static const FString SettingsIniSection;
};
