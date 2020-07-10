// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "T4PlayerCameraManager.generated.h"

/**
  * https://docs.unrealengine.com/en-US/Gameplay/Framework/Camera
 */
UCLASS()
class T4ENGINE_API AT4PlayerCameraManager : public APlayerCameraManager
{
	GENERATED_UCLASS_BODY()

public:
	void UpdateCamera(float InDeltaTime) override;
};
