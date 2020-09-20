// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "T4GameplayTypes.generated.h"

/**
  * #40, #126
 */
UENUM()
enum class ET4ControlModeType : uint8
{
	TPS,
	QuarterView, // #139
	ShoulderView, // #40
	FPS, // #121

	Free, // #133

	None UMETA(Hidden),
};

enum ET4GameHotKeyType // #116
{
	HotKey1_Pressed,
	HotKey2_Pressed,
	HotKey3_Pressed,
	HotKey4_Pressed,

	HotKey_None,
};

UENUM()
enum class ET4GameQuestResult : uint8 // #164
{
	Completed_By_QuestKey,
	Completed_By_QuestDBKey,
	Completed_All,

	None,
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
