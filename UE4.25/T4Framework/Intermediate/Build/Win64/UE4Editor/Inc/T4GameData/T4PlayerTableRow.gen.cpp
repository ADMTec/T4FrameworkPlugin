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
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4VisualReactionData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CharacterEntityAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WeaponDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerLocomotionData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4CharacterShapeData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NameTextDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeWeaponDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeWeaponDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializePlayerStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializePlayerStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocomotionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RaceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameTextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NameTextDBKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PlayerTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ReactionData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ReactionData = { "ReactionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, ReactionData), Z_Construct_UScriptStruct_FT4VisualReactionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, EntityAsset), Z_Construct_UClass_UT4CharacterEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset_MetaData)) };
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
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey = { "InitializePlayerStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, InitializePlayerStatDBKey), Z_Construct_UScriptStruct_FT4PlayerStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_LocomotionData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #170\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#170" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_LocomotionData = { "LocomotionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, LocomotionData), Z_Construct_UScriptStruct_FT4PlayerLocomotionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_LocomotionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_LocomotionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ShapeData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #104, #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#104, #114" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ShapeData = { "ShapeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, ShapeData), Z_Construct_UScriptStruct_FT4CharacterShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ShapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ShapeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#163" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName = { "RaceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, RaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_NameTextDBKey_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_NameTextDBKey = { "NameTextDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, NameTextDBKey), Z_Construct_UScriptStruct_FT4NameTextDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_NameTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_NameTextDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// FT4PlayerDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "FT4PlayerDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializeWeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_InitializePlayerStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_LocomotionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_ShapeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_RaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_NameTextDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerTableRow_Statics::NewProp_UID,
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
	uint32 Get_Z_Construct_UScriptStruct_FT4PlayerTableRow_Hash() { return 654095151U; }
class UScriptStruct* FT4PlayerLocomotionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PlayerLocomotionData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4PlayerLocomotionData"), sizeof(FT4PlayerLocomotionData), Get_Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4PlayerLocomotionData>()
{
	return FT4PlayerLocomotionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PlayerLocomotionData(FT4PlayerLocomotionData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4PlayerLocomotionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerLocomotionData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerLocomotionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PlayerLocomotionData")),new UScriptStruct::TCppStructOps<FT4PlayerLocomotionData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4PlayerLocomotionData;
	struct Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PlayerLocomotionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_InPlaceRotationRate_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_InPlaceRotationRate = { "InPlaceRotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerLocomotionData, InPlaceRotationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_InPlaceRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_InPlaceRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpHeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpHeightSpeed = { "JumpHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerLocomotionData, JumpHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpMaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #154 : FName = StanceName\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#154 : FName = StanceName" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpMaxHeight = { "JumpMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerLocomotionData, JumpMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50, #108\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
		{ "ToolTip", "#50, #108" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds = { "StanceMoveSpeeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerLocomotionData, StanceMoveSpeeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_Key_KeyProp = { "StanceMoveSpeeds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_ValueProp = { "StanceMoveSpeeds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_DefaultMoveSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4PlayerTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_DefaultMoveSpeed = { "DefaultMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayerLocomotionData, DefaultMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_DefaultMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_DefaultMoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_InPlaceRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_JumpMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_StanceMoveSpeeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::NewProp_DefaultMoveSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4PlayerLocomotionData",
		sizeof(FT4PlayerLocomotionData),
		alignof(FT4PlayerLocomotionData),
		Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PlayerLocomotionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PlayerLocomotionData"), sizeof(FT4PlayerLocomotionData), Get_Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PlayerLocomotionData_Hash() { return 3605499816U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
