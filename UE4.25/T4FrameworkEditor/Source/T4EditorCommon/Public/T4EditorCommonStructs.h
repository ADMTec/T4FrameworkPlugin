// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineUtility.h"

/**
  * // #148
 */

/**  */
struct T4EDITORCOMMON_API FT4TiledLandscapeImportSettings
{
	FT4TiledLandscapeImportSettings()
		: Scale3D(100.f, 100.f, 100.f)
		, ComponentsNum(8)
		, QuadsPerSection(63)
		, SectionsPerComponent(1)
		, TilesCoordinatesOffset(0, 0)
		, SizeX(1009)
		, bFlipYAxis(true)
	{}

	FVector				Scale3D;
	int32				ComponentsNum;
	int32				QuadsPerSection;
	int32				SectionsPerComponent;

	TArray<FString>		HeightmapFileList;
	TArray<FIntPoint>	TileCoordinates;
	FIntPoint			TilesCoordinatesOffset;
	int32				SizeX;
	bool				bFlipYAxis;


	TWeakObjectPtr<UMaterialInterface>	LandscapeMaterial;

	// Landscape layers 
	struct LandscapeLayerSettings
	{
		LandscapeLayerSettings()
			: bNoBlendWeight(false)
		{}

		FName						Name;
		bool						bNoBlendWeight;
		TMap<FIntPoint, FString>	WeightmapFiles;
	};

	TArray<LandscapeLayerSettings>	LandscapeLayerSettingsList;
};
