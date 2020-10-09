// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketCS.h"
#include "T4GamePacketCS_Game.generated.h"

/**
  * #163
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4GamePacketCS::DialogueAnswer // #163

// #113, #116
USTRUCT()
struct FT4GamePacketCS_DialogueAnswer : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestUniqueID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid DialogueUniqueID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid DialogueCueUniqueID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4GameDialogueResult DialogueResult;

public:
	FT4GamePacketCS_DialogueAnswer()
		: FT4GamePacketCS_Base(ET4GamePacketCS::DialogueAnswer)
		, DialogueResult(ET4GameDialogueResult::None)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (!DialogueUniqueID.IsValid())
		{
			OutMsg = TEXT("Invalid DialogueUniqueID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:DialogueAnswer"));
	}
};
