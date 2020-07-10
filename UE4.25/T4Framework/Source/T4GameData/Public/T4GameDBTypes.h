// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDataTypes.h"
#include "T4Engine/Public/Action/T4ActionKey.h" // #48
#include "T4GameDBTypes.generated.h"

/**
  * #48
 */

static const FName T4Const_DefaultGameContentName = TEXT("Default"); // #135

// #T4_ADD_GAME_DATATABLE
UENUM()
enum class ET4GameDBType : uint8
{
	Master,

	Content, // #146

	World,
	Player,
	NPC,

	Weapon, // #48
	Costume, // #48

	SkillSet, // #50
	Skill,

	EffectSet, // #135
	Effect,

	Stat, // #114
	Experience, // #114

	Nums,
};

UENUM()
enum class ET4GameDBValidation : uint8
{
	Checkit,
	NotSet,
	Pass,
	Fail,

	Nums UMETA(Hidden),
};

USTRUCT()
struct FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Common, meta = (DisplayName = "Data Type"))
	ET4GameDBType Type;

	UPROPERTY(EditAnywhere, Category = Common)
	FName RowName;

	UPROPERTY(Transient)
	ET4GameDBValidation ValidationResult; // #118

public:
	FT4GameDBKey()
		: Type(ET4GameDBType::Nums)
		, RowName(NAME_None)
		, ValidationResult(ET4GameDBValidation::Checkit)
	{
	}

	FT4GameDBKey(const ET4GameDBType InType)
		: Type(InType)
		, RowName(NAME_None)
		, ValidationResult(ET4GameDBValidation::Checkit)
	{
	}

	FT4GameDBKey(const ET4GameDBType InType, const TCHAR* InRowName)
		: Type(InType)
		, RowName(InRowName)
		, ValidationResult(ET4GameDBValidation::Checkit)
	{
	}

	FT4GameDBKey(const ET4GameDBType InType, const FName& InRowName)
		: Type(InType)
		, RowName(InRowName)
		, ValidationResult(ET4GameDBValidation::Checkit)
	{
	}

	FT4GameDBKey(const ET4GameDBType InType, const FString& InRowName)
		: Type(InType)
		, RowName(*InRowName)
		, ValidationResult(ET4GameDBValidation::Checkit)
	{
	}

	FT4GameDBKey(const FT4GameDBKey& InGameDBKey)
		: Type(InGameDBKey.Type)
		, RowName(InGameDBKey.RowName)
		, ValidationResult(ET4GameDBValidation::Checkit)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4GameDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4GameDBKey operator=(const FString& InRhs)
	{
		RowName = *(InRhs);
		return *this;
	}

	FORCEINLINE bool operator==(const FT4GameDBKey& InRhs) const
	{
		return (RowName == InRhs.RowName && Type == InRhs.Type) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4GameDBKey& InRhs) const
	{
		return (RowName != InRhs.RowName || Type != InRhs.Type) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4GameDBKey& InRhs)
	{
		return HashCombine(GetTypeHash(InRhs.Type), GetTypeHash(InRhs.RowName.ToString()));
	}

	FORCEINLINE bool IsValid() const
	{
		return (ET4GameDBType::Nums != Type && RowName != NAME_None) ? true : false;
	}

	FORCEINLINE bool CheckType(const ET4GameDBType InType) const
	{
		return (Type == InType) ? true : false;
	}

	FORCEINLINE FT4ActionKey ToPrimaryActionKey() const // #48
	{
		return FT4ActionKey(RowName, true);
	}

	FORCEINLINE FT4ActionKey ToOverlapActionKey() const // #49
	{
		return FT4ActionKey(RowName, false);
	}

	FORCEINLINE FString ToNameString() const
	{
		return RowName.ToString();
	}

	static const TCHAR* ToTypeString(ET4GameDBType InType)
	{
		static const TCHAR* GT4GameDBTypeStrings[] =
		{
			TEXT("Master"),
			TEXT("Content"), // #146
			TEXT("World"),
			TEXT("Player"),
			TEXT("NPC"),
			TEXT("Weapon"), // #37
			TEXT("Costume"),
			TEXT("SkillSet"), // #50
			TEXT("Skill"),
			TEXT("EffectSet"), // #135
			TEXT("Effect"),
			TEXT("Stat"), // #114
			TEXT("Experience"), // #114
			TEXT("None"),
		};
		static_assert(UE_ARRAY_COUNT(GT4GameDBTypeStrings) == (uint8)(ET4GameDBType::Nums) + 1, "GameDBType doesn't match!");
		check(uint8(InType) < UE_ARRAY_COUNT(GT4GameDBTypeStrings));
		return GT4GameDBTypeStrings[uint8(InType)];
	}

	FORCEINLINE const TCHAR* ToTypeString() const
	{
		return ToTypeString(Type);
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("FT4GameDBKey:%s=%s"),
			*(ToNameString()),
			ToTypeString()
		);
	}
};

static const FT4GameDBKey T4Const_InvalidDBKey;

USTRUCT()
struct FT4WorldDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4WorldDBKey()
		: FT4GameDBKey(ET4GameDBType::World)
	{
	}

	FT4WorldDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::World, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4WorldDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4WorldDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

USTRUCT()
struct FT4NPCDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4NPCDBKey()
		: FT4GameDBKey(ET4GameDBType::NPC)
	{
	}

	FT4NPCDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::NPC, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4NPCDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4NPCDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #50
USTRUCT()
struct FT4SkillSetDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SkillSetDBKey()
		: FT4GameDBKey(ET4GameDBType::SkillSet)
	{
	}

	FT4SkillSetDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::SkillSet, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4SkillSetDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4SkillSetDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

USTRUCT()
struct FT4SkillDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SkillDBKey()
		: FT4GameDBKey(ET4GameDBType::Skill)
	{
	}

	FT4SkillDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Skill, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4SkillDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4SkillDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #135
USTRUCT()
struct FT4EffectSetDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EffectSetDBKey()
		: FT4GameDBKey(ET4GameDBType::EffectSet)
	{
	}

	FT4EffectSetDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::EffectSet, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4EffectSetDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4EffectSetDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

USTRUCT()
struct FT4EffectDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EffectDBKey()
		: FT4GameDBKey(ET4GameDBType::Effect)
	{
	}

	FT4EffectDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Effect, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4EffectDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4EffectDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #50
USTRUCT()
struct FT4WeaponDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4WeaponDBKey()
		: FT4GameDBKey(ET4GameDBType::Weapon)
	{
	}

	FT4WeaponDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Weapon, InRowName)
	{
	}

	FT4WeaponDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4GameDBKey(ET4GameDBType::Weapon, InGameDBKey.RowName)
	{
		check(ET4GameDBType::Weapon == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4WeaponDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4WeaponDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #114
USTRUCT()
struct FT4PlayerStatDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameStatCategory StatCategory; // #114

public:
	FT4PlayerStatDBKey()
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(ET4GameStatCategory::Player)
	{
	}

	FT4PlayerStatDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Stat, InRowName)
		, StatCategory(ET4GameStatCategory::Player)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4PlayerStatDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4PlayerStatDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #114
USTRUCT()
struct FT4NPCStatDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameStatCategory StatCategory; // #114

public:
	FT4NPCStatDBKey()
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(ET4GameStatCategory::NPC)
	{
	}

	FT4NPCStatDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Stat, InRowName)
		, StatCategory(ET4GameStatCategory::NPC)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4NPCStatDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4NPCStatDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #114
USTRUCT()
struct FT4ItemStatDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameStatCategory StatCategory; // #114

public:
	FT4ItemStatDBKey()
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(ET4GameStatCategory::Item)
	{
	}

	FT4ItemStatDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Stat, InRowName)
		, StatCategory(ET4GameStatCategory::Item)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4ItemStatDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4ItemStatDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #114
USTRUCT()
struct FT4SkillStatDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameStatCategory StatCategory; // #114

public:
	FT4SkillStatDBKey()
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(ET4GameStatCategory::Skill)
	{
	}

	FT4SkillStatDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Stat, InRowName)
		, StatCategory(ET4GameStatCategory::Skill)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4SkillStatDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4SkillStatDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #114
USTRUCT()
struct FT4EffectStatDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameStatCategory StatCategory; // #114

public:
	FT4EffectStatDBKey()
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(ET4GameStatCategory::Effect)
	{
	}

	FT4EffectStatDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Stat, InRowName)
		, StatCategory(ET4GameStatCategory::Effect)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4EffectStatDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4EffectStatDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};