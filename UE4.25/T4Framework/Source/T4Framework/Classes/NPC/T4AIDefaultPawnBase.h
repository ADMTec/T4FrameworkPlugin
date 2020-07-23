// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "T4AIDefaultPawnBase.generated.h"

/**
  *
 */
UCLASS()
class T4FRAMEWORK_API AT4AIDefaultPawnBase : public APawn
{
	GENERATED_UCLASS_BODY()

public:
	void Tick(float InDeltaTime) override;

	/** If true, actor is ticked even if TickType==LEVELTICK_ViewportsOnly	 */
	bool ShouldTickIfViewportsOnly() const override; // #17

	void EndPlay(const EEndPlayReason::Type InEndPlayReason) override;

protected:
	void BeginPlay() override;

protected:
	ET4LayerType LayerType;
};
