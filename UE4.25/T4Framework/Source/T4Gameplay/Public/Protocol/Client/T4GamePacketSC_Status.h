// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketSC.h"
#include "T4GamePacketSC_Status.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4GamePacketSC::StartToPlay // #164
// ET4GamePacketSC::AnimSet // #73
// ET4GamePacketSC::Stance // #106
// ET4GamePacketSC::EquipItem
// ET4GamePacketSC::UnequipItem
// ET4GamePacketSC::ExchangeItem
// ET4GamePacketSC::Die // #76
// ET4GamePacketSC::Resurrect // #76

USTRUCT()
struct FT4GamePacketSC_StartToPlay : public FT4GamePacketSC_Base // #164
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID InitializeObjectID;

#if 0
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4PlayerDBKey PlayerDBKey; // // TODO : 이후 스폰 캐릭터 정보가 있다면(게임 정보 저장) 서버에서 스폰 후 PlayerDBKey 를 클라까지 보낸다.
#endif

public:
	FT4GamePacketSC_StartToPlay()
		: FT4GamePacketSC_Base(ET4GamePacketSC::StartToPlay)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!InitializeObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid InitializeObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:StartToPlay"));
	}
};

USTRUCT()
struct FT4GamePacketSC_AnimSet : public FT4GamePacketSC_Base // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName AnimSetName;

public:
	FT4GamePacketSC_AnimSet()
		: FT4GamePacketSC_Base(ET4GamePacketSC::AnimSet)
		, AnimSetName(NAME_None)
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
		return FString(TEXT("SC_Packet:AnimSet"));
	}
};

USTRUCT()
struct FT4GamePacketSC_Stance : public FT4GamePacketSC_Base // #106
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName StanceName;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float MoveSpeed; // #140

public:
	FT4GamePacketSC_Stance()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Stance)
		, StanceName(NAME_None)
		, MoveSpeed(0.0f) // #140
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
		return FString(TEXT("SC_Packet:Stance"));
	}
};

USTRUCT()
struct FT4GamePacketSC_EquipItem : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey WeaponDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bMainWeapon; // #48

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey UnequipWeaponDBKey; // #114, #116 : 이전에 장착한 무기가 있다면 해제 후 장착

public:
	FT4GamePacketSC_EquipItem()
		: FT4GamePacketSC_Base(ET4GamePacketSC::EquipItem)
		, bMainWeapon(false)
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
		return FString(TEXT("SC_Packet:Equip"));
	}
};

USTRUCT()
struct FT4GamePacketSC_UnequipItem : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey WeaponDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bMainWeapon; // #48

public:
	FT4GamePacketSC_UnequipItem()
		: FT4GamePacketSC_Base(ET4GamePacketSC::UnequipItem)
		, bMainWeapon(false)
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
		return FString(TEXT("SC_Packet:Unequip"));
	}
};

USTRUCT()
struct FT4GamePacketSC_ExchangeItem : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey CostumeDBKey;

public:
	FT4GamePacketSC_ExchangeItem()
		: FT4GamePacketSC_Base(ET4GamePacketSC::ExchangeItem)
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
		return FString(TEXT("SC_Packet:Exchange"));
	}
};

// #76
USTRUCT()
struct FT4GamePacketSC_Die : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName ReactionName;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID AttackerObjectID;

public:
	FT4GamePacketSC_Die()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Die)
		, ReactionName(NAME_None)
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
		return FString(TEXT("SC_Packet:Die"));
	}
};

// #76
USTRUCT()
struct FT4GamePacketSC_Resurrect : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

public:
	FT4GamePacketSC_Resurrect()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Resurrect)
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
		return FString(TEXT("SC_Packet:Resurrect"));
	}
};