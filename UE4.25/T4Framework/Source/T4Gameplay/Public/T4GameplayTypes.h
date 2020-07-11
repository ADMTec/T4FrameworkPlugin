// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "T4GameplayTypes.generated.h"

/**
  * #40
 */
enum ET4GameHotKeyType // #116
{
	HotKey1_Pressed,
	HotKey2_Pressed,
	HotKey3_Pressed,
	HotKey4_Pressed,

	HotKey_None,
};

UENUM()
enum class ET4GameTargetParamType : uint8 // #112
{
	ObjectID,
	ObjectIDAndLocation, // #126
	ObjectIDAndDirection, // #135

	Location,
	Direction,

	None,
};
