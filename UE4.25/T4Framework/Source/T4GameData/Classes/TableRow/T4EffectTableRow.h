// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"
#include "T4GameDataTypes.h" // #68

#include "T4Asset/Public/T4AssetCommonTypes.h" // #135

#include "T4EffectTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4ActionPakAsset;

USTRUCT()
struct FT4EffectShapeData // #135
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameEffectType EffectType; // #68

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float DurationSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4MoveAngleType MoveAngleType; // #135

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxDistance; // #140 : 최대거리 / 시간으로 MovementSpeed 를 구한다. XY

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxHeight; // #135 : ET4GameAttackType Air

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxHeightSpeed; // #140 : 높이 속도 (이 속도로 최대 높이까지 시간을 구해서 포물선 공식 처리)

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MinAreaRange; // #114 : ET4GameEffectType::AreaDamage

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MaxAreaRange; // #114 : ET4GameEffectType::AreaDamage

public:
	FT4EffectShapeData()
		: EffectType(ET4GameEffectType::None)
		, HitDelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, MoveAngleType(ET4MoveAngleType::None) // #135
		, MoveMaxDistance(0.0f)
		, MoveMaxHeight(0.0f) // #135
		, MoveMaxHeightSpeed(0.0f) // #140
		, MinAreaRange(0.0f) // #114 : ET4GameEffectType::AreaDamage
		, MaxAreaRange(0.0f) // #114 : ET4GameEffectType::AreaDamage
	{
	}
};

USTRUCT()
struct FT4EffectTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4EffectDBRowDetails::CustomizeDetails

	// #T4_ADD_EFFECT_TAG_DATA
	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4EffectShapeData EffectShapeData; // #135

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4EffectStatDBKey EffectStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category=ServerOnly)
	FT4EffectDBKey ChainEffectDBKey; // #68

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4ActionPakAsset> DefaultActionPakAsset;

public:
	FT4EffectTableRow()
		: Version(0) // #135
	{
	}
};
