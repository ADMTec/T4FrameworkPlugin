// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4EffectSetTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EffectSetTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectSetTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
class UScriptStruct* FT4EffectSetTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4EffectSetTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EffectSetTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4EffectSetTableRow"), sizeof(FT4EffectSetTableRow), Get_Z_Construct_UScriptStruct_FT4EffectSetTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4EffectSetTableRow>()
{
	return FT4EffectSetTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EffectSetTableRow(FT4EffectSetTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4EffectSetTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectSetTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectSetTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EffectSetTableRow")),new UScriptStruct::TCppStructOps<FT4EffectSetTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4EffectSetTableRow;
	struct Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MisDBKey_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MisDBKey_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunDBKey_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StunDBKey_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirborneDBKey_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AirborneDBKey_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackDBKey_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KnockbackDBKey_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDBKey_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitDBKey_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_Title_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UI_Title_Text;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #135\n */" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EffectSetTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_MisDBKey_Normal_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_MisDBKey_Normal = { "MisDBKey_Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, MisDBKey_Normal), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_MisDBKey_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_MisDBKey_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_StunDBKey_Normal_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_StunDBKey_Normal = { "StunDBKey_Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, StunDBKey_Normal), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_StunDBKey_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_StunDBKey_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_AirborneDBKey_Normal_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_AirborneDBKey_Normal = { "AirborneDBKey_Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, AirborneDBKey_Normal), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_AirborneDBKey_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_AirborneDBKey_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_KnockbackDBKey_Normal_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_KnockbackDBKey_Normal = { "KnockbackDBKey_Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, KnockbackDBKey_Normal), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_KnockbackDBKey_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_KnockbackDBKey_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_HitDBKey_Normal_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #T4_ADD_EFFECT_TAG_DATA\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
		{ "ToolTip", "#T4_ADD_EFFECT_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_HitDBKey_Normal = { "HitDBKey_Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, HitDBKey_Normal), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_HitDBKey_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_HitDBKey_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UI_Title_Text_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UI_Title_Text = { "UI_Title_Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, UI_Title_Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UI_Title_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UI_Title_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// FT4EffectSetDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectSetTableRow.h" },
		{ "ToolTip", "FT4EffectSetDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectSetTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_MisDBKey_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_StunDBKey_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_AirborneDBKey_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_KnockbackDBKey_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_HitDBKey_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UI_Title_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4EffectSetTableRow",
		sizeof(FT4EffectSetTableRow),
		alignof(FT4EffectSetTableRow),
		Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EffectSetTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EffectSetTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EffectSetTableRow"), sizeof(FT4EffectSetTableRow), Get_Z_Construct_UScriptStruct_FT4EffectSetTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EffectSetTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EffectSetTableRow_Hash() { return 1001643386U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
