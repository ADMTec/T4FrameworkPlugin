// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDataTypes.h" // #68

#include "T4StatTableRow.generated.h"

/**
  * #114
 */
USTRUCT()
struct FT4StatPhysicalData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "10000"))
	int32 Basic_HP; // #114 : 피, 체력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1000"))
	int32 Striking_Power; // #114 : 기본 공격력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (DisplayName = "Hit Rate (%)", ClampMin = "0", ClampMax = "100"))
	int32 Hit_Rate; // #114 : 명중률

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0", ClampMax = "1000"))
	int32 Defensive_Power; // #114 : 방어력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (DisplayName = "Dodge Rate (%)", ClampMin = "0", ClampMax = "100"))
	int32 Dodge_Rate; // #114 : 회피률

public:
	FT4StatPhysicalData()
		: Basic_HP(100)
		, Striking_Power(10)
		, Hit_Rate(0)
		, Defensive_Power(10)
		, Dodge_Rate(0)
	{
	}
};

// #116
USTRUCT()
struct FT4StatOffenseData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0", ClampMax = "1000"))
	int32 Striking_Power; // #114 : 공격력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (DisplayName = "Hit Rate (%)", ClampMin = "0", ClampMax = "100"))
	int32 Hit_Rate; // #114 : 명중률

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (DisplayName = "CC Knockback Rate (%)", ClampMin = "0", ClampMax = "100"))
	int32 CC_Knockback_Rate; // #161 : Crowd Control

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (DisplayName = "CC Stun Rate (%)", ClampMin = "0", ClampMax = "100"))
	int32 CC_Stun_Rate; // #161 : Crowd Control

public:
	FT4StatOffenseData()
		: Striking_Power(0)
		, Hit_Rate(0)
		, CC_Knockback_Rate(0)
		, CC_Stun_Rate(0)
	{
	}
};

// #116
USTRUCT()
struct FT4StatDefenseData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "0.0", ClampMax = "1000"))
	int32 Defensive_Power; // #114 : 방어력

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (DisplayName = "Dodge Rate (%)", ClampMin = "0", ClampMax = "100"))
	int32 Dodge_Rate; // #114 : 회피률

	UPROPERTY(EditAnywhere, Category = ServerOnly, meta = (ClampMin = "-100", ClampMax = "100"))
	int32 Add_HP; // #114 : HP +-

public:
	FT4StatDefenseData()
		: Defensive_Power(0)
		, Dodge_Rate(0)
		, Add_HP(0)
	{
	}
};

USTRUCT()
struct FT4StatTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4StatDBRowDetails::CustomizeDetails

	// #T4_ADD_STAT_CONTENT_TAG
	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatCategory StatCategory; // #114 : 사용처를 명시한다.

	// #161 : Category 에 따라 메뉴 노출이 달라진다. FT4StatDBRowDetails::CustomizePropertyOverride

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4GameStatItemCategory StatItemCategory; // #161 : ET4GameStatCategory::Item 일 경우만 사용

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4StatPhysicalData PhysicalData; // #161 : Player, NPC

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4StatOffenseData OffenseData; // #161 : Skill, Effect, Weapon, Goods

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4StatDefenseData DefenseData; // #161 : Costume, Goods

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FString Description;
#endif

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4StatTableRow()
		: Version(EVersion::LatestVersion) // #135
		, StatCategory(ET4GameStatCategory::None) // #114 : 사용처를 명시한다.
		, StatItemCategory(ET4GameStatItemCategory::Weapon) // #161 : ET4GameStatCategory::Item 일 경우만 사용
	{
	}
};
