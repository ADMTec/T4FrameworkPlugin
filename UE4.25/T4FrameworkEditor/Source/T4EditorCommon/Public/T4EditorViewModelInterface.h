// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  *
 */
enum class ET4ViewModelEditMode
{
	Default,
	Preview,
	WorldDetail,
};

enum class ET4EditWidgetUpdateType
{
	Location,
	Rotation,
	Scale,
};

class AActor; // #94
class FViewport;
class FCanvas;
class UWorld;
struct FT4HUDDrawInfo;
class IT4WorldSystem;
class IT4Framework;
class FT4EditorViewportClient;
class UT4EditorEnvironmentController; // #94
class T4EDITORCOMMON_API IT4EditorViewModel {
public:
	virtual ~IT4EditorViewModel() {}

	virtual ET4LayerType GetLayerType() const = 0;

	virtual ET4ViewModelEditMode GetEditMode() const = 0;
	virtual bool IsPreviewMode() const = 0; // #118

	virtual const FString GetAssetPath() = 0; // #79

	virtual void OnReset() = 0; // #79
	virtual void OnStartPlay(FT4EditorViewportClient* InViewportClient) = 0;

	virtual void OnDrawHUD(FViewport* InViewport, FCanvas* InCanvas, FT4HUDDrawInfo* InOutDrawInfo) = 0; // #59, #83

	virtual void OnPlayerReload() = 0; // #87, #107, #130
	virtual void OnPlayerRespawn() = 0; // #136

	virtual IT4Framework* CreateFramework() = 0; // #87
	virtual IT4Framework* GetFramework() const = 0; // #79
	virtual IT4WorldSystem* GetWorldSystem() const = 0; // #93

	virtual AActor* GetManipulatorTarget() const = 0; // #94

	virtual void NotifyManipulatorStartTracking(AActor* InSelectedActor) = 0; // #125
	virtual void NotifyManipulatorEndTracking() = 0; // #125 : 미반영 복구
	virtual void NotifyManipulatorUpdating(ET4EditWidgetUpdateType InUpdateType, const FVector& InPRS) = 0; // #118 : PRS (rot or loc or scale)

	virtual void ChangeWorldEnvironment(FName InTimeTagName) = 0; // #94

	virtual void SetViewportOptionShowActorBound(bool bShow) = 0; // #76
	virtual bool IsShownViewportOptionActorBound() const = 0; //#76

	virtual void SetViewportOptionShowNPCAIInfo(bool bShow) = 0; // #140
	virtual bool IsShownViewportOptionShowNPCAIInfo() const = 0; // #140

	virtual void SetViewportOptionShowServerLocation(bool bShow) = 0; // #140
	virtual bool IsShownViewportOptionServerLocation() const = 0; // #140

	virtual void SetViewportOptionShowMovementTrajectory(bool bShow) = 0; // #140
	virtual bool IsShownViewportOptionMovementTrajectory() const = 0; // #140

	virtual void SetWorldSystemTimeStop(bool bPause) = 0; // #94
	virtual bool IsWorldSystemTimeStopped() const = 0; // #94

	virtual void SetWorldSystemTimelapseScale(float InScale) = 0; // #93
	virtual float GetWorldSystemTimelapseScale() const = 0; // #93

	virtual void SetWorldSystemTimeHour(float InHour) = 0; // #93
	virtual float GetWorldSystemTimeHour() const = 0; // #93

	virtual void NotifyReplayRec() = 0; // #104
	virtual void NotifyReplayPlay() = 0; // #104
};