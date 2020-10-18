// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ViewModel/T4EditorViewModelBase.h"

/**
  * #83, #118
 */
class ULevel;
class UWorld;
class ST4Minimap; // #83
struct FT4MapThumbnailData;
class FT4WorldPreviewViewModel;
class FT4MinimapLevelCollectionModel;
class UT4MapEntityAsset; // #104
class T4EDITORCOMMON_API FT4MinimapViewModel
	: public FT4EditorViewModelBase
{
public:
	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnSubLevelSelection, const TArray<FName>&, bool); // #83, #86
	DECLARE_MULTICAST_DELEGATE(FT4OnSubLevelChanged); // #83

public:
	FT4MinimapViewModel(
		TSharedPtr<FT4WorldPreviewViewModel> InPreviewViewModelPtr, 
		bool InMinimapMode // #118 : World Editor 는 편집, Content Editor 는 Minimap 으로 사용된다.
	);
	virtual ~FT4MinimapViewModel();

public:
	UT4MapEntityAsset* GetMapEntityAsset() const; // #104 : WorldAsset 의 Tile 을 MapEntity 로 이전!
	TSharedRef<ST4Minimap> GetMinimapRef(); // #104

	bool IsWorldCompositionEnabled() const; // #91

	UWorld* GetPreviewWorld() const; // #85

	TSharedPtr<FT4MinimapLevelCollectionModel> GetWorldModelPtr();

	bool GetTileThumbnailSize(int32& OutTileThumbnailSize, int32& OutTileThumbnailAtlasSize); // #91
	const FT4MapThumbnailData* GetSubLevelThumbnail(const FName InLevelAssetName); // #84

	FT4OnSubLevelSelection& GetOnSubLevelSelection() { return OnSubLevelSelection; } // #83
	FT4OnSubLevelChanged& GetOnSubLevelChanged() { return OnSubLevelChanged; } // #83
	FT4OnSubLevelChanged& GetOnEditorSubLevelChanged() { return OnEditorSubLevelChanged; } // #104

	void UpdatePreviewWorldSubLevel(); // #86
	void ResetSubLevelSelection(); // #86

	void SetMinimapScroll(const FVector& InLocation); // #145

	void SetPreviewWorldActorSelected(const FVector& InLocation, const FBox& InBoundingBox); // #104

	void SetPreviewWorldUpdateCamera(const FVector& InLocation, const FBox& InBoundingBox, bool bMinimapSet); // #85
	void SetPreviewWorldUpdateCamera(const FVector2D& InLocation); // #90
	const TSet<FName>& GetPreviewLoadedLevels() const; // #104

	bool GetPlayerViewOnPreviewWorld(FVector& OutCameraLocation, FRotator& OutCameraRotation, FVector& OutPlayerLocation); // #86
	virtual bool GetPreviewWorldActorLocations(TArray<FVector2D>& OutLocations, TArray<FColor>& OutDebugColors); // #104

	void HandleOnDetailsPropertiesChanged(const FName& InPropertyName); // #76
	void HandleOnWorldPropertiesChanged();

	void HandleOnSelectionChanged();
	void HandleOnPreviewLoadedLevelChanged(); // #104
	void HandleOnEditorLoadedLevelChanged(); // #104
	void HandleOnSubLevelChanged();

protected:
	void MinimapInitialize(); // #104
	void MinimapTick(float InDeltaTime); // #104
	void MinimapCleanup(); // #85
	void MinimapReinitialize(UT4MapEntityAsset* InMapEntityAsset); // #172
	void MinimapSetEntity(UT4MapEntityAsset* InMapEntityAsset); // #104

protected:
	TWeakObjectPtr<UT4MapEntityAsset> MapEntityAssetPtr; // #104 : WorldAsset 의 Tile 을 MapEntity 로 이전!

	TSharedPtr<ST4Minimap> MinimapPtr; // #90
	TSharedPtr<FT4WorldPreviewViewModel> PreviewViewModelPtr;

	TWeakPtr<FT4MinimapLevelCollectionModel> WorldCollectionModelPtr;

	FT4OnSubLevelSelection OnSubLevelSelection; // #83
	FT4OnSubLevelChanged OnSubLevelChanged; // #83
	FT4OnSubLevelChanged OnEditorSubLevelChanged; // #104

	bool bUpdatePreviewLoadedLevels; // #83

	FString ReplaySystemAssetName; // #68, #104
	FString ReplayFolderName; // #68, #104
};
