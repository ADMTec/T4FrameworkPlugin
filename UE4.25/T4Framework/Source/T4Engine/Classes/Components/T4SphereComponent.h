// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Components/SphereComponent.h"
#include "T4SphereComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Pawn/Character/index.html
 */
UCLASS()
class T4ENGINE_API UT4SphereComponent : public USphereComponent
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
