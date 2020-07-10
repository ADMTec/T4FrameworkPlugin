// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "Framework/MultiBox/MultiBoxExtender.h"
#include "SViewportToolBar.h"

/**
  * #94 : refer SCommonEditorViewportToolBarBase.h
 */
class ST4EditorViewport;
class FT4EditorViewportClient;
class T4EDITORCOMMON_API ST4EditorViewportToolBar : public SViewportToolBar
{
public:
	SLATE_BEGIN_ARGS(ST4EditorViewportToolBar) {}
	SLATE_END_ARGS()

	void Construct(
		const FArguments& InArgs, 
		ST4EditorViewport* InViewport,
		bool bInDisableViewportMenu // #105
	);

protected:
	TSharedRef<SWidget> GenerateOptionsMenu() const;
	void ExtendOptionsMenu(FMenuBuilder& OptionsMenuBuilder) const;

	void OnDisableRealtimeOverride(); // #140 : 4.25
	bool IsRealtimeOverrideToggleVisible() const; // #140 : 4.25
	FText GetRealtimeOverrideTooltip() const; // #140 : 4.25
	FReply OnRealtimeWarningClicked(); // #140 : 4.25
	EVisibility GetRealtimeWarningVisibility() const; // #140 : 4.25

	TSharedRef<SWidget> GenerateFOVMenu() const;
	float OnGetFOVValue() const;
	void OnFOVValueChanged(float NewValue) const;

	TSharedRef<SWidget> GenerateFarViewPlaneMenu() const;
	float OnGetFarViewPlaneValue() const;
	void OnFarViewPlaneValueChanged(float NewValue);

	TSharedRef<SWidget> GenerateScreenPercentageMenu() const;
	int32 OnGetScreenPercentageValue() const;
	bool OnScreenPercentageIsEnabled() const;
	void OnScreenPercentageValueChanged(int32 NewValue);

	FText GetCameraMenuLabel() const;
	const FSlateBrush* GetCameraMenuLabelIcon() const;
	TSharedRef<SWidget> GenerateCameraMenu() const;

	TSharedRef<class ST4EditorViewportViewMenu> MakeViewMenu();
	TSharedPtr<FExtender> GetViewMenuExtender() const;
	void CreateViewMenuExtensions(FMenuBuilder& MenuBuilder);
	TSharedPtr<FExtender> GetCombinedExtenderList(TSharedRef<FExtender> MenuExtender) const;

	TSharedRef<SWidget> GenerateShowMenu() const;

	EVisibility GetViewModeOptionsVisibility() const;
	TSharedRef<SWidget> GenerateViewModeOptionsMenu() const;

	// refer SAnimViewportToolBar
	FText GetPlaybackMenuLabel() const;
	TSharedRef<SWidget> GeneratePlaybackMenu() const;

private:
	FT4EditorViewportClient* GetViewportClient() const;

private:
	ST4EditorViewport* ViewportRef;
};