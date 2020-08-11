// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  * #68
 */
#if !UE_BUILD_SHIPPING
class T4FRAMEWORK_API FT4ReplaySystemUtils
{
public:
	static FT4ReplaySystemUtils& Get();

	FT4ReplaySystemUtils();
	~FT4ReplaySystemUtils();

	bool IsPlaying(ET4LayerType InLayerType);
	bool IsRecording(ET4LayerType InLayerType);

	bool DoPlay(ET4LayerType InLayerType, const FString& InPlayAssetName, const FString& InPlayFolderName);
	bool DoPlay(ET4LayerType InLayerType, const FSoftObjectPath& InPathPath);

	bool DoRec(ET4LayerType InLayerType, const FString& InRecAssetName, const FString& InRecFolderName);
	bool DoRec(ET4LayerType InLayerType, const FSoftObjectPath& InRecPath);

	void StopPlaying(ET4LayerType InLayerType);
	void StopRecording(ET4LayerType InLayerType);

	bool IsPaused(ET4LayerType InLayerType);
	void SetPlayPause(ET4LayerType InLayerType, bool bPause);

	bool IsPlayerPossessed(ET4LayerType InLayerType);
	void SetPlayerPossessed(ET4LayerType InLayerType, bool bPossess);

	bool IsRepeat(ET4LayerType InLayerType);
	void SetPlayRepeat(ET4LayerType InLayerType, bool bEnable);

	const TCHAR* GetRecFileName(ET4LayerType InLayerType);

	const FString GetLongPackagePath(const FString& InFolderName);
	const FString GetLongPackageName(const FString& InAssetName, const FString& InFolderName);
};
#endif