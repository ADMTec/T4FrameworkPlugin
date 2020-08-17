// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EditorViewportDelegates.h"

#include "SlateFwd.h"
#include "UObject/GCObject.h"
#include "Widgets/Input/SSpinBox.h"
#include "SEditorViewport.h"

/**
  *
 */
class SSlider;
class SOverlay;
class IT4EditorViewModel;
class FT4EditorViewportClient;
class T4EDITORCOMMON_API ST4EditorViewport : public SEditorViewport, public FGCObject
{
public:
	DECLARE_DELEGATE_TwoParams(FT4OnDragDrop, const FVector2D&, TSharedPtr<FDragDropOperation>); // #140

public:
	SLATE_BEGIN_ARGS(ST4EditorViewport)
		: _ViewModel(nullptr)
		, _ViewportDelegates(nullptr)
		, _OnDragDrop(nullptr) // #140
		{}
		SLATE_ARGUMENT(IT4EditorViewModel*, ViewModel)
		SLATE_ARGUMENT(FT4EditorViewportDelegates*, ViewportDelegates)
		SLATE_EVENT(FT4OnDragDrop, OnDragDrop) // #140
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	ST4EditorViewport();
	~ST4EditorViewport();

	void OnCleanup(); // #97

	TSharedPtr<FExtender> GetExtenders() const;

	void AddReferencedObjects(FReferenceCollector& Collector) override;

	void CreateThumbnail(UObject* InScreenShotOwner);

	void RefreshViewport();

	IT4EditorViewModel* GetViewModel() const { return ViewModelRef; }
	FT4EditorViewportClient* GetViewportClient() const { return ViewportClientPtr.Get(); } // #79

	bool IsVisible() const override; // #76

	int32 GetCameraSpeedSetting() const; // #145
	void SetCameraSpeedSetting(int32 InCameraSpeedSetting); // #145

protected:
	TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
	TSharedPtr<SWidget> MakeViewportToolbar() override;
	void BindCommands() override;
	void PopulateViewportOverlays(TSharedRef<SOverlay> Overlay) override;

	void OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override {}
	void OnDragLeave(const FDragDropEvent& DragDropEvent) override {}
	FReply OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override { return FReply::Handled(); }
	FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override; // #131

	void OnScreenShotCaptured(UObject* InOwner, UTexture2D* InScreenShot);

	// #93
	TSharedRef<SWidget> HandleOnFillTimelapseScaleMenu(); 

	FText HandleOnGetTimelapseLabel() const;

	float HandleOnGetTimelapseScaleBoxValue() const;
	void HandleOnSetTimelapseScaleBoxValue(float NewValue);

	float HandleOnGetTimelapseSetHourBoxValue() const;
	void HandleOnSetTimelapseSetHourBoxValue(float NewValue);
	// ~#93

	// #83
	TSharedRef<SWidget> HandleOnFillCameraSpeedMenu();

	FText HandleOnGetCameraSpeedLabel() const;
	float HandleOnGetCamSpeedSliderPosition() const;
	void HandleOnSetCamSpeed(float NewValue);
	FText HandleOnGetCameraSpeedScalarLabel() const;
	float HandleOnGetCamSpeedScalarBoxValue() const;
	void HandleOnSetCamSpeedScalarBoxValue(float NewValue);
	// ~#83

	FText HandleOnGetExtensionLabel() const; // #155
	TSharedRef<SWidget> HandleOnFillExtensionMenu(); // #155

	void HandleOnRefreshButtonClicked(); // #83

	EVisibility HandleOnIsServerMonitoringEnabled() const; // #140
	bool HandleOnIsServerMonitoringDisabled() const; // #140
	void HandleOnToggleServerMonitoring(); // #140
	FReply HandleOnToggleServerMonitoringClicked(); // #140

	EVisibility HandleOnIsSimulationEnabled() const; // ##83
	bool HandleOnIsSimulationDisabled() const; // #83
	void HandleOnToggleSimulation(); // #83
	FReply HandleOnToggleSimulationClicked(); // #83

	EVisibility HandleOnIsVerificationEnabled() const; // #129
	bool HandleOnIsVerificationDisabled() const; // #129
	void HandleOnToggleVerification(); // #129
	FReply HandleOnToggleVerificationClicked(); // #129 : Entity 에디터에서 데이터 검증
	
	bool HandleOnIsNPCAIEnabled() const; // #114
	EVisibility HandleOnIsNPCAIDisabled() const; // #114
	void HandleOnToggleNPCAI(); // #114
	FReply HandleOnToggleNPCAIClicked(); // #114

	EVisibility HandleOnIsWaypointEditingEnabled() const; // #155
	bool HandleOnIsWaypointEditingDisabled() const; // #155
	void HandleOnToggleWaypointEditing(); // #155
	FReply HandleOnToggleWaypointEditingClicked(); // #155
	
	EVisibility HandleOnIsEditModeEnabled() const; // #118
	bool HandleOnIsEditModeDisabled() const; // #118
	void HandleOnToggleEditMode(); // #118
	FReply HandleOnToggleEditModeClicked(); // #118

	FReply HandleOnUpdataThumbnailClicked(); // #105

	void HandleOnUseDefaultShowFlags(); // #94

	void HandleOnToggleShowActorBound(); // #76
	bool HandleOnIsShowActorBoundChecked() const; // #76

	void HandleOnToggleShowNPCAIInfo(); // #140
	bool HandleOnIsShowNPCAIInfoChecked() const; // #140

	void HandleOnToggleShowServerLocation(); // #140
	bool HandleOnIsShowServerLocationChecked() const; // #140

	void HandleOnToggleShowMovementTrajectory(); // #140
	bool HandleOnIsShowMovementTrajectoryChecked() const; // #140

	void HandleOnToggleAlwaysTick() { bAlwaysTickViewport = !bAlwaysTickViewport; } // #76
	bool HandleOnIsToggleAlwaysTickChecked() const { return bAlwaysTickViewport; } // #76

	void HandleOnJumpToPlay(); // #99
	void HandleOnJumpToEnd(); // #99
	void HandleOnTogglePlay(); // #99
	void HandleOnTogglePlayBySpace(); // #132 : Keys::Space

	void HandleOnSetPlaybackSpeed(int32 PlaybackSpeedMode); // #117
	bool HandleIsPlaybackSpeedSelected(int32 PlaybackSpeedMode); // #117

private:
	TSharedPtr<FT4EditorViewportClient> ViewportClientPtr;

	IT4EditorViewModel* ViewModelRef;
	FT4EditorViewportDelegates* ViewportDelegatesRef; // #155

	bool bAlwaysTickViewport; // #76

	FT4OnDragDrop OnDragDrop; // #140

	// #83
	/** Reference to the camera slider used to display current camera speed */
	mutable TSharedPtr<SSlider> CamSpeedSlider;

	/** Reference to the camera spinbox used to display current camera speed scalar */
	mutable TSharedPtr<SSpinBox<float>> CamSpeedScalarBox;

	// #93
	mutable TSharedPtr<SSpinBox<float>> TimelapseScaleBox;
	mutable TSharedPtr<SSpinBox<float>> TimelapseSetHourBox;
};