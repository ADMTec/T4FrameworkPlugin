// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EditorCommonTypes.h" // #117
#include "T4Framework/Public/T4Framework.h"
#include "EditorViewportClient.h"

/**
  *
 */
class IT4EditorViewModel;
class IT4PlayerController;
class IT4WorldActor;
class FViewport;
class FSceneView;
struct FWorldContext;
class ST4EditorViewport;
struct FPostProcessSettings; // #100
class T4EDITORCOMMON_API FT4EditorViewportClient
	: public FEditorViewportClient
	, public IT4EditorViewportClient // #30
	, public TSharedFromThis<FT4EditorViewportClient>
{
public:
	DECLARE_MULTICAST_DELEGATE(FT4OnDestroy); // #79
	DECLARE_DELEGATE_TwoParams(FT4OnScreenShotCaptured, UObject*, UTexture2D*);

public:
	FT4EditorViewportClient(
		const TSharedRef<ST4EditorViewport>& InViewport,
		IT4EditorViewModel* InViewModel,
		FT4OnScreenShotCaptured InOnScreenShotCaptured
	);
	~FT4EditorViewportClient();

	void Tick(float DeltaSeconds) override;
	void Draw(FViewport* Viewport, FCanvas* Canvas) override;

	/** FViewportClient interface */
	bool InputKey(FViewport* InViewport, int32 ControllerId, FKey Key, EInputEvent Event, float AmountDepressed = 1.f, bool bGamepad = false) override;
	bool InputAxis(FViewport* InViewport, int32 ControllerId, FKey Key, float Delta, float DeltaTime, int32 NumSamples = 1, bool bGamepad = false) override;

	// #48 : Widget Mode 가 Disable 되었음으로 Mouse 컨트롤을 직접해주기 위해 동작하지 않도록 처리
	void ReceivedFocus(FViewport* InViewport) override; 
	void MouseEnter(FViewport* InViewport, int32 x, int32 y) override; // #94
	void MouseMove(FViewport* InViewport, int32 x, int32 y) override; // #94
	void MouseLeave(FViewport* InViewport) override; // #94
	EMouseCursor::Type GetCursor(FViewport* InViewport, int32 X, int32 Y) override;
	void CapturedMouseMove(FViewport* InViewport, int32 InMouseX, int32 InMouseY) override;
	void LostFocus(FViewport* InViewport) override;
	// ~#48

	void TrackingStarted(const struct FInputEventState& InInputState, bool bIsDragging, bool bNudge) override; // #94
	void TrackingStopped() override; // #94

	void SetWidgetMode(FWidget::EWidgetMode NewMode) override; // #30 : Widget모드 Disable, SetEditWidgetMode 을 사용!

	// FEditorViewportClient
	UWorld* GetWorld() const override; // #79

	void OverridePostProcessSettings(FSceneView& View) override; // #100

public:
	void OnReset(); // #79

	void SetShowGrid(bool bShowGrid);
	void SetKeepUpdateTimeSec(float InKeepUpdateTimeSec); // #59 : 섬네일 뷰포트는 Realtime 이 꺼져 있어 강제로 업데이트 해준다.

	void SetToolkitHost(TSharedRef<class IToolkitHost> InHost); // #94

	void SetPlaybackSpeedMode(ET4ViewportPlaybackSpeeds::Type InPlaybackSpeedMode); // #117
	ET4ViewportPlaybackSpeeds::Type GetPlaybackSpeedSelected(); // #117

	FT4OnDestroy& GetOnDestroy() { return OnDestroy; } // #79

public:
	// IT4EditorViewportClient
	FViewport* GetViewport() const override; // #68
	FSceneView* GetSceneView() override; // #142

	bool IsPreviewMode() const override { return bPreviewMode; }

	void SetCustomCameraControl(bool bEnable) override; // #79

	void SetMouseLocation(const int InX, const int InY) override;
	bool GetMousePosition(float& InLocationX, float& InLocationY) override;

	bool GetScreenCenterToWorldRay(const FVector2D& InScreenOffset, FRay& OutWorldRay) override; // #121 : Mode 에 따라 마우스 또는 화면 중앙(FPS)의 Ray 를 리턴
	bool GetScreenPositionToWorldRay(const FVector2D& InScreenPosition, FRay& OutWorldRay) override; // #131
	bool GetMousePositionToWorldRay(FRay& OutWorldRay) override;

	bool IsShownMouseCursor() const override { return bShowMouseCursor; }
	void ShowMouseCursor(bool bInShow) override { bShowMouseCursor = bInShow; }
	void SetMouseCursorType(EMouseCursor::Type InMouseCursorType) override;

	void SetInitialLocationAndRotation(const FVector& InLocation, const FRotator& InRotation) override; // #86

	void ShowDragBox(bool bInShow) override; // #142
	bool GetDragBoxFrustum(bool bInUseBoxFrustum, FConvexVolume& OutFrustum) override; // #142

	bool IsRealtimeOption() const override; // 4.25
	void SetRealtimeOption(bool bInEnable) override; // 4.25

	bool IsEditWidgetFocusing() const override; // #142
	bool IsEditWidgetModeEnabled() const override { return bEditWidgetModeEnabled; } // #94, #118
	void SetEnableEditWidgetMode(bool bInEnable) override; // #94, #118

	bool IsKeyDeleteClicked() const override { return bKeyDeleteClicked; } // #142
	bool IsKeyEndClicked() const override { return bKeyEndClicked; } // #142
	bool IsKeySpaceBarClicked() const override { return bKeySpaceBarClicked; } // #142

	bool IsKeyLeftControlPressed() const override { return bKeyLeftControlPressed; } // #142
	bool IsKeyLeftAltPressed() const override { return bKeyLeftAltPressed; } // #142
	bool IsKeyLeftShiftPressed() const override { return bKeyLeftShiftPressed; } // #118

	bool IsMouseLeftButtonPressed() const override { return bMouseLeftButtonPressed; } // #111
	bool IsMouseLeftButtonClicked() const override { return bMouseLeftButtonClicked; } // #142 : 매프레임 Reset 됨
	bool IsMouseRightButtonPressed() const override { return bMouseRightButtonPressed; } // #111, #119
	bool IsMouseRightButtonClicked() const override { return bMouseRightButtonClicked; } // #142 : 매프레임 Reset 됨

private:
	void InitializeWidgetMode(); // #94

	void UpdateCameraControl(float DeltaSeconds);
	void SetViewTransformFromPlayer(); // #115

	void SetWidgetModeInternal(FWidget::EWidgetMode InNewMode); // #118

	void DrawEmulateGameViewportClient(FViewport* InViewport, FCanvas* InCanvas); // WARN : GameViewportClient 에만 있는 처리를 구현해준다.
	void DrawHUDWarning(FViewport* InViewport, FCanvas* InCanvas, FT4HUDDrawInfo& InOutDrawInfo);
	void DrawCaptureScreenShot(FViewport* InViewport);

	IT4PlayerController* GetPlayerController() const;
	IT4WorldActor* GetPlayerActor() const;

private:
	TWeakPtr<ST4EditorViewport> ViewportPtr;
	IT4EditorViewModel* ViewModelRef;

	bool bPreviewMode;
	bool bCustomCameraControl; // #79
	bool bViewportFocused;
	bool bShowMouseCursor; // #48
	EMouseCursor::Type OverrideMouseCursorType; // #48

	float RealtimeDisableTimeLeft; // #59 : 섬네일 뷰포트는 Realtime 이 꺼져 있어 강제로 업데이트 해준다.

	FT4OnDestroy OnDestroy; // #79
	FT4OnScreenShotCaptured OnScreenShotCaptured;

	bool bEditWidgetModeInitialized; // #94, #118
	bool bEditWidgetModeEnabled; // #94, #118
	FWidget::EWidgetMode EditWidgetModeCached;

	bool bKeyDeleteClicked; // #142
	bool bKeyEndClicked; // #142
	bool bKeySpaceBarClicked; // #142

	bool bKeyLeftControlPressed; // #142
	bool bKeyLeftAltPressed; // #142
	bool bKeyLeftShiftPressed; // #118

	bool bMouseLeftButtonPressed; // #111
	bool bMouseLeftButtonClicked; // #142 : 매프레임 Reset

	bool bMouseRightButtonPressed; // #111, #119
	bool bMouseRightButtonClicked; // #142 : 매프레임 Reset

	ET4ViewportPlaybackSpeeds::Type PlaybackSpeedMode; // #117

	bool bDragBoxStart; // #132
	FVector2D DragBoxStartPosition; // #142
	FVector2D DragBoxEndPosition; // #142

public:
	bool bCaptureScreenShot;
	TWeakObjectPtr<UObject> ScreenShotOwner;
};
