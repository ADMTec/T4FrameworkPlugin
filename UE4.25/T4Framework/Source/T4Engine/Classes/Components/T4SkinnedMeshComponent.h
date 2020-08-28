// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4Engine.h"
#include "Components/SkinnedMeshComponent.h"
#include "T4SkinnedMeshComponent.generated.h"

/**
  * https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes
 */
UCLASS()
class T4ENGINE_API UT4SkinnedMeshComponent : public USkinnedMeshComponent, public IT4CompositeComponent
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
	void SetImportRotation(const FRotator& InRotation) { ImportRotation = InRotation; } // #162

protected:
	void BeginPlay() override;

	FRotator ImportRotation; // #162
};
