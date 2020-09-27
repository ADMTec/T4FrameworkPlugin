// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "T4GameplayTypes.h" // #114
#include "T4Engine/Public/T4EngineTypes.h"

#include "T4GamePacketSCStructs.generated.h"

/**
  * #161
 */

// #161
USTRUCT()
struct FT4PacketSC_MoveSegmentData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float TimeSec;
};
