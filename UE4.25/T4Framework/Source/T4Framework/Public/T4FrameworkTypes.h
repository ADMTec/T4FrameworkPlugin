// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"

#include "T4FrameworkTypes.generated.h"

/**
  * #114
 */
// #30
UENUM()
enum class ET4FrameworkType : uint8
{
	Null,
	Client,
	Server,

	Max	UMETA(Hidden)
};

UENUM()
enum class ET4ControllerType : uint8
{
	Player, // #114 : Server All, Client Player Only
	NPC, // #114 : Server Only
	Item, // #161 : Server Only

	Max	UMETA(Hidden)
};
