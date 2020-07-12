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
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponEntityData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillSetDBKey();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubEntityDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubEntityDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubEntityDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainEntityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainEntityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDontUseMesh_MetaData[];
#endif
		static void NewProp_bDontUseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDontUseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSkillSetDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombatSkillSetDBKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "!bDontUseMesh" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas = { "SubEntityDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, SubEntityDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas_Inner = { "SubEntityDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4WeaponEntityData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEntityData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #135\n" },
		{ "EditCondition", "!bDontUseMesh" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEntityData = { "MainEntityData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, MainEntityData), Z_Construct_UScriptStruct_FT4WeaponEntityData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEntityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_SetBit(void* Obj)
	{
		((FT4WeaponTableRow*)Obj)->bDontUseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh = { "bDontUseMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4WeaponTableRow), &Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50, #106 : Key = Stance\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#50, #106 : Key = Stance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey = { "ItemStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, ItemStatDBKey), Z_Construct_UScriptStruct_FT4ItemStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_CombatSkillSetDBKey_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50, #106 : Key = Stance\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#50, #106 : Key = Stance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_CombatSkillSetDBKey = { "CombatSkillSetDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, CombatSkillSetDBKey), Z_Construct_UScriptStruct_FT4SkillSetDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_CombatSkillSetDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_CombatSkillSetDBKey_MetaData)) };
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
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange = { "MinAttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, MinAttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4WeaponDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "FT4WeaponDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_SubEntityDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MainEntityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_bDontUseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_ItemStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_CombatSkillSetDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_DefaultSkillSetDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MaxAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponTableRow_Statics::NewProp_MinAttackRange,
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
	uint32 Get_Z_Construct_UScriptStruct_FT4WeaponTableRow_Hash() { return 1782010701U; }
class UScriptStruct* FT4WeaponEntityData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4WeaponEntityData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WeaponEntityData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4WeaponEntityData"), sizeof(FT4WeaponEntityData), Get_Z_Construct_UScriptStruct_FT4WeaponEntityData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4WeaponEntityData>()
{
	return FT4WeaponEntityData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WeaponEntityData(FT4WeaponEntityData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4WeaponEntityData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponEntityData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponEntityData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WeaponEntityData")),new UScriptStruct::TCppStructOps<FT4WeaponEntityData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4WeaponEntityData;
	struct Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEquipPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideEquipPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WeaponEntityData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_OverrideEquipPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_OverrideEquipPoint = { "OverrideEquipPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponEntityData, OverrideEquipPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_OverrideEquipPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_OverrideEquipPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4WeaponTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WeaponEntityData, EntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_EntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_EntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_OverrideEquipPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::NewProp_EntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4WeaponEntityData",
		sizeof(FT4WeaponEntityData),
		alignof(FT4WeaponEntityData),
		Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponEntityData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WeaponEntityData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WeaponEntityData"), sizeof(FT4WeaponEntityData), Get_Z_Construct_UScriptStruct_FT4WeaponEntityData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WeaponEntityData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WeaponEntityData_Hash() { return 1969430000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
