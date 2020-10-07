// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketCS.h"
#include "T4GamePacketCS_Command.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4GamePacketCS::CmdGameStart // #161

// ET4GamePacketCS::CmdQuestStart // #146
// ET4GamePacketCS::CmdQuestFinish // #164

// ET4GamePacketCS::CmdWorldTravel
// ET4GamePacketCS::CmdWorldTimeSync // #146

// ET4GamePacketCS::CmdChangePlayer // #11, #52

// ET4GamePacketCS::CmdPCEnter
// ET4GamePacketCS::CmdNPCEnter // #31
// ET4GamePacketCS::CmdItemEnter // #41

// ET4GamePacketCS::CmdRespawn, // #140

// ET4GamePacketCS::CmdLeave, // #68

// ET4GamePacketCS::CmdTeleport
// ET4GamePacketCS::CmdBookmark // #140

// #161
USTRUCT()
struct FT4GamePacketCS_CmdGameStart : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4QuestDBKey QuestDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4PlayerDBKey StartPlayerDBKey;

public:
	FT4GamePacketCS_CmdGameStart()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdGameStart)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdGameStart"));
	}
};

USTRUCT()
struct FT4GamePacketCS_CmdQuestStart : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4QuestDBKey QuestDBKey;

public:
	FT4GamePacketCS_CmdQuestStart()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdQuestStart)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdQuestStart"));
	}
};

// #164
USTRUCT()
struct FT4GamePacketCS_CmdQuestFinish : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bFinishAll;

public:
	FT4GamePacketCS_CmdQuestFinish()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdQuestFinish)
		, bFinishAll(true)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdQuestFinish"));
	}
};

USTRUCT()
struct FT4GamePacketCS_CmdWorldTravel : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey WorldDBKey;

public:
	FT4GamePacketCS_CmdWorldTravel()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdWorldTravel)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdWorldTravel"));
	}
};


USTRUCT()
struct FT4GamePacketCS_CmdWorldTimeSync : public FT4GamePacketCS_Base // #146
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeHour;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeScale;

public:
	FT4GamePacketCS_CmdWorldTimeSync()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdWorldTimeSync)
		, WorldTimeHour(-1.0f)
		, WorldTimeScale(-1.0f)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdWorldTimeSync"));
	}
};

// #11, #52
USTRUCT()
struct FT4GamePacketCS_CmdChangePlayer : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ChangeObjectID;

public:
	FT4GamePacketCS_CmdChangePlayer()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdChangePlayer)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (!ChangeObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid Change ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdChangePlayer"));
	}
};

USTRUCT()
struct FT4GamePacketCS_CmdPCEnter : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey PlayerDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bInitializeSpawn;

public:
	FT4GamePacketCS_CmdPCEnter()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdPCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
		, bInitializeSpawn(false)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdPCEnter"));
	}
};

// #31
USTRUCT()
struct FT4GamePacketCS_CmdNPCEnter : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid Guid; // #142

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName NameID; // #142

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey NPCDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Default)
	uint32 ReservedObjectID; // #118
#endif

public:
	FT4GamePacketCS_CmdNPCEnter()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdNPCEnter)
		, NameID(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
#if WITH_EDITOR
		, ReservedObjectID(T4Const_EmptyObjectID) // #118
#endif
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdNPCEnter"));
	}
};

// #41
USTRUCT()
struct FT4GamePacketCS_CmdItemEnter : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FGuid Guid; // #142

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName NameID; // #142

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey ItemDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Default)
	uint32 ReservedObjectID; // #118
#endif

public:
	FT4GamePacketCS_CmdItemEnter()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdItemEnter)
		, NameID(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
#if WITH_EDITOR
		, ReservedObjectID(T4Const_EmptyObjectID) // #118
#endif
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdItemEnter"));
	}
};

// #140
USTRUCT()
struct FT4GamePacketCS_CmdRespawn : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID RespawnObjectID;

public:
	FT4GamePacketCS_CmdRespawn()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdRespawn)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!RespawnObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid Respawn ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdRespawn"));
	}
};

// #68
USTRUCT()
struct FT4GamePacketCS_CmdLeave : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID LeaveObjectID;

public:
	FT4GamePacketCS_CmdLeave()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdLeave)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!LeaveObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid Leave ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdLeave"));
	}
};

USTRUCT()
struct FT4GamePacketCS_CmdTeleport : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator Rotation;

public:
	FT4GamePacketCS_CmdTeleport()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdTeleport)
		, Location(FVector::ZeroVector)
		, Rotation(FRotator::ZeroRotator)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ActorID!");
			return false;
		}
		if (Location.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid TargetLocation!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdTeleport"));
	}
};

USTRUCT()
struct FT4GamePacketCS_CmdBookmark : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator Rotation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeHour; // #146

public:
	FT4GamePacketCS_CmdBookmark()
		: FT4GamePacketCS_Base(ET4GamePacketCS::CmdBookmark)
		, Location(FVector::ZeroVector)
		, Rotation(FRotator::ZeroRotator)
		, WorldTimeHour(-1.0f)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (Location.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid TargetLocation!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Bookmark"));
	}
};