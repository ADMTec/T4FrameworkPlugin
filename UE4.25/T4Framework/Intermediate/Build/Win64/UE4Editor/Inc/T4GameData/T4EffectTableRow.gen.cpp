// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4EffectTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EffectTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPakAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectStatDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4EffectShapeData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEffectType();
// End Cross Module References
class UScriptStruct* FT4EffectTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4EffectTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EffectTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4EffectTableRow"), sizeof(FT4EffectTableRow), Get_Z_Construct_UScriptStruct_FT4EffectTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4EffectTableRow>()
{
	return FT4EffectTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EffectTableRow(FT4EffectTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4EffectTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EffectTableRow")),new UScriptStruct::TCppStructOps<FT4EffectTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4EffectTableRow;
	struct Z_Construct_UScriptStruct_FT4EffectTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultActionPakAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainEffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainEffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectStatDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectStatDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectShapeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectShapeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EffectTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_DefaultActionPakAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #68\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#68" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_DefaultActionPakAsset = { "DefaultActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectTableRow, DefaultActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_DefaultActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_DefaultActionPakAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_ChainEffectDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#114 : \xea\xb8\xb0\xeb\xb3\xb8 Stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_ChainEffectDBKey = { "ChainEffectDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectTableRow, ChainEffectDBKey), Z_Construct_UScriptStruct_FT4EffectDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_ChainEffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_ChainEffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectStatDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectStatDBKey = { "EffectStatDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectTableRow, EffectStatDBKey), Z_Construct_UScriptStruct_FT4EffectStatDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectStatDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectStatDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectShapeData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectShapeData = { "EffectShapeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectTableRow, EffectShapeData), Z_Construct_UScriptStruct_FT4EffectShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectShapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectShapeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #T4_ADD_EFFECT_TAG_DATA\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#T4_ADD_EFFECT_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_DefaultActionPakAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_ChainEffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_EffectShapeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4EffectTableRow",
		sizeof(FT4EffectTableRow),
		alignof(FT4EffectTableRow),
		Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EffectTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EffectTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EffectTableRow"), sizeof(FT4EffectTableRow), Get_Z_Construct_UScriptStruct_FT4EffectTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EffectTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EffectTableRow_Hash() { return 3645560140U; }
class UScriptStruct* FT4EffectShapeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4EffectShapeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EffectShapeData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4EffectShapeData"), sizeof(FT4EffectShapeData), Get_Z_Construct_UScriptStruct_FT4EffectShapeData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4EffectShapeData>()
{
	return FT4EffectShapeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EffectShapeData(FT4EffectShapeData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4EffectShapeData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectShapeData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4EffectShapeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EffectShapeData")),new UScriptStruct::TCppStructOps<FT4EffectShapeData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4EffectShapeData;
	struct Z_Construct_UScriptStruct_FT4EffectShapeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAreaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAreaRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAreaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAreaRange;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EffectShapeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MaxAreaRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : ET4GameEffectType::AreaDamage\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#114 : ET4GameEffectType::AreaDamage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MaxAreaRange = { "MaxAreaRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, MaxAreaRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MaxAreaRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MaxAreaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MinAreaRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MinAreaRange = { "MinAreaRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, MinAreaRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MinAreaRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MinAreaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeightSpeed_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #135 : ET4GameAttackType Air\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#135 : ET4GameAttackType Air" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeightSpeed = { "MoveMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, MoveMaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeight_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeight = { "MoveMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, MoveMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxDistance_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxDistance = { "MoveMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, MoveMaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType = { "MoveAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, MoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_HitDelayTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #68\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
		{ "ToolTip", "#68" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_HitDelayTimeSec = { "HitDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, HitDelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_HitDelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_HitDelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4EffectTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EffectShapeData, EffectType), Z_Construct_UEnum_T4GameData_ET4GameEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MaxAreaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MinAreaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_MoveAngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_HitDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::NewProp_EffectType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4EffectShapeData",
		sizeof(FT4EffectShapeData),
		alignof(FT4EffectShapeData),
		Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EffectShapeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EffectShapeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EffectShapeData"), sizeof(FT4EffectShapeData), Get_Z_Construct_UScriptStruct_FT4EffectShapeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EffectShapeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EffectShapeData_Hash() { return 1749874431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
