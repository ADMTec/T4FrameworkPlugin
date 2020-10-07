// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4ItemTableRowBase.h" // #48
#include "T4WeaponTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4WeaponEntityAsset;

USTRUCT()
struct FT4WeaponEquipData // #108
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4WeaponEntityAsset> WeaponEntityAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TMap<FName, FName> StanceEquipPointMap; // #169 : Stance, EquipPoint

public:
	FT4WeaponEquipData()
	{
	}
};

USTRUCT()
struct FT4WeaponTableRow : public FT4ItemTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4WeaponDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4NameTextDBKey NameTextDBKey; // #164, #163

	UPROPERTY(EditAnywhere, Category = Common)
	float MinAttackRange; // #135 : 이 거리 안이면 Approach 에서 뒤로 이동 후 다시 공격하도록 처리하기 위해 추가

	UPROPERTY(EditAnywhere, Category = Common)
	float MaxAttackRange; // #50

	UPROPERTY(EditAnywhere, Category = Common)
	FT4SkillSetDBKey DefaultSkillSetDBKey; // #50, #106 : Key = Stance

	UPROPERTY(EditAnywhere, Category = Common)
	TMap<FName, FT4SkillSetDBKey> StanceSkillSetDBKey; // #50, #106, #154 : Key = Stance

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ItemStatDBKey ItemStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4EffectDBKey InitializeEffectDBKey; // #158 : Equip 시 자신에게 사용될 Effect 효과

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bDontUseMesh; // #135

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "!bDontUseMesh"))
	FT4WeaponEquipData MainEquipData; // #169

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "!bDontUseMesh"))
	TArray<FT4WeaponEquipData> SubEquipDatas; // #169

public:
	enum EVersion
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	FT4WeaponTableRow()
		: Version(EVersion::LatestVersion) // #135
		, MinAttackRange(10.0f) // #135
		, MaxAttackRange(100.0f) // #50
		, bDontUseMesh(false) // #135
	{
	}
};
