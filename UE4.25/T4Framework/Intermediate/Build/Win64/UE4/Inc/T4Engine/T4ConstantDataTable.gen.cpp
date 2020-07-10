// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/DataTable/T4ConstantDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ConstantDataTable() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ConstantNameTableRow();
// End Cross Module References
class UScriptStruct* FT4ConstantIntValueTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ConstantIntValueTableRow"), sizeof(FT4ConstantIntValueTableRow), Get_Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ConstantIntValueTableRow>()
{
	return FT4ConstantIntValueTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ConstantIntValueTableRow(FT4ConstantIntValueTableRow::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ConstantIntValueTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantIntValueTableRow
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantIntValueTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ConstantIntValueTableRow")),new UScriptStruct::TCppStructOps<FT4ConstantIntValueTableRow>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantIntValueTableRow;
	struct Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ConstantIntValueTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantIntValueTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantIntValueTableRow, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantIntValueTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ConstantIntValueTableRow",
		sizeof(FT4ConstantIntValueTableRow),
		alignof(FT4ConstantIntValueTableRow),
		Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ConstantIntValueTableRow"), sizeof(FT4ConstantIntValueTableRow), Get_Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ConstantIntValueTableRow_Hash() { return 3277260996U; }
class UScriptStruct* FT4ConstantFloatValueTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ConstantFloatValueTableRow"), sizeof(FT4ConstantFloatValueTableRow), Get_Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ConstantFloatValueTableRow>()
{
	return FT4ConstantFloatValueTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ConstantFloatValueTableRow(FT4ConstantFloatValueTableRow::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ConstantFloatValueTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantFloatValueTableRow
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantFloatValueTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ConstantFloatValueTableRow")),new UScriptStruct::TCppStructOps<FT4ConstantFloatValueTableRow>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantFloatValueTableRow;
	struct Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ConstantFloatValueTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantFloatValueTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantFloatValueTableRow, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantFloatValueTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ConstantFloatValueTableRow",
		sizeof(FT4ConstantFloatValueTableRow),
		alignof(FT4ConstantFloatValueTableRow),
		Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ConstantFloatValueTableRow"), sizeof(FT4ConstantFloatValueTableRow), Get_Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ConstantFloatValueTableRow_Hash() { return 3479133262U; }
class UScriptStruct* FT4ConstantNameTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ConstantNameTableRow, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ConstantNameTableRow"), sizeof(FT4ConstantNameTableRow), Get_Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ConstantNameTableRow>()
{
	return FT4ConstantNameTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ConstantNameTableRow(FT4ConstantNameTableRow::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ConstantNameTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantNameTableRow
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantNameTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ConstantNameTableRow")),new UScriptStruct::TCppStructOps<FT4ConstantNameTableRow>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ConstantNameTableRow;
	struct Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/\n */" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/DataDriven/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ConstantNameTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantNameTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/DataTable/T4ConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ConstantNameTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ConstantNameTableRow",
		sizeof(FT4ConstantNameTableRow),
		alignof(FT4ConstantNameTableRow),
		Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ConstantNameTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ConstantNameTableRow"), sizeof(FT4ConstantNameTableRow), Get_Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ConstantNameTableRow_Hash() { return 567141375U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
