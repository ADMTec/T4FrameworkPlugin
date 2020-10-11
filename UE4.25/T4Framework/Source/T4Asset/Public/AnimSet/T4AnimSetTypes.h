// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4AnimSetTypes.generated.h"

/**
  * #131
 */
UENUM()
enum class ET4AnimsetTemplate : uint8 // #131
{
	Basic_Simple,
	Basic_Advanced,
	Basic_Locomotion,

	Paragon,

	None UMETA(Hidden)
};

UENUM()
enum class ET4AnimationLayer : uint8 // #71
{
	Additive, // #138 : System UI 를 사용하고, 내부적으로만 사용되는 Layer (Hit 류)
	Skill,
	System, // #131
	State,

	Nums
};
