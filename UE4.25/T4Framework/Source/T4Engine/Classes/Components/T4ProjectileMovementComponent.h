// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Components/SceneComponent.h"
#include "T4ProjectileMovementComponent.generated.h"

/**
  * #140
 */
UCLASS()
class T4ENGINE_API UT4ProjectileMovementComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

protected:
	void BeginPlay() override;
};
