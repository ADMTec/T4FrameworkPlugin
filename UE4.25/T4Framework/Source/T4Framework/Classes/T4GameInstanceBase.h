// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "Engine/GameInstance.h"
#include "T4GameInstanceBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameFlow/index.html
 */
class IT4Framework;

UCLASS()
class T4FRAMEWORK_API UT4GameInstanceBase : public UGameInstance
{
	GENERATED_UCLASS_BODY()

public:
	void Init() override;
	void Shutdown() override;

protected:
	virtual void NotifyInit() {}
	virtual void NotifyShutdown() {}

private:
	IT4Framework* FrameworkOwner;
};
