// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketCS.h"
#include "T4GamePacketCS_Status.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4GamePacketCS::ReadyToPlay // #146 : 클라이언트 PC::BeginPlay 시 서버로 접속 완료 통보!

// ET4GamePacketCS::AnimSet // #73
// ET4GamePacketCS::Stance // #106
// ET4GamePacketCS::EquipItem
// ET4GamePacketCS::UnequipItem
// ET4GamePacketCS::ExchangeItem

USTRUCT()
struct FT4GamePacketCS_ReadyToPlay : public FT4GamePacketCS_Base // #146 : 클라이언트 PC::BeginPlay 시 서버로 접속 완료 통보!
{
	GENERATED_USTRUCT_BODY()

public:
	FT4GamePacketCS_ReadyToPlay()
		: FT4GamePacketCS_Base(ET4GamePacketCS::ReadyToPlay)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:ReadyToPlay"));
	}
};

USTRUCT()
struct FT4GamePacketCS_AnimSet : public FT4GamePacketCS_Base // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName AnimSetName;

public:
	FT4GamePacketCS_AnimSet()
		: FT4GamePacketCS_Base(ET4GamePacketCS::AnimSet)
		, AnimSetName(NAME_None)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:AnimSet"));
	}
};

USTRUCT()
struct FT4GamePacketCS_Stance : public FT4GamePacketCS_Base // #106
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName StanceName;

public:
	FT4GamePacketCS_Stance()
		: FT4GamePacketCS_Base(ET4GamePacketCS::Stance)
		, StanceName(NAME_None)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Stance"));
	}
};

USTRUCT()
struct FT4GamePacketCS_EquipItem : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey WeaponDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bMainWeapon; // #48

public:
	FT4GamePacketCS_EquipItem()
		: FT4GamePacketCS_Base(ET4GamePacketCS::EquipItem)
		, bMainWeapon(false)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Equip"));
	}
};

USTRUCT()
struct FT4GamePacketCS_UnequipItem : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey WeaponDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bMainWeapon; // #48

public:
	FT4GamePacketCS_UnequipItem()
		: FT4GamePacketCS_Base(ET4GamePacketCS::UnequipItem)
		, bMainWeapon(false)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Unequip"));
	}
};

USTRUCT()
struct FT4GamePacketCS_ExchangeItem : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey CostumeDBKey;

public:
	FT4GamePacketCS_ExchangeItem()
		: FT4GamePacketCS_Base(ET4GamePacketCS::ExchangeItem)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Exchange"));
	}
};