// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Engine/Public/T4EngineLayer.h"
#include "GameFramework/GameMode.h"
#include "T4GameModeBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
class APlayerController;
UCLASS()
class T4FRAMEWORK_API AT4GameModeBase : public AGameMode
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
	void StartToLeaveMap() override;

protected:
	virtual void NotifyStartPlay() {}
	virtual void NotifyStartToLeaveMap() {}

	APlayerController* GetLocalPlayerController(UObject* InWorldContextObject);

protected:
	ET4LayerType LayerType;
};
