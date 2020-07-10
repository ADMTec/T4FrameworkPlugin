// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "T4SpringArmComponent.generated.h"

/**
  * https://docs.unrealengine.com/en-us/Engine/Content/Types/StaticMeshes
 */
UCLASS()
class T4ENGINE_API UT4SpringArmComponent : public USpringArmComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

public:
	void UpdateBlendSocketOffset(const FVector& InBlendSocketOffset, float InBlendWeight); // #58

protected:
	void BeginPlay() override;

public:
	FVector BackupSocketOffset; // #58

	float BlendWeight; // #58
	FVector BlendSocketOffset; // #58
};
