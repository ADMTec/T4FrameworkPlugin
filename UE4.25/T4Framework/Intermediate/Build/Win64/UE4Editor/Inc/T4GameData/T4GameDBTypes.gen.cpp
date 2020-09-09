// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameDBTypes() {}
// Cross Module References
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameDBValidation();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameDBType();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatCategory();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectSetDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillSetDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
	static UEnum* ET4GameDBValidation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameDBValidation, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameDBValidation"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameDBValidation>()
	{
		return ET4GameDBValidation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameDBValidation(ET4GameDBValidation_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameDBValidation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameDBValidation_Hash() { return 66734798U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameDBValidation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameDBValidation"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameDBValidation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameDBValidation::Checkit", (int64)ET4GameDBValidation::Checkit },
				{ "ET4GameDBValidation::NotSet", (int64)ET4GameDBValidation::NotSet },
				{ "ET4GameDBValidation::Pass", (int64)ET4GameDBValidation::Pass },
				{ "ET4GameDBValidation::Fail", (int64)ET4GameDBValidation::Fail },
				{ "ET4GameDBValidation::Nums", (int64)ET4GameDBValidation::Nums },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Checkit.Name", "ET4GameDBValidation::Checkit" },
				{ "Fail.Name", "ET4GameDBValidation::Fail" },
				{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
				{ "NotSet.Name", "ET4GameDBValidation::NotSet" },
				{ "Nums.Hidden", "" },
				{ "Nums.Name", "ET4GameDBValidation::Nums" },
				{ "Pass.Name", "ET4GameDBValidation::Pass" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameDBValidation",
				"ET4GameDBValidation",
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
	static UEnum* ET4GameDBType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4GameData_ET4GameDBType, Z_Construct_UPackage__Script_T4GameData(), TEXT("ET4GameDBType"));
		}
		return Singleton;
	}
	template<> T4GAMEDATA_API UEnum* StaticEnum<ET4GameDBType>()
	{
		return ET4GameDBType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameDBType(ET4GameDBType_StaticEnum, TEXT("/Script/T4GameData"), TEXT("ET4GameDBType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4GameData_ET4GameDBType_Hash() { return 224562246U; }
	UEnum* Z_Construct_UEnum_T4GameData_ET4GameDBType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameDBType"), 0, Get_Z_Construct_UEnum_T4GameData_ET4GameDBType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameDBType::Master", (int64)ET4GameDBType::Master },
				{ "ET4GameDBType::Content", (int64)ET4GameDBType::Content },
				{ "ET4GameDBType::World", (int64)ET4GameDBType::World },
				{ "ET4GameDBType::Player", (int64)ET4GameDBType::Player },
				{ "ET4GameDBType::NPC", (int64)ET4GameDBType::NPC },
				{ "ET4GameDBType::Weapon", (int64)ET4GameDBType::Weapon },
				{ "ET4GameDBType::Costume", (int64)ET4GameDBType::Costume },
				{ "ET4GameDBType::Goods", (int64)ET4GameDBType::Goods },
				{ "ET4GameDBType::SkillSet", (int64)ET4GameDBType::SkillSet },
				{ "ET4GameDBType::Skill", (int64)ET4GameDBType::Skill },
				{ "ET4GameDBType::EffectSet", (int64)ET4GameDBType::EffectSet },
				{ "ET4GameDBType::Effect", (int64)ET4GameDBType::Effect },
				{ "ET4GameDBType::Stat", (int64)ET4GameDBType::Stat },
				{ "ET4GameDBType::Reward", (int64)ET4GameDBType::Reward },
				{ "ET4GameDBType::Nums", (int64)ET4GameDBType::Nums },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #T4_ADD_GAME_DATATABLE\n" },
				{ "Content.Name", "ET4GameDBType::Content" },
				{ "Costume.Comment", "// #48\n" },
				{ "Costume.Name", "ET4GameDBType::Costume" },
				{ "Costume.ToolTip", "#48" },
				{ "Effect.Comment", "// #135\n" },
				{ "Effect.Name", "ET4GameDBType::Effect" },
				{ "Effect.ToolTip", "#135" },
				{ "EffectSet.Name", "ET4GameDBType::EffectSet" },
				{ "Goods.Comment", "// #48\n" },
				{ "Goods.Name", "ET4GameDBType::Goods" },
				{ "Goods.ToolTip", "#48" },
				{ "Master.Name", "ET4GameDBType::Master" },
				{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
				{ "NPC.Name", "ET4GameDBType::NPC" },
				{ "Nums.Comment", "// #164\n" },
				{ "Nums.Name", "ET4GameDBType::Nums" },
				{ "Nums.ToolTip", "#164" },
				{ "Player.Name", "ET4GameDBType::Player" },
				{ "Reward.Comment", "// #114\n" },
				{ "Reward.Name", "ET4GameDBType::Reward" },
				{ "Reward.ToolTip", "#114" },
				{ "Skill.Comment", "// #50\n" },
				{ "Skill.Name", "ET4GameDBType::Skill" },
				{ "Skill.ToolTip", "#50" },
				{ "SkillSet.Comment", "// #164\n" },
				{ "SkillSet.Name", "ET4GameDBType::SkillSet" },
				{ "SkillSet.ToolTip", "#164" },
				{ "Stat.Name", "ET4GameDBType::Stat" },
				{ "ToolTip", "#T4_ADD_GAME_DATATABLE" },
				{ "Weapon.Name", "ET4GameDBType::Weapon" },
				{ "World.Comment", "// #146\n" },
				{ "World.Name", "ET4GameDBType::World" },
				{ "World.ToolTip", "#146" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4GameData,
				nullptr,
				"ET4GameDBType",
				"ET4GameDBType",
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
class UScriptStruct* FT4EffectStatDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4EffectStatDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EffectStatDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4EffectStatDBKey"), sizeof(FT4EffectStatDBKey), Get_Z_Construct_UScriptStruct_FT4EffectStatDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4EffectStatDBKey>()
{
	return FT4EffectStatDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EffectStatDBKey(FT4EffectStatDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4EffectStatDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectStatDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectStatDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EffectStatDBKey")),new UScriptStruct::TCppStructOps<FT4EffectStatDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4EffectStatDBKey;
	struct Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EffectStatDBKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectStatDBKey, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::NewProp_StatCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4EffectStatDBKey",
		sizeof(FT4EffectStatDBKey),
		alignof(FT4EffectStatDBKey),
		Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EffectStatDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EffectStatDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EffectStatDBKey"), sizeof(FT4EffectStatDBKey), Get_Z_Construct_UScriptStruct_FT4EffectStatDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EffectStatDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EffectStatDBKey_Hash() { return 1051184005U; }
class UScriptStruct* FT4SkillStatDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillStatDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillStatDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillStatDBKey"), sizeof(FT4SkillStatDBKey), Get_Z_Construct_UScriptStruct_FT4SkillStatDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillStatDBKey>()
{
	return FT4SkillStatDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillStatDBKey(FT4SkillStatDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillStatDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillStatDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillStatDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillStatDBKey")),new UScriptStruct::TCppStructOps<FT4SkillStatDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillStatDBKey;
	struct Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillStatDBKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillStatDBKey, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::NewProp_StatCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4SkillStatDBKey",
		sizeof(FT4SkillStatDBKey),
		alignof(FT4SkillStatDBKey),
		Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillStatDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillStatDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillStatDBKey"), sizeof(FT4SkillStatDBKey), Get_Z_Construct_UScriptStruct_FT4SkillStatDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillStatDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillStatDBKey_Hash() { return 4089515631U; }
class UScriptStruct* FT4ItemStatDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ItemStatDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ItemStatDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ItemStatDBKey"), sizeof(FT4ItemStatDBKey), Get_Z_Construct_UScriptStruct_FT4ItemStatDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ItemStatDBKey>()
{
	return FT4ItemStatDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ItemStatDBKey(FT4ItemStatDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ItemStatDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ItemStatDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ItemStatDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ItemStatDBKey")),new UScriptStruct::TCppStructOps<FT4ItemStatDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ItemStatDBKey;
	struct Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ItemStatDBKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ItemStatDBKey, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::NewProp_StatCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4ItemStatDBKey",
		sizeof(FT4ItemStatDBKey),
		alignof(FT4ItemStatDBKey),
		Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ItemStatDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ItemStatDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ItemStatDBKey"), sizeof(FT4ItemStatDBKey), Get_Z_Construct_UScriptStruct_FT4ItemStatDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ItemStatDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ItemStatDBKey_Hash() { return 495971687U; }
class UScriptStruct* FT4NPCStatDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4NPCStatDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NPCStatDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4NPCStatDBKey"), sizeof(FT4NPCStatDBKey), Get_Z_Construct_UScriptStruct_FT4NPCStatDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4NPCStatDBKey>()
{
	return FT4NPCStatDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NPCStatDBKey(FT4NPCStatDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4NPCStatDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCStatDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCStatDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NPCStatDBKey")),new UScriptStruct::TCppStructOps<FT4NPCStatDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4NPCStatDBKey;
	struct Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NPCStatDBKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCStatDBKey, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::NewProp_StatCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4NPCStatDBKey",
		sizeof(FT4NPCStatDBKey),
		alignof(FT4NPCStatDBKey),
		Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NPCStatDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NPCStatDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NPCStatDBKey"), sizeof(FT4NPCStatDBKey), Get_Z_Construct_UScriptStruct_FT4NPCStatDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NPCStatDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NPCStatDBKey_Hash() { return 217887705U; }
class UScriptStruct* FT4PlayerStatDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PlayerStatDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4PlayerStatDBKey"), sizeof(FT4PlayerStatDBKey), Get_Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4PlayerStatDBKey>()
{
	return FT4PlayerStatDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PlayerStatDBKey(FT4PlayerStatDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4PlayerStatDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerStatDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerStatDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PlayerStatDBKey")),new UScriptStruct::TCppStructOps<FT4PlayerStatDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerStatDBKey;
	struct Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PlayerStatDBKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerStatDBKey, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::NewProp_StatCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4PlayerStatDBKey",
		sizeof(FT4PlayerStatDBKey),
		alignof(FT4PlayerStatDBKey),
		Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerStatDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PlayerStatDBKey"), sizeof(FT4PlayerStatDBKey), Get_Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PlayerStatDBKey_Hash() { return 3543024859U; }
class UScriptStruct* FT4WeaponDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4WeaponDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WeaponDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4WeaponDBKey"), sizeof(FT4WeaponDBKey), Get_Z_Construct_UScriptStruct_FT4WeaponDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4WeaponDBKey>()
{
	return FT4WeaponDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WeaponDBKey(FT4WeaponDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4WeaponDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WeaponDBKey")),new UScriptStruct::TCppStructOps<FT4WeaponDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponDBKey;
	struct Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#50" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WeaponDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4WeaponDBKey",
		sizeof(FT4WeaponDBKey),
		alignof(FT4WeaponDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WeaponDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WeaponDBKey"), sizeof(FT4WeaponDBKey), Get_Z_Construct_UScriptStruct_FT4WeaponDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WeaponDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WeaponDBKey_Hash() { return 4093333221U; }
class UScriptStruct* FT4EffectDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4EffectDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EffectDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4EffectDBKey"), sizeof(FT4EffectDBKey), Get_Z_Construct_UScriptStruct_FT4EffectDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4EffectDBKey>()
{
	return FT4EffectDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EffectDBKey(FT4EffectDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4EffectDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EffectDBKey")),new UScriptStruct::TCppStructOps<FT4EffectDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4EffectDBKey;
	struct Z_Construct_UScriptStruct_FT4EffectDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectDBKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EffectDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EffectDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EffectDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4EffectDBKey",
		sizeof(FT4EffectDBKey),
		alignof(FT4EffectDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EffectDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EffectDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EffectDBKey"), sizeof(FT4EffectDBKey), Get_Z_Construct_UScriptStruct_FT4EffectDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EffectDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EffectDBKey_Hash() { return 4270712190U; }
class UScriptStruct* FT4EffectSetDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4EffectSetDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EffectSetDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4EffectSetDBKey"), sizeof(FT4EffectSetDBKey), Get_Z_Construct_UScriptStruct_FT4EffectSetDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4EffectSetDBKey>()
{
	return FT4EffectSetDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EffectSetDBKey(FT4EffectSetDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4EffectSetDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectSetDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectSetDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EffectSetDBKey")),new UScriptStruct::TCppStructOps<FT4EffectSetDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4EffectSetDBKey;
	struct Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EffectSetDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4EffectSetDBKey",
		sizeof(FT4EffectSetDBKey),
		alignof(FT4EffectSetDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EffectSetDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EffectSetDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EffectSetDBKey"), sizeof(FT4EffectSetDBKey), Get_Z_Construct_UScriptStruct_FT4EffectSetDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EffectSetDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EffectSetDBKey_Hash() { return 1756462102U; }
class UScriptStruct* FT4SkillDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillDBKey"), sizeof(FT4SkillDBKey), Get_Z_Construct_UScriptStruct_FT4SkillDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillDBKey>()
{
	return FT4SkillDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillDBKey(FT4SkillDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillDBKey")),new UScriptStruct::TCppStructOps<FT4SkillDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillDBKey;
	struct Z_Construct_UScriptStruct_FT4SkillDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillDBKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4SkillDBKey",
		sizeof(FT4SkillDBKey),
		alignof(FT4SkillDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillDBKey"), sizeof(FT4SkillDBKey), Get_Z_Construct_UScriptStruct_FT4SkillDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillDBKey_Hash() { return 508404356U; }
class UScriptStruct* FT4SkillSetDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillSetDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillSetDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillSetDBKey"), sizeof(FT4SkillSetDBKey), Get_Z_Construct_UScriptStruct_FT4SkillSetDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillSetDBKey>()
{
	return FT4SkillSetDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillSetDBKey(FT4SkillSetDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillSetDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillSetDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillSetDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillSetDBKey")),new UScriptStruct::TCppStructOps<FT4SkillSetDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillSetDBKey;
	struct Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#50" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillSetDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4SkillSetDBKey",
		sizeof(FT4SkillSetDBKey),
		alignof(FT4SkillSetDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillSetDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillSetDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillSetDBKey"), sizeof(FT4SkillSetDBKey), Get_Z_Construct_UScriptStruct_FT4SkillSetDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillSetDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillSetDBKey_Hash() { return 3421399472U; }
class UScriptStruct* FT4NPCDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4NPCDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NPCDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4NPCDBKey"), sizeof(FT4NPCDBKey), Get_Z_Construct_UScriptStruct_FT4NPCDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4NPCDBKey>()
{
	return FT4NPCDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NPCDBKey(FT4NPCDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4NPCDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NPCDBKey")),new UScriptStruct::TCppStructOps<FT4NPCDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4NPCDBKey;
	struct Z_Construct_UScriptStruct_FT4NPCDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCDBKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NPCDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NPCDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NPCDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4NPCDBKey",
		sizeof(FT4NPCDBKey),
		alignof(FT4NPCDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NPCDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NPCDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NPCDBKey"), sizeof(FT4NPCDBKey), Get_Z_Construct_UScriptStruct_FT4NPCDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NPCDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NPCDBKey_Hash() { return 526608007U; }
class UScriptStruct* FT4WorldDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4WorldDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WorldDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4WorldDBKey"), sizeof(FT4WorldDBKey), Get_Z_Construct_UScriptStruct_FT4WorldDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4WorldDBKey>()
{
	return FT4WorldDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WorldDBKey(FT4WorldDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4WorldDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4WorldDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4WorldDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WorldDBKey")),new UScriptStruct::TCppStructOps<FT4WorldDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4WorldDBKey;
	struct Z_Construct_UScriptStruct_FT4WorldDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldDBKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WorldDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WorldDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WorldDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4WorldDBKey",
		sizeof(FT4WorldDBKey),
		alignof(FT4WorldDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WorldDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WorldDBKey"), sizeof(FT4WorldDBKey), Get_Z_Construct_UScriptStruct_FT4WorldDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WorldDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WorldDBKey_Hash() { return 1756536487U; }
class UScriptStruct* FT4ContentDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentDBKey"), sizeof(FT4ContentDBKey), Get_Z_Construct_UScriptStruct_FT4ContentDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentDBKey>()
{
	return FT4ContentDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentDBKey(FT4ContentDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentDBKey")),new UScriptStruct::TCppStructOps<FT4ContentDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentDBKey;
	struct Z_Construct_UScriptStruct_FT4ContentDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentDBKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#161" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentDBKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4GameDBKey,
		&NewStructOps,
		"T4ContentDBKey",
		sizeof(FT4ContentDBKey),
		alignof(FT4ContentDBKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentDBKey"), sizeof(FT4ContentDBKey), Get_Z_Construct_UScriptStruct_FT4ContentDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentDBKey_Hash() { return 2855069500U; }
class UScriptStruct* FT4GameDBKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4GameDBKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameDBKey, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4GameDBKey"), sizeof(FT4GameDBKey), Get_Z_Construct_UScriptStruct_FT4GameDBKey_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4GameDBKey>()
{
	return FT4GameDBKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameDBKey(FT4GameDBKey::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4GameDBKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4GameDBKey
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4GameDBKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameDBKey")),new UScriptStruct::TCppStructOps<FT4GameDBKey>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4GameDBKey;
	struct Z_Construct_UScriptStruct_FT4GameDBKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidationResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValidationResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValidationResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDBKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameDBKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult = { "ValidationResult", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDBKey, ValidationResult), Z_Construct_UEnum_T4GameData_ET4GameDBValidation, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDBKey, RowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Common" },
		{ "DisplayName", "DB Type" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDBKey, Type), Z_Construct_UEnum_T4GameData_ET4GameDBType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameDBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_ValidationResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDBKey_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameDBKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4GameDBKey",
		sizeof(FT4GameDBKey),
		alignof(FT4GameDBKey),
		Z_Construct_UScriptStruct_FT4GameDBKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDBKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameDBKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameDBKey"), sizeof(FT4GameDBKey), Get_Z_Construct_UScriptStruct_FT4GameDBKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameDBKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameDBKey_Hash() { return 2297001978U; }
class UScriptStruct* FT4GameUID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4GameUID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameUID, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4GameUID"), sizeof(FT4GameUID), Get_Z_Construct_UScriptStruct_FT4GameUID_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4GameUID>()
{
	return FT4GameUID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameUID(FT4GameUID::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4GameUID"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4GameUID
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4GameUID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameUID")),new UScriptStruct::TCppStructOps<FT4GameUID>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4GameUID;
	struct Z_Construct_UScriptStruct_FT4GameUID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameUID_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #150\n" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
		{ "ToolTip", "#150" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameUID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameUID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameUID_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "DisplayName", "UID" },
		{ "ModuleRelativePath", "Public/T4GameDBTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4GameUID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameUID, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameUID_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameUID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameUID_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameUID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4GameUID",
		sizeof(FT4GameUID),
		alignof(FT4GameUID),
		Z_Construct_UScriptStruct_FT4GameUID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameUID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameUID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameUID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameUID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameUID"), sizeof(FT4GameUID), Get_Z_Construct_UScriptStruct_FT4GameUID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameUID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameUID_Hash() { return 1686935818U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
