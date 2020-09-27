// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionCommandBase.h"
#include "T4ActionMoveCommands.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CMD

// ET4ActionCommandType::MoveAsync
// ET4ActionCommandType::MoveSync
// ET4ActionCommandType::MoveStop // #52
// ET4ActionCommandType::MoveSpeedSync // #52
// ET4ActionCommandType::MoveSegments // #161

// ET4ActionCommandType::Teleport
// ET4ActionCommandType::Jump
// ET4ActionCommandType::Rotation
// ET4ActionCommandType::Turn // #131

// #40
USTRUCT()
struct T4ENGINE_API FT4MoveAsyncActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FVector MoveDirection;

	UPROPERTY(EditAnywhere, Category = Common)
	float HeadYawAngle; // #44 : degree, LockOn 일 경우 이동 방향과 달라진다.

public:
	FT4MoveAsyncActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, MoveDirection(FVector::ZeroVector)
		, HeadYawAngle(T4Const_EmptyYawAngle)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::MoveAsync; }

	bool Validate(FString& OutMsg) override
	{
		if (MoveDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveDirection");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("MoveAsyncToAction"));
	}
};

// #33, #40
USTRUCT()
struct T4ENGINE_API FT4MoveSyncActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FVector GoalLocation; // #50, #150

	UPROPERTY(EditAnywhere, Category = Common)
	bool bGoalOnNavMesh; // #165 : add bGoalOnNavMesh : Zone Waypoint

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveSpeed; // #150

	UPROPERTY(EditAnywhere, Category = Common)
	float HeadYawAngle; // #40 : degree, LockOn 일 경우 이동 방향과 달라진다.

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Common)
	FVector ServerNavPoint; // #52

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ServerDirection; // #52
#endif

public:
	FT4MoveSyncActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, GoalLocation(FVector::ZeroVector)
		, bGoalOnNavMesh(false) // #165 : add bGoalOnNavMesh : Zone Waypoint
		, MoveSpeed(0.0f) // #150
		, HeadYawAngle(T4Const_EmptyYawAngle)
#if WITH_EDITORONLY_DATA
		, ServerNavPoint(FVector::ZeroVector) // #52
		, ServerDirection(FVector::ForwardVector) // #52
#endif
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::MoveSync; }

	bool Validate(FString& OutMsg) override
	{
		if (GoalLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid GoalLocation");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("MoveSyncToAction"));
	}
};


// #52
USTRUCT()
struct T4ENGINE_API FT4MoveStopActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FVector StopLocation;

	UPROPERTY(EditAnywhere, Category = Common)
	float HeadYawAngle; // #40 : degree, LockOn 일 경우 이동 방향과 달라진다.

	UPROPERTY(EditAnywhere, Category = Common)
	bool bSyncLocation;

public:
	FT4MoveStopActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, StopLocation(FVector::ZeroVector)
		, HeadYawAngle(T4Const_EmptyYawAngle)
		, bSyncLocation(false)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::MoveStop; }

	FString ToString() const override
	{
		return FString(TEXT("MoveStopAction"));
	}
};

// #52
USTRUCT()
struct T4ENGINE_API FT4MoveSpeedSyncActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	float MoveSpeed;

public:
	FT4MoveSpeedSyncActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, MoveSpeed(0.0f)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::MoveSpeedSync; }

	FString ToString() const override
	{
		return FString(TEXT("MoveSpeedSyncAction"));
	}
};

// #161
USTRUCT()
struct T4ENGINE_API FT4MoveSegmentActionData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = Default)
	float TimeSec;
};

// #161
USTRUCT()
struct T4ENGINE_API FT4MoveSegmentsActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4MoveSegmentType MoveSegmentType; // #156

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4MoveSegmentActionData> MoveSegmentDatas;

public:
	FT4MoveSegmentsActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, MoveSegmentType(ET4MoveSegmentType::None)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::MoveSegments; }

	FString ToString() const override
	{
		return FString(TEXT("MoveSegmentsAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4JumpActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FVector GoalLocation; // #140 : Musb be FT4ActionBase::DurationSec, Ref FT4ActionCommandBase::OffsetTimeSec

	UPROPERTY(EditAnywhere, Category = Common)
	FVector CollideLocation; // #140 : 점프시 첫번째 부딪히는 지점이 있을 경우. 없으면 Zero

	UPROPERTY(EditAnywhere, Category = Common)
	float CollideTimeSec; // #140 : 점프시 첫번째 부딪히는 지점까지의 시간. 없으면 Zero

	UPROPERTY(EditAnywhere, Category = Common)
	float MaxHeight; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float HeightSpeed; // #140

public:
	FT4JumpActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, GoalLocation(FVector::ZeroVector)
		, CollideLocation(FVector::ZeroVector) // #140
		, CollideTimeSec(0.0f) // #140
		, MaxHeight(0.0f)
		, HeightSpeed(0.0f)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Jump; }

	bool Validate(FString& OutMsg) override
	{
		if (GoalLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid Jump GoalLocation");
			return false;
		}
		if (0.0f >= HeightSpeed)
		{
			OutMsg = TEXT("HeightSpeed is zero");
			return false;
		}
		if (0.0f >= MaxHeight)
		{
			OutMsg = TEXT("MaxHeight is zero");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("JumpToAction"));
	}
};

// #34
USTRUCT()
struct T4ENGINE_API FT4TeleportActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FVector Location;

	UPROPERTY(EditAnywhere, Category = Common)
	FRotator Rotation;

public:
	FT4TeleportActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, Location(FVector::ZeroVector)
		, Rotation(FRotator::ZeroRotator)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Teleport; }

	bool Validate(FString& OutMsg) override
	{
		if (Location.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid TargetLocation");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("TeleportToAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4RotationActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	ET4TargetType TargetType;

	UPROPERTY(EditAnywhere, Category = Common)
	float RotationRateScale; // #44 : 캐릭터 InPlaceRotationRate * RotationRateScale, 0 일 경우 즉시 변경

	UPROPERTY(EditAnywhere, Category = Common)
	float TargetYawAngle; // #40 : LockOn 에서 방향을 맞출 경우 사용 (only ET4TargetType::Manual)

public:
	FT4RotationActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, TargetType(ET4TargetType::Default)
		, RotationRateScale(1.0f)
		, TargetYawAngle(0.0f)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Rotation; }

	FString ToString() const override
	{
		return FString(TEXT("RotationAction"));
	}
};

// #131
USTRUCT()
struct T4ENGINE_API FT4TurnActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	bool bTurnRight;

	UPROPERTY(EditAnywhere, Category = Common)
	float TurnRate;

public:
	FT4TurnActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, bTurnRight(false)
		, TurnRate(500.0f)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Turn; }

	FString ToString() const override
	{
		return FString(TEXT("TurnAction"));
	}
};
