// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "EditorStyleSet.h"
#include "Framework/Commands/Commands.h"

#define LOCTEXT_NAMESPACE "T4MinimapLevelCollectionCommands"

/** The set of commands supported by the WorldView */
class FT4MinimapLevelCollectionCommands 
	: public TCommands<FT4MinimapLevelCollectionCommands>
{

public:

	/** FT4MinimapLevelCollectionCommands Constructor */
	FT4MinimapLevelCollectionCommands() 
		: TCommands<FT4MinimapLevelCollectionCommands>
	(
		"Minimap", // Context name for fast lookup
		NSLOCTEXT("Contexts", "Minimap", "Minimap"), // Localized context name for displaying
		NAME_None, // Parent
		FEditorStyle::GetStyleSetName() // Icon Style Set
	)
	{
	}
	
	/** Initialize the commands */
	virtual void RegisterCommands() override
	{
		UI_COMMAND( RefreshBrowser,	"Refresh",	"Refreshes opened world", EUserInterfaceActionType::Button, FInputChord(EKeys::F5) );
		//#90
		UI_COMMAND(PreviewWorld_CameraLookAtLocation, "Look At", "Preview Camera Look At Location", EUserInterfaceActionType::Button, FInputChord());
	}

public:
	/** refreshes all world cached data */
	TSharedPtr< FUICommandInfo > RefreshBrowser;

	TSharedPtr< FUICommandInfo > PreviewWorld_CameraLookAtLocation; // #90
};

#undef LOCTEXT_NAMESPACE
