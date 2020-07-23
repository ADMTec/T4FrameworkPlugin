// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Framework/Classes/T4GameInstanceBase.h"
#include "T4BuiltinGameInstance.generated.h"

/**
  * #150
 */
UCLASS(Transient, BlueprintType, Blueprintable)
class T4GAMEPLAY_API UT4BuiltinGameInstance : public UT4GameInstanceBase
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Game")
	void ToggleQuickMenu(); // #151
};
