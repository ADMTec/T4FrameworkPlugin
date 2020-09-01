// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Classes/ContentTable/T4EditorConstantDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EditorConstantDataTable() {}
// Cross Module References
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow();
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow();
	T4EDITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow();
// End Cross Module References
class UScriptStruct* FT4EditorConstantMasterTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantMasterTableRow"), sizeof(FT4EditorConstantMasterTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantMasterTableRow>()
{
	return FT4EditorConstantMasterTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantMasterTableRow(FT4EditorConstantMasterTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantMasterTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantMasterTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantMasterTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantMasterTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantMasterTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantMasterTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReactionConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StanceConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimSetConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagActionConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PlayTagActionConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagAttachmentConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PlayTagAttachmentConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagMaterialConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PlayTagMaterialConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullBodySkinConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FullBodySkinConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositePartConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CompositePartConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPointConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EquipPointConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPointConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActionPointConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimationConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponAnimationConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropAnimationConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PropAnimationConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterParagonSkillAnimationConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterParagonSkillAnimationConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterBasicSkillAnimationConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterBasicSkillAnimationConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSystemAnimationConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterSystemAnimationConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTagConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TimeTagConstantDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapZoneConstantDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MapZoneConstantDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantMasterTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ReactionConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#106" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ReactionConstantDataTable = { "ReactionConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, ReactionConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ReactionConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ReactionConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_StanceConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#73" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_StanceConstantDataTable = { "StanceConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, StanceConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_StanceConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_StanceConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_AnimSetConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #74\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#74" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_AnimSetConstantDataTable = { "AnimSetConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, AnimSetConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_AnimSetConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_AnimSetConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagActionConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #74\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#74" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagActionConstantDataTable = { "PlayTagActionConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, PlayTagActionConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagActionConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagActionConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagAttachmentConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #74\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#74" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagAttachmentConstantDataTable = { "PlayTagAttachmentConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, PlayTagAttachmentConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagAttachmentConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagAttachmentConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagMaterialConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #130\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#130" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagMaterialConstantDataTable = { "PlayTagMaterialConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, PlayTagMaterialConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagMaterialConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagMaterialConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_FullBodySkinConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #71\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#71" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_FullBodySkinConstantDataTable = { "FullBodySkinConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, FullBodySkinConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_FullBodySkinConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_FullBodySkinConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CompositePartConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #72\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#72" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CompositePartConstantDataTable = { "CompositePartConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, CompositePartConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CompositePartConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CompositePartConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_EquipPointConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #57\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#57" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_EquipPointConstantDataTable = { "EquipPointConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, EquipPointConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_EquipPointConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_EquipPointConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ActionPointConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #107\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#107" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ActionPointConstantDataTable = { "ActionPointConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, ActionPointConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ActionPointConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ActionPointConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_WeaponAnimationConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_WeaponAnimationConstantDataTable = { "WeaponAnimationConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, WeaponAnimationConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_WeaponAnimationConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_WeaponAnimationConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PropAnimationConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PropAnimationConstantDataTable = { "PropAnimationConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, PropAnimationConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PropAnimationConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PropAnimationConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterParagonSkillAnimationConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #39\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterParagonSkillAnimationConstantDataTable = { "CharacterParagonSkillAnimationConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, CharacterParagonSkillAnimationConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterParagonSkillAnimationConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterParagonSkillAnimationConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterBasicSkillAnimationConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #39\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterBasicSkillAnimationConstantDataTable = { "CharacterBasicSkillAnimationConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, CharacterBasicSkillAnimationConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterBasicSkillAnimationConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterBasicSkillAnimationConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterSystemAnimationConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterSystemAnimationConstantDataTable = { "CharacterSystemAnimationConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, CharacterSystemAnimationConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterSystemAnimationConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterSystemAnimationConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_TimeTagConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#92" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_TimeTagConstantDataTable = { "TimeTagConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, TimeTagConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_TimeTagConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_TimeTagConstantDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_MapZoneConstantDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_MapZoneConstantDataTable = { "MapZoneConstantDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantMasterTableRow, MapZoneConstantDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_MapZoneConstantDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_MapZoneConstantDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ReactionConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_StanceConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_AnimSetConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagActionConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagAttachmentConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PlayTagMaterialConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_FullBodySkinConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CompositePartConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_EquipPointConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_ActionPointConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_WeaponAnimationConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_PropAnimationConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterParagonSkillAnimationConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterBasicSkillAnimationConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_CharacterSystemAnimationConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_TimeTagConstantDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::NewProp_MapZoneConstantDataTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantMasterTableRow",
		sizeof(FT4EditorConstantMasterTableRow),
		alignof(FT4EditorConstantMasterTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantMasterTableRow"), sizeof(FT4EditorConstantMasterTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantMasterTableRow_Hash() { return 3698195236U; }
class UScriptStruct* FT4EditorConstantIntValueTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantIntValueTableRow"), sizeof(FT4EditorConstantIntValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantIntValueTableRow>()
{
	return FT4EditorConstantIntValueTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantIntValueTableRow(FT4EditorConstantIntValueTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantIntValueTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantIntValueTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantIntValueTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantIntValueTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantIntValueTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantIntValueTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantIntValueTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantIntValueTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantIntValueTableRow, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantIntValueTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantIntValueTableRow",
		sizeof(FT4EditorConstantIntValueTableRow),
		alignof(FT4EditorConstantIntValueTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantIntValueTableRow"), sizeof(FT4EditorConstantIntValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantIntValueTableRow_Hash() { return 642322485U; }
class UScriptStruct* FT4EditorConstantFloatValueTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantFloatValueTableRow"), sizeof(FT4EditorConstantFloatValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantFloatValueTableRow>()
{
	return FT4EditorConstantFloatValueTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantFloatValueTableRow(FT4EditorConstantFloatValueTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantFloatValueTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantFloatValueTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantFloatValueTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantFloatValueTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantFloatValueTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantFloatValueTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantFloatValueTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantFloatValueTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantFloatValueTableRow, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantFloatValueTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantFloatValueTableRow",
		sizeof(FT4EditorConstantFloatValueTableRow),
		alignof(FT4EditorConstantFloatValueTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantFloatValueTableRow"), sizeof(FT4EditorConstantFloatValueTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantFloatValueTableRow_Hash() { return 53619701U; }
class UScriptStruct* FT4EditorConstantNameTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4EDITORCOMMON_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow, Z_Construct_UPackage__Script_T4EditorCommon(), TEXT("T4EditorConstantNameTableRow"), sizeof(FT4EditorConstantNameTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash());
	}
	return Singleton;
}
template<> T4EDITORCOMMON_API UScriptStruct* StaticStruct<FT4EditorConstantNameTableRow>()
{
	return FT4EditorConstantNameTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorConstantNameTableRow(FT4EditorConstantNameTableRow::StaticStruct, TEXT("/Script/T4EditorCommon"), TEXT("T4EditorConstantNameTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantNameTableRow
{
	FScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantNameTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorConstantNameTableRow")),new UScriptStruct::TCppStructOps<FT4EditorConstantNameTableRow>);
	}
} ScriptStruct_T4EditorCommon_StaticRegisterNativesFT4EditorConstantNameTableRow;
	struct Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/\n */" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/DataDriven/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorConstantNameTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantNameTableRow, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/ContentTable/T4EditorConstantDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorConstantNameTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4EditorConstantNameTableRow",
		sizeof(FT4EditorConstantNameTableRow),
		alignof(FT4EditorConstantNameTableRow),
		Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EditorCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorConstantNameTableRow"), sizeof(FT4EditorConstantNameTableRow), Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorConstantNameTableRow_Hash() { return 3156882678U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
