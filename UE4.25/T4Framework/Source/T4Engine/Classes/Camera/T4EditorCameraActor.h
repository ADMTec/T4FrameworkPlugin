// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Engine/StaticMeshActor.h" // #58
#include "T4EditorCameraActor.generated.h"

/**
  * #58
 */
class UT4StaticMeshComponent;
UCLASS()
class T4ENGINE_API AT4EditorCameraActor : public AStaticMeshActor
{
	GENERATED_UCLASS_BODY()

public:
	void Tick(float DeltaSeconds) override;

public:
	void Initialize(uint32 InCameraKey, bool bInEmulMode);

public:
	uint32 CameraKey;
	bool bEmulMode;
};
