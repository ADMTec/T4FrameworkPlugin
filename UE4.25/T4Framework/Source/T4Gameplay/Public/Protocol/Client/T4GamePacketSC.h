// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "Protocol/T4GamePacketTypes.h"

#include "T4GameplayTypes.h" // #114
#include "T4GameDBTypes.h" // #48

#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Framework/Public/T4FrameworkTypes.h" // #114
#include "T4GameData/Public/T4GameDBTypes.h"

#include "T4GamePacketSC.generated.h"

/**
  *
 */
USTRUCT()
struct FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4GamePacketSC PacketSC;

public:
	FT4GamePacketSC_Base()
		: PacketSC(ET4GamePacketSC::None)
	{
	}

	FT4GamePacketSC_Base(ET4GamePacketSC InPacketSC)
		: PacketSC(InPacketSC)
	{
	}

	virtual ~FT4GamePacketSC_Base() {}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("SC_Packet:None"));
	}
};
