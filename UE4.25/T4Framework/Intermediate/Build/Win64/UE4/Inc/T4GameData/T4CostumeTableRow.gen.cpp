// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4CostumeTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CostumeTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4CostumeTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemTableRowBase();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
class UScriptStruct* FT4CostumeTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4CostumeTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CostumeTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4CostumeTableRow"), sizeof(FT4CostumeTableRow), Get_Z_Construct_UScriptStruct_FT4CostumeTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4CostumeTableRow>()
{
	return FT4CostumeTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CostumeTableRow(FT4CostumeTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4CostumeTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4CostumeTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4CostumeTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CostumeTableRow")),new UScriptStruct::TCppStructOps<FT4CostumeTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4CostumeTableRow;
	struct Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExchangePartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExchangePartName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStatDBKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4CostumeTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CostumeTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ExchangePartName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4CostumeTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ExchangePartName = { "ExchangePartName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeTableRow, ExchangePartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ExchangePartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ExchangePartName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4CostumeTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeTableRow, EntityAsset), Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_EntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_EntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ItemStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4CostumeTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ItemStatDBKey = { "ItemStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeTableRow, ItemStatDBKey), Z_Construct_UScriptStruct_FT4ItemStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ItemStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ItemStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4CostumeTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4CostumeDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4CostumeTableRow.h" },
		{ "ToolTip", "FT4CostumeDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ExchangePartName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_ItemStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4ItemTableRowBase,
		&NewStructOps,
		"T4CostumeTableRow",
		sizeof(FT4CostumeTableRow),
		alignof(FT4CostumeTableRow),
		Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CostumeTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CostumeTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CostumeTableRow"), sizeof(FT4CostumeTableRow), Get_Z_Construct_UScriptStruct_FT4CostumeTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CostumeTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CostumeTableRow_Hash() { return 3399446562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
