// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"

/**
  *
 */

class UWorld;
struct FWorldContext;

namespace T4EngineLayer
{
	T4ENGINE_API bool Add(const FWorldContext* InWorldContext); // #30
	T4ENGINE_API void Remove(const FName& InWorldContextName); // #30

	T4ENGINE_API ET4LayerType Get(const FWorldContext* InWorldContext);
	T4ENGINE_API ET4LayerType Get(const UWorld* InWorld);

	FORCEINLINE bool IsClient(const ET4LayerType InLayerType) // #15
	{
		return (ET4LayerType::Client <= InLayerType && ET4LayerType::ClientMax > InLayerType) ? true : false;
	}

	T4ENGINE_API bool IsServer(const FWorldContext* InWorldContext); // #15

	FORCEINLINE bool IsServer(const ET4LayerType InLayerType) // #15
	{
		return (ET4LayerType::Server == InLayerType) ? true : false;
	}

	FORCEINLINE bool IsLevelEditor(const ET4LayerType InLayerType) // #17
	{
#if WITH_EDITOR
		if (ET4LayerType::LevelEditor == InLayerType)
		{
			return true;
		}
#endif
		return false;
	}

	FORCEINLINE bool IsPreview(const ET4LayerType InLayerType) // #30
	{
#if WITH_EDITOR
		if (ET4LayerType::Preview <= InLayerType && ET4LayerType::PreviewMax > InLayerType)
		{
			return true;
		}
#endif
		return false;
	}

	FORCEINLINE bool IsToolSide(const ET4LayerType InLayerType) // #30
	{
#if WITH_EDITOR
		if (IsPreview(InLayerType) || IsLevelEditor(InLayerType))
		{
			return true;
		}
#endif
		return false;
	}

	T4ENGINE_API ET4LayerType FromString(const FString& InLayerString);
	T4ENGINE_API const FString ToString(ET4LayerType InLayerType);
}