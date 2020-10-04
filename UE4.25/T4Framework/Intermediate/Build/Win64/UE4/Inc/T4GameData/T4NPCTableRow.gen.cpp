// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4NPCTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4NPCTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4VisualReactionData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCBehaviorData();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4BehaviorFlowAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCLocomotionData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4CharacterShapeData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEnemyType();
// End Cross Module References
class UScriptStruct* FT4NPCTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4NPCTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NPCTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4NPCTableRow"), sizeof(FT4NPCTableRow), Get_Z_Construct_UScriptStruct_FT4NPCTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4NPCTableRow>()
{
	return FT4NPCTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NPCTableRow(FT4NPCTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4NPCTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NPCTableRow")),new UScriptStruct::TCppStructOps<FT4NPCTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4NPCTableRow;
	struct Z_Construct_UScriptStruct_FT4NPCTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeSkinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitializeSkinName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BehaviorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorFlowAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BehaviorFlowAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeWeaponDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeWeaponDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeNPCStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeNPCStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocomotionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeStanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitializeStanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeAnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitializeAnimSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RaceName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NPCTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ReactionData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ReactionData = { "ReactionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, ReactionData), Z_Construct_UScriptStruct_FT4VisualReactionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeSkinName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeSkinName = { "InitializeSkinName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, InitializeSkinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeSkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeSkinName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, EntityAsset), Z_Construct_UClass_UT4ActorEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_EntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_EntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorData_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorData = { "BehaviorData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, BehaviorData), Z_Construct_UScriptStruct_FT4NPCBehaviorData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorFlowAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorFlowAsset = { "BehaviorFlowAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, BehaviorFlowAsset), Z_Construct_UClass_UT4BehaviorFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorFlowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorFlowAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeWeaponDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeWeaponDBKey = { "InitializeWeaponDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, InitializeWeaponDBKey), Z_Construct_UScriptStruct_FT4WeaponDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeWeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeWeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeNPCStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50, #108, #109\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50, #108, #109" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeNPCStatDBKey = { "InitializeNPCStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, InitializeNPCStatDBKey), Z_Construct_UScriptStruct_FT4NPCStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeNPCStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeNPCStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_LocomotionData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #170\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#170" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_LocomotionData = { "LocomotionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, LocomotionData), Z_Construct_UScriptStruct_FT4NPCLocomotionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_LocomotionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_LocomotionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ShapeData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #142 : NPC \xea\xb8\xb0\xeb\xb3\xb8 \xec\x8a\xa4\xed\x83\xa0\xec\x8a\xa4 \n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#142 : NPC \xea\xb8\xb0\xeb\xb3\xb8 \xec\x8a\xa4\xed\x83\xa0\xec\x8a\xa4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ShapeData = { "ShapeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, ShapeData), Z_Construct_UScriptStruct_FT4CharacterShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ShapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ShapeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeStanceName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #142 : NPC \xea\xb8\xb0\xeb\xb3\xb8 \xec\x8a\xa4\xed\x83\xa0\xec\x8a\xa4 \n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#142 : NPC \xea\xb8\xb0\xeb\xb3\xb8 \xec\x8a\xa4\xed\x83\xa0\xec\x8a\xa4" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeStanceName = { "InitializeStanceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, InitializeStanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeStanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeStanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeAnimSetName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #104, #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#104, #114" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeAnimSetName = { "InitializeAnimSetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, InitializeAnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeAnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeAnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_RaceName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_RaceName = { "RaceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, RaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_RaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_RaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UI_Title_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UI_Title = { "UI_Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, UI_Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UI_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UI_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// FT4NPCDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "FT4NPCDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeSkinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_BehaviorFlowAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeWeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeNPCStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_LocomotionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_ShapeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeStanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_InitializeAnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_RaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UI_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4NPCTableRow",
		sizeof(FT4NPCTableRow),
		alignof(FT4NPCTableRow),
		Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NPCTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NPCTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NPCTableRow"), sizeof(FT4NPCTableRow), Get_Z_Construct_UScriptStruct_FT4NPCTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NPCTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NPCTableRow_Hash() { return 2537249620U; }
class UScriptStruct* FT4NPCBehaviorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4NPCBehaviorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NPCBehaviorData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4NPCBehaviorData"), sizeof(FT4NPCBehaviorData), Get_Z_Construct_UScriptStruct_FT4NPCBehaviorData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4NPCBehaviorData>()
{
	return FT4NPCBehaviorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NPCBehaviorData(FT4NPCBehaviorData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4NPCBehaviorData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCBehaviorData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCBehaviorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NPCBehaviorData")),new UScriptStruct::TCppStructOps<FT4NPCBehaviorData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4NPCBehaviorData;
	struct Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleWaitTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleWaitTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RomaingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RomaingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensoryRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensoryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOrKeepAggroTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveOrKeepAggroTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAggressive_MetaData[];
#endif
		static void NewProp_bAggressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAggressive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NPCBehaviorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_IdleWaitTimeSec = { "IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, IdleWaitTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_JumpRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_JumpRate = { "JumpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, JumpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RoamingRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RoamingRate = { "RoamingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, RoamingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RomaingRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RomaingRange = { "RomaingRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, RomaingRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RomaingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RomaingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_SensoryRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_SensoryRange = { "SensoryRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, SensoryRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec = { "ActiveOrKeepAggroTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, ActiveOrKeepAggroTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #104\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#104" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive_SetBit(void* Obj)
	{
		((FT4NPCBehaviorData*)Obj)->bAggressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive = { "bAggressive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4NPCBehaviorData), &Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114\n// FT4BuiltinNPCAIBehaviorData : AIController (Runtime)\n// FT4NPCBehaviorData : NPC DataTable (Original Set)\n// FT4GameOverrideNPCBehaviorData : Spawn Asset (Instance Set)\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#114\nFT4BuiltinNPCAIBehaviorData : AIController (Runtime)\nFT4NPCBehaviorData : NPC DataTable (Original Set)\nFT4GameOverrideNPCBehaviorData : Spawn Asset (Instance Set)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCBehaviorData, EnemyType), Z_Construct_UEnum_T4GameData_ET4GameEnemyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_RomaingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_bAggressive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::NewProp_EnemyType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4NPCBehaviorData",
		sizeof(FT4NPCBehaviorData),
		alignof(FT4NPCBehaviorData),
		Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NPCBehaviorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NPCBehaviorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NPCBehaviorData"), sizeof(FT4NPCBehaviorData), Get_Z_Construct_UScriptStruct_FT4NPCBehaviorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NPCBehaviorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NPCBehaviorData_Hash() { return 3850206157U; }
class UScriptStruct* FT4NPCLocomotionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4NPCLocomotionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NPCLocomotionData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4NPCLocomotionData"), sizeof(FT4NPCLocomotionData), Get_Z_Construct_UScriptStruct_FT4NPCLocomotionData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4NPCLocomotionData>()
{
	return FT4NPCLocomotionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NPCLocomotionData(FT4NPCLocomotionData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4NPCLocomotionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCLocomotionData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4NPCLocomotionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NPCLocomotionData")),new UScriptStruct::TCppStructOps<FT4NPCLocomotionData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4NPCLocomotionData;
	struct Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlaceRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaceRotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceMoveSpeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StanceMoveSpeeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceMoveSpeeds_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StanceMoveSpeeds_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NPCLocomotionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_InPlaceRotationRate_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_InPlaceRotationRate = { "InPlaceRotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCLocomotionData, InPlaceRotationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_InPlaceRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_InPlaceRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpHeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpHeightSpeed = { "JumpHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCLocomotionData, JumpHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpMaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #154 : FName = StanceName\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#154 : FName = StanceName" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpMaxHeight = { "JumpMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCLocomotionData, JumpMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50, #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
		{ "ToolTip", "#50, #108" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds = { "StanceMoveSpeeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCLocomotionData, StanceMoveSpeeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_Key_KeyProp = { "StanceMoveSpeeds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_ValueProp = { "StanceMoveSpeeds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_DefaultMoveSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4NPCTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_DefaultMoveSpeed = { "DefaultMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCLocomotionData, DefaultMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_DefaultMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_DefaultMoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_InPlaceRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_JumpMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_StanceMoveSpeeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::NewProp_DefaultMoveSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4NPCLocomotionData",
		sizeof(FT4NPCLocomotionData),
		alignof(FT4NPCLocomotionData),
		Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NPCLocomotionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NPCLocomotionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NPCLocomotionData"), sizeof(FT4NPCLocomotionData), Get_Z_Construct_UScriptStruct_FT4NPCLocomotionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NPCLocomotionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NPCLocomotionData_Hash() { return 2794397740U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
