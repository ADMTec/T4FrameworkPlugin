// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketCS.h"
#include "T4GamePacketCS_Action.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4GamePacketCS::SkillCasting // #113, #116
// ET4GamePacketCS::SkillCancel // #113, #116
// ET4GamePacketCS::SkillTarget

// #113, #116
USTRUCT()
struct FT4GamePacketCS_SkillCasting : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;
	
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey SkillDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bCastingStart; // #113 : 첫 호출에서만 true

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector TargetLocation; // #116

public:
	FT4GamePacketCS_SkillCasting()
		: FT4GamePacketCS_Base(ET4GamePacketCS::SkillCasting)
		, bCastingStart(false)
		, TargetLocation(FVector::ZeroVector) // #116
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (!SkillDBKey.IsValid())
		{
			OutMsg = TEXT("Invalid SkillDBKey!");
			return false;
		}
		if (TargetLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid Target Location");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:AimSet"));
	}
};

// #113, #116
USTRUCT()
struct FT4GamePacketCS_SkillCancel : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

public:
	FT4GamePacketCS_SkillCancel()
		: FT4GamePacketCS_Base(ET4GamePacketCS::SkillCancel)
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
		return FString(TEXT("CS_Packet:AimClear"));
	}
};

USTRUCT()
struct FT4GamePacketCS_SkillTarget : public FT4GamePacketCS_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4GameDBKey SkillDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4GameTargetParamType TargetType; // #112

	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID TargetObjectID; // #63 : 타겟이 있으면 먼저 체크! 없으면 Direct 을 사용한다.

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector TargetLocation; // #49, #68 : Area, #112

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector TargetDirection; // #49, #68 : Area, #112, #135

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName TargetHitBone; // #112 : TargetObjectID Valid 일 경우만, 현재는 순수 비쥬얼 용도

public:
	FT4GamePacketCS_SkillTarget()
		: FT4GamePacketCS_Base(ET4GamePacketCS::SkillTarget)
		, TargetType(ET4GameTargetParamType::None)
		, TargetLocation(FVector::ZeroVector)
		, TargetDirection(FVector::ZeroVector)
		, TargetHitBone(NAME_None) // #112
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (!SkillDBKey.IsValid())
		{
			OutMsg = TEXT("Invalid SkillDBKey!");
			return false;
		}
		if (ET4GameTargetParamType::ObjectID == TargetType ||
			ET4GameTargetParamType::ObjectIDAndLocation == TargetType ||
			ET4GameTargetParamType::ObjectIDAndDirection == TargetType)
		{
			if (!TargetObjectID.IsValid())
			{
				OutMsg = TEXT("Invalid Target ObjectID");
				return false;
			}
		}
		else if (ET4GameTargetParamType::Location == TargetType)
		{
			if (TargetLocation.IsNearlyZero())
			{
				OutMsg = TEXT("Invalid Target Location");
				return false;
			}
		}
		else if (ET4GameTargetParamType::Direction == TargetType)
		{
			if (TargetDirection.IsNearlyZero())
			{
				OutMsg = TEXT("Invalid Target Direction");
				return false;
			}
		}
		else
		{
			OutMsg = TEXT("Invalid Target Type");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Attack"));
	}
};
