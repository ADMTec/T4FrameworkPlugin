// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineLayer.h"
#include "T4Asset/Public/T4AssetCommonTypes.h"

/**
  * #113
 */

// Helper struct to temporally make specified UObject immune to dirtying
struct T4ENGINE_API FT4UnmodifiableObject
{
	FT4UnmodifiableObject(UObject* InObject)
		: ImmuneObject(InObject)
		, bTransient(InObject->HasAnyFlags(RF_Transient))
	{
		if (!bTransient)
		{
			ImmuneObject->SetFlags(RF_Transient);
		}
	}

	~FT4UnmodifiableObject()
	{
		if (!bTransient)
		{
			ImmuneObject->ClearFlags(RF_Transient);
		}
	}

private:
	UObject* ImmuneObject;
	bool bTransient;
};

struct T4ENGINE_API FT4FloatInterpolator
{
	FT4FloatInterpolator()
		: TranslateTimeSec(0.0f)
		, CurrentTimeSec(0.0f)
		, CurrentValue(0.0f)
		, GoalValue(0.0f)
	{
	}

	void Initialize(float InTranslateTimeSec, float InInitValue)
	{
		TranslateTimeSec = InTranslateTimeSec;
		CurrentTimeSec = 0.0f;
		GoalValue = InInitValue;
		CurrentValue = InInitValue;
	}

	float GetGoalValue() const { return GoalValue; }
	float GetCurrentValue() const { return CurrentValue; }

	void SetGoalAndCurrentValue(float InNewValue)
	{
		GoalValue = InNewValue;
		CurrentValue = InNewValue;
	}

	void TrySetGoalValue(float InGoalValue)
	{
		if (GoalValue == InGoalValue)
		{
			return;
		}
		GoalValue = InGoalValue;
		CurrentTimeSec = 0.0f;
	}

	float UpdateValue(float InDeltaTimeSec);

	float TranslateTimeSec;
	float CurrentTimeSec;
	float CurrentValue;
	float GoalValue;
};

struct T4ENGINE_API FT4HalfAngleInterpolator
{
	FT4HalfAngleInterpolator()
		: TranslateYawRate(0.0f)
		, TranslateYawRateScale(1.0f)
		, CurrentAngle(0.0f)
		, GoalAngle(0.0f)
	{
	}

	void Initialize(float InYawRate, float InInitAngle)
	{
		TranslateYawRate = InYawRate;
		GoalAngle = InInitAngle;
		CurrentAngle = InInitAngle;
	}

	float GetGoalAngle() const { return GoalAngle; }
	float GetCurrentAngle() const { return CurrentAngle; }

	void SetTranslateYawRateScale(float InScale)
	{
		TranslateYawRateScale = InScale;
	}

	void SetGoalAndCurrentAngle(float InNewValue)
	{
		GoalAngle = InNewValue;
		CurrentAngle = InNewValue;
	}

	void TrySetGoalAngle(float InGoalValue)
	{
		if (GoalAngle == InGoalValue)
		{
			return;
		}
		GoalAngle = InGoalValue;
	}

	float UpdateAngle(float InDeltaTimeSec);

	float TranslateYawRate;
	float TranslateYawRateScale;
	float CurrentAngle;
	float GoalAngle;
};

struct T4ENGINE_API FT4LoadBalanceCollector // #143
{
	explicit FT4LoadBalanceCollector(
		ET4LayerType InLayerType, 
		ET4LoadBalanceType InLoadBalanceType
	)	: LayerType(InLayerType)
		, LoadBalanceType(InLoadBalanceType)
		, StartCycle64(FPlatformTime::Cycles64())
		, bAdvancing(true)
	{
	}

	~FT4LoadBalanceCollector();

	bool TryAdvancing();

private:
	ET4LayerType LayerType;
	ET4LoadBalanceType LoadBalanceType;

	uint64 StartCycle64;
	bool bAdvancing;
};

class IT4WorldActor;

namespace T4EngineUtility
{
	// #102
	T4ENGINE_API float Evaluate(
		ET4BuiltInEasing InBlendCurve,
		float InInterp // 0 ~ 1
	);

	T4ENGINE_API bool GetMovementStartParameter(
		IT4WorldActor* InOwnerActor,
		const FVector& InVelocity,
		float InMaxHeight, // 최대 높이
		float InHeightSpeed, // 점프 Z 스피드 
		FVector& OutGoalLocation,
		float& OutDurationSec,
		FVector& OutCollideLocation, // 점프시 첫번째 부딪히는 지점이 있을 경우. 없으면 Zero
		float& OutCollideTimeSec // 점프시 첫번째 부딪히는 지점까지의 시간. 없으면 Zero
	); // #140 : Goal Location 을 찾아 서버로 전송 또는 클라 테스트

	T4ENGINE_API bool GetMovementDurationParameter(
		float InStartZ,
		float InEndZ,
		float InMaxHeight,
		float InMaxHeightSpeed,
		float& OutDurationSec
	); // #140 : 시작, 도착 까지의 Height 값을 누적해 MaxHeightSpeed 로 나눠 DurationSec 을 얻는다.
}