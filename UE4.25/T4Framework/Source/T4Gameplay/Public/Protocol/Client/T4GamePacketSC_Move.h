// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketSC.h"
#include "T4GamePacketSC_Move.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4GamePacketSC::Move
// ET4GamePacketSC::Jump
// ET4GamePacketSC::Rotation // #40
// ET4GamePacketSC::Teleport

// ET4GamePacketSC::MoveStop // #52
// ET4GamePacketSC::MoveSpeedSync // #52

// ET4GamePacketSC::LockOn
// ET4GamePacketSC::LockOff

// WARN : #46
//
// StoC 패킷은 클라에서 넘어온 Normalize 된 Direction 에 Speed 를 얻어 Velocity 를 넘겨준다. 
//

USTRUCT()
struct FT4GamePacketSC_Move : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector MoveToLocation; // #52 : Velocity * (1.0f / DefaultNetworkLatencySec) / 레이턴시 감안 복원

	UPROPERTY(VisibleAnywhere, Category = Default)
	float MoveSpeed; // #150

	UPROPERTY(VisibleAnywhere, Category = Default)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장. #50 : 이동 방향과 Head 방향이 다를 경우를 대비해 존재

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector ServerNavPoint; // #52

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ServerDirection; // #52
#endif

public:
	FT4GamePacketSC_Move()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Move)
		, MoveToLocation(FVector::ZeroVector)
		, MoveSpeed(0.0f)
		, HeadYawAngle(TNumericLimits<float>::Max())
#if WITH_EDITORONLY_DATA
		, ServerNavPoint(FVector::ZeroVector) // #52
		, ServerDirection(FVector::ForwardVector) // #52
#endif
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
		return FString(TEXT("SC_Packet:Move"));
	}
};

USTRUCT()
struct FT4GamePacketSC_Jump : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector GoalLocation; // #140

	UPROPERTY(VisibleAnywhere, Category = Default)
	float DurationSec; // #140

	UPROPERTY(VisibleAnywhere, Category = Default)
	float OffsetTimeSec; // #140

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector CollideLocation; // #140 : 점프시 첫번째 부딪히는 지점이 있을 경우. 없으면 Zero

	UPROPERTY(VisibleAnywhere, Category = Default)
	float CollideTimeSec; // #140 : 점프시 첫번째 부딪히는 지점까지의 시간. 없으면 Zero

public:
	FT4GamePacketSC_Jump()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Jump)
		, GoalLocation(0.0f)
		, DurationSec(0.0f)
		, OffsetTimeSec(0.0f)
		, CollideLocation(FVector::ZeroVector) // #140
		, CollideTimeSec(0.0f) // #140
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		if (GoalLocation.IsNearlyZero())
		{
			OutMsg = TEXT("GoalLocation is Zero!");
			return false;
		}
		if (0.0f >= DurationSec)
		{
			OutMsg = TEXT("DurationSec is Zero!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:Jump"));
	}
};

USTRUCT()
struct FT4GamePacketSC_Rotation : public FT4GamePacketSC_Base // #40
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float TargetYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4GamePacketSC_Rotation()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Rotation)
		, TargetYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("SC_Packet:Rotation"));
	}
};

USTRUCT()
struct FT4GamePacketSC_Teleport : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FRotator Rotation;

public:
	FT4GamePacketSC_Teleport()
		: FT4GamePacketSC_Base(ET4GamePacketSC::Teleport)
		, Location(FVector::ZeroVector)
		, Rotation(FRotator::ZeroRotator)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
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
		return FString(TEXT("SC_Packet:Teleport"));
	}
};

// #52
USTRUCT()
struct FT4GamePacketSC_MoveStop : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector StopLocation;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장. #50 : 이동 방향과 Head 방향이 다를 경우를 대비해 존재

	UPROPERTY(VisibleAnywhere, Category = Default)
	bool bSyncLocation;

public:
	FT4GamePacketSC_MoveStop()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MoveStop)
		, StopLocation(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max())
		, bSyncLocation(false)
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
		return FString(TEXT("SC_Packet:MoveStop"));
	}
};

// #52
USTRUCT()
struct FT4GamePacketSC_MoveSpeedSync : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float MoveSpeed;

public:
	FT4GamePacketSC_MoveSpeedSync()
		: FT4GamePacketSC_Base(ET4GamePacketSC::MoveSpeedSync)
		, MoveSpeed(0.0f)
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
		return FString(TEXT("SC_Packet:MoveSpeedSync"));
	}
};

USTRUCT()
struct FT4GamePacketSC_LockOn : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4GamePacketSC_LockOn()
		: FT4GamePacketSC_Base(ET4GamePacketSC::LockOn)
		, HeadYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("SC_Packet:LockOn"));
	}
};

USTRUCT()
struct FT4GamePacketSC_LockOff : public FT4GamePacketSC_Base
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4GamePacketSC_LockOff()
		: FT4GamePacketSC_Base(ET4GamePacketSC::LockOff)
		, HeadYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("SC_Packet:LockOff"));
	}
};
