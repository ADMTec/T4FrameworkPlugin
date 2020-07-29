// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "T4ParticleSystemComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Engine/Rendering/ParticleSystems/
 */
UCLASS()
class T4ENGINE_API UT4ParticleSystemComponent : public UParticleSystemComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

public:
	void SetPlayRate(float InPlayRate) { PlayRate = InPlayRate; } // #102

protected:
	void BeginPlay() override;

private:
	float PlayRate; // #102
};
