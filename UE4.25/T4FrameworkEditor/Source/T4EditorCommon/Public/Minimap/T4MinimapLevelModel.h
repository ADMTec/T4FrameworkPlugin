// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class AActor;
struct FAssetData;
class FT4MinimapLevelCollectionModel;
class FLevelDragDropOp;
class FT4MinimapLevelModel;
class ULevel;
class ULevelStreaming;
class UT4MapEntityAsset; // #84
template< typename TItemType > class IFilter;

typedef TArray<TSharedPtr<class FT4MinimapLevelModel>> FT4MinimapLevelModelList;
class FT4MinimapLevelCollectionModel;

/**
 *  Interface for level collection hierarchy traversal
 */
struct FT4MinimapLevelModelVisitor
{
	virtual ~FT4MinimapLevelModelVisitor() { }
	virtual void Visit(FT4MinimapLevelModel& Item) = 0;
};

/**
 * Interface for non-UI presentation logic for a level in a world
 */
class FT4MinimapLevelModel
	: public TSharedFromThis<FT4MinimapLevelModel>	
{
public:
	typedef IFilter<const TWeakObjectPtr<AActor>&> ActorFilter;

	DECLARE_EVENT( FT4MinimapLevelModel, FSimpleEvent );
	
public:
	FT4MinimapLevelModel(FT4MinimapLevelCollectionModel& InLevelCollectionModel);

	virtual ~FT4MinimapLevelModel();
	
	/** Traverses level model hierarchy */
	void Accept(FT4MinimapLevelModelVisitor& Vistor);

	/** Sets level selection flag */
	void SetLevelSelectionFlag(bool bExpanded);
	
	/** @return Level selection flag */
	bool GetLevelSelectionFlag() const;
		
	/** Sets level child hierarchy expansion flag */
	void SetLevelExpansionFlag(bool bExpanded);
	
	/** @return Level child hierarchy expansion flag */
	bool GetLevelExpansionFlag() const;

	/** Sets level filtered out flag */
	void SetLevelFilteredOutFlag(bool bFiltredOut);
	
	/** @return Whether this level model was filtered out */
	bool GetLevelFilteredOutFlag() const;

	/**	@return	Level display name */
	FString GetDisplayName() const;
	
	/**	@return	Level package file name */
	FString GetPackageFileName() const;

	/**	@return	Whether level model has valid package file */
	virtual bool HasValidPackage() const { return true; };
		
	/** @return Pointer to UObject to be used as key in SNodePanel */
	virtual UObject* GetNodeObject() = 0;

	/** @return ULevel object if any */
	virtual ULevel* GetLevelObject() const = 0;
		
	/**	@return	Level asset name */
	virtual FName GetAssetName() const = 0;

	/**	@return	Level package file name */
	virtual FName GetLongPackageName() const = 0;

	/** Update asset associated with level model */
	virtual void UpdateAsset(const FAssetData& AssetData) = 0;
	
	/** Refreshes cached data */
	virtual void Update();
	
	/** Refreshes visual information */
	virtual void UpdateVisuals();

	/**	@return	Whether level is in PIE/SIE mode */
	bool IsSimulationMode() const;
	
	/** @return Whether level is CurrentLevel */
	bool IsCurrent() const;

	/** @return Whether level is PersistentLevel */
	bool IsPersistent() const;

	/** @return Whether level is editable */
	bool IsEditable() const;

	/** @return Whether level is dirty */
	bool IsDirty() const;

	/** @return Whether level is a lighting scenario */
	bool IsLightingScenario() const;

	void SetIsLightingScenario(bool bNew);

	/** @return Whether level has loaded content */
	bool IsLoaded() const;

	/** @return Whether level is in process of loading content */
	bool IsLoading() const;

	/**	@return Whether level is visible in the world */
	bool IsVisible() const;

	/**	@return Whether level is locked */
	bool IsLocked() const;

	/** @return Whether level package file is read only */
	bool IsFileReadOnly() const;

	/** @return Whether the streaming level object is transient */
	virtual bool IsTransient() const { return false; }

	/** Sets the Level's visibility */
	virtual void SetVisible(bool bVisible);

	/** Sets the Level's locked/unlocked state */
	void SetLocked(bool bLocked);

	/** @return Whether specified point is hovering level */
	virtual bool HitTest2D(const FVector2D& Point) const;
	
	/** @return Level top left corner position */
	virtual FVector2D GetLevelPosition2D() const;

	/** @return XY size of level */
	virtual FVector2D GetLevelSize2D() const;

	/** @return Level bounding box */
	virtual FBox GetLevelBounds() const;
	
	/** @return level translation delta, when user moving level item */
	FVector2D GetLevelTranslationDelta() const;

	/** Sets new translation delta to this model and all descendants*/
	void SetLevelTranslationDelta(FVector2D InAbsoluteDelta);

	/** @return level color, used for visualization. (Show -> Advanced -> Level Coloration) */
	virtual FLinearColor GetLevelColor() const;

	/** Whether level should be drawn in world composition view */
	virtual bool IsVisibleInCompositionView() const;
	
	/**	@return Whether level has associated blueprint script */
	bool HasKismet() const;

	/**	Opens level associated blueprint script */
	void OpenKismet();

	/** 
	 * Sets parent for this item
	 * @return false in case attaching has failed
	 */
	bool AttachTo(TSharedPtr<FT4MinimapLevelModel> InParent);

	/**	Notifies level model that filters has been changed */
	void OnFilterChanged();

	/**	@return Level child hierarchy */
	const FT4MinimapLevelModelList& GetChildren() const;
	
	/**	@return Parent level model */
	TSharedPtr<FT4MinimapLevelModel> GetParent() const;
	
	/**	Sets link to a parent model  */
	void SetParent(TSharedPtr<FT4MinimapLevelModel>);

	/**	Removes all entries from children list*/
	void RemoveAllChildren();

	/**	Removes specific child */
	void RemoveChild(TSharedPtr<FT4MinimapLevelModel> InChild);
	
	/**	Adds new entry to a children list */
	void AddChild(TSharedPtr<FT4MinimapLevelModel> InChild);
		
	/**	@return Whether this model has in ancestors specified level model */
	bool HasAncestor(const TSharedPtr<FT4MinimapLevelModel>& InLevel) const;

	/**	@return Whether this model has in descendants specified level model */
	bool HasDescendant(const TSharedPtr<FT4MinimapLevelModel>& InLevel) const;
	
	/** Returns the folder path that the level should use when displayed in the world hierarchy */
	virtual FName GetFolderPath() const { return NAME_None; }

	/** Sets the folder path that the level should use when displayed in the world hierarchy */
	virtual void SetFolderPath(const FName& InFolderPath) {}

	/** Returns true if the level model can be added to hierarchy folders */
	virtual bool HasFolderSupport() const { return false; }

	/**	@return Handles drop operation */
	virtual void OnDrop(const TSharedPtr<FLevelDragDropOp>& Op);
	
	/**	@return Whether it's possible to drop onto this level */
	virtual bool IsGoodToDrop(const TSharedPtr<FLevelDragDropOp>& Op) const;

	/** Notification on level reparenting */
	virtual void OnParentChanged() {};

	/** Event when level model has been changed */
	void BroadcastLevelChanged();
	
	/*
	 *
	 */
	struct FSimulationLevelStatus
	{
		bool bLoaded;
		bool bLoading;
		bool bVisible;
	};
	
	/** Updates this level simulation status  */
	void UpdateSimulationStatus(ULevelStreaming* StreamingLevel);

	/**	Broadcasts whenever level has changed */
	FSimpleEvent ChangedEvent;
	void BroadcastChangedEvent();

	/** Deselects all Actors in this level */
	void DeselectAllActors();

	/** Deselects all BSP surfaces in this level */
	void DeselectAllSurfaces();

	/**
	 *	Selects in the Editor all the Actors assigned to the Level, based on the specified conditions.
	 *
	 *	@param	bSelect					if true actors will be selected; If false, actors will be deselected
	 *	@param	bNotify					if true the editor will be notified of the selection change; If false, the editor will not
	 *	@param	bSelectEvenIfHidden		if true actors that are hidden will be selected; If false, they will be skipped
	 *	@param	Filter					Only actors which pass the filters restrictions will be selected
	 */
	void SelectActors(bool bSelect, bool bNotify, bool bSelectEvenIfHidden, 
						const TSharedPtr<ActorFilter>& Filter = TSharedPtr<ActorFilter>(NULL));
	
	/** Updates cached value of level actors count */
	void UpdateLevelActorsCount();

	/** Updates cached value of level display name */
	void UpdateDisplayName();

	/** @return the Level's Lightmass Size as a FString */
	FString GetLightmassSizeString() const;

	/** @return the Level's File Size as a FString */
	FString GetFileSizeString() const;
	
	/** @return Class used for streaming this level */
	virtual UClass* GetStreamingClass() const;

	bool IsWorldCompositionEnabled() const; // #91
	UWorld* GetEditorWorld() const; // #91
	UWorld* GetSimulationWorld() const; // #93
	ULevel* GetThumbnailLoadedLevel() const; // #84
	UT4MapEntityAsset* GetThumbnailTargetAsset() const; // #84

	/** Sets editor level selection flag */
	void SetEditorLevelSelectionFlag(bool bSelect) { bEditorSelected = bSelect; } // #90

	/** @return Level selection flag */
	bool GetEditorLevelSelectionFlag() const { return bEditorSelected; } // #90

	bool GetPreviewLevelSelectionFlag() const; // #104

protected:
	/** Called when the map asset is renamed */
	void OnAssetRenamed(const FAssetData& AssetData, const FString& OldObjectPath);

protected:
	/** Level model display name */
	FString								DisplayName;

	/** Reference to owning collection model */
	FT4MinimapLevelCollectionModel&			LevelCollectionModel;
		
	/** The parent level  */
	TWeakPtr<FT4MinimapLevelModel>				Parent;
		
	/** Filtered children of this level  */
	FT4MinimapLevelModelList					FilteredChildren;

	/** All children of this level  */
	FT4MinimapLevelModelList					AllChildren;

	// Level simulation status
	FSimulationLevelStatus				SimulationStatus;

	// Whether this level model is selected
	bool								bSelected;
	
	// Whether this level model is expended in hierarchy view
	bool								bExpanded;

	// Whether this level model is in a process of loading content
	bool								bLoadingLevel;
	
	// Whether this level model does not pass filters
	bool								bFilteredOut;

	// Current translation delta
	FVector2D							LevelTranslationDelta;

	// Cached level actors count
	int32								LevelActorsCount;

	// Whether this editor level model is selected
	bool								bEditorSelected;
};
