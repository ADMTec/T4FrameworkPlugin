// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4WeaponTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WeaponTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemTableRowBase();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponEquipData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillSetDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FT4WeaponTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4WeaponTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WeaponTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4WeaponTableRow"), sizeof(FT4WeaponTableRow), Get_Z_Construct_UScriptStruct_FT4WeaponTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4WeaponTableRow>()
{
	return FT4WeaponTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WeaponTableRow(FT4WeaponTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4WeaponTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WeaponTableRow")),new UScriptStruct::TCppStructOps<FT4WeaponTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponTableRow;
	struct Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubEquipDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubEquipDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubEquipDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainEquipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainEquipData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDontUseMesh_MetaData[];
#endif
		static void NewProp_bDontUseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDontUseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeEffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeEffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceSkillSetDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StanceSkillSetDBKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceSkillSetDBKey_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StanceSkillSetDBKey_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSkillSetDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSkillSetDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UI_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WeaponTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #169\n" },
		{ "EditCondition", "!bDontUseMesh" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#169" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas = { "SubEquipDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, SubEquipDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas_Inner = { "SubEquipDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4WeaponEquipData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEquipData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #135\n" },
		{ "EditCondition", "!bDontUseMesh" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEquipData = { "MainEquipData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, MainEquipData), Z_Construct_UScriptStruct_FT4WeaponEquipData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEquipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEquipData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #158 : Equip \xec\x8b\x9c \xec\x9e\x90\xec\x8b\xa0\xec\x97\x90\xea\xb2\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Effect \xed\x9a\xa8\xea\xb3\xbc\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#158 : Equip \xec\x8b\x9c \xec\x9e\x90\xec\x8b\xa0\xec\x97\x90\xea\xb2\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Effect \xed\x9a\xa8\xea\xb3\xbc" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_SetBit(void* Obj)
	{
		((FT4WeaponTableRow*)Obj)->bDontUseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh = { "bDontUseMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4WeaponTableRow), &Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_InitializeEffectDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_InitializeEffectDBKey = { "InitializeEffectDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, InitializeEffectDBKey), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_InitializeEffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_InitializeEffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50, #106, #154 : Key = Stance\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#50, #106, #154 : Key = Stance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey = { "ItemStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, ItemStatDBKey), Z_Construct_UScriptStruct_FT4ItemStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50, #106 : Key = Stance\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#50, #106 : Key = Stance" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey = { "StanceSkillSetDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, StanceSkillSetDBKey), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_Key_KeyProp = { "StanceSkillSetDBKey_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_ValueProp = { "StanceSkillSetDBKey", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4SkillSetDBKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_DefaultSkillSetDBKey_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_DefaultSkillSetDBKey = { "DefaultSkillSetDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, DefaultSkillSetDBKey), Z_Construct_UScriptStruct_FT4SkillSetDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_DefaultSkillSetDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_DefaultSkillSetDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MaxAttackRange_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : \xec\x9d\xb4 \xea\xb1\xb0\xeb\xa6\xac \xec\x95\x88\xec\x9d\xb4\xeb\xa9\xb4 Approach \xec\x97\x90\xec\x84\x9c \xeb\x92\xa4\xeb\xa1\x9c \xec\x9d\xb4\xeb\x8f\x99 \xed\x9b\x84 \xeb\x8b\xa4\xec\x8b\x9c \xea\xb3\xb5\xea\xb2\xa9\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\xb2\x98\xeb\xa6\xac\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xec\xb6\x94\xea\xb0\x80\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#135 : \xec\x9d\xb4 \xea\xb1\xb0\xeb\xa6\xac \xec\x95\x88\xec\x9d\xb4\xeb\xa9\xb4 Approach \xec\x97\x90\xec\x84\x9c \xeb\x92\xa4\xeb\xa1\x9c \xec\x9d\xb4\xeb\x8f\x99 \xed\x9b\x84 \xeb\x8b\xa4\xec\x8b\x9c \xea\xb3\xb5\xea\xb2\xa9\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\xb2\x98\xeb\xa6\xac\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xec\xb6\x94\xea\xb0\x80" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MaxAttackRange = { "MaxAttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, MaxAttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MaxAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MaxAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange = { "MinAttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, MinAttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UI_Title_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UI_Title = { "UI_Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, UI_Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UI_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UI_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// FT4WeaponDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "FT4WeaponDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEquipDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEquipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_InitializeEffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_StanceSkillSetDBKey_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_DefaultSkillSetDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MaxAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UI_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4ItemTableRowBase,
		&NewStructOps,
		"T4WeaponTableRow",
		sizeof(FT4WeaponTableRow),
		alignof(FT4WeaponTableRow),
		Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WeaponTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WeaponTableRow"), sizeof(FT4WeaponTableRow), Get_Z_Construct_UScriptStruct_FT4WeaponTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WeaponTableRow_Hash() { return 275437572U; }
class UScriptStruct* FT4WeaponEquipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4WeaponEquipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WeaponEquipData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4WeaponEquipData"), sizeof(FT4WeaponEquipData), Get_Z_Construct_UScriptStruct_FT4WeaponEquipData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4WeaponEquipData>()
{
	return FT4WeaponEquipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WeaponEquipData(FT4WeaponEquipData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4WeaponEquipData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponEquipData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponEquipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WeaponEquipData")),new UScriptStruct::TCppStructOps<FT4WeaponEquipData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponEquipData;
	struct Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceEquipPointMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StanceEquipPointMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceEquipPointMap_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceEquipPointMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WeaponEquipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap = { "StanceEquipPointMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponEquipData, StanceEquipPointMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_Key_KeyProp = { "StanceEquipPointMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_ValueProp = { "StanceEquipPointMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_WeaponEntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_WeaponEntityAsset = { "WeaponEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponEquipData, WeaponEntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_WeaponEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_WeaponEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_StanceEquipPointMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::NewProp_WeaponEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4WeaponEquipData",
		sizeof(FT4WeaponEquipData),
		alignof(FT4WeaponEquipData),
		Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponEquipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WeaponEquipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WeaponEquipData"), sizeof(FT4WeaponEquipData), Get_Z_Construct_UScriptStruct_FT4WeaponEquipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WeaponEquipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WeaponEquipData_Hash() { return 3235226120U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
