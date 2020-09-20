// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4MasterTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MasterTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4MasterTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FT4MasterTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4MasterTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MasterTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4MasterTableRow"), sizeof(FT4MasterTableRow), Get_Z_Construct_UScriptStruct_FT4MasterTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4MasterTableRow>()
{
	return FT4MasterTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MasterTableRow(FT4MasterTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4MasterTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4MasterTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4MasterTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MasterTableRow")),new UScriptStruct::TCppStructOps<FT4MasterTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4MasterTableRow;
	struct Z_Construct_UScriptStruct_FT4MasterTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TextTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RewardTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StatTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EffectTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectSetTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EffectSetTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillSetTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillSetTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoodsTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GoodsTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CostumeTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NPCTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WorldTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_QuestTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ContentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #135\n */" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MasterTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_TextTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_TextTableAsset = { "TextTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, TextTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_TextTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_TextTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_RewardTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_RewardTableAsset = { "RewardTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, RewardTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_RewardTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_RewardTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_StatTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_StatTableAsset = { "StatTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, StatTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_StatTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_StatTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectTableAsset = { "EffectTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, EffectTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectSetTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectSetTableAsset = { "EffectSetTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, EffectSetTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectSetTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectSetTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillTableAsset = { "SkillTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, SkillTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillSetTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillSetTableAsset = { "SkillSetTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, SkillSetTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillSetTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillSetTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_GoodsTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #48\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#48" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_GoodsTableAsset = { "GoodsTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, GoodsTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_GoodsTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_GoodsTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_CostumeTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #48\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#48" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_CostumeTableAsset = { "CostumeTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, CostumeTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_CostumeTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_CostumeTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WeaponTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WeaponTableAsset = { "WeaponTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, WeaponTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WeaponTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WeaponTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_NPCTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_NPCTableAsset = { "NPCTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, NPCTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_NPCTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_NPCTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_PlayerTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_PlayerTableAsset = { "PlayerTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, PlayerTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_PlayerTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_PlayerTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WorldTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #146\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "#146" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WorldTableAsset = { "WorldTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, WorldTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WorldTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WorldTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_QuestTableAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_QuestTableAsset = { "QuestTableAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, QuestTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_QuestTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_QuestTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_ContentName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_ContentName = { "ContentName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, ContentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_ContentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_ContentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4MasterDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4MasterTableRow.h" },
		{ "ToolTip", "FT4MasterDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MasterTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_TextTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_RewardTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_StatTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_EffectSetTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_SkillSetTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_GoodsTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_CostumeTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WeaponTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_NPCTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_PlayerTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_WorldTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_QuestTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_ContentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4MasterTableRow",
		sizeof(FT4MasterTableRow),
		alignof(FT4MasterTableRow),
		Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MasterTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MasterTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MasterTableRow"), sizeof(FT4MasterTableRow), Get_Z_Construct_UScriptStruct_FT4MasterTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MasterTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MasterTableRow_Hash() { return 3187049622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
