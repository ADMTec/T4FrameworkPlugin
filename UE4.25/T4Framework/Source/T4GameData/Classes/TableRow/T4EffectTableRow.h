// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"
#include "T4GameDataTypes.h" // #68

#include "T4Asset/Public/T4AssetTypes.h" // #135

#include "T4EffectTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4ActionPackAsset;

USTRUCT()
struct FT4EffectShapeMovementData // #135
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4MoveAngleType MoveAngleType; // #135

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxDistance; // #140 : 최대거리 / 시간으로 MovementSpeed 를 구한다. XY

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxHeight; // #135 : ET4GameAttackType Air

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxHeightSpeed; // #140 : 높이 속도 (이 속도로 최대 높이까지 시간을 구해서 포물선 공식 처리)

public:
	FT4EffectShapeMovementData()
		: MoveAngleType(ET4MoveAngleType::None) // #135
		, MoveMaxDistance(0.0f)
		, MoveMaxHeight(0.0f) // #135
		, MoveMaxHeightSpeed(0.0f) // #140
	{
	}
};

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
	float MinEffectRange; // #114 : ET4GameEffectType::Area

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MaxEffectRange; // #114 : ET4GameEffectType::Area

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	bool bUseMovement; // #135

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (EditCondition = "bUseMovement"))
	FT4EffectShapeMovementData MovementData; // #135

public:
	FT4EffectShapeData()
		: EffectType(ET4GameEffectType::None)
		, HitDelayTimeSec(0.0f)
		, DurationSec(0.0f)
		, MinEffectRange(0.0f) // #114 : ET4GameEffectType::Area
		, MaxEffectRange(0.0f) // #114 : ET4GameEffectType::Area
		, bUseMovement(false) // #135
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
	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4NameTextDBKey NameTextDBKey; // #163

	UPROPERTY(EditAnywhere, Category = Common)
	FT4EffectShapeData EffectShapeData; // #135

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4EffectStatDBKey EffectStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category=ServerOnly)
	FT4EffectDBKey ChainEffectDBKey; // #68

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> OverrideActionPackAsset;

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4EffectTableRow()
		: Version(EVersion::LatestVersion) // #135
	{
	}
};
