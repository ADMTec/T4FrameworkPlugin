// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Public/T4GameDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameDataTypes() {}
// Cross Module References
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEnemyType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatLevel();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatCategory();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameFindTarget();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEffectType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameAttackType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameChainCallFunction();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestRule();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestType();
// End Cross Module References
	static UEnum* ET4GameSkillSetPlayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameSkillSetPlayMode"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameSkillSetPlayMode>()
	{
		return ET4GameSkillSetPlayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameSkillSetPlayMode(ET4GameSkillSetPlayMode_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameSkillSetPlayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode_Hash() { return 3520732893U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameSkillSetPlayMode"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameSkillSetPlayMode::Primary", (int64)ET4GameSkillSetPlayMode::Primary },
				{ "ET4GameSkillSetPlayMode::Sequential", (int64)ET4GameSkillSetPlayMode::Sequential },
				{ "ET4GameSkillSetPlayMode::Combo", (int64)ET4GameSkillSetPlayMode::Combo },
				{ "ET4GameSkillSetPlayMode::HotKey", (int64)ET4GameSkillSetPlayMode::HotKey },
				{ "ET4GameSkillSetPlayMode::Random", (int64)ET4GameSkillSetPlayMode::Random },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Combo.Name", "ET4GameSkillSetPlayMode::Combo" },
				{ "Comment", "// #142\n" },
				{ "HotKey.Name", "ET4GameSkillSetPlayMode::HotKey" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "Primary.Name", "ET4GameSkillSetPlayMode::Primary" },
				{ "Random.Name", "ET4GameSkillSetPlayMode::Random" },
				{ "Sequential.Name", "ET4GameSkillSetPlayMode::Sequential" },
				{ "ToolTip", "#142" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameSkillSetPlayMode",
				"ET4GameSkillSetPlayMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameEnemyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameEnemyType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameEnemyType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameEnemyType>()
	{
		return ET4GameEnemyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameEnemyType(ET4GameEnemyType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameEnemyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameEnemyType_Hash() { return 2113338201U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameEnemyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameEnemyType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameEnemyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameEnemyType::None", (int64)ET4GameEnemyType::None },
				{ "ET4GameEnemyType::Player", (int64)ET4GameEnemyType::Player },
				{ "ET4GameEnemyType::Human", (int64)ET4GameEnemyType::Human },
				{ "ET4GameEnemyType::Hostile_Tribe", (int64)ET4GameEnemyType::Hostile_Tribe },
				{ "ET4GameEnemyType::All", (int64)ET4GameEnemyType::All },
				{ "ET4GameEnemyType::NoEnemy", (int64)ET4GameEnemyType::NoEnemy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ET4GameEnemyType::All" },
				{ "Comment", "// #104\n" },
				{ "Hostile_Tribe.Comment", "// Player + Human Races\n" },
				{ "Hostile_Tribe.Name", "ET4GameEnemyType::Hostile_Tribe" },
				{ "Hostile_Tribe.ToolTip", "Player + Human Races" },
				{ "Human.Comment", "// Only Player\n" },
				{ "Human.Name", "ET4GameEnemyType::Human" },
				{ "Human.ToolTip", "Only Player" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "NoEnemy.Name", "ET4GameEnemyType::NoEnemy" },
				{ "None.Name", "ET4GameEnemyType::None" },
				{ "Player.Name", "ET4GameEnemyType::Player" },
				{ "ToolTip", "#104" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameEnemyType",
				"ET4GameEnemyType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameStatLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameStatLevel, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameStatLevel"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameStatLevel>()
	{
		return ET4GameStatLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameStatLevel(ET4GameStatLevel_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameStatLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameStatLevel_Hash() { return 3079123244U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameStatLevel"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameStatLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameStatLevel::Level_1", (int64)ET4GameStatLevel::Level_1 },
				{ "ET4GameStatLevel::Level_2", (int64)ET4GameStatLevel::Level_2 },
				{ "ET4GameStatLevel::Level_3", (int64)ET4GameStatLevel::Level_3 },
				{ "ET4GameStatLevel::Level_4", (int64)ET4GameStatLevel::Level_4 },
				{ "ET4GameStatLevel::Level_5", (int64)ET4GameStatLevel::Level_5 },
				{ "ET4GameStatLevel::Level_6", (int64)ET4GameStatLevel::Level_6 },
				{ "ET4GameStatLevel::Level_7", (int64)ET4GameStatLevel::Level_7 },
				{ "ET4GameStatLevel::Level_8", (int64)ET4GameStatLevel::Level_8 },
				{ "ET4GameStatLevel::Level_9", (int64)ET4GameStatLevel::Level_9 },
				{ "ET4GameStatLevel::Level_10", (int64)ET4GameStatLevel::Level_10 },
				{ "ET4GameStatLevel::Max", (int64)ET4GameStatLevel::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #114\n" },
				{ "Level_1.Name", "ET4GameStatLevel::Level_1" },
				{ "Level_10.Name", "ET4GameStatLevel::Level_10" },
				{ "Level_2.Name", "ET4GameStatLevel::Level_2" },
				{ "Level_3.Name", "ET4GameStatLevel::Level_3" },
				{ "Level_4.Name", "ET4GameStatLevel::Level_4" },
				{ "Level_5.Name", "ET4GameStatLevel::Level_5" },
				{ "Level_6.Name", "ET4GameStatLevel::Level_6" },
				{ "Level_7.Name", "ET4GameStatLevel::Level_7" },
				{ "Level_8.Name", "ET4GameStatLevel::Level_8" },
				{ "Level_9.Name", "ET4GameStatLevel::Level_9" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4GameStatLevel::Max" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "ToolTip", "#114" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameStatLevel",
				"ET4GameStatLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameStatCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameStatCategory, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameStatCategory"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameStatCategory>()
	{
		return ET4GameStatCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameStatCategory(ET4GameStatCategory_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameStatCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameStatCategory_Hash() { return 2238497816U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameStatCategory"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameStatCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameStatCategory::Player", (int64)ET4GameStatCategory::Player },
				{ "ET4GameStatCategory::NPC", (int64)ET4GameStatCategory::NPC },
				{ "ET4GameStatCategory::Item", (int64)ET4GameStatCategory::Item },
				{ "ET4GameStatCategory::Skill", (int64)ET4GameStatCategory::Skill },
				{ "ET4GameStatCategory::Effect", (int64)ET4GameStatCategory::Effect },
				{ "ET4GameStatCategory::None", (int64)ET4GameStatCategory::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #114\n" },
				{ "Effect.Name", "ET4GameStatCategory::Effect" },
				{ "Item.Name", "ET4GameStatCategory::Item" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameStatCategory::None" },
				{ "NPC.Name", "ET4GameStatCategory::NPC" },
				{ "Player.Name", "ET4GameStatCategory::Player" },
				{ "Skill.Name", "ET4GameStatCategory::Skill" },
				{ "ToolTip", "#114" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameStatCategory",
				"ET4GameStatCategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameFindTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameFindTarget, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameFindTarget"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameFindTarget>()
	{
		return ET4GameFindTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameFindTarget(ET4GameFindTarget_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameFindTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameFindTarget_Hash() { return 1668563024U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameFindTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameFindTarget"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameFindTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameFindTarget::All", (int64)ET4GameFindTarget::All },
				{ "ET4GameFindTarget::Static", (int64)ET4GameFindTarget::Static },
				{ "ET4GameFindTarget::Dynamic", (int64)ET4GameFindTarget::Dynamic },
				{ "ET4GameFindTarget::None", (int64)ET4GameFindTarget::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ET4GameFindTarget::All" },
				{ "BlueprintType", "true" },
				{ "Comment", "// #117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)\n" },
				{ "Dynamic.Name", "ET4GameFindTarget::Dynamic" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameFindTarget::None" },
				{ "Static.Name", "ET4GameFindTarget::Static" },
				{ "ToolTip", "#117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameFindTarget",
				"ET4GameFindTarget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameEffectType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameEffectType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameEffectType>()
	{
		return ET4GameEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameEffectType(ET4GameEffectType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameEffectType_Hash() { return 4022255877U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameEffectType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameEffectType::Buff", (int64)ET4GameEffectType::Buff },
				{ "ET4GameEffectType::Debuff", (int64)ET4GameEffectType::Debuff },
				{ "ET4GameEffectType::DirectDamage", (int64)ET4GameEffectType::DirectDamage },
				{ "ET4GameEffectType::AreaDamage", (int64)ET4GameEffectType::AreaDamage },
				{ "ET4GameEffectType::Knockback", (int64)ET4GameEffectType::Knockback },
				{ "ET4GameEffectType::Airborne", (int64)ET4GameEffectType::Airborne },
				{ "ET4GameEffectType::Stun", (int64)ET4GameEffectType::Stun },
				{ "ET4GameEffectType::Mis", (int64)ET4GameEffectType::Mis },
				{ "ET4GameEffectType::None", (int64)ET4GameEffectType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Airborne.Comment", "// CC\n" },
				{ "Airborne.Name", "ET4GameEffectType::Airborne" },
				{ "Airborne.ToolTip", "CC" },
				{ "AreaDamage.Name", "ET4GameEffectType::AreaDamage" },
				{ "BlueprintType", "true" },
				{ "Buff.Name", "ET4GameEffectType::Buff" },
				{ "Comment", "// #68\n" },
				{ "Debuff.Comment", "// #158 : Zone Weather\n" },
				{ "Debuff.Name", "ET4GameEffectType::Debuff" },
				{ "Debuff.ToolTip", "#158 : Zone Weather" },
				{ "DirectDamage.Comment", "// #158 : Zone Weather\n" },
				{ "DirectDamage.Name", "ET4GameEffectType::DirectDamage" },
				{ "DirectDamage.ToolTip", "#158 : Zone Weather" },
				{ "Knockback.Name", "ET4GameEffectType::Knockback" },
				{ "Mis.Comment", "// CC\n" },
				{ "Mis.Name", "ET4GameEffectType::Mis" },
				{ "Mis.ToolTip", "CC" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Comment", "// #135, #142\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameEffectType::None" },
				{ "None.ToolTip", "#135, #142" },
				{ "Stun.Comment", "// CC\n" },
				{ "Stun.Name", "ET4GameEffectType::Stun" },
				{ "Stun.ToolTip", "CC" },
				{ "ToolTip", "#68" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameEffectType",
				"ET4GameEffectType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameAttackType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameAttackType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameAttackType>()
	{
		return ET4GameAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameAttackType(ET4GameAttackType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameAttackType_Hash() { return 3931865315U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameAttackType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameAttackType::Swing", (int64)ET4GameAttackType::Swing },
				{ "ET4GameAttackType::Throw", (int64)ET4GameAttackType::Throw },
				{ "ET4GameAttackType::Launch", (int64)ET4GameAttackType::Launch },
				{ "ET4GameAttackType::Air", (int64)ET4GameAttackType::Air },
				{ "ET4GameAttackType::Dash", (int64)ET4GameAttackType::Dash },
				{ "ET4GameAttackType::None", (int64)ET4GameAttackType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Air.Comment", "// #135, \xed\x8a\xb9\xec\x88\x98, \xeb\xb0\x9c\xec\x82\xac\xec\xb2\xb4\xec\x99\x80 \xeb\xb0\x98\xeb\x8f\x99\xec\x9d\xb4 \xed\x95\xa8\xea\xbb\x98 \xec\x9e\x88\xec\x9d\x8c (TODO : \xec\xa0\x81\xeb\x8b\xb9\xed\x95\x9c \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\xb4 \xec\x9e\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0 \xea\xb2\x83)\n" },
				{ "Air.Name", "ET4GameAttackType::Air" },
				{ "Air.ToolTip", "#135, \xed\x8a\xb9\xec\x88\x98, \xeb\xb0\x9c\xec\x82\xac\xec\xb2\xb4\xec\x99\x80 \xeb\xb0\x98\xeb\x8f\x99\xec\x9d\xb4 \xed\x95\xa8\xea\xbb\x98 \xec\x9e\x88\xec\x9d\x8c (TODO : \xec\xa0\x81\xeb\x8b\xb9\xed\x95\x9c \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\xb4 \xec\x9e\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0 \xea\xb2\x83)" },
				{ "BlueprintType", "true" },
				{ "Comment", "// #63\n" },
				{ "Dash.Comment", "// #135 : Jump Attack\n" },
				{ "Dash.Name", "ET4GameAttackType::Dash" },
				{ "Dash.ToolTip", "#135 : Jump Attack" },
				{ "Launch.Name", "ET4GameAttackType::Launch" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Comment", "// #135\n" },
				{ "None.Name", "ET4GameAttackType::None" },
				{ "None.ToolTip", "#135" },
				{ "Swing.Name", "ET4GameAttackType::Swing" },
				{ "Throw.Name", "ET4GameAttackType::Throw" },
				{ "ToolTip", "#63" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameAttackType",
				"ET4GameAttackType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameChainCallFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameChainCallFunction, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameChainCallFunction"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameChainCallFunction>()
	{
		return ET4GameChainCallFunction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameChainCallFunction(ET4GameChainCallFunction_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameChainCallFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameChainCallFunction_Hash() { return 4235756426U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameChainCallFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameChainCallFunction"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameChainCallFunction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameChainCallFunction::ImmediateCall", (int64)ET4GameChainCallFunction::ImmediateCall },
				{ "ET4GameChainCallFunction::CallAfterCompletion", (int64)ET4GameChainCallFunction::CallAfterCompletion },
				{ "ET4GameChainCallFunction::None", (int64)ET4GameChainCallFunction::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CallAfterCompletion.DisplayName", "Call After Completion" },
				{ "CallAfterCompletion.Name", "ET4GameChainCallFunction::CallAfterCompletion" },
				{ "Comment", "// #164\n" },
				{ "ImmediateCall.DisplayName", "Immediate Call" },
				{ "ImmediateCall.Name", "ET4GameChainCallFunction::ImmediateCall" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Name", "ET4GameChainCallFunction::None" },
				{ "ToolTip", "#164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameChainCallFunction",
				"ET4GameChainCallFunction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameQuestRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameQuestRule, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameQuestRule"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestRule>()
	{
		return ET4GameQuestRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameQuestRule(ET4GameQuestRule_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameQuestRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameQuestRule_Hash() { return 4208122159U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameQuestRule"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameQuestRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameQuestRule::AllSpawnObjects", (int64)ET4GameQuestRule::AllSpawnObjects },
				{ "ET4GameQuestRule::TargetSpawnObject", (int64)ET4GameQuestRule::TargetSpawnObject },
				{ "ET4GameQuestRule::None", (int64)ET4GameQuestRule::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllSpawnObjects.DisplayName", "All SpawnObjects" },
				{ "AllSpawnObjects.Name", "ET4GameQuestRule::AllSpawnObjects" },
				{ "BlueprintType", "true" },
				{ "Comment", "// #164\n" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Name", "ET4GameQuestRule::None" },
				{ "TargetSpawnObject.DisplayName", "Target SpawnObject" },
				{ "TargetSpawnObject.Name", "ET4GameQuestRule::TargetSpawnObject" },
				{ "ToolTip", "#164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameQuestRule",
				"ET4GameQuestRule",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4GameQuestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameQuestType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameQuestType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestType>()
	{
		return ET4GameQuestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameQuestType(ET4GameQuestType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameQuestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameQuestType_Hash() { return 1420680050U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameQuestType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameQuestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameQuestType::Kill", (int64)ET4GameQuestType::Kill },
				{ "ET4GameQuestType::None", (int64)ET4GameQuestType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n  * #148\n */// #164\n" },
				{ "Kill.DisplayName", "Kill Quests" },
				{ "Kill.Name", "ET4GameQuestType::Kill" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Comment", "//Talk,\n//Combo,\n//Delivery,\n//Escort,\n//Gather,\n" },
				{ "None.Name", "ET4GameQuestType::None" },
				{ "None.ToolTip", "Talk,\nCombo,\nDelivery,\nEscort,\nGather," },
				{ "ToolTip", "#148\n // #164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameQuestType",
				"ET4GameQuestType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
