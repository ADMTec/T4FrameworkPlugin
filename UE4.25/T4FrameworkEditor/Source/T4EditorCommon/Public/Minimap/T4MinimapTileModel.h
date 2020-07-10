// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4MinimapLevelModel.h"
#include "Misc/Guid.h"
#include "Misc/WorldCompositionUtility.h"
#include "LandscapeProxy.h"

struct FAssetData;
class FLevelDragDropOp;
class FT4MinimapTileCollectionModel;
class UT4MinimapTileDetails;
class FT4MinimapTileModel;
class ULevelStreaming;
class UMaterialInterface;

//
typedef TArray<TSharedPtr<class FT4MinimapTileModel>> FT4MinimapTileModelList;


/**
 * The non-UI presentation logic for a single Level (Tile) in world composition
 */
class FT4MinimapTileModel 
	: public FT4MinimapLevelModel	
{
public:
	struct FCompareByLongPackageName
	{
		FORCEINLINE bool operator()(const TSharedPtr<FT4MinimapLevelModel>& A, 
									const TSharedPtr<FT4MinimapLevelModel>& B) const
		{
			return A->GetLongPackageName().LexicalLess(B->GetLongPackageName()); // 4.22 => 4.23
		}
	};

	enum EWorldDirections
	{
		XNegative,
		YNegative,
		XPositive,
		YPositive,
		Any
	};

	/**
	 * 
	 */
	struct FLandscapeImportSettings
	{
		// Depending on landscape guid import code will spawn Landscape actor or LandscapeProxy actor
		FGuid								LandscapeGuid;
		FTransform							LandscapeTransform;
		UMaterialInterface*					LandscapeMaterial;
		int32								ComponentSizeQuads;
		int32								SectionsPerComponent;
		int32								QuadsPerSection;
		int32								SizeX;
		int32								SizeY;
		TArray<uint16>						HeightData;
		TArray<FLandscapeImportLayerInfo>	ImportLayers;
		FString								HeightmapFilename;
		ELandscapeImportAlphamapType		ImportLayerType;
	};
	
	/**
	 *	FT4MinimapTileModel Constructor
	 *
	 *	@param	InWorldData		WorldBrowser world data
	 *	@param	TileIdx			Tile index in world composition tiles list
	 */
	FT4MinimapTileModel(FT4MinimapTileCollectionModel& InWorldData, int32 TileIdx);
	~FT4MinimapTileModel();

public:
	// FT4MinimapLevelModel interface
	virtual UObject* GetNodeObject() override;
	virtual ULevel* GetLevelObject() const override;
	virtual FName GetAssetName() const override;
	virtual FName GetLongPackageName() const override;
	virtual void Update() override;
	virtual void UpdateAsset(const FAssetData& AssetData) override;
	virtual void SetVisible(bool bVisible) override;
	virtual FVector2D GetLevelPosition2D() const override;
	virtual FVector2D GetLevelSize2D() const override;
	virtual void OnDrop(const TSharedPtr<FLevelDragDropOp>& Op) override;
	virtual bool IsGoodToDrop(const TSharedPtr<FLevelDragDropOp>& Op) const override;
	virtual void OnParentChanged() override;
	virtual bool IsVisibleInCompositionView() const override;
	virtual FLinearColor GetLevelColor() const override;
	// FT4MinimapLevelModel interface end

	/**	@return Whether tile is root of hierarchy */
	bool IsRootTile() const;

	/** Whether level should be visible in given area*/
	bool ShouldBeVisible(FBox EditableArea) const;

	/**	@return Whether level is shelved */
	bool IsShelved() const;

	/** Hide a level from the editor */
	void Shelve();
	
	/** Show a level in the editor */
	void Unshelve();

	/** Whether this level landscape based or not */
	bool IsLandscapeBased() const;

	/** Whether this level based on tiled landscape or not */
	bool IsTiledLandscapeBased() const;
		
	/** Whether this level has ALandscapeProxy or not */
	bool IsLandscapeProxy() const;

	/** @return The landscape actor in case this level is landscape based */
	ALandscapeProxy* GetLandscape() const;
	
	/** Whether this level in provided layers list */
	bool IsInLayersList(const TArray<FWorldTileLayer>& InLayerList) const;
	
	/** @return Level position in shifted space */
	FVector GetLevelCurrentPosition() const;

	/** @return Level relative position */
	FIntVector GetRelativeLevelPosition() const;
	
	/** @return Level absolute position in non shifted space */
	FIntVector GetAbsoluteLevelPosition() const;
	
	/** @return Calculates Level absolute position in non shifted space based on relative position */
	FIntVector CalcAbsoluteLevelPosition() const;
		
	/** @return ULevel bounding box in shifted space*/
	FBox GetLevelBounds() const override;

	/** Recursively sort all children by name */
	void SortRecursive();

private:
	/** Flush world info to package and level objects */
	void OnLevelInfoUpdated();

	/** Handler for LevelBoundsActorUpdated event */
	void OnLevelBoundsActorUpdated();

	/** Spawns AlevelBounds actor in the level in case it doesn't has one */
	void EnsureLevelHasBoundsActor();

	/** Handler for PostEditUndo  */
	void OnPostUndoEvent();

	/** Handler for LOD settings changes event from Tile details object  */
	void OnLODSettingsPropertyChanged();
	
	/** Handler for ZOrder changes event from Tile details object  */
	void OnZOrderPropertyChanged();

	/** Handler for bHideInTileView changes event from Tile details object  */
	void OnHideInTileViewChanged();

	/** Set the asset name based on the passed in package name */
	void SetAssetName(const FName& PackageName);

public:
	/** This tile index in world composition tile list */
	int32									TileIdx;
	
	/** Package name this item represents */
	FName									AssetName;
	
	/** UObject which holds tile properties to be able to edit them via details panel*/
	UT4MinimapTileDetails*					TileDetails;
	
	/** The Level this object represents */
	TWeakObjectPtr<ULevel>					LoadedLevel;

	// Whether this level was shelved: hidden by World Browser decision
	bool									bWasShelved;

private:
	/** Whether level has landscape components in it */
	TWeakObjectPtr<ALandscapeProxy>			Landscape;
};
