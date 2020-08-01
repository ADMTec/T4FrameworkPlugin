// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "Protocol/T4GamePacketTypes.h"

#include "T4GameplayTypes.h"

#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Framework/Public/T4FrameworkTypes.h" // #114
#include "T4GameData/Public/T4GameDBTypes.h"

#include "T4GamePacketCS.generated.h"

/**
  *
 */
USTRUCT()
struct FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4GamePacketCS PacketCS;

public:
	FT4GamePacketCS_Base()
		: PacketCS(ET4GamePacketCS::None)
	{
	}

	FT4GamePacketCS_Base(ET4GamePacketCS InPacketCS)
		: PacketCS(InPacketCS)
	{
	}

	virtual ~FT4GamePacketCS_Base() {}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("CS_Packet:None"));
	}
};