// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4StatTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4StatTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4StatTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatCategory();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
class UScriptStruct* FT4StatTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4StatTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4StatTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4StatTableRow"), sizeof(FT4StatTableRow), Get_Z_Construct_UScriptStruct_FT4StatTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4StatTableRow>()
{
	return FT4StatTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4StatTableRow(FT4StatTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4StatTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4StatTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4StatTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4StatTableRow")),new UScriptStruct::TCppStructOps<FT4StatTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4StatTableRow;
	struct Z_Construct_UScriptStruct_FT4StatTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dodge_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hit_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defensive_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Defensive_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Striking_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Striking_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #114\n */" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4StatTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Dodge_Rate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #114 : \xeb\xaa\x85\xec\xa4\x91\xeb\xa5\xa0\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#114 : \xeb\xaa\x85\xec\xa4\x91\xeb\xa5\xa0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Dodge_Rate = { "Dodge_Rate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, Dodge_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Dodge_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Dodge_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Hit_Rate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #114 : \xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#114 : \xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Hit_Rate = { "Hit_Rate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, Hit_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Hit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Hit_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Defensive_Power_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #114 : \xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Defensive_Power = { "Defensive_Power", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, Defensive_Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Defensive_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Defensive_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Striking_Power_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #114 : \xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#114 : \xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Striking_Power = { "Striking_Power", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, Striking_Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Striking_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Striking_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Health_Point_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #114 : \xec\x82\xac\xec\x9a\xa9\xec\xb2\x98\xeb\xa5\xbc \xeb\xaa\x85\xec\x8b\x9c\xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#114 : \xec\x82\xac\xec\x9a\xa9\xec\xb2\x98\xeb\xa5\xbc \xeb\xaa\x85\xec\x8b\x9c\xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Health_Point = { "Health_Point", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, Health_Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Health_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Health_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #T4_ADD_STAT_CONTENT_TAG\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4StatTableRow.h" },
		{ "ToolTip", "#T4_ADD_STAT_CONTENT_TAG" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StatTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4StatTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Dodge_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Hit_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Defensive_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Striking_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Health_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_StatCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StatTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4StatTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4StatTableRow",
		sizeof(FT4StatTableRow),
		alignof(FT4StatTableRow),
		Z_Construct_UScriptStruct_FT4StatTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StatTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4StatTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4StatTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4StatTableRow"), sizeof(FT4StatTableRow), Get_Z_Construct_UScriptStruct_FT4StatTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4StatTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4StatTableRow_Hash() { return 23862319U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
