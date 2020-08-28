// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4Engine.h"
#include "Particles/ParticleSystemComponent.h"
#include "T4ParticleSystemComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Engine/Rendering/ParticleSystems/
 */
UCLASS()
class T4ENGINE_API UT4ParticleSystemComponent : public UParticleSystemComponent, public IT4CompositeComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

public:
	// ~IT4CompositeComponent : #162
	FName GetCompositeName() const override { return NAME_None; }

	const FTransform GetLocalTransform() const override { return GetRelativeTransform(); }

	void SetLocalTransform(const FTransform& InTransform) override; // SetComponentTransform
	void SetLocalLocation(const FVector& InLocation) override { SetRelativeLocation(InLocation); }
	void SetLocalRotation(const FRotator& InRotation) override;
	void SetLocalScale3D(const FVector& InScale) override { SetRelativeScale3D(InScale); }

public:
	void SetPlayRate(float InPlayRate) { PlayRate = InPlayRate; } // #102

	void SetImportRotation(const FRotator& InRotation) { ImportRotation = InRotation; } // #162

protected:
	void BeginPlay() override;

private:
	float PlayRate; // #102

	FRotator ImportRotation; // #162
};
