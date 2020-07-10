// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

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
	DECLARE_DELEGATE(FT4OnOverlayButtonClick); // #83
	DECLARE_DELEGATE_OneParam(FT4OnOverlayButtonOneParamCallback, bool); // #132
	DECLARE_DELEGATE_TwoParams(FT4OnDragDrop, const FVector2D&, TSharedPtr<FDragDropOperation>); // #140
	DECLARE_DELEGATE_TwoParams(FT4OnThumbnailCaptured, UObject*, UTexture2D*);

public:
	SLATE_BEGIN_ARGS(ST4EditorViewport)
		: _ViewModel(nullptr)
		, _OnDragDrop(nullptr) // #140
		, _OnThumbnailCaptured(nullptr)
		, _OnRefreshButtonClicked(nullptr) // #86
		, _OnServerMonitoringButtonClicked(nullptr) // #140
		, _OnSimulationButtonClicked(nullptr) // #86
		, _OnVerificationButtonClicked(nullptr) // #129 : Entity 에디터에서 데이터 검증
		, _OnNPCAIButtonClicked(nullptr) // #114
		, _OnEditModeButtonClicked(nullptr) // #118
		, _OnUpdateThumbnailClicked(nullptr) // #105
		, _OnHotKeyJumpToPlay(nullptr) // #99
		, _OnHotKeyJumpToEnd(nullptr) // #99
		, _OnHotKeyTogglePlay(nullptr) // #99
		{}
		SLATE_ARGUMENT(IT4EditorViewModel*, ViewModel)
		SLATE_EVENT(FT4OnDragDrop, OnDragDrop) // #140
		SLATE_EVENT(FT4OnThumbnailCaptured, OnThumbnailCaptured)
		SLATE_EVENT(FT4OnOverlayButtonClick, OnRefreshButtonClicked) // #86
		SLATE_EVENT(FT4OnOverlayButtonClick, OnServerMonitoringButtonClicked) // #140
		SLATE_EVENT(FT4OnOverlayButtonClick, OnSimulationButtonClicked) // #86
		SLATE_EVENT(FT4OnOverlayButtonClick, OnVerificationButtonClicked) // #129 : Entity 에디터에서 데이터 검증
		SLATE_EVENT(FT4OnOverlayButtonClick, OnNPCAIButtonClicked) // #114
		SLATE_EVENT(FT4OnOverlayButtonClick, OnEditModeButtonClicked) // #118
		SLATE_EVENT(FT4OnOverlayButtonClick, OnUpdateThumbnailClicked) // #105
		SLATE_EVENT(FT4OnOverlayButtonClick, OnHotKeyJumpToPlay) // #99
		SLATE_EVENT(FT4OnOverlayButtonClick, OnHotKeyJumpToEnd) // #99
		SLATE_EVENT(FT4OnOverlayButtonOneParamCallback, OnHotKeyTogglePlay) // #99
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

	FReply HandleOnRefreshButtonClicked(); // #83
	FReply HandleOnServerMonitoringButtonClicked(); // #140
	FReply HandleOnSimulationButtonClicked(); // #83
	FReply HandleOnVerificationButtonClicked(); // #129 : Entity 에디터에서 데이터 검증
	FReply HandleOnNPCAIButtonClicked(); // #114
	FReply HandleOnEditModeButtonClicked(); // #118

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

	bool bAlwaysTickViewport; // #76

	FT4OnDragDrop OnDragDrop; // #140

	FT4OnThumbnailCaptured OnThumbnailCaptured;

	FT4OnOverlayButtonClick OnRefreshButtonClicked; // #86
	FT4OnOverlayButtonClick OnServerMonitoringButtonClicked; // #140
	FT4OnOverlayButtonClick OnSimulationButtonClicked; // #86
	FT4OnOverlayButtonClick OnVerificationButtonClicked; // #129 : Entity 에디터에서 데이터 검증
	FT4OnOverlayButtonClick OnNPCAIButtonClicked; // #114
	FT4OnOverlayButtonClick OnEditModeButtonClicked; // #118
	FT4OnOverlayButtonClick OnUpdateThumbnailClicked; // #105

	FT4OnOverlayButtonClick OnHotKeyJumpToPlay; // #99
	FT4OnOverlayButtonClick OnHotKeyJumpToEnd; // #99
	FT4OnOverlayButtonOneParamCallback OnHotKeyTogglePlay; // #99, #132

	// #83
	/** Reference to the camera slider used to display current camera speed */
	mutable TSharedPtr<SSlider> CamSpeedSlider;

	/** Reference to the camera spinbox used to display current camera speed scalar */
	mutable TSharedPtr<SSpinBox<float>> CamSpeedScalarBox;

	// #93
	mutable TSharedPtr<SSpinBox<float>> TimelapseScaleBox;
	mutable TSharedPtr<SSpinBox<float>> TimelapseSetHourBox;
};