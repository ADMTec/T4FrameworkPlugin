// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"
#include "Components/TextRenderComponent.h"
#include "T4TextRenderComponent.generated.h"

/**
  * #119
 */
UCLASS()
class T4ENGINE_API UT4TextRenderComponent : public UTextRenderComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

	FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override; // #140

public:
	void SetLayerType(ET4LayerType InLayerType) { LayerType = InLayerType; }
	void SetLookAtCamera(bool bInEnable) { bLookAtCameraEnabled = bInEnable; }

protected:
	void BeginPlay() override;

private:
	ET4LayerType LayerType;
	bool bLookAtCameraEnabled;
};
