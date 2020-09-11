// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketSC.h"
#include "T4GamePacketSC_Debug.generated.h"

/**
  * #164
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4GamePacketSC::DebugAIStatus

 // #140 : NPC Only
USTRUCT()
struct FT4GamePacketSC_DebugAIStatus : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName AIStateName;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName AITaskName;

public:
	FT4GamePacketSC_DebugAIStatus()
		: FT4GamePacketSC_Base(ET4GamePacketSC::DebugAIStatus)
		, AIStateName(NAME_None)
		, AITaskName(NAME_None)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:DebugAIStatus"));
	}
};
