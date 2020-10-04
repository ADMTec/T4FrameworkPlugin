// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"

/**
  * #158
 */
#if WITH_EDITOR

struct FT4GameDBTreeColumnWidthInfo // #158
{
	FT4GameDBTreeColumnWidthInfo()
		: IDWidth(180.0f)
		, InfoWidth(300.0f)
	{
	}
	float IDWidth;
	float InfoWidth;
};

#endif