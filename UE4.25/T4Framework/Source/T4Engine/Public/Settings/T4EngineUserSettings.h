// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineUserSettings.generated.h"

/**
  * #153
 */
UCLASS(config = T4Framework)
class T4ENGINE_API UT4EngineUserSettings : public UObject
{
	GENERATED_BODY()

public:
	UT4EngineUserSettings();

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini

	UPROPERTY(config, EditAnywhere, Category=Editor)
	FSoftObjectPath PreviewSceneEnvironmentAssetPath; // #94

	UPROPERTY(config, EditAnywhere, Category= Editor)
	FSoftObjectPath ThumbnailSceneEnvironmentAssetPath; // #97

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};