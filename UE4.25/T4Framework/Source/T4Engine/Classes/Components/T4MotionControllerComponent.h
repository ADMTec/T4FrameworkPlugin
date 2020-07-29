// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "MotionControllerComponent.h"
#include "T4MotionControllerComponent.generated.h"

/**
  * #153
 */
UCLASS()
class T4ENGINE_API UT4MotionControllerComponent : public UMotionControllerComponent
{
	GENERATED_UCLASS_BODY()

public:
	void ShowDefaultHandMesh(bool bInShow); // #153

protected:
	void BeginPlay() override;
};
