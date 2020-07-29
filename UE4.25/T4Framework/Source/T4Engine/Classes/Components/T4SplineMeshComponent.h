// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "T4SplineMeshComponent.generated.h"

/**
  * #153
 */
UCLASS()
class T4ENGINE_API UT4SplineMeshComponent : public USplineMeshComponent
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
