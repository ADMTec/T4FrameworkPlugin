// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4FrameworkTypes.h"
#include "T4Engine/Public/T4EngineStructs.h"

/**
  *
 */
struct FT4FrameworkConstructionValues // #172
{
	FT4FrameworkConstructionValues()
		: FrameworkType(ET4FrameworkType::Null)
		, ContentName(NAME_None)
	{
	}

	ET4FrameworkType FrameworkType;
	FName ContentName;
	FT4WorldConstructionValues WorldConstructionValues;
};

struct FT4HUDDrawInfo // #68
{
	FT4HUDDrawInfo()
		: NoticeLineOffset(0.0f)
	{
	}
	float NoticeLineOffset;
};
