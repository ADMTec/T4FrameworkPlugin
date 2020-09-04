// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Components/AudioComponent.h"
#include "T4AudioComponent.generated.h"

/**
  * #152
 */
UCLASS()
class T4ENGINE_API UT4AudioComponent : public UAudioComponent
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
