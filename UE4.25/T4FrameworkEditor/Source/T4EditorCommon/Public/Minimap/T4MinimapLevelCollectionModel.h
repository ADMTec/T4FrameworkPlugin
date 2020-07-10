// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Minimap/T4MinimapLevelModel.h"
#include "T4EditorStructs.h"

#include "Stats/Stats.h"
#include "Framework/Commands/UICommandList.h"
#include "Engine/World.h"
#include "TickableEditorObject.h"
#include "Misc/IFilter.h"

#include "Misc/FilterCollection.h"

class FMenuBuilder;
class IDetailsView;
class UEditorEngine;
class UMaterialInterface;
class UT4WorldExploreAsset; // #84

typedef IFilter< const FT4MinimapLevelModel* >				T4MinimapLevelFilter;
typedef TFilterCollection< const FT4MinimapLevelModel* >	T4MinimapLevelFilterCollection;

/**
 * Interface for non-UI presentation logic for a world
 */
class FT4MinimapLevelCollectionModel
	: public TSharedFromThis<FT4MinimapLevelCollectionModel>	
	, public FTickableEditorObject
{
public:
	DECLARE_EVENT_OneParam( FT4MinimapLevelCollectionModel, FOnNewItemAdded, TSharedPtr<FT4MinimapLevelModel>);
	DECLARE_EVENT( FT4MinimapLevelCollectionModel, FSimpleEvent );


public:
	FT4MinimapLevelCollectionModel();
	virtual ~FT4MinimapLevelCollectionModel();

	/** FTickableEditorObject interface */
	virtual void Tick( float DeltaTime ) override;
	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Always; }
	virtual TStatId GetStatId() const override;
	/** FTickableEditorObject interface */
	
	/**	@return	Whether level collection is read only now */
	bool IsReadOnly() const;

	/**	@return	Whether level collection is in PIE/SIE mode */
	virtual bool IsSimulationMode() const; // #86 : virtual => override

	/**	@return	Current simulation world */
	virtual UWorld* GetSimulationWorld() const; // #86 : virtual => override

	/**	@return	Current editor world */
	UWorld* GetWorld(bool bEvenIfPendingKill = false) const { return CurrentWorld.Get(bEvenIfPendingKill); }

	/** @return	Whether current world has world origin rebasing enabled */
	bool IsOriginRebasingEnabled() const;

	/** Current world size  */
	FIntPoint GetWorldSize() const { return WorldSize; }
	
	/**	@return	Root list of levels in hierarchy */
	FT4MinimapLevelModelList& GetRootLevelList();

	/**	@return	All level list managed by this level collection */
	const FT4MinimapLevelModelList& GetAllLevels() const;

	/**	@return	List of filtered levels */
	const FT4MinimapLevelModelList& GetFilteredLevels() const;

	/**	@return	Currently selected level list */
	const FT4MinimapLevelModelList& GetSelectedLevels() const;

	/** Adds a filter which restricts the Levels shown in UI */
	void AddFilter(const TSharedRef<T4MinimapLevelFilter>& InFilter);

	/** Removes a filter which restricted the Levels shown in UI */
	void RemoveFilter(const TSharedRef<T4MinimapLevelFilter>& InFilter);

	/**	@return	Whether level filtering is active now */
	bool IsFilterActive() const;
	
	/**	Iterates through level hierarchy with given Visitor */
	void IterateHierarchy(FT4MinimapLevelModelVisitor& Visitor);

	/**	Sets selected level list */
	void SetSelectedLevels(const FT4MinimapLevelModelList& InList);

	/**	@return	Found level model which represents specified level object */
	TSharedPtr<FT4MinimapLevelModel> FindLevelModel(ULevel* InLevel) const;

	/**	@return	Found level model with specified level package name */
	TSharedPtr<FT4MinimapLevelModel> FindLevelModel(const FName& PackageName) const;

	/**	@return	Whether specified level passes all filters */
	virtual bool PassesAllFilters(const FT4MinimapLevelModel& InLevelModel) const;
	
	/**	Builds 'hierarchy' commands menu for a selected levels */
	virtual void BuildHierarchyMenu(FMenuBuilder& InMenuBuilder) const;

	/**	@return	Player view in the PIE/Simulation world */
	virtual bool GetPlayerView(FVector& OutCameraLocation, FRotator& OutCameraRotation, FVector& OutPlayerLocation) const;

	/**	Compares 2 levels by Z order */
	virtual bool CompareLevelsZOrder(TSharedPtr<FT4MinimapLevelModel> InA, TSharedPtr<FT4MinimapLevelModel> InB) const;

	/** @return	Whether this level collection model is a tile world */
	virtual bool IsTileWorld() const { return false; };

	/** Returns true if this collection model will support folders */
	virtual bool HasFolderSupport() const { return false; }

	/** Rebuilds levels collection */
	void PopulateLevelsList();

	/** Rebuilds the list of filtered Levels */
	void PopulateFilteredLevelsList();

	/**	Request to update levels cached information */
	void RequestUpdateAllLevels();
	
	/**	Request to redraw all levels */
	void RequestRedrawAllLevels();

	/**	Updates all levels cached information */
	void UpdateAllLevels();

	/**	Redraws all levels */
	void RedrawAllLevels();

	/** Updates level actor count for all levels */
	void UpdateLevelActorsCount();

	/** @return	whether exactly one level is selected */
	bool IsOneLevelSelected() const;

	/** @return	whether at least one level is selected */
	bool AreAnyLevelsSelected() const;

	/** @return whether all the currently selected levels are loaded */
	bool AreAllSelectedLevelsLoaded() const;

	/** @return whether any of the currently selected levels is loaded */
	bool AreAnySelectedLevelsLoaded() const;
	
	/** @return whether all the currently selected levels are unloaded */
	bool AreAllSelectedLevelsUnloaded() const;
	
	/** @return whether any of the currently selected levels is unloaded */
	bool AreAnySelectedLevelsUnloaded() const;

	/** @return whether all the currently selected levels are editable */
	bool AreAllSelectedLevelsEditable() const;

	/** @return whether all the currently selected levels are editable and not persistent */
	bool AreAllSelectedLevelsEditableAndNotPersistent() const;

	/** @return whether all the currently selected levels are editable and visible*/
	bool AreAllSelectedLevelsEditableAndVisible() const;

	/** @return whether any of the currently selected levels is editable */
	bool AreAnySelectedLevelsEditable() const;

	/** @return whether any of the currently selected levels is editable and visible*/
	bool AreAnySelectedLevelsEditableAndVisible() const;
	
	/** @return whether currently only one level selected and it is editable */
	bool IsSelectedLevelEditable() const;

	/** @return whether currently only one level selected and a lighting scenario */
	bool IsNewLightingScenarioState(bool bExistingState) const;

	void SetIsLightingScenario(bool bNewLightingScenario);

	/** @return whether any of the currently selected levels is dirty */
	bool AreAnySelectedLevelsDirty() const;

	/** @return	whether at least one actor is selected */
	bool AreActorsSelected() const;

	/** @return whether moving the selected actors to the selected level is a valid action */
	bool IsValidMoveActorsToLevel() const;

	/** @return whether moving the selected foliage to the selected level is a valid action */
	bool IsValidMoveFoliageToLevel() const;

	/** delegate used to pickup when the selection has changed */
	void OnActorSelectionChanged(UObject* obj);

	/** Sets a flag to re-cache whether the selected actors move to the selected level is valid */
	void OnActorOrLevelSelectionChanged();

	/** @return	whether 'display paths' is enabled */
	bool GetDisplayPathsState() const;

	/** Sets 'display paths', whether to show long package name in level display name */
	void SetDisplayPathsState(bool bDisplayPaths);

	/** @return	whether 'display actors count' is enabled */
	bool GetDisplayActorsCountState() const;

	/** Sets 'display actors count', whether to show actors count next to level name */
	void SetDisplayActorsCountState(bool bDisplayActorsCount);

	/**	Broadcasts whenever items selection has changed */
	FSimpleEvent SelectionChanged;
	void BroadcastSelectionChanged();

	/**	Broadcasts whenever items collection has changed */
	FSimpleEvent CollectionChanged;
	void BroadcastCollectionChanged();
		
	/** Broadcasts whenever items hierarchy has changed */
	FSimpleEvent HierarchyChanged;
	void BroadcastHierarchyChanged();

	/** Broadcasts before levels are unloaded */
	FSimpleEvent PreLevelsUnloaded;
	void BroadcastPreLevelsUnloaded();

	/** Broadcasts after levels are unloaded */
	FSimpleEvent PostLevelsUnloaded;
	void BroadcastPostLevelsUnloaded();
	
	// #83
	FSimpleEvent OnSubLevelChanged;
	void BroadcastSubLevelChanged();
	// ~#83

	/** Editable world axis length  */
	static float EditableAxisLength();

	/** Editable world bounds */
	static FBox EditableWorldArea();

	/**  */
	static void SCCCheckOut(const FT4MinimapLevelModelList& InList);
	static void SCCCheckIn(const FT4MinimapLevelModelList& InList);
	static void SCCOpenForAdd(const FT4MinimapLevelModelList& InList);
	static void SCCHistory(const FT4MinimapLevelModelList& InList);
	static void SCCRefresh(const FT4MinimapLevelModelList& InList);
	static void SCCDiffAgainstDepot(const FT4MinimapLevelModelList& InList, UEditorEngine* InEditor);
	
	/** @return	List of valid level package names from a specified level model list*/
	static TArray<FName> GetPackageNamesList(const FT4MinimapLevelModelList& InList);
	
	/** @return	List of valid level package filenames from a specified level model list*/
	static TArray<FString> GetFilenamesList(const FT4MinimapLevelModelList& InList);
	
	/** @return	List of valid packages from a specified level model list*/
	static TArray<UPackage*> GetPackagesList(const FT4MinimapLevelModelList& InList);
	
	/** @return	List of valid level objects from a specified level model list*/
	static TArray<ULevel*> GetLevelObjectList(const FT4MinimapLevelModelList& InList);

	/** @return	List of loaded level models from a specified level model list*/
	static FT4MinimapLevelModelList GetLoadedLevels(const FT4MinimapLevelModelList& InList);

	/** @return	List of all level models found while traversing hierarchy of specified level models */
	static FT4MinimapLevelModelList GetLevelsHierarchy(const FT4MinimapLevelModelList& InList);

	/** @return	Total bounding box of specified level models */
	static FBox GetLevelsBoundingBox(const FT4MinimapLevelModelList& InList, bool bIncludeChildren);

	/** @return	Total bounding box of specified visible level models */
	static FBox GetVisibleLevelsBoundingBox(const FT4MinimapLevelModelList& InList, bool bIncludeChildren);

	/** @return	The UICommandList supported by this collection */
	const TSharedRef<const FUICommandList> GetCommandList() const;

	/**  */
	void LoadSettings();
	
	/**  */
	void SaveSettings();

	virtual UT4MapEntityAsset* GetThumbnailTargetAsset() const { return nullptr; } // #84

	const TSet<FName>& GetPreviewLoadedLevelLists() const { return PreviewLoadedLevelList; } // #104

	void LoadEditorSubLevel(const TArray<FName>& InSubLevelNames); // #104
	void LoadPreviewSubLevel(const TArray<FName>& InSubLevelNames); // #104
	void UnloadPreviewSubLevel(const TArray<FName>& InSubLevelNames); // #104

	FSimpleEvent PreviewLoadedLevelChanged; // #104
	void BroadcastPreviewLoadedLevelChanged(); // #104

	FSimpleEvent EditorLoadedLevelChanged; // #104
	void BroadcastEditorLoadedLevelChanged(); // #104

protected:
	/** Refreshes current cached data */
	void RefreshBrowser_Executed();
	
	/** Find selected levels in Content Browser */
	void FindInContentBrowser_Executed();

	/** Is FindInContentBrowser a valid action */
	bool IsValidFindInContentBrowser();

	/** Expand selected items hierarchy */
	void ExpandSelectedItems_Executed();

	/** Selects all levels in the collection view model */
	void SelectAllLevels_Executed();

	/** De-selects all levels in the collection view model */
	void DeselectAllLevels_Executed();

	/** Inverts level selection in the collection view model */
	void InvertSelection_Executed();

	virtual void PreviewCameraLookAtLocation_Executed() {} // #90

	/** true if the SCC Check-Out option is available */
	bool CanExecuteSCCCheckOut() const
	{
		return bCanExecuteSCCCheckOut;
	}

	/** true if the SCC Check-In option is available */
	bool CanExecuteSCCCheckIn() const
	{
		return bCanExecuteSCCCheckIn;
	}

	/** true if the SCC Mark for Add option is available */
	bool CanExecuteSCCOpenForAdd() const
	{
		return bCanExecuteSCCOpenForAdd;
	}

	/** true if Source Control options are generally available. */
	bool CanExecuteSCC() const
	{
		return bCanExecuteSCC;
	}

	/** Load selected levels to the Preview world */
	void LoadSelectedPreviewLevels_Executed(); // #104

	/** Unload selected level from the Preview world */
	void UnloadSelectedPreviewLevels_Executed(); // #104

	bool AreAnySelectedPreviewLevelsLoaded() const; // #104
	bool AreAnySelectedPreviewLevelsUnloaded() const; // #104

protected:
	/**  */
	virtual void Initialize(UWorld* InWorld);
	
	/**  */
	virtual void BindCommands();

	/** Called whenever level collection has been changed */
	virtual void OnLevelsCollectionChanged();
	
	/** Called whenever level selection has been changed */
	virtual void OnLevelsSelectionChanged();

	/** Handler for FEditorSupportDelegates::RedrawAllViewports event */
	void OnRedrawAllViewports();

	/** Handler for level filter collection changes */
	void OnFilterChanged();
		
protected:
	
	// The editor world from where we pull our data
	TWeakObjectPtr<UWorld>				CurrentWorld;

	// Has request to update all levels cached 
	bool								bRequestedUpdateAllLevels;
	
	// Has request to redraw all levels
	bool								bRequestedRedrawAllLevels;

	// Has request to update actors count for all levels
	bool								bRequestedUpdateActorsCount;

	/** The list of commands with bound delegates for the Level collection */
	const TSharedRef<FUICommandList>	CommandList;

	/** The collection of filters used to restrict the Levels shown in UI */
	const TSharedRef<T4MinimapLevelFilterCollection> Filters;
	
	/** Levels in the root of hierarchy, persistent levels  */
	FT4MinimapLevelModelList						RootLevelsList;
	
	/** All levels found in the world */
	FT4MinimapLevelModelList						AllLevelsList;
	
	/** All levels in a map<PackageName, LevelModel> */
	TMap<FName, TSharedPtr<FT4MinimapLevelModel>> AllLevelsMap;

	/** Filtered levels from AllLevels list  */
	FT4MinimapLevelModelList						FilteredLevelsList;

	/** Currently selected levels  */
	FT4MinimapLevelModelList						SelectedLevelsList;

	/** Cached value of world size (sum of levels size) */
	FIntPoint							WorldSize;

	/** Whether we should show long package names in level display names */
	bool								bDisplayPaths;

	/** Whether we should show actors count next to level name */
	bool								bDisplayActorsCount;

	/** true if the SCC Check-Out option is available */
	mutable bool						bCanExecuteSCCCheckOut;

	/** true if the SCC Check-In option is available */
	mutable bool						bCanExecuteSCCOpenForAdd;

	/** true if the SCC Mark for Add option is available */
	mutable bool						bCanExecuteSCCCheckIn;

	/** true if Source Control options are generally available. */
	mutable bool						bCanExecuteSCC;

	/** Flag for whether the selection of levels or actors has changed */
	mutable bool						bSelectionHasChanged;

	/** Guard to avoid recursive level selection updates */
	bool								bUpdatingLevelsSelection;

	/** Currently selected editor levels  */
	FT4MinimapLevelModelList					SelectedEditorLevelsList; // #90

	/** Currently loaded preview levels  */
	TSet<FName>							PreviewLoadedLevelList; // #104
};
