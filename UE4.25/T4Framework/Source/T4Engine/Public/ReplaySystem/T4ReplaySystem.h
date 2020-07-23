// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"
#include "T4EngineLayer.h"
#include "T4EngineStructs.h"
#include "Action/T4ActionKey.h"

/**
  * #68
 */
#if !UE_BUILD_SHIPPING

static const TCHAR* T4Const_DeveloperReplayFilePath = TEXT("Replay/");

struct FT4ActionCommandBase;
struct FT4ActionParameters; // #28

class T4ENGINE_API IT4ReplayPlayer // #68
{
public:
	virtual ~IT4ReplayPlayer() {}

	virtual bool IsPaused() const = 0;
	virtual void SetPause(bool bPause) = 0;

	virtual const TCHAR* GetPlayAssetName() const = 0;
	virtual const TCHAR* GetPlayFile() const = 0;

	virtual float GetPlayTimeSec() const = 0;
	virtual float GetMaxPlayTimeSec() const = 0;
};

class T4ENGINE_API IT4ReplayRecorder // #68
{
public:
	virtual ~IT4ReplayRecorder() {}

	virtual bool IsRecording() const = 0;

	virtual const TCHAR* GetRecFile() const = 0;

	virtual float GetRecTimeSec() const = 0;

	virtual bool RecWorldAction(const FT4ActionCommandBase* InAction, const FT4ActionParameters* InActionParam) = 0;
	virtual bool RecActorAction(const FT4ActorID& InActorID, const FT4ActionCommandBase* InAction, const FT4ActionParameters* InActionParam) = 0;
};

class T4ENGINE_API IT4ReplayPlayerHandler // #68, #114
{
public:
	virtual ~IT4ReplayPlayerHandler() {}

	virtual void SetPlayerActor(ET4LayerType InLayerType, const FT4ActorID& InActorID) = 0;
	virtual void ClearPlayerActor(ET4LayerType InLayerType, bool bInDefaultPawn) = 0;
};

class T4ENGINE_API IT4ReplaySystem // #68
{
public:
	virtual ~IT4ReplaySystem() {}

	virtual bool IsPlaying() const = 0;
	virtual bool IsRecording() const = 0;

	virtual IT4ReplayPlayer* GetPlayer() const = 0;
	virtual IT4ReplayRecorder* GetRecorder() const = 0;

	virtual bool DoPlay(const FSoftObjectPath& InPlayPath, IT4ReplayPlayerHandler* InPlayerHandller) = 0;
	virtual bool DoPlay(const FString& InAssetName, const FString& InFolderName, IT4ReplayPlayerHandler* InPlayerHandller) = 0; // /T4Framework/Editor/Replay/<InFolderName>/<InPlayAssetName>.uasset
	virtual void DoStopPlaying() = 0;

	virtual bool IsPlayRepeat() const = 0;
	virtual void SetPlayRepeat(bool bEnable) = 0;

	virtual bool IsPlayerPossessed() const = 0;
	virtual void SetPlayerPossessed(bool bPossess) = 0;

	virtual bool DoRec(const FSoftObjectPath& InRecPath) = 0;
	virtual bool DoRec(const FString& InRecAssetName, const FString& InFolderName) = 0; // /T4Framework/Editor/Replay/<InFolderName>/<InRecAssetName>.uasset
	virtual void DoStopRecording() = 0;
};

#endif