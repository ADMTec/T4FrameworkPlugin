// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4MinimapTileModel.h"
#include "T4MinimapLevelCollectionModel.h"
#include "Misc/WorldCompositionUtility.h"
#include "EditorUndoClient.h"

class FMenuBuilder;
class IDetailsView;
class FT4MinimapViewModel; // #86
class UT4MapEntityAsset; // #84

/** The non-UI solution specific presentation logic for a world composition */
class FT4MinimapTileCollectionModel
	: public FT4MinimapLevelCollectionModel 
	, public FEditorUndoClient
{

public:
	/** FT4MinimapTileCollectionModel destructor */
	virtual ~FT4MinimapTileCollectionModel();

	/**  
	 *	Factory method which creates a new FT4MinimapTileCollectionModel object
	 *
	 *	@param	InEditor		The UEditorEngine to use
	 */
	static TSharedRef<FT4MinimapTileCollectionModel> Create(FT4MinimapViewModel* InWorldMapViewModel) // #86
	{
		TSharedRef<FT4MinimapTileCollectionModel> LevelCollectionModel(new FT4MinimapTileCollectionModel()); // #86
		LevelCollectionModel->OnInitialize(InWorldMapViewModel);
		return LevelCollectionModel;
	}

public:
	void OnInitialize(FT4MinimapViewModel* InWorldViewModel); // #86

	/** FLevelCollection interface */
	virtual bool IsSimulationMode() const override; // #86 : override
	virtual UWorld* GetSimulationWorld() const override; // #86 : override

	virtual bool PassesAllFilters(const FT4MinimapLevelModel& InLevelModel) const override;
	virtual void BuildHierarchyMenu(FMenuBuilder& InMenuBuilder) const override;
	virtual bool GetPlayerView(FVector& OutCameraLocation, FRotator& OutCameraRotation, FVector& OutPlayerLocation) const override;
	virtual bool CompareLevelsZOrder(TSharedPtr<FT4MinimapLevelModel> InA, TSharedPtr<FT4MinimapLevelModel> InB) const override;
	virtual bool IsTileWorld() const override; // #91 : { return true; }

	virtual UT4MapEntityAsset* GetThumbnailTargetAsset() const; // #84
	/** FLevelCollection interface end */

private:
	/** FTickableEditorObject interface */
	void Tick( float DeltaTime ) override;
	/** FTickableEditorObject interface end */

	/** FLevelCollection interface */
	virtual void Initialize(UWorld* InWorld) override;
	virtual void OnLevelsCollectionChanged() override;
	virtual void OnLevelsSelectionChanged() override;
	/** FLevelCollection interface end */
	
public:
	/** @return	Whether world browser has world root opened */
	bool HasWorldRoot() const;

	/** Returns TileModel which is used as root for all tiles */
	TSharedPtr<FT4MinimapTileModel> GetWorldRootModel();

	/** Removes selection from levels which belongs to provided Layer */
	void DeselectLevels(const FWorldTileLayer& InLayer);

	/** @return	whether at least one layer is selected */
	bool AreAnyLayersSelected() const;

	/** Hide a levels from the editor and move them to original position 
	 *	Similar to unloading level, but does not removes it from the memory
	 */
	void ShelveLevels(const FT4MinimapTileModelList& InLevels);

	/** Show a levels in the editor and place them to actual world position */
	void UnshelveLevels(const FT4MinimapTileModelList& InLevels);

	/** Whether any of the currently selected levels have landscape actor */
	bool AreAnySelectedLevelsHaveLandscape() const;

	/** Returns all layers found in the world */
	TArray<FWorldTileLayer>& GetLayers();

	/**	Notification that "view point" for streaming levels visibility preview was changed */
	void UpdateStreamingPreview(FVector2D InPreviewLocation, bool bEnabled);

	/** Returns list of visible streaming levels for current preview location */
	const TMap<FName, int32>& GetPreviewStreamingLevels() const;
		
	//~ Begin FEditorUndoClient Interface
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override { PostUndo(bSuccess); }
	// End of FEditorUndoClient

	enum FocusStrategy 
	{
		OriginAtCenter,			// Unconditionally move current world origin to specified area center
		EnsureEditable,			// May move world origin such that specified area become editable
		EnsureEditableCentered  // May move world origin such that specified area become editable and centered in world
	};
	
	/** 
	 *  Tell the browser that user is focusing on this area in world  
	 *  This may cause world origin shifting and subsequent shelving/unshelving operations
	 */
	void Focus(FBox InArea, FocusStrategy InStaragegy);

	/** 
	 *  Builds context menu for a world composition
	 */
	void BuildWorldMapMenu(FMenuBuilder& InMenuBuilder) const;

	bool GetTileThumbnailSize(int32& OutTileThumbnailSize, int32& OutTileThumbnailAtlasSize); // #91 : per World

	// #104
	bool GetWorldActorLocations(TArray<FVector2D>& OutLocations, TArray<FColor>& OutDebugColors);

private:
	FT4MinimapTileCollectionModel();

	/** Setups parent->child links between tiles */
	void SetupParentChildLinks();

	/** Moves world origin closer to levels which are going to be loaded 
	 *  and unloads levels which are far enough from new world origin
	 */
	void PrepareToLoadLevels(FT4MinimapTileModelList& InLevels);
		
	/** Delegate callback: the world origin is going to be moved. */
	void PreWorldOriginOffset(UWorld* InWorld, FIntVector InSrcOrigin, FIntVector InDstOrigin);
	
	/** Delegate callback: the world origin has been moved. */
	void PostWorldOriginOffset(UWorld* InWorld, FIntVector InSrcOrigin, FIntVector InDstOrigin);

	/** Update list layers */
	void PopulateLayersList();

	/** Adds a loaded level to the world and makes it visible if possible 
	 *	@return Whether level was added to the world
	 */
	bool AddLevelToTheWorld(const TSharedPtr<FT4MinimapTileModel>& InLevel);

private:
	void PreviewCameraLookAtLocation_Executed() override; // #90

public:
	/** Whether Editor has support for generating static mesh proxies */	
	bool HasMeshProxySupport() const;

private:
	/** List of tiles currently not affected by user selection set */
	FT4MinimapLevelModelList					StaticTileList;	

	/** Cached streaming tiles which are potentially visible from specified view point*/
	TMap<FName, int32>					PreviewVisibleTiles;
	
	/** View point location for calculating potentially visible streaming tiles*/
	FVector								PreviewLocation;

	/** All layers */
	TArray<FWorldTileLayer>				AllLayers;

	/** All layers currently created by the user*/
	TArray<FWorldTileLayer>				ManagedLayers;

	/** All selected layers */
	TArray<FWorldTileLayer>				SelectedLayers;

	// Is in process of saving a level
	bool								bIsSavingLevel;
	
	// Whether Editor has support for mesh proxy
	bool								bMeshProxyAvailable;

	FT4MinimapViewModel*				MinimapViewModelRef; // #86
};
