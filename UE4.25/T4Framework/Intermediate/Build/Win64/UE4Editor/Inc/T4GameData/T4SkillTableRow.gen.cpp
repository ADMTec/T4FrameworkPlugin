// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4SkillTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SkillTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPakAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillVisualData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillShapeData();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameFindTarget();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameAttackType();
// End Cross Module References
class UScriptStruct* FT4SkillTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillTableRow"), sizeof(FT4SkillTableRow), Get_Z_Construct_UScriptStruct_FT4SkillTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillTableRow>()
{
	return FT4SkillTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillTableRow(FT4SkillTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillTableRow")),new UScriptStruct::TCppStructOps<FT4SkillTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillTableRow;
	struct Z_Construct_UScriptStruct_FT4SkillTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicateActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IndicateActionPakAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CancelActionPakAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CastingActionPakAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultActionPakAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillVisualData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillVisualData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillShapeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillShapeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_IndicateActionPakAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #135\n" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_IndicateActionPakAsset = { "IndicateActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, IndicateActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_IndicateActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_IndicateActionPakAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CancelActionPakAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #117 : bAiming\n" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#117 : bAiming" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CancelActionPakAsset = { "CancelActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, CancelActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CancelActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CancelActionPakAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CastingActionPakAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CastingActionPakAsset = { "CastingActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, CastingActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CastingActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CastingActionPakAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_DefaultActionPakAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_DefaultActionPakAsset = { "DefaultActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, DefaultActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_DefaultActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_DefaultActionPakAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillStatDBKey = { "SkillStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, SkillStatDBKey), Z_Construct_UScriptStruct_FT4SkillStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillVisualData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillVisualData = { "SkillVisualData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, SkillVisualData), Z_Construct_UScriptStruct_FT4SkillVisualData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillVisualData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillVisualData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillShapeData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillShapeData = { "SkillShapeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, SkillShapeData), Z_Construct_UScriptStruct_FT4SkillShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillShapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillShapeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #T4_ADD_SKILL_CONTENT_TAG \n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#T4_ADD_SKILL_CONTENT_TAG" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_IndicateActionPakAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CancelActionPakAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_CastingActionPakAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_DefaultActionPakAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillVisualData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_SkillShapeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4SkillTableRow",
		sizeof(FT4SkillTableRow),
		alignof(FT4SkillTableRow),
		Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillTableRow"), sizeof(FT4SkillTableRow), Get_Z_Construct_UScriptStruct_FT4SkillTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillTableRow_Hash() { return 1441096689U; }
class UScriptStruct* FT4SkillVisualData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillVisualData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillVisualData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillVisualData"), sizeof(FT4SkillVisualData), Get_Z_Construct_UScriptStruct_FT4SkillVisualData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillVisualData>()
{
	return FT4SkillVisualData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillVisualData(FT4SkillVisualData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillVisualData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillVisualData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillVisualData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillVisualData")),new UScriptStruct::TCppStructOps<FT4SkillVisualData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillVisualData;
	struct Z_Construct_UScriptStruct_FT4SkillVisualData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingPitchAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#127" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillVisualData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::NewProp_AimingPitchAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "-45.0" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::NewProp_AimingPitchAngle = { "AimingPitchAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillVisualData, AimingPitchAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::NewProp_AimingPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::NewProp_AimingPitchAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::NewProp_AimingPitchAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SkillVisualData",
		sizeof(FT4SkillVisualData),
		alignof(FT4SkillVisualData),
		Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillVisualData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillVisualData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillVisualData"), sizeof(FT4SkillVisualData), Get_Z_Construct_UScriptStruct_FT4SkillVisualData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillVisualData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillVisualData_Hash() { return 4178615520U; }
class UScriptStruct* FT4SkillShapeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillShapeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillShapeData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillShapeData"), sizeof(FT4SkillShapeData), Get_Z_Construct_UScriptStruct_FT4SkillShapeData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillShapeData>()
{
	return FT4SkillShapeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillShapeData(FT4SkillShapeData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillShapeData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillShapeData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillShapeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillShapeData")),new UScriptStruct::TCppStructOps<FT4SkillShapeData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillShapeData;
	struct Z_Construct_UScriptStruct_FT4SkillShapeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHitOverlapEvent_MetaData[];
#endif
		static void NewProp_bUseHitOverlapEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHitOverlapEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FindTargetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FindTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAngleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAngleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAngleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCasting_MetaData[];
#endif
		static void NewProp_bCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCasting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockOn_MetaData[];
#endif
		static void NewProp_bLockOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveable_MetaData[];
#endif
		static void NewProp_bMoveable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108, #114\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#108, #114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillShapeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent_SetBit(void* Obj)
	{
		((FT4SkillShapeData*)Obj)->bUseHitOverlapEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent = { "bUseHitOverlapEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SkillShapeData), &Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#63" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType = { "FindTargetType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, FindTargetType), Z_Construct_UEnum_T4GameData_ET4GameFindTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, ProjectileSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_ProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_ProjectileSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : ET4GameAttackType Air\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#135 : ET4GameAttackType Air" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeightSpeed = { "MoveMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, MoveMaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeight = { "MoveMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, MoveMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxDistance_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxDistance = { "MoveMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, MoveMaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112, #113 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * Speed (1 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xea\xb8\xb0\xeb\xb3\xb8\xea\xb0\x92 \xec\x82\xac\xec\x9a\xa9)\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#112, #113 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * Speed (1 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xea\xb8\xb0\xeb\xb3\xb8\xea\xb0\x92 \xec\x82\xac\xec\x9a\xa9)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType = { "MoveAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, MoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_RotationRateSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #113, #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#113, #135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_RotationRateSpeed = { "RotationRateSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, RotationRateSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_RotationRateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_RotationRateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #113\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#113" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting_SetBit(void* Obj)
	{
		((FT4SkillShapeData*)Obj)->bCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting = { "bCasting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SkillShapeData), &Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn_SetBit(void* Obj)
	{
		((FT4SkillShapeData*)Obj)->bLockOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn = { "bLockOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SkillShapeData), &Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable_SetBit(void* Obj)
	{
		((FT4SkillShapeData*)Obj)->bMoveable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable = { "bMoveable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SkillShapeData), &Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_HitDelayTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
		{ "ToolTip", "#63" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_HitDelayTimeSec = { "HitDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, HitDelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_HitDelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_HitDelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillShapeData, AttackType), Z_Construct_UEnum_T4GameData_ET4GameAttackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bUseHitOverlapEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_FindTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_ProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_MoveAngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_RotationRateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bCasting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bLockOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_bMoveable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_HitDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::NewProp_AttackType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SkillShapeData",
		sizeof(FT4SkillShapeData),
		alignof(FT4SkillShapeData),
		Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillShapeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillShapeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillShapeData"), sizeof(FT4SkillShapeData), Get_Z_Construct_UScriptStruct_FT4SkillShapeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillShapeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillShapeData_Hash() { return 2432679513U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
