// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Classes/ContentTable/T4EditorConstantDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EditorConstantDataTable() {}
// Cross Module References
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow();
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow();
// End Cross Module References
class UScriptStruct* FT4EditorConstantIntValueTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantIntValueTableRow"), sizeof(FT4EditorConstantIntValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantIntValueTableRow>()
{
	return FT4EditorConstantIntValueTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantIntValueTableRow(FT4EditorConstantIntValueTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantIntValueTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantIntValueTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantIntValueTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantIntValueTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantIntValueTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantIntValueTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantIntValueTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantIntValueTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantIntValueTableRow, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantIntValueTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantIntValueTableRow",
		sizeof(FT4EditorConstantIntValueTableRow),
		alignof(FT4EditorConstantIntValueTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantIntValueTableRow"), sizeof(FT4EditorConstantIntValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash() { return 642322485U; }
class UScriptStruct* FT4EditorConstantFloatValueTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantFloatValueTableRow"), sizeof(FT4EditorConstantFloatValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantFloatValueTableRow>()
{
	return FT4EditorConstantFloatValueTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantFloatValueTableRow(FT4EditorConstantFloatValueTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantFloatValueTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantFloatValueTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantFloatValueTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantFloatValueTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantFloatValueTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantFloatValueTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantFloatValueTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantFloatValueTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantFloatValueTableRow, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantFloatValueTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantFloatValueTableRow",
		sizeof(FT4EditorConstantFloatValueTableRow),
		alignof(FT4EditorConstantFloatValueTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantFloatValueTableRow"), sizeof(FT4EditorConstantFloatValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash() { return 53619701U; }
class UScriptStruct* FT4EditorConstantNameTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantNameTableRow"), sizeof(FT4EditorConstantNameTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantNameTableRow>()
{
	return FT4EditorConstantNameTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantNameTableRow(FT4EditorConstantNameTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantNameTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantNameTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantNameTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantNameTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantNameTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantNameTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/\n */" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/DataDriven/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantNameTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantNameTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantNameTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantNameTableRow",
		sizeof(FT4EditorConstantNameTableRow),
		alignof(FT4EditorConstantNameTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantNameTableRow"), sizeof(FT4EditorConstantNameTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash() { return 3156882678U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
