// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataTypes.h" // #68

#include "T4Asset/Public/T4AssetCommonTypes.h" // #135
#include "T4Engine/Public/T4EngineTypes.h" // #63

#include "T4SkillTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */

class UT4ActionPackAsset;

USTRUCT()
struct FT4SkillShapeData // #108, #114
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	ET4GameAttackType AttackType; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere, Category = Common)
	float DurationSec;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bMoveable;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bLockOn; // #113

	UPROPERTY(EditAnywhere, Category = Common)
	bool bCasting; // #113, #135

	UPROPERTY(EditAnywhere, Category = Common)
	float RotationRateSpeed; // #112, #113 : 캐릭터 InPlaceRotationRate * Speed (1 일 경우 기본값 사용)

	UPROPERTY(EditAnywhere, Category = Common)
	ET4MoveAngleType MoveAngleType; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveMaxDistance; // #140 : 최대거리 / 시간으로 MovementSpeed 를 구한다. XY

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveMaxHeight; // #135 : ET4GameAttackType Air

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveMaxHeightSpeed; // #140 : 높이 속도 (이 속도로 최대 높이까지 시간을 구해서 포물선 공식 처리)

	UPROPERTY(EditAnywhere, Category = Common)
	float ProjectileSpeed; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	ET4GameFindTarget FindTargetType; // #117 : 공객 대상을 찾을 경우에 대한 옵션 (TODO : Tribe or Enemy)

	UPROPERTY(EditAnywhere, Category = Common)
	bool bUseHitOverlapEvent; // #135 : 정교한 판정에 사용, 일단 Player 만 사용한다.

public:
	FT4SkillShapeData()
		: AttackType(ET4GameAttackType::Swing) // #63
		, HitDelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, bMoveable(false)
		, bLockOn(false)  // #113
		, bCasting(false) // #1135
		, RotationRateSpeed(1.0f) // #112, #113 : 캐릭터 InPlaceRotationRate * Speed (1 일 경우 기본값 사용)
		, MoveAngleType(ET4MoveAngleType::None) // #135
		, MoveMaxDistance(0.0f)
		, MoveMaxHeight(0.0f) // #135
		, MoveMaxHeightSpeed(0.0f) // #140
		, ProjectileSpeed(0.0f) // #63
		, FindTargetType(ET4GameFindTarget::All)
		, bUseHitOverlapEvent(false) // #135 : 정교한 판정에 사용, 일단 Player 만 사용한다.
	{
	}
};

USTRUCT()
struct FT4SkillVisualData // #127
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common, meta = (EditCondition = "bCasting", ClampMin = "-45.0", ClampMax = "45.0"))
	float AimingPitchAngle; // #127

public:
	FT4SkillVisualData()
		: AimingPitchAngle(0.0f) // #127
	{
	}
};

USTRUCT()
struct FT4SkillTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4SkillDBRowDetails::CustomizeDetails

	// #T4_ADD_SKILL_CONTENT_TAG 
	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4SkillShapeData SkillShapeData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4SkillVisualData SkillVisualData; // #127

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4SkillStatDBKey SkillStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> DefaultActionPackAsset;

	UPROPERTY(EditAnywhere, Category= ClientOnly, meta = (EditCondition = "bCasting"))
	TSoftObjectPtr<UT4ActionPackAsset> CastingActionPackAsset; // #117 : bAiming

	UPROPERTY(EditAnywhere, Category= ClientOnly, meta = (EditCondition = "bCasting"))
	TSoftObjectPtr<UT4ActionPackAsset> CancelActionPackAsset; // #135

	UPROPERTY(EditAnywhere, Category= ClientOnly, meta = (EditCondition = "bCasting"))
	TSoftObjectPtr<UT4ActionPackAsset> IndicateActionPackAsset; // #117 : bAiming

public:
	FT4SkillTableRow()
		: Version(0) // #135
	{
	}
};
