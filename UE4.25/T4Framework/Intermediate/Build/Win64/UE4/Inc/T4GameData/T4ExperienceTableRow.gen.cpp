// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4ExperienceTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ExperienceTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ExperienceTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatLevel();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatCategory();
// End Cross Module References
class UScriptStruct* FT4ExperienceTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ExperienceTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ExperienceTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ExperienceTableRow"), sizeof(FT4ExperienceTableRow), Get_Z_Construct_UScriptStruct_FT4ExperienceTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ExperienceTableRow>()
{
	return FT4ExperienceTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ExperienceTableRow(FT4ExperienceTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ExperienceTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ExperienceTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ExperienceTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ExperienceTableRow")),new UScriptStruct::TCppStructOps<FT4ExperienceTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ExperienceTableRow;
	struct Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_Required_EXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Total_Required_EXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Required_EXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Required_EXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4ExperienceTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ExperienceTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Total_Required_EXP_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #114 : \xea\xb2\xbd\xed\x97\x98\xec\xb9\x98, \xec\x83\x81\xeb\x8c\x80\xec\xa0\x81, Required EXP\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ExperienceTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb2\xbd\xed\x97\x98\xec\xb9\x98, \xec\x83\x81\xeb\x8c\x80\xec\xa0\x81, Required EXP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Total_Required_EXP = { "Total_Required_EXP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExperienceTableRow, Total_Required_EXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Total_Required_EXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Total_Required_EXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Required_EXP_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ExperienceTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Required_EXP = { "Required_EXP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExperienceTableRow, Required_EXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Required_EXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Required_EXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : \xec\x82\xac\xec\x9a\xa9\xec\xb2\x98\xeb\xa5\xbc \xeb\xaa\x85\xec\x8b\x9c\xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ExperienceTableRow.h" },
		{ "ToolTip", "#114 : \xec\x82\xac\xec\x9a\xa9\xec\xb2\x98\xeb\xa5\xbc \xeb\xaa\x85\xec\x8b\x9c\xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel = { "StatLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExperienceTableRow, StatLevel), Z_Construct_UEnum_T4GameData_ET4GameStatLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ExperienceTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory = { "StatCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExperienceTableRow, StatCategory), Z_Construct_UEnum_T4GameData_ET4GameStatCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #T4_ADD_EXPERIENCE_CONTENT_TAG\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ExperienceTableRow.h" },
		{ "ToolTip", "#T4_ADD_EXPERIENCE_CONTENT_TAG" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ExperienceTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Total_Required_EXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Required_EXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_StatCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4ExperienceTableRow",
		sizeof(FT4ExperienceTableRow),
		alignof(FT4ExperienceTableRow),
		Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ExperienceTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ExperienceTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ExperienceTableRow"), sizeof(FT4ExperienceTableRow), Get_Z_Construct_UScriptStruct_FT4ExperienceTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ExperienceTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ExperienceTableRow_Hash() { return 3411951144U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
