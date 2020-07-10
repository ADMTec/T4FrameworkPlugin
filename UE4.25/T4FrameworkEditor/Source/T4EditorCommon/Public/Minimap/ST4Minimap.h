// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"

#include "Layout/Visibility.h"
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"
#include "Framework/Application/IMenu.h"

#include "T4MinimapTileCollectionModel.h"

class SBorder;
class SButton;
class ST4MinimapGrid;
class SWrapBox;
class FT4MinimapViewModel;
class ST4Minimap 
	: public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(ST4Minimap) {}
	SLATE_END_ARGS();

	ST4Minimap();
	~ST4Minimap();

	void Construct(const FArguments& InArgs);

	void OnInitialize(FT4MinimapViewModel* InWorldViewModel); // #90

	void OnRefresh(); // #90
	void OnRefreshSelection(); // #86

	void OnRequestScrollTo(const FVector& InLocation, const FBox& InArea); // #90

	void OnActorSelected(const FVector& InLocation, const FBox& InBoundingBox); // #104
	void OnMapZoneSelected(FName InMapZoneName); // #92

	FVector2D GetMouseDownLocationInWorldSpace() const; // #90

private:
	/**  */
	void BrowseWorld();

	/**  */
	TSharedRef<SWidget> ConstructContentWidget();

	/** Top status bar details */
	FText GetZoomText() const;
	FText GetCurrentOriginText() const;
	FText GetCurrentLevelText() const;

	/** Bottom status bar details */
	FText GetMouseLocationText() const;
	FText GetMarqueeSelectionSizeText() const;
	FText GetWorldSizeText() const;

	/** @return whether SIMULATION sign should be visible */
	EVisibility IsSimulationVisible() const;
	
	void HandleOnSelectLayerClicked(); // #86


private:
	void Reset(); // #83

private:
	FT4MinimapViewModel*						MinimapViewModelRef; // #83

	TSharedPtr<FT4MinimapTileCollectionModel>	TileWorldModel;
	
	TSharedPtr<SBorder>							ContentParent;
	TSharedPtr<SWrapBox>						LayersListWrapBox;
	TSharedPtr<SButton>							NewLayerButton;
	TWeakPtr<class IMenu>						NewLayerMenu;
	TSharedPtr<class ST4MinimapGrid>			GridView;
};
