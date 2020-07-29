// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Components/DecalComponent.h"
#include "T4DecalComponent.generated.h"

/**
  * http://api.unrealengine.com/KOR/Resources/ContentExamples/Decals/index.html
 */
UCLASS()
class T4ENGINE_API UT4DecalComponent : public UDecalComponent
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
