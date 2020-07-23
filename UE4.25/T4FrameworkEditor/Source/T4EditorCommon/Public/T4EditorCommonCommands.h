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
};