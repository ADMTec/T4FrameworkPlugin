// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"

/**
  * #158
 */
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

struct FT4StatDBTreeColumnWidthInfo // #163
{
	FT4StatDBTreeColumnWidthInfo()
	{
	}
	TMap<FName, float> WidthMap;
};

struct FT4TextDBTreeColumnWidthInfo // #163
{
	FT4TextDBTreeColumnWidthInfo()
	{
	}
	TMap<FName, float> WidthMap;
};
