// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4AssetCommonTypes.h"
#include "T4ActionPackTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */

static const float T4Const_ActionPackMaxPlayTimeSec = 10.0f; // #56
static const float T4Const_EmptyYawAngle = TNumericLimits<float>::Max(); // #113

// WARN : Action 추가 시는 아래 테그를 찾아 추가된 액션을 구현해주어야 함!!
// #T4_ADD_ACTION_TAG

UENUM()
enum class ET4ActionBaseType : uint32
{
	// #62
	Command,
	Data,

	None,
};

UENUM()
enum class ET4ActionDataType : uint32
{
	// #62 : Begin Data Format // #T4_ADD_ACTION_TAG_DATA
	Branch, // #54

	Movement, // #132

	Animation,
	
	Mesh, // #108
	Particle,
	Decal, // #54

	Projectile, // #63

	Reaction, // #76
	PlayTag, // #81

	TimeScale, // #102

	CameraWork, // #54
	CameraShake, // #101

	PostProcess, // #100
	Environment, // #99

	Void, // #56 : Action Editor 에서 Invisible or Isolate 로 출력을 제어할 때 더미용으로 사용 (delay, duration 동작 보장)

	// #62 : End Data Format

	None,
};

// #24
UENUM()
enum class ET4LifecycleType : uint8
{
	Auto, // #56
	Duration,

	Looping		UMETA(DisplayName = "Looping (Warning #1)"), // #74

	Default, // Default = Auto
};

UENUM()
enum class ET4LoadingPolicy : uint8
{
	Async, // Default

	Sync, // #8, #56 : 사용 제한 필요!!! 만약을 대비해 준비는 해둔 것!

	Default UMETA(Hidden) // Default = Async
};

// #134
UENUM()
enum class ET4PlayCount : uint8
{
	Looping,
	OneShot,
	Repeat2		UMETA(DisplayName = "Repeat X 2"),
	Repeat3		UMETA(DisplayName = "Repeat X 3"),
	Repeat4		UMETA(DisplayName = "Repeat X 4"),
	Repeat5		UMETA(DisplayName = "Repeat X 5"),
	Repeat6		UMETA(DisplayName = "Repeat X 6"),
	Repeat7		UMETA(DisplayName = "Repeat X 7"),
	Repeat8		UMETA(DisplayName = "Repeat X 8"),
	Repeat9		UMETA(DisplayName = "Repeat X 9"),
	Repeat10	UMETA(DisplayName = "Repeat X 10"),
};

// #54
UENUM()
enum class ET4BranchCondition : uint8
{
	Always,
	
	CompareActiveName,

	Default, // Default = Auto
};

UENUM(BlueprintType)
enum class ET4AttachParent : uint8 // #54
{
	Object, // Default
	World,

	Default,
};

UENUM()
enum class ET4PlayTarget : uint8 // #100
{
	Player, // Default
	All,

	Default,
};

UENUM()
enum class ET4PlayTagType : uint8 // #81
{
	Material, // #81
	Attachment, // #74
	Action, // #74

	All, // #81
};

UENUM(BlueprintType)
enum class ET4MovementType : uint8 // #127, #132
{
	Straight, // #63
	Parabola, // #127 : 포물선
	Howitzer, // #127 : 곡사포
	Mortar, // #127 : 박격포
	Airborne, // #132 : 부유
};

UENUM()
enum class ET4AcceleratedMotion : uint8 // #127
{
	Uniform,
	//Acceleration, // #140 : 타이밍 오류로 막아둠
	//Deceleration, // #140 : 타이밍 오류로 막아둠
};
