// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "GameFramework/HUD.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4GameHUDBase.generated.h"

/**
  * https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html
 */
UCLASS()
class T4FRAMEWORK_API AT4GameHUDBase : public AHUD
{
	GENERATED_UCLASS_BODY()

public:
	ET4LayerType GetLayerType() const { return LayerType; }

protected:
	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	virtual void NotifyBeginPlay() {}
	virtual void NotifyEndPlay(const EEndPlayReason::Type EndPlayReason) {}

protected:
	ET4LayerType LayerType;
};
