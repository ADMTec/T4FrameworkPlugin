// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"

/**
  * #94
 */

class FCanvas;
class FEditorViewportClient;
class FPrimitiveDrawInterface;
class FSceneView;
class FViewport;
struct FViewportClick;
class IT4EditorViewModel; // #94

class T4EDITORCOMMON_API FT4EditorObjectSelectionEditMode : public FEdMode
{
public:
	FT4EditorObjectSelectionEditMode();

	static const FEditorModeID EM_T4EditorObjectSelectionEditMode;

	/** FEdMode interface */
	void Enter() override;
	void Exit() override;
	bool StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	bool EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	bool InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale) override;
	void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	void DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View, FCanvas* Canvas) override;
	bool AllowWidgetMove() override;
	bool ShouldDrawWidget() const override;
	bool UsesTransformWidget() const override;
	bool UsesTransformWidget(FWidget::EWidgetMode CheckMode) const override;
	FVector GetWidgetLocation() const override;
	bool GetCustomDrawingCoordinateSystem(FMatrix& InMatrix, void* InData) override;
	bool GetCustomInputCoordinateSystem(FMatrix& InMatrix, void* InData) override;
	bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy *HitProxy, const FViewportClick &Click) override;
	bool CanCycleWidgetMode() const override;

public:
	void SetViewModel(IT4EditorViewModel* InViewModel) { ViewModelRef = InViewModel; } // #94

private:
	/** Whether we are currently in a manipulation  */
	bool bManipulating;	

	/** Whether we are currently in a transaction  */
	bool bInTransaction;

	IT4EditorViewModel* ViewModelRef;
};
