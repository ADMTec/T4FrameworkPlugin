// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Classes/ConstantTable/T4ContentConstantDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentConstantDataTable() {}
// Cross Module References
	T4CONTENTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FT4ContentConstantMasterTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CONTENTEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow, Z_Construct_UPackage__Script_T4ContentEditor(), TEXT("T4ContentConstantMasterTableRow"), sizeof(FT4ContentConstantMasterTableRow), Get_Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Hash());
	}
	return Singleton;
}
template<> T4CONTENTEDITOR_API UScriptStruct* StaticStruct<FT4ContentConstantMasterTableRow>()
{
	return FT4ContentConstantMasterTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentConstantMasterTableRow(FT4ContentConstantMasterTableRow::StaticStruct, TEXT("/Script/T4ContentEditor"), TEXT("T4ContentConstantMasterTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4ContentEditor_StaticRegisterNativesFT4ContentConstantMasterTableRow
{
	FScriptStruct_T4ContentEditor_StaticRegisterNativesFT4ContentConstantMasterTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentConstantMasterTableRow")),new UScriptStruct::TCppStructOps<FT4ContentConstantMasterTableRow>);
	}
} ScriptStruct_T4ContentEditor_StaticRegisterNativesFT4ContentConstantMasterTableRow;
	struct Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WaypointConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RacesConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RacesConstantDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ConstantTable/T4ContentConstantDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentConstantMasterTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_WaypointConstantDataTable_MetaData[] = {
		{ "Category", "ContentConstantTable" },
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Classes/ConstantTable/T4ContentConstantDataTable.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_WaypointConstantDataTable = { "WaypointConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentConstantMasterTableRow, WaypointConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_WaypointConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_WaypointConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_RacesConstantDataTable_MetaData[] = {
		{ "Category", "ContentConstantTable" },
		{ "ModuleRelativePath", "Classes/ConstantTable/T4ContentConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_RacesConstantDataTable = { "RacesConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentConstantMasterTableRow, RacesConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_RacesConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_RacesConstantDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_WaypointConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::NewProp_RacesConstantDataTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ContentConstantMasterTableRow",
		sizeof(FT4ContentConstantMasterTableRow),
		alignof(FT4ContentConstantMasterTableRow),
		Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4ContentEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentConstantMasterTableRow"), sizeof(FT4ContentConstantMasterTableRow), Get_Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentConstantMasterTableRow_Hash() { return 1934849307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
