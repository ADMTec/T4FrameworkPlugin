// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Camera/CameraModifier.h"
#include "Engine/Scene.h" // #98
#include "Camera/CameraModifier_CameraShake.h" // #101
#include "T4CameraModifier.generated.h"

/**
  * #100
*/
UCLASS()
class T4ENGINE_API UT4CameraModifier : public UCameraModifier_CameraShake
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UCameraModifer Interface
	virtual bool ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV) override;
	//~ End UCameraModifer Interface

public:
	void Reset();

public:
	void UpdateCameraAnimBlend(
		const FVector& InLocation, 
		const FRotator& InRotation, 
		float InFOVDegree,
		float InBlendWeight
	); // #58

public:
	float CameraBlendWeight; // #58
	float CameraBlendFOVDegree; // #58
	FVector CameraBlendLocation; // #58
	FRotator CameraBlendRotation; // #58

	TArray<float> PostProcessBlendWeights;
	TArray<FPostProcessSettings*> PostProcessSettings;
};
