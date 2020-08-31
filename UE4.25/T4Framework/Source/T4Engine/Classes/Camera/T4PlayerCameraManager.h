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

#if WITH_EDITOR
	FVector GetCameraLocation() const override; // #158 : Free Camera 대응
	FRotator GetCameraRotation() const override; // #158 : Free Camera 대응

	void SetEnableFreeCamera(bool bInEnable) { bFreeCameraEnabled = bInEnable; } // #158
	void SetFreeCameraLocationAndRotation(const FVector& InLocation, const FRotator& InRotation) // #158
	{ 
		FreeCameraLocation = InLocation; 
		FreeCameraRotation = InRotation;
	}

private:
	bool bFreeCameraEnabled; // #158 : Free Camera 대응
	FVector FreeCameraLocation; // #158
	FRotator FreeCameraRotation; // #158
#endif
};
