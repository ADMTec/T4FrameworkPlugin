// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "T4GameDataTypes.h"
#include "T4Engine/Public/Action/T4ActionKey.h" // #48
#include "T4GameDBTypes.generated.h"

/**
  * #48
 */
static const FName T4Const_DefaultGameName = TEXT("Default"); // #135
static const FName T4Const_ActiveGameName = NAME_None; // #172 : 현재 활성화 된 DB Content Name

// #T4_ADD_GAME_DATATABLE
UENUM()
enum class ET4GameDBType : uint8
{
	Quest, // #146

	World,
	Player,
	NPC,

	Weapon, // #48
	Costume, // #48
	Goods, // #164

	SkillSet, // #50
	Skill,
	Effect,

	Stat, // #114
	Reward, // #164

	Text, // #164

	Nums,
};

static const int64 T4Const_DefaultQuestDBNameType = GetTypeHash(TEXT("ET4QuestDBNameType::None")); // #164
 // #164 : Mission BTTree 지원을 위해 로딩 타임에 Enum 을 채운다. RefreshDBNameTypes 참조!
UENUM()
enum class ET4QuestDBNameType : int64
{
	None,
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

static const uint32 T4Const_EmptyGameUID = 0;

USTRUCT()
struct FT4GameUID // #150
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common, meta = (DisplayName = "UID"))
	uint32 Value;

public:
	FT4GameUID()
		: Value(T4Const_EmptyGameUID)
	{
	}

	FT4GameUID(uint32 InValue)
		: Value(InValue)
	{
	}

	FORCEINLINE bool IsValid() const
	{
		return (T4Const_EmptyGameUID != Value) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4GameUID& InRhs) const
	{
		return (Value == InRhs.Value) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4GameUID& InRhs) const
	{
		return (Value != InRhs.Value) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4GameUID& InRhs)
	{
		return GetTypeHash(InRhs.Value);
	}

	FORCEINLINE void Empty()
	{
		Value = T4Const_EmptyGameUID;
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(TEXT("FT4GameUID:%u"), Value);
	}
};

USTRUCT()
struct T4GAMEDATA_API FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common, meta = (DisplayName = "Type"))
	ET4GameDBType Type;

	UPROPERTY(EditAnywhere, Category = Common, meta = (DisplayName = "Name"))
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

	static const TCHAR* ToTypeString(ET4GameDBType InType);
	
	FORCEINLINE FString ToTypeString() const
	{
		return FT4GameDBKey::ToTypeString(Type);
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("DBKey:%s=%s"),
			*(ToNameString()),
			*(ToTypeString())
		);
	}
};

static const FT4GameDBKey T4Const_InvalidDBKey;

// #161
USTRUCT()
struct T4GAMEDATA_API FT4QuestDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4QuestDBKey()
		: FT4GameDBKey(ET4GameDBType::Quest)
	{
	}

	FT4QuestDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Quest, InRowName)
	{
	}

	FT4QuestDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4GameDBKey(ET4GameDBType::Quest, InGameDBKey.RowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4QuestDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4QuestDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

USTRUCT()
struct T4GAMEDATA_API FT4WorldDBKey : public FT4GameDBKey
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
struct T4GAMEDATA_API FT4PlayerDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4PlayerDBKey()
		: FT4GameDBKey(ET4GameDBType::Player)
	{
	}

	FT4PlayerDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Player, InRowName)
	{
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4PlayerDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4PlayerDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

USTRUCT()
struct T4GAMEDATA_API FT4NPCDBKey : public FT4GameDBKey
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
struct T4GAMEDATA_API FT4SkillSetDBKey : public FT4GameDBKey
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
struct T4GAMEDATA_API FT4SkillDBKey : public FT4GameDBKey
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

USTRUCT()
struct T4GAMEDATA_API FT4EffectDBKey : public FT4GameDBKey
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
struct T4GAMEDATA_API FT4WeaponDBKey : public FT4GameDBKey
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
		ensure(ET4GameDBType::Weapon == InGameDBKey.Type);
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

USTRUCT()
struct T4GAMEDATA_API FT4CostumeDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4CostumeDBKey()
		: FT4GameDBKey(ET4GameDBType::Costume)
	{
	}

	FT4CostumeDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Costume, InRowName)
	{
	}

	FT4CostumeDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4GameDBKey(ET4GameDBType::Costume, InGameDBKey.RowName)
	{
		ensure(ET4GameDBType::Costume == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4CostumeDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4CostumeDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #163
struct FT4StatTableRow;
USTRUCT()
struct T4GAMEDATA_API FT4StatDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameStatCategory StatCategory; // #114

public:
	FT4StatDBKey()
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(ET4GameStatCategory::None)
	{
	}

	FT4StatDBKey(ET4GameStatCategory InStatCategory)
		: FT4GameDBKey(ET4GameDBType::Stat)
		, StatCategory(InStatCategory)
	{
	}

	FT4StatDBKey(const FName& InRowName, ET4GameStatCategory InStatCategory)
		: FT4GameDBKey(ET4GameDBType::Stat, InRowName)
		, StatCategory(InStatCategory)
	{
	}

	const FT4StatTableRow* GetTableRowCached() const; // #163 : TODO Editor 는 RunTiem, Game 은 Cache 처리할 것!
};

// #114
USTRUCT()
struct T4GAMEDATA_API FT4PlayerStatDBKey : public FT4StatDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4PlayerStatDBKey()
		: FT4StatDBKey(ET4GameStatCategory::Player)
	{
	}

	FT4PlayerStatDBKey(const FName& InRowName)
		: FT4StatDBKey(InRowName, ET4GameStatCategory::Player)
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
struct T4GAMEDATA_API FT4NPCStatDBKey : public FT4StatDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4NPCStatDBKey()
		: FT4StatDBKey(ET4GameStatCategory::NPC)
	{
	}

	FT4NPCStatDBKey(const FName& InRowName)
		: FT4StatDBKey(InRowName, ET4GameStatCategory::NPC)
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
struct T4GAMEDATA_API FT4ItemStatDBKey : public FT4StatDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ItemStatDBKey()
		: FT4StatDBKey(ET4GameStatCategory::Item)
	{
	}

	FT4ItemStatDBKey(const FName& InRowName)
		: FT4StatDBKey(InRowName, ET4GameStatCategory::Item)
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
struct T4GAMEDATA_API FT4SkillStatDBKey : public FT4StatDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4SkillStatDBKey()
		: FT4StatDBKey(ET4GameStatCategory::Skill)
	{
	}

	FT4SkillStatDBKey(const FName& InRowName)
		: FT4StatDBKey(InRowName, ET4GameStatCategory::Skill)
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
struct T4GAMEDATA_API FT4EffectStatDBKey : public FT4StatDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EffectStatDBKey()
		: FT4StatDBKey(ET4GameStatCategory::Effect)
	{
	}

	FT4EffectStatDBKey(const FName& InRowName)
		: FT4StatDBKey(InRowName, ET4GameStatCategory::Effect)
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

// #164
USTRUCT()
struct T4GAMEDATA_API FT4RewardDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4RewardDBKey()
		: FT4GameDBKey(ET4GameDBType::Reward)
	{
	}

	FT4RewardDBKey(const FName& InRowName)
		: FT4GameDBKey(ET4GameDBType::Reward, InRowName)
	{
	}

	FT4RewardDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4GameDBKey(ET4GameDBType::Reward, InGameDBKey.RowName)
	{
		ensure(ET4GameDBType::Reward == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4RewardDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4RewardDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #163
USTRUCT()
struct T4GAMEDATA_API FT4TextDBKey : public FT4GameDBKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(Transient)
	ET4GameTextCategory TextCategory; // #163

public:
	FT4TextDBKey()
		: FT4GameDBKey(ET4GameDBType::Text)
		, TextCategory(ET4GameTextCategory::None)
	{
	}

	FT4TextDBKey(ET4GameTextCategory InTextCategory)
		: FT4GameDBKey(ET4GameDBType::Text)
		, TextCategory(InTextCategory)
	{
	}

	FT4TextDBKey(const FName& InRowName, ET4GameTextCategory InTextCategory)
		: FT4GameDBKey(ET4GameDBType::Text, InRowName)
		, TextCategory(InTextCategory)
	{
	}

	const FString GetSourceString(const TCHAR* InDefaultString) const; // #163 : TODO Editor 는 RunTiem, Game 은 Cache 처리할 것!
};

// #163
struct FT4TextTableRow;
USTRUCT()
struct T4GAMEDATA_API FT4NameTextDBKey : public FT4TextDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4NameTextDBKey()
		: FT4TextDBKey(ET4GameTextCategory::Name)
	{
	}

	FT4NameTextDBKey(const FName& InRowName)
		: FT4TextDBKey(InRowName, ET4GameTextCategory::Name)
	{
	}

	FT4NameTextDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4TextDBKey(InGameDBKey.RowName, ET4GameTextCategory::Name)
	{
		ensure(ET4GameDBType::Text == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4NameTextDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4NameTextDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #163
USTRUCT()
struct T4GAMEDATA_API FT4TitleTextDBKey : public FT4TextDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4TitleTextDBKey()
		: FT4TextDBKey(ET4GameTextCategory::Title)
	{
	}

	FT4TitleTextDBKey(const FName& InRowTitle)
		: FT4TextDBKey(InRowTitle, ET4GameTextCategory::Title)
	{
	}

	FT4TitleTextDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4TextDBKey(InGameDBKey.RowName, ET4GameTextCategory::Title)
	{
		ensure(ET4GameDBType::Text == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4TitleTextDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4TitleTextDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #163
USTRUCT()
struct T4GAMEDATA_API FT4WorldTextDBKey : public FT4TextDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4WorldTextDBKey()
		: FT4TextDBKey(ET4GameTextCategory::World)
	{
	}

	FT4WorldTextDBKey(const FName& InRowWorld)
		: FT4TextDBKey(InRowWorld, ET4GameTextCategory::World)
	{
	}

	FT4WorldTextDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4TextDBKey(InGameDBKey.RowName, ET4GameTextCategory::World)
	{
		ensure(ET4GameDBType::Text == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4WorldTextDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4WorldTextDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #163
USTRUCT()
struct T4GAMEDATA_API FT4QuestTextDBKey : public FT4TextDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4QuestTextDBKey()
		: FT4TextDBKey(ET4GameTextCategory::Quest)
	{
	}

	FT4QuestTextDBKey(const FName& InRowQuest)
		: FT4TextDBKey(InRowQuest, ET4GameTextCategory::Quest)
	{
	}

	FT4QuestTextDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4TextDBKey(InGameDBKey.RowName, ET4GameTextCategory::Quest)
	{
		ensure(ET4GameDBType::Text == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4QuestTextDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4QuestTextDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #164
USTRUCT()
struct T4GAMEDATA_API FT4MissionTextDBKey : public FT4TextDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4MissionTextDBKey()
		: FT4TextDBKey(ET4GameTextCategory::Mission)
	{
	}

	FT4MissionTextDBKey(const FName& InRowMission)
		: FT4TextDBKey(InRowMission, ET4GameTextCategory::Mission)
	{
	}

	FT4MissionTextDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4TextDBKey(InGameDBKey.RowName, ET4GameTextCategory::Mission)
	{
		ensure(ET4GameDBType::Text == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4MissionTextDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4MissionTextDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};

// #163
USTRUCT()
struct T4GAMEDATA_API FT4DialogueTextDBKey : public FT4TextDBKey
{
	GENERATED_USTRUCT_BODY()

public:
	FT4DialogueTextDBKey()
		: FT4TextDBKey(ET4GameTextCategory::Dialogue)
	{
	}

	FT4DialogueTextDBKey(const FName& InRowDialogue)
		: FT4TextDBKey(InRowDialogue, ET4GameTextCategory::Dialogue)
	{
	}

	FT4DialogueTextDBKey(const FT4GameDBKey& InGameDBKey)
		: FT4TextDBKey(InGameDBKey.RowName, ET4GameTextCategory::Dialogue)
	{
		ensure(ET4GameDBType::Text == InGameDBKey.Type);
	}

	FORCEINLINE FT4GameDBKey operator=(const FT4DialogueTextDBKey& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4DialogueTextDBKey operator=(const FT4GameDBKey& InRhs)
	{
		RowName = InRhs.RowName;
		return *this;
	}
};
