// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  *
 */
class ULevel; // #91
class UWorld;
class UT4EntityAsset;
class UT4ActionPackAsset;
class UAnimSequence;
struct FT4ActionParameters;

namespace T4EditorUtil
{
	T4EDITORCOMMON_API UWorld* GetWorld(ET4LayerType InLayerType);

	// Client only

	T4EDITORCOMMON_API void GoPreviewScene(ET4LayerType InLayerType);

	// Server => Client

	T4EDITORCOMMON_API void ServerDespawnAll(ET4LayerType InLayerType, bool bClearPlayerActor); // #68

	// Utility
	T4EDITORCOMMON_API FBox CalculateLevelBounds(ULevel* InLevel); // #91 : World Single
}