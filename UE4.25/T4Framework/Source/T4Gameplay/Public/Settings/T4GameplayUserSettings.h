// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayUserSettings.generated.h"

/**
  * #150
 */
class UDataTable;
UCLASS(config = T4Framework)
class T4GAMEPLAY_API UT4GameplayUserSettings : public UObject
{
	GENERATED_BODY()

public:
	UT4GameplayUserSettings();

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};