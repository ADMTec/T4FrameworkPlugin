// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Framework/Classes/T4GameModeBase.h"
#include "T4BuiltinGameMode.generated.h"

/**
  * #150
 */
class AController;
UCLASS(Transient, BlueprintType, Blueprintable)
class T4GAMEPLAY_API AT4BuiltinGameMode : public AT4GameModeBase
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "InGame")
	void OnDialogueClicked(); // #163

protected:
	virtual void NotifyStartPlay() override; // #144
	virtual void NotifyStartToLeaveMap() override;
};
