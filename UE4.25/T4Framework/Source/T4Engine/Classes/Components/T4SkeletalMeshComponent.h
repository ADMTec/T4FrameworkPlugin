// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "T4SkeletalMeshComponent.generated.h"

/**
  * https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes
 */
UCLASS()
class T4ENGINE_API UT4SkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorComponentTickFunction* InThisTickFunction
	) override;

public:
	ET4LayerType GetLayerType() const { return LayerType; } // #111
	const FT4ActorID& GetOwnerActorID() const { return OwnerActorID; } // #111

	void SetLayerType(ET4LayerType InLayerType) { LayerType = InLayerType; } // #111
	void SetOwnerActorID(const FT4ActorID& InActorID) { OwnerActorID = InActorID; } // #111

protected:
	void BeginPlay() override;

private:
	ET4LayerType LayerType; // #111
	FT4ActorID OwnerActorID; // #111
};