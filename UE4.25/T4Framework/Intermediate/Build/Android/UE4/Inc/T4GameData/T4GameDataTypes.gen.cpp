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
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatItemCategory();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameTextCategory();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatCategory();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameFindTarget();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEffectType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameAttackType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameItemBehaviorType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameNPCBehaviorType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionRule();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestTarget();
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
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode_Hash() { return 3044279259U; }
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
				{ "ET4GameSkillSetPlayMode::Random", (int64)ET4GameSkillSetPlayMode::Random },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Combo.Name", "ET4GameSkillSetPlayMode::Combo" },
				{ "Comment", "// #142\n" },
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
	static UEnum* ET4GameStatItemCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameStatItemCategory, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameStatItemCategory"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameStatItemCategory>()
	{
		return ET4GameStatItemCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameStatItemCategory(ET4GameStatItemCategory_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameStatItemCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameStatItemCategory_Hash() { return 1296088683U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatItemCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameStatItemCategory"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameStatItemCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameStatItemCategory::Weapon", (int64)ET4GameStatItemCategory::Weapon },
				{ "ET4GameStatItemCategory::Costume", (int64)ET4GameStatItemCategory::Costume },
				{ "ET4GameStatItemCategory::Goods", (int64)ET4GameStatItemCategory::Goods },
				{ "ET4GameStatItemCategory::None", (int64)ET4GameStatItemCategory::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #161\n" },
				{ "Costume.Name", "ET4GameStatItemCategory::Costume" },
				{ "Goods.Name", "ET4GameStatItemCategory::Goods" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameStatItemCategory::None" },
				{ "ToolTip", "#161" },
				{ "Weapon.Name", "ET4GameStatItemCategory::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameStatItemCategory",
				"ET4GameStatItemCategory",
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
	static UEnum* ET4GameDialogueSpeakerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameDialogueSpeakerType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameDialogueSpeakerType>()
	{
		return ET4GameDialogueSpeakerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameDialogueSpeakerType(ET4GameDialogueSpeakerType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameDialogueSpeakerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType_Hash() { return 1084869815U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameDialogueSpeakerType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameDialogueSpeakerType::Player", (int64)ET4GameDialogueSpeakerType::Player },
				{ "ET4GameDialogueSpeakerType::NPC", (int64)ET4GameDialogueSpeakerType::NPC },
				{ "ET4GameDialogueSpeakerType::None", (int64)ET4GameDialogueSpeakerType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #163\n" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameDialogueSpeakerType::None" },
				{ "NPC.Name", "ET4GameDialogueSpeakerType::NPC" },
				{ "Player.Name", "ET4GameDialogueSpeakerType::Player" },
				{ "ToolTip", "#163" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameDialogueSpeakerType",
				"ET4GameDialogueSpeakerType",
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
	static UEnum* ET4GameTextCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameTextCategory, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameTextCategory"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameTextCategory>()
	{
		return ET4GameTextCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameTextCategory(ET4GameTextCategory_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameTextCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameTextCategory_Hash() { return 2284958836U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameTextCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameTextCategory"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameTextCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameTextCategory::Name", (int64)ET4GameTextCategory::Name },
				{ "ET4GameTextCategory::Title", (int64)ET4GameTextCategory::Title },
				{ "ET4GameTextCategory::World", (int64)ET4GameTextCategory::World },
				{ "ET4GameTextCategory::Quest", (int64)ET4GameTextCategory::Quest },
				{ "ET4GameTextCategory::Mission", (int64)ET4GameTextCategory::Mission },
				{ "ET4GameTextCategory::Dialogue", (int64)ET4GameTextCategory::Dialogue },
				{ "ET4GameTextCategory::None", (int64)ET4GameTextCategory::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #163\n" },
				{ "Dialogue.Name", "ET4GameTextCategory::Dialogue" },
				{ "Mission.Name", "ET4GameTextCategory::Mission" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "Name.Name", "ET4GameTextCategory::Name" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameTextCategory::None" },
				{ "Quest.Name", "ET4GameTextCategory::Quest" },
				{ "Title.Name", "ET4GameTextCategory::Title" },
				{ "ToolTip", "#163" },
				{ "World.Name", "ET4GameTextCategory::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameTextCategory",
				"ET4GameTextCategory",
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
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameEffectType_Hash() { return 3597964442U; }
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
				{ "ET4GameEffectType::Hit", (int64)ET4GameEffectType::Hit },
				{ "ET4GameEffectType::Area", (int64)ET4GameEffectType::Area },
				{ "ET4GameEffectType::Knockback", (int64)ET4GameEffectType::Knockback },
				{ "ET4GameEffectType::Stun", (int64)ET4GameEffectType::Stun },
				{ "ET4GameEffectType::Airborne", (int64)ET4GameEffectType::Airborne },
				{ "ET4GameEffectType::Buff", (int64)ET4GameEffectType::Buff },
				{ "ET4GameEffectType::Debuff", (int64)ET4GameEffectType::Debuff },
				{ "ET4GameEffectType::None", (int64)ET4GameEffectType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Airborne.Comment", "// CC\n" },
				{ "Airborne.Name", "ET4GameEffectType::Airborne" },
				{ "Airborne.ToolTip", "CC" },
				{ "Area.Name", "ET4GameEffectType::Area" },
				{ "BlueprintType", "true" },
				{ "Buff.Comment", "// CC\n" },
				{ "Buff.Name", "ET4GameEffectType::Buff" },
				{ "Buff.ToolTip", "CC" },
				{ "Comment", "// #68\n" },
				{ "Debuff.Comment", "// #158 : CC, Zone Weather\n" },
				{ "Debuff.Name", "ET4GameEffectType::Debuff" },
				{ "Debuff.ToolTip", "#158 : CC, Zone Weather" },
				{ "Hit.Name", "ET4GameEffectType::Hit" },
				{ "Knockback.Name", "ET4GameEffectType::Knockback" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Comment", "// #158 : CC, Zone Weather\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4GameEffectType::None" },
				{ "None.ToolTip", "#158 : CC, Zone Weather" },
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
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameAttackType_Hash() { return 3504319462U; }
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
				{ "ET4GameAttackType::AreaOfEffect", (int64)ET4GameAttackType::AreaOfEffect },
				{ "ET4GameAttackType::None", (int64)ET4GameAttackType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Air.Comment", "// #135, \xed\x8a\xb9\xec\x88\x98, \xeb\xb0\x9c\xec\x82\xac\xec\xb2\xb4\xec\x99\x80 \xeb\xb0\x98\xeb\x8f\x99\xec\x9d\xb4 \xed\x95\xa8\xea\xbb\x98 \xec\x9e\x88\xec\x9d\x8c (TODO : \xec\xa0\x81\xeb\x8b\xb9\xed\x95\x9c \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\xb4 \xec\x9e\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0 \xea\xb2\x83)\n" },
				{ "Air.Name", "ET4GameAttackType::Air" },
				{ "Air.ToolTip", "#135, \xed\x8a\xb9\xec\x88\x98, \xeb\xb0\x9c\xec\x82\xac\xec\xb2\xb4\xec\x99\x80 \xeb\xb0\x98\xeb\x8f\x99\xec\x9d\xb4 \xed\x95\xa8\xea\xbb\x98 \xec\x9e\x88\xec\x9d\x8c (TODO : \xec\xa0\x81\xeb\x8b\xb9\xed\x95\x9c \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\xb4 \xec\x9e\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0 \xea\xb2\x83)" },
				{ "AreaOfEffect.Comment", "// #135\n" },
				{ "AreaOfEffect.Name", "ET4GameAttackType::AreaOfEffect" },
				{ "AreaOfEffect.ToolTip", "#135" },
				{ "BlueprintType", "true" },
				{ "Comment", "// #63\n" },
				{ "Dash.Comment", "// #135 : Jump Attack\n" },
				{ "Dash.Name", "ET4GameAttackType::Dash" },
				{ "Dash.ToolTip", "#135 : Jump Attack" },
				{ "Launch.Name", "ET4GameAttackType::Launch" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Comment", "// #161 : \xea\xb4\x91\xec\x97\xad\xea\xb8\xb0, SkillEffectDBKey \xec\x99\x80 \xed\x95\xa8\xea\xbb\x98 \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8!\n" },
				{ "None.Name", "ET4GameAttackType::None" },
				{ "None.ToolTip", "#161 : \xea\xb4\x91\xec\x97\xad\xea\xb8\xb0, SkillEffectDBKey \xec\x99\x80 \xed\x95\xa8\xea\xbb\x98 \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8!" },
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
	static UEnum* ET4GameItemBehaviorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameItemBehaviorType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameItemBehaviorType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameItemBehaviorType>()
	{
		return ET4GameItemBehaviorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameItemBehaviorType(ET4GameItemBehaviorType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameItemBehaviorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameItemBehaviorType_Hash() { return 3886747161U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameItemBehaviorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameItemBehaviorType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameItemBehaviorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameItemBehaviorType::None", (int64)ET4GameItemBehaviorType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// #158\n" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Name", "ET4GameItemBehaviorType::None" },
				{ "ToolTip", "#158" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameItemBehaviorType",
				"ET4GameItemBehaviorType",
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
	static UEnum* ET4GameNPCBehaviorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameNPCBehaviorType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameNPCBehaviorType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameNPCBehaviorType>()
	{
		return ET4GameNPCBehaviorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameNPCBehaviorType(ET4GameNPCBehaviorType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameNPCBehaviorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameNPCBehaviorType_Hash() { return 2090128002U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameNPCBehaviorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameNPCBehaviorType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameNPCBehaviorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameNPCBehaviorType::HumanBasic", (int64)ET4GameNPCBehaviorType::HumanBasic },
				{ "ET4GameNPCBehaviorType::Prop", (int64)ET4GameNPCBehaviorType::Prop },
				{ "ET4GameNPCBehaviorType::Environment", (int64)ET4GameNPCBehaviorType::Environment },
				{ "ET4GameNPCBehaviorType::None", (int64)ET4GameNPCBehaviorType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// #158\n" },
				{ "Environment.Name", "ET4GameNPCBehaviorType::Environment" },
				{ "HumanBasic.Name", "ET4GameNPCBehaviorType::HumanBasic" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Name", "ET4GameNPCBehaviorType::None" },
				{ "Prop.Name", "ET4GameNPCBehaviorType::Prop" },
				{ "ToolTip", "#158" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameNPCBehaviorType",
				"ET4GameNPCBehaviorType",
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
	static UEnum* ET4GameMissionRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameMissionRule, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameMissionRule"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameMissionRule>()
	{
		return ET4GameMissionRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameMissionRule(ET4GameMissionRule_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameMissionRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameMissionRule_Hash() { return 1205815299U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameMissionRule"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameMissionRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameMissionRule::Spawn_All", (int64)ET4GameMissionRule::Spawn_All },
				{ "ET4GameMissionRule::Spawn_Target", (int64)ET4GameMissionRule::Spawn_Target },
				{ "ET4GameMissionRule::None", (int64)ET4GameMissionRule::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// #164\n" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Name", "ET4GameMissionRule::None" },
				{ "Spawn_All.Name", "ET4GameMissionRule::Spawn_All" },
				{ "Spawn_Target.Name", "ET4GameMissionRule::Spawn_Target" },
				{ "ToolTip", "#164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameMissionRule",
				"ET4GameMissionRule",
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
	static UEnum* ET4GameMissionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameMissionType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameMissionType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameMissionType>()
	{
		return ET4GameMissionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameMissionType(ET4GameMissionType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameMissionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameMissionType_Hash() { return 3723214171U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameMissionType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameMissionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameMissionType::Kill", (int64)ET4GameMissionType::Kill },
				{ "ET4GameMissionType::None", (int64)ET4GameMissionType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// #164\n" },
				{ "Kill.Name", "ET4GameMissionType::Kill" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "None.Comment", "//Talk,\n//Combo,\n//Delivery,\n//Escort,\n//Gather,\n" },
				{ "None.Name", "ET4GameMissionType::None" },
				{ "None.ToolTip", "Talk,\nCombo,\nDelivery,\nEscort,\nGather," },
				{ "ToolTip", "#164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameMissionType",
				"ET4GameMissionType",
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
	static UEnum* ET4GameQuestTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameQuestTarget, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameQuestTarget"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameQuestTarget>()
	{
		return ET4GameQuestTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameQuestTarget(ET4GameQuestTarget_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameQuestTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameQuestTarget_Hash() { return 3699671602U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameQuestTarget"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameQuestTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameQuestTarget::All", (int64)ET4GameQuestTarget::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ET4GameQuestTarget::All" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n  * #148\n */// #164\n" },
				{ "ModuleRelativePath", "Public/T4GameDataTypes.h" },
				{ "ToolTip", "#148\n // #164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameQuestTarget",
				"ET4GameQuestTarget",
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
