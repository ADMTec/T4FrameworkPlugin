// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "T4PlayerDefaultPawnBase.generated.h"

/**
  *
 */
class UPlayerInput;
UCLASS()
class T4FRAMEWORK_API AT4PlayerDefaultPawnBase : public ADefaultPawn
{
	GENERATED_UCLASS_BODY()

public:
	void Tick(float InDeltaTime) override;

	void SetupPlayerInputComponent(UInputComponent* InInputComponent) override;
};
