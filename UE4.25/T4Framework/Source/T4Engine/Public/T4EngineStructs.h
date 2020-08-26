// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"
#include "T4EngineConstants.h"

#include "T4Asset/Public/ActionPack/T4ActionPackTypes.h"
#include "T4Asset/Public/Entity/T4EntityTypes.h" // #126
#include "T4Asset/Public/Animset/T4AnimsetTypes.h" // #129

#include "Engine/EngineTypes.h"

/**
  *
 */
struct FT4UpdateTime // #102
{
	float RealTimeSec; // 실제 시간
	float ScaledTimeSec; // 시간 스케일이 적용된 시간
	float TimeScale;
	bool bPaused;

	static FT4UpdateTime EmptyUpdateTime;
};

struct FT4WorldActorProperty // #34
{
	FT4WorldActorProperty()
	{
		Reset();
	}

	void Reset()
	{
		bIsLockOn = false;
		bUseOverlapEvents = false; // #158

		// #33
		MoveSpeed[(uint8)ET4MoveMode::Sync] = 0.0f;
		MoveSpeed[(uint8)ET4MoveMode::Async] = 0.0f;
		MoveAccelerationScale = 1.0f; // #38, #52 (0.1 ~ 1)
		
		InPlaceRotationRate = 300.0f; // #44, #46
		MoveRotationRateScale = 1.2f; // #142

		BoundType = ET4EntityBoundType::None; // #126
		BoundRadius = 0.0f; // #126
		BoundHeight = 0.0f; // #126, #142 : 기본값을 0으로 채움. 필요한 곳에서 설정. COMLocation 문제!
		BoundHalfHeight = 0.0f; // #18, #126, #142 : 기본값을 0으로 채움. 필요한 곳에서 설정. COMLocation 문제!

		RelativeLocation = FVector::ZeroVector; // #126
		RelativeRotation = FRotator::ZeroRotator;
		RelativeScale3D = FVector::OneVector; // #37
		
#if WITH_EDITOR // #140
		TestDefaultMoveSpeed = 0.0f;
		TestStanceMoveSpeeds.Empty();
		TestJumpMaxHeight = 0.0f; // #140
		TestJumpHeightSpeed = 0.0f; // #140
#endif
	}

	const float GetMoveSpeed(const ET4MoveMode InMoveType) const
	{
		return MoveSpeed[(uint8)InMoveType]; // #33
	}

	void SetMoveSpeed(ET4MoveMode InMoveType, float InMoveSpeed)
	{
		MoveSpeed[(uint8)InMoveType] = InMoveSpeed;
	}

	bool bIsLockOn;
	bool bUseOverlapEvents; // #158

	float MoveSpeed[(uint8)ET4MoveMode::Count]; // #33
	float MoveAccelerationScale; // #38, #52 (0.1 ~ 1)
	
	float InPlaceRotationRate; // #46
	float MoveRotationRateScale; // #142

	ET4EntityBoundType BoundType; // #126
	float BoundRadius; // #126
	float BoundHeight; // #126
	float BoundHalfHeight; // #18, #126

	FVector RelativeLocation; // #126
	FRotator RelativeRotation; // #30, #126
	FVector RelativeScale3D; // #37

#if WITH_EDITOR // #140
	float TestDefaultMoveSpeed;
	TMap<FName, float> TestStanceMoveSpeeds; // #154 : FName = StanceName
	float TestJumpMaxHeight;
	float TestJumpHeightSpeed;
#endif // ~#140
};

#if !UE_BUILD_SHIPPING
struct FT4WorldDebugInfo
{
	FT4WorldDebugInfo()
	{
		Reset();
	}

	void Reset()
	{
		DebugBitFlags = 0;
	}

	uint32 DebugBitFlags; // #76 : ET4EngineDebugFlag
};
#endif

#if WITH_EDITOR
struct FT4WorldActorDebugInfo // #118, #140
{
	FT4WorldActorDebugInfo()
		: Color(FColor::Green)
		, AITargetLocation(FVector::ZeroVector)
	{
	}
	FString Name;
	FString Params;
	FColor Color;
	FVector AITargetLocation; // Roaming or Approach Target Location
};
#endif

#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4EngineMinimal.h)
struct FT4HitOverlapDelegates // #49
{
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FT4OnHitOverlap, const FName&, class IT4WorldActor*, const FHitResult&);
	FT4OnHitOverlap OnHitOverlap;
};
#endif

struct FT4AnimParam // #38
{
	FT4AnimParam()
		: AnimationLayer(ET4AnimationLayer::Skill)
		, SectionName(NAME_None)
		, PlayCount(ET4PlayCount::OneShot) // #134
		, PlayRate(1.0f)
		, OffsetTimeSec(0.0f)
		, BlendInTimeSec(T4Const_DefaultAnimBlendTimeSec)
		, BlendOutTimeSec(T4Const_DefaultAnimBlendTimeSec)
		, PlayCutOffTimeSec(0.0f) // #134 : 플레이중인 애니를 짜르고 들어간다. Sequential 에서만 사용됨
		, MaxLoopPlayTimeSec(0.0f) // #134 : Looping 시간을 지정할 경우, ActionPack Lifecycle = Duration 외에는 사용하지 말것!!
	{
	}

	ET4AnimationLayer AnimationLayer;
	FName SectionName;
	ET4PlayCount PlayCount; // #134
	float PlayRate;
	float OffsetTimeSec;
	float BlendInTimeSec;
	float BlendOutTimeSec;
	float PlayCutOffTimeSec; // #134 : 플레이중인 애니를 짜르고 들어간다. Sequential 에서만 사용됨
	float MaxLoopPlayTimeSec; // #134 : Looping 시간을 지정할 경우, ActionPack Lifecycle = Duration 외에는 사용하지 말것!!
};

class IT4WorldActor;
struct FT4HitSingleResult
{
	FT4HitSingleResult()
		: QueryCollisionChannel(ECollisionChannel::ECC_MAX)
		, ResultObject(nullptr)
		, ResultLocation(FVector::ZeroVector)
		, ResultImpactNormal(FVector::ForwardVector)
		, ResultHitBone(NAME_None)
	{
	}

	ECollisionChannel QueryCollisionChannel;

	IT4WorldActor* ResultObject;
	FVector ResultLocation;
	FVector ResultImpactNormal; // #112
	FName ResultHitBone; // #112 : Only Skeletal Mesh
};

class UT4EnvironmentAsset;
struct FT4EnvironmentZoneInfo // #94
{
	FName ZoneName;
	ET4ZoneType ZoneType;
	float LayerBlendWeight;
	float BlendPriority;
	UT4EnvironmentAsset* EnvironmentAsset;
};

struct FWorldContext;
struct FT4WorldConstructionValues // #87
{
	FT4WorldConstructionValues()
		: WorldType(ET4WorldType::Null)
		, WorldSource(ET4WorldSource::None)
		, WorldContextGameOrEditorOnly(nullptr)
#if WITH_EDITOR
		, bPreviewThumbnailMode(false)
#endif
	{
	}

	ET4WorldType WorldType;
	ET4WorldSource WorldSource;
	FSoftObjectPath MapEntityOrLevelAssetPath; // MapEntity or LevelAsset ObjectPath <LongPackageName.AssetName>
	FWorldContext* WorldContextGameOrEditorOnly; // Game (PIE)만 설정

#if WITH_EDITOR
	bool bPreviewThumbnailMode;
#endif
};
