// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4GoodsTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GoodsTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GoodsTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemTableRowBase();
	T4ASSET_API UClass* Z_Construct_UClass_UT4GoodsEntityAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
class UScriptStruct* FT4GoodsTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4GoodsTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GoodsTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4GoodsTableRow"), sizeof(FT4GoodsTableRow), Get_Z_Construct_UScriptStruct_FT4GoodsTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4GoodsTableRow>()
{
	return FT4GoodsTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GoodsTableRow(FT4GoodsTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4GoodsTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4GoodsTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4GoodsTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GoodsTableRow")),new UScriptStruct::TCppStructOps<FT4GoodsTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4GoodsTableRow;
	struct Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeEffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeEffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStatDBKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GoodsTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #158 : Exchange \xec\x8b\x9c \xec\x9e\x90\xec\x8b\xa0\xec\x97\x90\xea\xb2\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Effect \xed\x9a\xa8\xea\xb3\xbc\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
		{ "ToolTip", "#158 : Exchange \xec\x8b\x9c \xec\x9e\x90\xec\x8b\xa0\xec\x97\x90\xea\xb2\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Effect \xed\x9a\xa8\xea\xb3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GoodsTableRow, EntityAsset), Z_Construct_UClass_UT4GoodsEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_EntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_EntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_InitializeEffectDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_InitializeEffectDBKey = { "InitializeEffectDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GoodsTableRow, InitializeEffectDBKey), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_InitializeEffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_InitializeEffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_ItemStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_ItemStatDBKey = { "ItemStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GoodsTableRow, ItemStatDBKey), Z_Construct_UScriptStruct_FT4ItemStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_ItemStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_ItemStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UI_Title_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UI_Title = { "UI_Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GoodsTableRow, UI_Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UI_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UI_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GoodsTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// FT4GoodsDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4GoodsTableRow.h" },
		{ "ToolTip", "FT4GoodsDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GoodsTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_InitializeEffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_ItemStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UI_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4ItemTableRowBase,
		&NewStructOps,
		"T4GoodsTableRow",
		sizeof(FT4GoodsTableRow),
		alignof(FT4GoodsTableRow),
		Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GoodsTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GoodsTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GoodsTableRow"), sizeof(FT4GoodsTableRow), Get_Z_Construct_UScriptStruct_FT4GoodsTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GoodsTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GoodsTableRow_Hash() { return 1730531686U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
