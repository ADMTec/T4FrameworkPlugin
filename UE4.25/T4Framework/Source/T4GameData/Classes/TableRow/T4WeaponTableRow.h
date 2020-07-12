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
struct FT4WeaponEntityData // #108
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4WeaponEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName OverrideEquipPoint;

public:
	FT4WeaponEntityData()
		: OverrideEquipPoint(NAME_None)
	{
	}
};

USTRUCT()
struct FT4WeaponTableRow : public FT4ItemTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4WeaponDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	float MinAttackRange; // #135 : 이 거리 안이면 Approach 에서 뒤로 이동 후 다시 공격하도록 처리하기 위해 추가

	UPROPERTY(EditAnywhere, Category = Common)
	float MaxAttackRange; // #50

	UPROPERTY(EditAnywhere, Category = Common)
	FT4SkillSetDBKey DefaultSkillSetDBKey; // #50, #106 : Key = Stance

	UPROPERTY(EditAnywhere, Category = Common)
	FT4SkillSetDBKey CombatSkillSetDBKey; // #50, #106 : Key = Stance

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	FT4ItemStatDBKey ItemStatDBKey; // #114 : 기본 Stat

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bDontUseMesh; // #135

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "!bDontUseMesh"))
	FT4WeaponEntityData MainEntityData;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "!bDontUseMesh"))
	TArray<FT4WeaponEntityData> SubEntityDatas;

public:
	FT4WeaponTableRow()
		: Version(0) // #135
		, MinAttackRange(10.0f) // #135
		, MaxAttackRange(100.0f) // #50
		, bDontUseMesh(false) // #135
	{
	}
};
