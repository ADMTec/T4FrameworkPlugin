// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionCommandBase.h"
#include "T4ActionCommandMoves.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CMD

// ET4ActionCommandType::MoveAsync
// ET4ActionCommandType::MoveSync
// ET4ActionCommandType::Teleport
// ET4ActionCommandType::Jump
// ET4ActionCommandType::Rotation
// ET4ActionCommandType::Turn // #131

// ET4ActionCommandType::MoveStop // #52
// ET4ActionCommandType::MoveSpeedSync // #52

// ET4ActionCommandType::Launch // #63 : Only Projectile & Movement

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
	FVector MoveVelocity; // #50

	UPROPERTY(EditAnywhere, Category = Common)
	float HeadYawAngle; // #40 : degree, LockOn 일 경우 이동 방향과 달라진다.

	UPROPERTY(EditAnywhere, Category = Common)
	bool bForceMaxSpeed; // #52 : MovementComponet::MaxSpeed 를 사용할지에 대한 Flag, 기본값이 false 로 Velocity 에서 Speed 를 얻는다. 동기화 이슈!!

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Common)
	FVector ServerNavPoint; // #52

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ServerDirection; // #52
#endif

public:
	FT4MoveSyncActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, MoveVelocity(FVector::ZeroVector)
		, HeadYawAngle(T4Const_EmptyYawAngle)
		, bForceMaxSpeed(false) // #52
#if WITH_EDITORONLY_DATA
		, ServerNavPoint(FVector::ZeroVector) // #52
		, ServerDirection(FVector::ForwardVector) // #52
#endif
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::MoveSync; }

	bool Validate(FString& OutMsg) override
	{
		if (MoveVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveVelocity");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("MoveSyncToAction"));
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

// #63
class UT4ActionPakAsset;
USTRUCT()
struct T4ENGINE_API FT4LaunchActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	// Common Properties
	//
	UPROPERTY(EditAnywhere, Category = Common)
	ET4MovementType MovementType; // #127

	UPROPERTY(EditAnywhere, Category = Common)
	ET4MovementPathType MovementPathType; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	float InitializeSpeed; // #135 : ProjecitleSpeed or MovementSpeed (수평)

	UPROPERTY(EditAnywhere, Category = Common)
	float VerticalSpeed; // #132, #140 : 수직 속도

	UPROPERTY(EditAnywhere, Category = Common)
	float GravityZ; // #140 : DurationSec 를 감안한 Gravity

	UPROPERTY(EditAnywhere, Category = Common)
	float MaxHeight; // #140 : 현재는 Airborne 연출에서만 사용

	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActorID TargetActorID; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ShootDirection; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	FVector GoalLocation; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	ET4AcceleratedMotion AcceleratedMotion; // #127

	UPROPERTY(EditAnywhere, Category = Common)
	float BoundLength; // #112 : Projectile 의 길이, 캐릭터 BoundHeight, 충돌 계산에서 Offset 으로 사용. (원점 에서의 길이)


	// Movement Properties
	//
	UPROPERTY(EditAnywhere, Category = Common)
	FVector CollideLocation; // #140 : 점프시 첫번째 부딪히는 지점이 있을 경우. 없으면 Zero

	UPROPERTY(EditAnywhere, Category = Common)
	float CollideTimeSec; // #140 : 점프시 첫번째 부딪히는 지점까지의 시간. 없으면 Zero

	UPROPERTY(EditAnywhere, Category = Common)
	float AirborneFlightTimeRatio; // #132 : 정점에서 유지할 체공시간 비율


	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActorID OwnerActorID; // #112

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UT4ActionPakAsset> HeadActionPakAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UT4ActionPakAsset> EndActionPakAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bRandomRollAngle; // #127

	UPROPERTY(EditAnywhere, Category = Common)
	float InitialRollAngle; // #127

	UPROPERTY(EditAnywhere, Category = Common)
	bool bEnableHitAttached; // #112 : 충돌 지점에 잔상을 남길지 여부 (Arrow : true, Fireball : false)

	UPROPERTY(EditAnywhere, Category = Common, meta = (EditCondition = "bEnableHitAttached"))
	float HitAttachedTimeSec; // #112 : 충돌 지점에 잔상 시간

	UPROPERTY(EditAnywhere, Category = Common)
	FName HitTargetBoneName; // #135 : Actor 충돌이라면 본 위치를 참조

	UPROPERTY(EditAnywhere, Category = Common)
	bool bEnableBounceOut; // #127 : 명확한 타겟없이 무한대로 발사될 경우 부딪히는 효과 처리 사용 여부

	UPROPERTY(EditAnywhere, Category = Common, meta = (EditCondition = "bEnableBounceOut"))
	TSoftObjectPtr<UT4ActionPakAsset> BounceOutActionPakAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bUseOscillate; // #127 : 흔들림 여부

	UPROPERTY(EditAnywhere, Category = Common, meta = (EditCondition = "bUseOscillate"))
	float OscillateRange; // #127 : 흔들림 크기

public:
	FT4LaunchActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, MovementType(ET4MovementType::Straight) // #127
		, MovementPathType(ET4MovementPathType::InPlace) // #135
		, InitializeSpeed(0.0f) // #135 : ProjecitleSpeed or MovementSpeed
		, VerticalSpeed(0.0f) // #132, #140 : 수직 속도
		, GravityZ(0.0f) // #140 : DurationSec 를 감안한 Gravity
		, MaxHeight(0.0f) // #140 : Airborne 에서만 사용
		, ShootDirection(FVector::ZeroVector) // #135
		, GoalLocation(FVector::ZeroVector) // #135
		, AcceleratedMotion(ET4AcceleratedMotion::Uniform) // #127
		, BoundLength(80.0f) // #112
		, CollideLocation(FVector::ZeroVector) // #140 : 점프시 첫번째 부딪히는 지점이 있을 경우. 없으면 Zero
		, CollideTimeSec(0.0f) // #140 : 점프시 첫번째 부딪히는 지점까지의 시간. 없으면 Zero
		, AirborneFlightTimeRatio(0.0f) // #132 : 정점에서 유지할 체공시간 비율
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, bRandomRollAngle(false) // #127
		, InitialRollAngle(0.0f) // #127
		, bEnableHitAttached(false)// #112
		, HitAttachedTimeSec(1.0f) // #112
		, HitTargetBoneName(NAME_None) // #135
		, bEnableBounceOut(false) // #127 : 명확한 타겟없이 무한대로 발사될 경우 부딪히는 효과 처리 사용 여부
		, bUseOscillate(false) // #127 : 흔들림 여부
		, OscillateRange(0.0f) // #127 : 흔들림 크기
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Launch; }

	FString ToString() const override
	{
		return FString(TEXT("LaunchAction"));
	}
};