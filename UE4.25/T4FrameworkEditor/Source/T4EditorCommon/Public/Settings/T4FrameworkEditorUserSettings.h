// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4FrameworkEditorUserSettings.generated.h"

/**
  * #150
 */

UCLASS(config = T4FrameworkEditor)
class UT4FrameworkEditorUserSettings : public UObject
{
	GENERATED_BODY()

public:
	UT4FrameworkEditorUserSettings();

public:
	// Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini

	UPROPERTY(config, noclear, EditAnywhere, Category=PlayMode)
	bool bUseBuiltinGameMode; // #56

	UPROPERTY(config, EditAnywhere, Category=ContiEditor)
	bool bDefaultReplayRepeat; // #56

	UPROPERTY(config, EditAnywhere, Category=ContiEditor)
	bool bDefaultReplayPlayerPossessed; // #56

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};
