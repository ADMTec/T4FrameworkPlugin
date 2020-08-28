// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4Engine.h"
#include "Components/SkeletalMeshComponent.h"
#include "T4SkeletalMeshComponent.generated.h"

/**
  * https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes
 */
UCLASS()
class T4ENGINE_API UT4SkeletalMeshComponent : public USkeletalMeshComponent, public IT4CompositeComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorComponentTickFunction* InThisTickFunction
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
	ET4LayerType GetLayerType() const { return LayerType; } // #111
	const FT4ActorID& GetOwnerActorID() const { return OwnerActorID; } // #111

	void SetLayerType(ET4LayerType InLayerType) { LayerType = InLayerType; } // #111
	void SetOwnerActorID(const FT4ActorID& InActorID) { OwnerActorID = InActorID; } // #111

	void SetImportRotation(const FRotator& InRotation) { ImportRotation = InRotation; } // #162

protected:
	void BeginPlay() override;

private:
	ET4LayerType LayerType; // #111
	FT4ActorID OwnerActorID; // #111

	FRotator ImportRotation; // #162
};
