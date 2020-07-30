// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"

/**
  *
 */

class UWorld;
struct FWorldContext;

class T4ENGINE_API FT4EngineLayer
{
public:
	static FT4EngineLayer& Get();

	FT4EngineLayer();
	~FT4EngineLayer();

	bool Add(const FWorldContext* InWorldContext); // #30
	void Remove(const FName& InWorldContextName); // #30

	ET4LayerType Convert(const FWorldContext* InWorldContext);
	ET4LayerType Convert(const UWorld* InWorld);

	FORCEINLINE bool IsClient(const ET4LayerType InLayerType) // #15
	{
		return (ET4LayerType::Client <= InLayerType && ET4LayerType::ClientMax > InLayerType) ? true : false;
	}

	bool IsServer(const FWorldContext* InWorldContext); // #15

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

	ET4LayerType FromString(const FString& InLayerString);
	const FString ToString(ET4LayerType InLayerType);
};