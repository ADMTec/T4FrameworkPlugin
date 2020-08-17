// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #155
 */
DECLARE_DELEGATE(FT4OnViewportOverlay); // #83, #155
DECLARE_DELEGATE_OneParam(FT4OnViewportOverlayOneParamCallback, bool); // #132
DECLARE_DELEGATE_TwoParams(FT4OnViewportThumbnailCaptured, UObject*, UTexture2D*);
DECLARE_DELEGATE_RetVal(bool, FT4OnIsViewportOverlay); // #155

struct FT4EditorViewportDelegates
{
	FT4OnViewportOverlay OnRefreshButtonClicked; // #86
	FT4OnViewportOverlay OnUpdateThumbnailClicked; // #105

	FT4OnIsViewportOverlay OnIsServerMonitoringEnabled;
	FT4OnViewportOverlay OnToggleServerMonitoring; // #140

	FT4OnIsViewportOverlay OnIsSimulationEnabled;
	FT4OnViewportOverlay OnToggleSimulation; // #86

	FT4OnIsViewportOverlay OnIsVerificationEnabled;
	FT4OnViewportOverlay OnToggleVerification; // #129 : Entity 에디터에서 데이터 검증
	
	FT4OnIsViewportOverlay OnIsNPCAIDisabled;
	FT4OnViewportOverlay OnToggleNPCAI; // #114
	
	FT4OnIsViewportOverlay OnIsWaypointEditingEnabled;
	FT4OnViewportOverlay OnToggleWaypointEditing; // #155

	FT4OnIsViewportOverlay OnIsEditModeEnabled;
	FT4OnViewportOverlay OnToggleEditMode; // #118

	FT4OnViewportOverlay OnHotKeyJumpToPlay; // #99
	FT4OnViewportOverlay OnHotKeyJumpToEnd; // #99
	FT4OnViewportOverlayOneParamCallback OnHotKeyTogglePlay; // #99, #132

	FT4OnViewportThumbnailCaptured OnThumbnailCaptured;
};
