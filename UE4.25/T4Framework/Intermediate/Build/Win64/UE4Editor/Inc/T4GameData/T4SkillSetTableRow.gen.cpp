// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4SkillSetTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SkillSetTableRow() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillSetTableRow();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillDBKey();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameUID();
// End Cross Module References
class UScriptStruct* FT4SkillSetTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillSetTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillSetTableRow, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SkillSetTableRow"), sizeof(FT4SkillSetTableRow), Get_Z_Construct_UScriptStruct_FT4SkillSetTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SkillSetTableRow>()
{
	return FT4SkillSetTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillSetTableRow(FT4SkillSetTableRow::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SkillSetTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillSetTableRow
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SkillSetTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillSetTableRow")),new UScriptStruct::TCppStructOps<FT4SkillSetTableRow>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SkillSetTableRow;
	struct Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityDBKey_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityDBKey_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityDBKey_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityDBKey_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityDBKey_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityDBKey_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityDBKey_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityDBKey_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_Dash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_Dash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_Air_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_Air;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_F;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_E_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_E;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKey_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDBKey_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayMode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayMode_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/\n */" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/DataDriven/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillSetTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_D_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// R\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
		{ "ToolTip", "R" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_D = { "AbilityDBKey_D", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AbilityDBKey_D), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_C_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// E\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
		{ "ToolTip", "E" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_C = { "AbilityDBKey_C", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AbilityDBKey_C), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_B_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// Q\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
		{ "ToolTip", "Q" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_B = { "AbilityDBKey_B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AbilityDBKey_B), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_A_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_A = { "AbilityDBKey_A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AbilityDBKey_A), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Dash_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Dash = { "AttackDBKey_Dash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_Dash), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Dash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Dash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Air_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Air = { "AttackDBKey_Air", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_Air), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Air_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Air_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_F_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_F = { "AttackDBKey_F", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_F), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_F_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_E_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_E = { "AttackDBKey_E", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_E), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_E_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_D_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_D = { "AttackDBKey_D", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_D), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_C_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_C = { "AttackDBKey_C", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_C), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_B_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_B = { "AttackDBKey_B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_B), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_A_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #T4_ADD_SKILL_TAG_DATA\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
		{ "ToolTip", "#T4_ADD_SKILL_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_A = { "AttackDBKey_A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, AttackDBKey_A), Z_Construct_UScriptStruct_FT4SkillDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, PlayMode), Z_Construct_UEnum_T4GameData_ET4GameSkillSetPlayMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, UID), Z_Construct_UScriptStruct_FT4GameUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4SkillSetDBRowDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4SkillSetTableRow.h" },
		{ "ToolTip", "FT4SkillSetDBRowDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillSetTableRow, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AbilityDBKey_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Dash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_Air,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_F,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_E,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_AttackDBKey_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_PlayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4SkillSetTableRow",
		sizeof(FT4SkillSetTableRow),
		alignof(FT4SkillSetTableRow),
		Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillSetTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillSetTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillSetTableRow"), sizeof(FT4SkillSetTableRow), Get_Z_Construct_UScriptStruct_FT4SkillSetTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillSetTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillSetTableRow_Hash() { return 4238644046U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
