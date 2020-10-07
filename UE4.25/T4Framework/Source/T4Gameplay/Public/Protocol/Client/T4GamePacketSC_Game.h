// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketSC.h"
#include "T4GamePacketSC_Game.generated.h"

/**
  * #164
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4GamePacketSC::QuestStart // #164
// ET4GamePacketSC::QuestFinish // #164
// ET4GamePacketSC::MissionStart // #164
// ET4GamePacketSC::MissionFinish // #164
// ET4GamePacketSC::DialogueStart // #163
// ET4GamePacketSC::DialogueUpdate // #163
// ET4GamePacketSC::DialogueFinish // #163
// ET4GamePacketSC::InventoryAdd, // #168

USTRUCT()
struct FT4GamePacketSC_QuestStart : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestUniqueID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4QuestDBKey QuestDBKey;

public:
	FT4GamePacketSC_QuestStart()
		: FT4GamePacketSC_Base(ET4GamePacketSC::QuestStart)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!QuestUniqueID.IsValid())
		{
			OutMsg = TEXT("Invalid QuestUniqueID");
			return false;
		}
		if (!QuestDBKey.IsValid())
		{
			OutMsg = TEXT("Invalid QuestDBKey");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:QuestStart"));
	}
};

USTRUCT()
struct FT4GamePacketSC_QuestFinish : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestUniqueID;

public:
	FT4GamePacketSC_QuestFinish()
		: FT4GamePacketSC_Base(ET4GamePacketSC::QuestFinish)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!QuestUniqueID.IsValid())
		{
			OutMsg = TEXT("Invalid QuestUniqueID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:QuestFinish"));
	}
};

USTRUCT()
struct FT4GamePacketSC_MissionStart : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestUniqueID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid MissionUniqueID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4MissionTextDBKey MissionTextDBKey;

public:
	FT4GamePacketSC_MissionStart()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MissionStart)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!MissionUniqueID.IsValid())
		{
			OutMsg = TEXT("Invalid MissionUniqueID");
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
struct FT4GamePacketSC_MissionFinish : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid QuestUniqueID; // Optional

	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid MissionUniqueID;

public:
	FT4GamePacketSC_MissionFinish()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MissionFinish)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!MissionUniqueID.IsValid())
		{
			OutMsg = TEXT("Invalid MissionUniqueID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MissionFinish"));
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
struct FT4GamePacketSC_DialogueFinish : public FT4GamePacketSC_Base // #163
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

public:
	FT4GamePacketSC_DialogueFinish()
		: FT4GamePacketSC_Base(ET4GamePacketSC::DialogueFinish)
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
		return FString(TEXT("SC_Packet:DialogueFinish"));
	}
};

USTRUCT()
struct FT4GamePacketSC_InventoryAdd : public FT4GamePacketSC_Base // #168
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FT4GameDBKey> ItemDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<int32> ItemCounts;

public:
	FT4GamePacketSC_InventoryAdd()
		: FT4GamePacketSC_Base(ET4GamePacketSC::InventoryAdd)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (0 >= ItemDBKeys.Num())
		{
			OutMsg = TEXT("ItemDB is Empty");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:InventoryAdd"));
	}
};
