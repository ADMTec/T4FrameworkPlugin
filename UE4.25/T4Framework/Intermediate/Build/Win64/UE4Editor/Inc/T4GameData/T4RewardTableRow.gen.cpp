// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4RewardTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4RewardTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4RewardTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
class UScriptStruct* FT4RewardTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4RewardTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4RewardTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4RewardTableRow"), sizeof(FT4RewardTableRow), Get_Z_Construct_UScriptStruct_FT4RewardTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4RewardTableRow>()
{
	return FT4RewardTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4RewardTableRow(FT4RewardTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4RewardTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4RewardTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4RewardTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4RewardTableRow")),new UScriptStruct::TCppStructOps<FT4RewardTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4RewardTableRow;
	struct Z_Construct_UScriptStruct_FT4RewardTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemGameDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemGameDBKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #164\n */" },
		{ "ModuleRelativePath", "Classes/TableRow/T4RewardTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4RewardTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_ItemGameDBKey_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4RewardTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_ItemGameDBKey = { "ItemGameDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RewardTableRow, ItemGameDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_ItemGameDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_ItemGameDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4RewardTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RewardTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #T4_ADD_Reward_CONTENT_TAG\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4RewardTableRow.h" },
		{ "ToolTip", "#T4_ADD_Reward_CONTENT_TAG" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RewardTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_ItemGameDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4RewardTableRow",
		sizeof(FT4RewardTableRow),
		alignof(FT4RewardTableRow),
		Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4RewardTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4RewardTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4RewardTableRow"), sizeof(FT4RewardTableRow), Get_Z_Construct_UScriptStruct_FT4RewardTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4RewardTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4RewardTableRow_Hash() { return 673572489U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
