// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4TableRowBase.h"

#include "T4GameDBTypes.h" // #142

#include "T4SkillSetTableRow.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
USTRUCT()
struct FT4SkillSetTableRow : public FT4TableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	// FT4SkillSetDBRowDetails::CustomizeDetails

	UPROPERTY(EditAnywhere, Category = Hide)
	uint32 Version;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4GameUID UID;

	UPROPERTY(EditAnywhere, Category= Common)
	ET4GameSkillSetPlayMode PlayMode; // #142

	// #T4_ADD_SKILL_TAG_DATA

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AttackDBKey_A;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AttackDBKey_B;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AttackDBKey_C;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AttackDBKey_D;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AttackDBKey_E;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AttackDBKey_F;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4SkillDBKey AttackDBKey_Air;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4SkillDBKey AttackDBKey_Dash;


	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AbilityDBKey_A; // Q

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AbilityDBKey_B; // E

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AbilityDBKey_C; // R

	UPROPERTY(EditAnywhere, Category= Common)
	FT4SkillDBKey AbilityDBKey_D; // RMB

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

	FT4SkillSetTableRow()
		: Version(EVersion::LatestVersion) // #135
		, PlayMode(ET4GameSkillSetPlayMode::Primary) // #142
	{
	}
};
