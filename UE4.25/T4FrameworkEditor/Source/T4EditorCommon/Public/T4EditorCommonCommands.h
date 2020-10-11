// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"

/**
  *
 */
class T4EDITORCOMMON_API FT4EditorCommonCommands : public TCommands<FT4EditorCommonCommands>
{
public:
	FT4EditorCommonCommands();

	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> Refresh; // #163

	TSharedPtr<FUICommandInfo> ReloadPlayer; // #38
	TSharedPtr<FUICommandInfo> RespawnPlayer; // #136
	TSharedPtr<FUICommandInfo> SaveThumbnailImage;

	TSharedPtr<FUICommandInfo> ReplayRec; // #68
	TSharedPtr<FUICommandInfo> ReplayPlay;
	TSharedPtr<FUICommandInfo> ReplayPause;
	TSharedPtr<FUICommandInfo> ReplayStop;

	TSharedPtr<FUICommandInfo> DespawnAll;
	TSharedPtr<FUICommandInfo> RespawnAll; // #114

	TSharedPtr<FUICommandInfo> UseDefaultShowFlags; // #94

	TSharedPtr<FUICommandInfo> ViewportShowActorBound; // #76
	TSharedPtr<FUICommandInfo> ViewportShowNPCAIInfo; // #140
	TSharedPtr<FUICommandInfo> ViewportShowServerLocation; // #140
	TSharedPtr<FUICommandInfo> ViewportShowMovementTrajectory; // #140
	TSharedPtr<FUICommandInfo> ViewportAlwaysTick; // #76

	TSharedPtr<FUICommandInfo> ViewportJumpToPlay; // #99 : Keys::Up
	TSharedPtr<FUICommandInfo> ViewportJumpToEnd; // #99 : Keys::Up + CTRL
	TSharedPtr<FUICommandInfo> ViewportTogglePlay; // #99 : Keys::Down
	TSharedPtr<FUICommandInfo> ViewportTogglePlayBySpace; // #132 : Keys : Space 

	TArray<TSharedPtr<FUICommandInfo>> ViewportPlaybackSpeedCommands; // #117

	// #161 : SEditorViewport 가 ALT + 1 ~9 핫키를 VideMode 와 연동하고 있어 별도 처리함
	TSharedPtr< FUICommandInfo > ViewportWireframeMode;
	TSharedPtr< FUICommandInfo > ViewportUnlitMode;
	TSharedPtr< FUICommandInfo > ViewportLitMode;
#if RHI_RAYTRACING
	TSharedPtr< FUICommandInfo > ViewportPathTracingMode;
	TSharedPtr< FUICommandInfo > ViewportRayTracingDebugMode;
#endif
	TSharedPtr< FUICommandInfo > ViewportDetailLightingMode;
	TSharedPtr< FUICommandInfo > ViewportLightingOnlyMode;
	TSharedPtr< FUICommandInfo > ViewportLightComplexityMode;
	TSharedPtr< FUICommandInfo > ViewportShaderComplexityMode;
	TSharedPtr< FUICommandInfo > ViewportQuadOverdrawMode;
	TSharedPtr< FUICommandInfo > ViewportShaderComplexityWithQuadOverdrawMode;
};