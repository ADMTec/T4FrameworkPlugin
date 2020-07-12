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
	Basic,
	Paragon
};

enum ET4AnimationLayer // #71
{
	AnimLayer_Additive, // #138 : System UI 를 사용하고, 내부적으로만 사용되는 Layer (Hit 류)
	AnimLayer_Skill,
	AnimLayer_System, // #131
	AnimLayer_State,

	AnimLayer_Nums
};
