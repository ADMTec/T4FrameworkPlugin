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
	virtual bool StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	virtual bool EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	virtual bool InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale) override;
	virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	virtual void DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View, FCanvas* Canvas) override;
	virtual bool AllowWidgetMove() override;
	virtual bool ShouldDrawWidget() const override;
	virtual bool UsesTransformWidget() const override;
	virtual bool UsesTransformWidget(FWidget::EWidgetMode CheckMode) const override;
	virtual FVector GetWidgetLocation() const override;
	virtual bool GetCustomDrawingCoordinateSystem(FMatrix& InMatrix, void* InData) override;
	virtual bool GetCustomInputCoordinateSystem(FMatrix& InMatrix, void* InData) override;
	virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy *HitProxy, const FViewportClick &Click) override;
	virtual bool CanCycleWidgetMode() const override;

public:
	void SetViewModel(IT4EditorViewModel* InViewModel) { ViewModelRef = InViewModel; } // #94

private:
	/** Whether we are currently in a manipulation  */
	bool bManipulating;	

	/** Whether we are currently in a transaction  */
	bool bInTransaction;

	IT4EditorViewModel* ViewModelRef;
};
