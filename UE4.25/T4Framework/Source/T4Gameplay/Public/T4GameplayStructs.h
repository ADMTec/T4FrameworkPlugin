// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayTypes.h"
#include "T4GameplayStructs.generated.h"

/**
  * #154
 */
USTRUCT()
struct T4GAMEPLAY_API FT4GameplaySkillSetInfo
{
	GENERATED_USTRUCT_BODY()

public:
	void Reset();

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> AbilityDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> SpecialDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> AttackDBKeys;
};

USTRUCT()
struct T4GAMEPLAY_API FT4GameplayEffectSetInfo
{
	GENERATED_USTRUCT_BODY()

public:
	void Reset();

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> HitDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> KnockbackDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> StunDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> AirborneDBKeys;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TArray<FName> MisDBKeys;
};