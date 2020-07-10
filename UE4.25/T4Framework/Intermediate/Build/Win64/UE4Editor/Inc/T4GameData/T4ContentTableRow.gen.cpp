// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4ContentTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDBKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FT4ContentTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentTableRow"), sizeof(FT4ContentTableRow), Get_Z_Construct_UScriptStruct_FT4ContentTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentTableRow>()
{
	return FT4ContentTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentTableRow(FT4ContentTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentTableRow")),new UScriptStruct::TCppStructOps<FT4ContentTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentTableRow;
	struct Z_Construct_UScriptStruct_FT4ContentTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentSpawnAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ContentSpawnAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorldTimeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_ContentSpawnAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_ContentSpawnAsset = { "ContentSpawnAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentTableRow, ContentSpawnAsset), Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_ContentSpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_ContentSpawnAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeScale_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeScale = { "WorldTimeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentTableRow, WorldTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeTag_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeTag = { "WorldTimeTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentTableRow, WorldTimeTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldDBKey = { "WorldDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentTableRow, WorldDBKey), Z_Construct_UScriptStruct_FT4WorldDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentTableRow, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// FT4ContentDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ContentTableRow.h" },
		{ "ToolTip", "FT4ContentDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_ContentSpawnAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldTimeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_WorldDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4ContentTableRow",
		sizeof(FT4ContentTableRow),
		alignof(FT4ContentTableRow),
		Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentTableRow"), sizeof(FT4ContentTableRow), Get_Z_Construct_UScriptStruct_FT4ContentTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentTableRow_Hash() { return 4201861541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
