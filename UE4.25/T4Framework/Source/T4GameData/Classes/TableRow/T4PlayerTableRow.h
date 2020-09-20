// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataConstants.h"

#include "T4PlayerTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4CharacterEntityAsset;

USTRUCT()
struct FT4PlayerLocomotionData // #108
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	float DefaultMoveSpeed; // #50, #108

	UPROPERTY(EditAnywhere, Category = Common)
	TMap<FName, float> StanceMoveSpeeds; // #154 : FName = StanceName

	UPROPERTY(EditAnywhere, Category = Common)
	float JumpMaxHeight; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float JumpHeightSpeed; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float InPlaceRotationRate; // #135

public:
	FT4PlayerLocomotionData()
		: DefaultMoveSpeed(500.0f)
		, JumpMaxHeight(200.0f)
		, JumpHeightSpeed(500.0f)
		, InPlaceRotationRate(300.0f)
	{
	}
};

USTRUCT()
struct FT4PlayerTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4PlayerDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FName RaceName; // #104, #114

	UPROPERTY(EditAnywhere, Category = Common)
	FT4PlayerLocomotionData LocomotionData; // #114

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatLevel InitializeLevel; // #114 : Stat 레벨

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4PlayerStatDBKey InitializePlayerStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4WeaponDBKey InitializeWeaponDBKey; // #142

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4EffectSetDBKey InitializeEffectSetDBKey; // #142 : 피격 효과(Effect)를 처리할 자신의 EffectSet 설정

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4CharacterEntityAsset> EntityAsset;

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4PlayerTableRow()
		: Version(EVersion::LatestVersion) // #135
		, RaceName(T4Game_DefaultPlayerRaceName) // #104, #114
		, InitializeLevel(ET4GameStatLevel::Level_1)
	{
	}
};
