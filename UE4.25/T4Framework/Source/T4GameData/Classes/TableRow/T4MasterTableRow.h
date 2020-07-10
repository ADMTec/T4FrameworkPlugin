// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4MasterTableRow.generated.h"

/**
  * #135
 */
USTRUCT()
struct FT4MasterTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4MasterDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Common)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FName ContentName;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> ContentTableAsset; // #146

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> WorldTableAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> PlayerTableAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> NPCTableAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> WeaponTableAsset; // #48

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> CostumeTableAsset; // #48

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> SkillSetTableAsset; // #50

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> SkillTableAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> EffectSetTableAsset; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> EffectTableAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> StatTableAsset; // #114

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UDataTable> ExperienceTableAsset; // #114

public:
	FT4MasterTableRow()
		: Version(0) // #135
		, ContentName(T4Const_DefaultGameContentName)
	{
	}
};
