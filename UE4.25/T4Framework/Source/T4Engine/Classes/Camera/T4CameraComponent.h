// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Camera/CameraComponent.h"
#include "T4CameraComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Camera/index.html
 */
UCLASS()
class T4ENGINE_API UT4CameraComponent : public UCameraComponent
{
	GENERATED_UCLASS_BODY()

public:
	// USceneComponent interface
#if WITH_EDITOR
	bool GetEditorPreviewInfo(float DeltaTime, FMinimalViewInfo& ViewOut) override;
#endif
	// End of USceneComponent interface
	
	void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;

protected:
	void BeginPlay() override;
};
