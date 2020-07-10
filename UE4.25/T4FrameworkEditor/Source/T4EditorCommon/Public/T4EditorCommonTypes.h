// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #117
 */
namespace ET4ViewportPlaybackSpeeds
{
	enum Type
	{
		OneTenth = 0,
		Quarter,
		Half,
		Normal,
		Double,
		FiveTimes,
		TenTimes,
		NumPlaybackSpeeds
	};

	extern float Values[NumPlaybackSpeeds];
};
