// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  * #68
 */
namespace T4FrameworkReplaySystem
{
#if !UE_BUILD_SHIPPING

	T4FRAMEWORK_API bool IsPlaying(ET4LayerType InLayerType);
	T4FRAMEWORK_API bool IsRecording(ET4LayerType InLayerType);

	T4FRAMEWORK_API bool DoPlay(ET4LayerType InLayerType, const FString& InPlayAssetName, const FString& InPlayFolderName);
	T4FRAMEWORK_API bool DoPlay(ET4LayerType InLayerType, const FSoftObjectPath& InPathPath);

	T4FRAMEWORK_API bool DoRec(ET4LayerType InLayerType, const FString& InRecAssetName, const FString& InRecFolderName);
	T4FRAMEWORK_API bool DoRec(ET4LayerType InLayerType, const FSoftObjectPath& InRecPath);

	T4FRAMEWORK_API void StopPlaying(ET4LayerType InLayerType);
	T4FRAMEWORK_API void StopRecording(ET4LayerType InLayerType);

	T4FRAMEWORK_API bool IsPaused(ET4LayerType InLayerType);
	T4FRAMEWORK_API void SetPlayPause(ET4LayerType InLayerType, bool bPause);

	T4FRAMEWORK_API bool IsPlayerPossessed(ET4LayerType InLayerType);
	T4FRAMEWORK_API void SetPlayerPossessed(ET4LayerType InLayerType, bool bPossess);

	T4FRAMEWORK_API bool IsRepeat(ET4LayerType InLayerType);
	T4FRAMEWORK_API void SetPlayRepeat(ET4LayerType InLayerType, bool bEnable);

	T4FRAMEWORK_API const TCHAR* GetRecFileName(ET4LayerType InLayerType);

	T4FRAMEWORK_API const FString GetLongPackagePath(const FString& InFolderName);
	T4FRAMEWORK_API const FString GetLongPackageName(const FString& InAssetName, const FString& InFolderName);

#endif
}