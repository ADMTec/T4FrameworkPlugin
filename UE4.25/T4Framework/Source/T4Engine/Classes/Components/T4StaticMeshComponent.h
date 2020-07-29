// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "T4StaticMeshComponent.generated.h"

/**
  * https://docs.unrealengine.com/en-us/Engine/Content/Types/StaticMeshes
 */
UCLASS()
class T4ENGINE_API UT4StaticMeshComponent : public UStaticMeshComponent
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
