// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Textures/SlateTextureData.h"

class FObjectThumbnail;
struct FT4MapThumbnailData;
class FSlateTextureRenderTarget2DResource;
class FT4MinimapTileModel;
class UTexture2DDynamic;
struct FSlateBrush;
struct FSlateDynamicImageBrush;

//----------------------------------------------------------------
//
//
//----------------------------------------------------------------
const int32 DefaultTileThumbnailSize = 512; // #84: 256;
const int32 DefaultTileThumbnailAtlasSize = 2048; // #84: 1024;

//----------------------------------------------------------------
//
//
//----------------------------------------------------------------
class FT4MinimapTileThumbnail
{
public:
	FT4MinimapTileThumbnail(
		FSlateTextureRenderTarget2DResource* InThumbnailRenderTarget, 
		const FT4MinimapTileModel& InTileModel, 
		const FIntPoint& InSlotAllocation
	);

	/** Redraw thumbnail */
	FSlateTextureDataPtr UpdateThumbnail();
	FIntPoint GetThumbnailSlotAllocation() const;

private:
	FSlateTextureDataPtr ToSlateTextureData(const FObjectThumbnail* ObjectThumbnail) const;
	FSlateTextureDataPtr ToSlateTextureDataEx(const FT4MapThumbnailData* InWorldSubLevelThumbnail) const; // #84

private:
	const FT4MinimapTileModel&				TileModel;
	/** Shared render target for slate */
	FSlateTextureRenderTarget2DResource*	ThumbnailRenderTarget;
	FIntPoint								SlotAllocation;
};

//----------------------------------------------------------------
//
//
//----------------------------------------------------------------
class FT4MinimapTileAtlasPage
{
public:
	FT4MinimapTileAtlasPage(int32 InTileThumbnailSize, int32 InTileThumbnailAtlasSize);
	~FT4MinimapTileAtlasPage();
	
	void SetOccupied(int32 SlotIdx, bool bOccupied);
	bool HasOccupiedSlots() const;
	int32 GetFreeSlotIndex() const;
	const FSlateBrush* GetSlotBrush(int32 SlotIdx) const;
	void UpdateSlotImageData(int32 SlotIdx, FSlateTextureDataPtr ImageData);
		
private:
	struct FTileAtlasSlot
	{
		FSlateDynamicImageBrush*	SlotBrush;
		bool						bOccupied;
	};
	
	TArray<FTileAtlasSlot>		AtlasSlotArrays; // #91 : FTileAtlasSlot		AtlasSlots[TileThumbnailAtlasDim*TileThumbnailAtlasDim];
	UTexture2DDynamic*			AtlasTexture;

	int32 TileThumbnailSize; // #91: per World
	int32 TileThumbnailAtlasSize; // #91: per World
	int32 TileThumbnailAtlasDim; // #91: per World
};

//----------------------------------------------------------------
//
//
//----------------------------------------------------------------
class FT4MinimapTileThumbnailCollection
{
public:
	FT4MinimapTileThumbnailCollection(int32 InTileThumbnailSize, int32 InTileThumbnailAtlasSize);
	~FT4MinimapTileThumbnailCollection();

	void RegisterTile(const FT4MinimapTileModel& InTileModel);
	void UnregisterTile(const FT4MinimapTileModel& InTileModel);
	const FSlateBrush* UpdateTileThumbnail(const FT4MinimapTileModel& InTileModel);
	const FSlateBrush* GetTileBrush(const FT4MinimapTileModel& InTileModel) const;

	bool IsOnCooldown() const;

private:
	FIntPoint AllocateSlot();
	void ReleaseSlot(const FIntPoint& InSlotAllocation);

private:
	FSlateTextureRenderTarget2DResource*	SharedThumbnailRT;
	TMap<FName, FT4MinimapTileThumbnail>	TileThumbnailsMap;
	double									LastThumbnailUpdateTime;

	TArray<FT4MinimapTileAtlasPage*>		AtlasPages;

	int32 TileThumbnailSize; // #91: per World
	int32 TileThumbnailAtlasSize; // #91: per World
};
