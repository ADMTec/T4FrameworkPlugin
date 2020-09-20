// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4QuestTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QuestTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4QuestTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentWorldSettings();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionRule();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionType();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4QuestFlowAsset_NoRegister();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameQuestTarget();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDBKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentMissionData();
// End Cross Module References
class UScriptStruct* FT4QuestTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4QuestTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4QuestTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4QuestTableRow"), sizeof(FT4QuestTableRow), Get_Z_Construct_UScriptStruct_FT4QuestTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4QuestTableRow>()
{
	return FT4QuestTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4QuestTableRow(FT4QuestTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4QuestTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4QuestTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4QuestTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4QuestTableRow")),new UScriptStruct::TCppStructOps<FT4QuestTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4QuestTableRow;
	struct Z_Construct_UScriptStruct_FT4QuestTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_Description_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UI_Description_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestSpawnAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_QuestSpawnAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestMissionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestMissionRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestMissionRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestMissionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestMissionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestMissionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestFlowAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_QuestFlowAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4QuestTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UI_Description_Text_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UI_Description_Text = { "UI_Description_Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, UI_Description_Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UI_Description_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UI_Description_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldSettings_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldSettings = { "WorldSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, WorldSettings), Z_Construct_UScriptStruct_FT4ContentWorldSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestSpawnAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestSpawnAsset = { "QuestSpawnAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, QuestSpawnAsset), Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestSpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestSpawnAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule = { "QuestMissionRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, QuestMissionRule), Z_Construct_UEnum_T4GameData_ET4GameMissionRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType = { "QuestMissionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, QuestMissionType), Z_Construct_UEnum_T4GameData_ET4GameMissionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestFlowAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestFlowAsset = { "QuestFlowAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, QuestFlowAsset), Z_Construct_UClass_UT4QuestFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestFlowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestFlowAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget = { "QuestTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, QuestTarget), Z_Construct_UEnum_T4GameData_ET4GameQuestTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldDBKey_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldDBKey = { "WorldDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, WorldDBKey), Z_Construct_UScriptStruct_FT4WorldDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// FT4QuestDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
		{ "ToolTip", "FT4QuestDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4QuestTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UI_Description_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestSpawnAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestMissionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestFlowAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_QuestTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_WorldDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4QuestTableRow",
		sizeof(FT4QuestTableRow),
		alignof(FT4QuestTableRow),
		Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4QuestTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4QuestTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4QuestTableRow"), sizeof(FT4QuestTableRow), Get_Z_Construct_UScriptStruct_FT4QuestTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4QuestTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4QuestTableRow_Hash() { return 60864396U; }
class UScriptStruct* FT4ContentWorldSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentWorldSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentWorldSettings, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentWorldSettings"), sizeof(FT4ContentWorldSettings), Get_Z_Construct_UScriptStruct_FT4ContentWorldSettings_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentWorldSettings>()
{
	return FT4ContentWorldSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentWorldSettings(FT4ContentWorldSettings::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentWorldSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentWorldSettings
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentWorldSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentWorldSettings")),new UScriptStruct::TCppStructOps<FT4ContentWorldSettings>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentWorldSettings;
	struct Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeHour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeHour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyTimeSync_MetaData[];
#endif
		static void NewProp_bApplyTimeSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyTimeSync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentWorldSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeScale_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bApplyTimeSync" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeScale = { "WorldTimeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentWorldSettings, WorldTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bApplyTimeSync" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentWorldSettings, WorldTimeHour), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeHour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync_SetBit(void* Obj)
	{
		((FT4ContentWorldSettings*)Obj)->bApplyTimeSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync = { "bApplyTimeSync", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentWorldSettings), &Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_WorldTimeHour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::NewProp_bApplyTimeSync,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentWorldSettings",
		sizeof(FT4ContentWorldSettings),
		alignof(FT4ContentWorldSettings),
		Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentWorldSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentWorldSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentWorldSettings"), sizeof(FT4ContentWorldSettings), Get_Z_Construct_UScriptStruct_FT4ContentWorldSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentWorldSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentWorldSettings_Hash() { return 1627446152U; }
class UScriptStruct* FT4ContentMissionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentMissionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentMissionData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentMissionData"), sizeof(FT4ContentMissionData), Get_Z_Construct_UScriptStruct_FT4ContentMissionData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentMissionData>()
{
	return FT4ContentMissionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentMissionData(FT4ContentMissionData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentMissionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentMissionData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentMissionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentMissionData")),new UScriptStruct::TCppStructOps<FT4ContentMissionData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentMissionData;
	struct Z_Construct_UScriptStruct_FT4ContentMissionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestFlowAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_QuestFlowAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestTarget_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentMissionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestFlowAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestFlowAsset = { "QuestFlowAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentMissionData, QuestFlowAsset), Z_Construct_UClass_UT4QuestFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestFlowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestFlowAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4QuestTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget = { "QuestTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentMissionData, QuestTarget), Z_Construct_UEnum_T4GameData_ET4GameQuestTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestFlowAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::NewProp_QuestTarget_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentMissionData",
		sizeof(FT4ContentMissionData),
		alignof(FT4ContentMissionData),
		Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentMissionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentMissionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentMissionData"), sizeof(FT4ContentMissionData), Get_Z_Construct_UScriptStruct_FT4ContentMissionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentMissionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentMissionData_Hash() { return 2064635169U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
