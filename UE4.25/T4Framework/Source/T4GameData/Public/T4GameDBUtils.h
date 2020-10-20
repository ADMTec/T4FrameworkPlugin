// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDBTypes.h"

/**
  * #158
 */
struct T4GAMEDATA_API FT4GameDBSkillSetInfo
{
	void Reset();

	ET4GameSkillSetPlayMode PlayMode;
	TArray<FName> AbilityDBKeys;
	TArray<FName> SpecialDBKeys;
	TArray<FName> AttackDBKeys;
	TSet<FName> ValidSkillSets;
};

namespace T4GameDBUtils
{
	T4GAMEDATA_API const FT4GameDBSkillSetInfo* GetSkillSetInfoCached(const FName InGameName, const FT4SkillSetDBKey& InSkillSetDBKey);
}