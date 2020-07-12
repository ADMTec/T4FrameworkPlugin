// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketSC.h"
#include "T4Framework/Public/T4FrameworkTypes.h" // #42
#include "T4GamePacketSC_World.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4GamePacketSC::WorldTravel
// ET4GamePacketSC::WorldTimeSync // #146
// ET4GamePacketSC::WorldExplore // #140

// ET4GamePacketSC::MyPCEnter
// ET4GamePacketSC::MyPCChange // #11, #52

// ET4GamePacketSC::PCEnter
// ET4GamePacketSC::PCLeave

// ET4GamePacketSC::NPCEnter // #31
// ET4GamePacketSC::NPCLeave // #31

// ET4GamePacketSC::ItemEnter // #41
// ET4GamePacketSC::ItemLeave // #41

USTRUCT()
struct FT4GamePacketSC_WorldTravel : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey WorldDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeHour; // #146 : 0 ~ 24, -1.0f 무시

	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeScale;

public:
	FT4GamePacketSC_WorldTravel()
		: FT4GamePacketSC_Base(ET4GamePacketSC::WorldTravel)
		, WorldTimeHour(-1.0f) // #146
		, WorldTimeScale(1.0f)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:WorldTravel"));
	}
};

// #146
USTRUCT()
struct FT4GamePacketSC_WorldTimeSync : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeHour;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float WorldTimeScale;

public:
	FT4GamePacketSC_WorldTimeSync()
		: FT4GamePacketSC_Base(ET4GamePacketSC::WorldTimeSync)
		, WorldTimeHour(-1.0f)
		, WorldTimeScale(-1.0f)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:WorldTimeSync"));
	}
};

// #140
USTRUCT()
struct FT4GamePacketSC_WorldExplore : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector CameraLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float CameraPitch;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float CameraYaw;

public:
	FT4GamePacketSC_WorldExplore()
		: FT4GamePacketSC_Base(ET4GamePacketSC::WorldExplore)
		, CameraLocation(FVector::ZeroVector)
		, CameraPitch(0.0f)
		, CameraYaw(0.0f)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (CameraLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid TargetLocation!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:WorldExplore"));
	}
};

USTRUCT()
struct FT4GamePacketSC_MyPCEnter : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey PlayerDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;

public:
	FT4GamePacketSC_MyPCEnter()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MyPCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MyPCEnter"));
	}
};

// #11, #52
USTRUCT()
struct FT4GamePacketSC_MyPCChange : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ActorID ChangeActorID;

public:
	FT4GamePacketSC_MyPCChange()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MyPCChange)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MyPCChange"));
	}
};

USTRUCT()
struct FT4GamePacketSC_PCEnter : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey PlayerDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;
	
	UPROPERTY(VisibleAnywhere, Category = Default)
	FName AnimSetName; // #73

public:
	FT4GamePacketSC_PCEnter()
		: FT4GamePacketSC_Base(ET4GamePacketSC::PCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
		, AnimSetName(NAME_None) // #73
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:PCEnter"));
	}
};


USTRUCT()
struct FT4GamePacketSC_PCLeave : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;
	
public:
	FT4GamePacketSC_PCLeave()
		: FT4GamePacketSC_Base(ET4GamePacketSC::PCLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:PCLeave"));
	}
};

// #31
USTRUCT()
struct FT4GamePacketSC_NPCEnter : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey NPCDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;
	
public:
	FT4GamePacketSC_NPCEnter()
		: FT4GamePacketSC_Base(ET4GamePacketSC::NPCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:NPCEnter"));
	}
};

// #31
USTRUCT()
struct FT4GamePacketSC_NPCLeave : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;
	
public:
	FT4GamePacketSC_NPCLeave()
		: FT4GamePacketSC_Base(ET4GamePacketSC::NPCLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:NPCLeave"));
	}
};

// #41
USTRUCT()
struct FT4GamePacketSC_ItemEnter : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey ItemDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator SpawnRotation;
	
public:
	FT4GamePacketSC_ItemEnter()
		: FT4GamePacketSC_Base(ET4GamePacketSC::ItemEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:ItemEnter"));
	}
};

// #41
USTRUCT()
struct FT4GamePacketSC_ItemLeave : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;
	
public:
	FT4GamePacketSC_ItemLeave()
		: FT4GamePacketSC_Base(ET4GamePacketSC::ItemLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:ItemLeave"));
	}
};
