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

	bool IsFreeCameraEnabled() const { return bFreeCameraEnabled; } // #158
	void SetEnableFreeCamera(bool bInEnable) { bFreeCameraEnabled = bInEnable; } // #158
	void SetFreeCameraLocationAndRotation(const FVector& InLocation, const FRotator& InRotation); // #158

	bool IsFreeCameraBlended() const { return bFreeCameraBlended; } // #158
	void SetBlendFreeCamera(bool bInBlend); // #158
	void SetFreeCameraBlendLocationAndRotation(const FVector& InLocation, const FRotator& InRotation); // #158
	const FVector& GetFreeCameraBlendLocation() const { return FreeCameraBlendLocation; } // #158
	const FRotator& GetFreeCameraBlendRotation() const { return FreeCameraBlendRotation; } // #158

private:
	bool bFreeCameraEnabled; // #158 : Free Camera 대응
	FVector FreeCameraLocation; // #158
	FRotator FreeCameraRotation; // #158

	bool bFreeCameraBlended; // #158 : CameraWork 를 통해 카메라 위치를 제어 (Editor Only)
	FVector FreeCameraBlendLocation; // #158
	FRotator FreeCameraBlendRotation; // #158
#endif
};
