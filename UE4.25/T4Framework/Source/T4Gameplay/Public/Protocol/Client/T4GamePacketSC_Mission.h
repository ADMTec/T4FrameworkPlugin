// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketSC.h"
#include "T4GamePacketSC_Mission.generated.h"

/**
  * #164
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4GamePacketSC::MissionStart
// ET4GamePacketSC::MissionUpdate
// ET4GamePacketSC::MissionCompleted
// ET4GamePacketSC::DialogueStart // #163
// ET4GamePacketSC::DialogueUpdate // #163
// ET4GamePacketSC::DialogueCompleted // #163

USTRUCT()
struct FT4GamePacketSC_MissionStart : public FT4GamePacketSC_Base // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ContentDBKey ContentDBKey;

public:
	FT4GamePacketSC_MissionStart()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MissionStart)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!QuestKey.IsValid())
		{
			OutMsg = TEXT("Invalid QuestKey");
			return false;
		}
		if (!ContentDBKey.IsValid())
		{
			OutMsg = TEXT("Invalid ContentDBKey");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MissionStart"));
	}
};

USTRUCT()
struct FT4GamePacketSC_MissionUpdate : public FT4GamePacketSC_Base // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ContentDBKey ContentDBKey;

public:
	FT4GamePacketSC_MissionUpdate()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MissionUpdate)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!QuestKey.IsValid())
		{
			OutMsg = TEXT("Invalid QuestKey");
			return false;
		}
		if (!ContentDBKey.IsValid())
		{
			OutMsg = TEXT("Invalid ContentDBKey");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MissionUpdate"));
	}
};

USTRUCT()
struct FT4GamePacketSC_MissionCompleted : public FT4GamePacketSC_Base // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ContentDBKey ContentDBKey;

public:
	FT4GamePacketSC_MissionCompleted()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MissionCompleted)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!QuestKey.IsValid())
		{
			OutMsg = TEXT("Invalid QuestKey");
			return false;
		}
		if (!ContentDBKey.IsValid())
		{
			OutMsg = TEXT("Invalid ContentDBKey");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MissionCompleted"));
	}
};

USTRUCT()
struct FT4GamePacketSC_DialogueStart : public FT4GamePacketSC_Base // #163
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

public:
	FT4GamePacketSC_DialogueStart()
		: FT4GamePacketSC_Base(ET4GamePacketSC::DialogueStart)
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
		return FString(TEXT("SC_Packet:DialogueStart"));
	}
};

USTRUCT()
struct FT4GamePacketSC_DialogueUpdate : public FT4GamePacketSC_Base // #163
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

public:
	FT4GamePacketSC_DialogueUpdate()
		: FT4GamePacketSC_Base(ET4GamePacketSC::DialogueUpdate)
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
		return FString(TEXT("SC_Packet:DialogueUpdate"));
	}
};

USTRUCT()
struct FT4GamePacketSC_DialogueCompleted : public FT4GamePacketSC_Base // #163
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

public:
	FT4GamePacketSC_DialogueCompleted()
		: FT4GamePacketSC_Base(ET4GamePacketSC::DialogueCompleted)
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
		return FString(TEXT("SC_Packet:DialogueCompleted"));
	}
};
