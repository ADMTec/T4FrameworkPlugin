// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4PlayerTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CharacterEntityAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectSetDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerStatDBKey();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameStatLevel();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerSpeedData();
// End Cross Module References
class UScriptStruct* FT4PlayerTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4PlayerTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PlayerTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4PlayerTableRow"), sizeof(FT4PlayerTableRow), Get_Z_Construct_UScriptStruct_FT4PlayerTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4PlayerTableRow>()
{
	return FT4PlayerTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PlayerTableRow(FT4PlayerTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4PlayerTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PlayerTableRow")),new UScriptStruct::TCppStructOps<FT4PlayerTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerTableRow;
	struct Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeEffectSetDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeEffectSetDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeWeaponDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeWeaponDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializePlayerStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializePlayerStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitializeLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitializeLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSpeedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RaceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PlayerTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #142 : \xed\x94\xbc\xea\xb2\xa9 \xed\x9a\xa8\xea\xb3\xbc(Effect)\xeb\xa5\xbc \xec\xb2\x98\xeb\xa6\xac\xed\x95\xa0 \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x98 EffectSet \xec\x84\xa4\xec\xa0\x95\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#142 : \xed\x94\xbc\xea\xb2\xa9 \xed\x9a\xa8\xea\xb3\xbc(Effect)\xeb\xa5\xbc \xec\xb2\x98\xeb\xa6\xac\xed\x95\xa0 \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x98 EffectSet \xec\x84\xa4\xec\xa0\x95" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, EntityAsset), Z_Construct_UClass_UT4CharacterEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeEffectSetDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeEffectSetDBKey = { "InitializeEffectSetDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, InitializeEffectSetDBKey), Z_Construct_UScriptStruct_FT4EffectSetDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeEffectSetDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeEffectSetDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeWeaponDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeWeaponDBKey = { "InitializeWeaponDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, InitializeWeaponDBKey), Z_Construct_UScriptStruct_FT4WeaponDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeWeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeWeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : Stat \xeb\xa0\x88\xeb\xb2\xa8\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#114 : Stat \xeb\xa0\x88\xeb\xb2\xa8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey = { "InitializePlayerStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, InitializePlayerStatDBKey), Z_Construct_UScriptStruct_FT4PlayerStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel = { "InitializeLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, InitializeLevel), Z_Construct_UEnum_T4GameData_ET4GameStatLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_MoveSpeedData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #104, #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#104, #114" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_MoveSpeedData = { "MoveSpeedData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, MoveSpeedData), Z_Construct_UScriptStruct_FT4PlayerSpeedData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_MoveSpeedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_MoveSpeedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName = { "RaceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, RaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4PlayerDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "FT4PlayerDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeEffectSetDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeWeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_MoveSpeedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4PlayerTableRow",
		sizeof(FT4PlayerTableRow),
		alignof(FT4PlayerTableRow),
		Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PlayerTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PlayerTableRow"), sizeof(FT4PlayerTableRow), Get_Z_Construct_UScriptStruct_FT4PlayerTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PlayerTableRow_Hash() { return 3100356839U; }
class UScriptStruct* FT4PlayerSpeedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4PlayerSpeedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PlayerSpeedData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4PlayerSpeedData"), sizeof(FT4PlayerSpeedData), Get_Z_Construct_UScriptStruct_FT4PlayerSpeedData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4PlayerSpeedData>()
{
	return FT4PlayerSpeedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PlayerSpeedData(FT4PlayerSpeedData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4PlayerSpeedData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerSpeedData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerSpeedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PlayerSpeedData")),new UScriptStruct::TCppStructOps<FT4PlayerSpeedData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerSpeedData;
	struct Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CombatSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PlayerSpeedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_InPlaceRotationRate_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_InPlaceRotationRate = { "InPlaceRotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerSpeedData, InPlaceRotationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_InPlaceRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_InPlaceRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpHeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpHeightSpeed = { "JumpHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerSpeedData, JumpHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpMaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #109\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#109" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpMaxHeight = { "JumpMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerSpeedData, JumpMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #109\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#109" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerSpeedData, SprintSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_CombatSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50, #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#50, #108" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_CombatSpeed = { "CombatSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerSpeedData, CombatSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_CombatSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_CombatSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_DefaultSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_DefaultSpeed = { "DefaultSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerSpeedData, DefaultSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_DefaultSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_DefaultSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_InPlaceRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_JumpMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_CombatSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::NewProp_DefaultSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4PlayerSpeedData",
		sizeof(FT4PlayerSpeedData),
		alignof(FT4PlayerSpeedData),
		Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerSpeedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PlayerSpeedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PlayerSpeedData"), sizeof(FT4PlayerSpeedData), Get_Z_Construct_UScriptStruct_FT4PlayerSpeedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PlayerSpeedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PlayerSpeedData_Hash() { return 1251629676U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
