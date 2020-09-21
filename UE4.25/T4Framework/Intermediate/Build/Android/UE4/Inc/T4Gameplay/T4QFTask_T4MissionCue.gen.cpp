// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFTask_T4MissionCue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFTask_T4MissionCue() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionCue_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionCue();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4SpawnAsset_NoRegister();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionRule();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TextDBKey();
// End Cross Module References
	void UT4QFTask_T4MissionCue::StaticRegisterNativesUT4QFTask_T4MissionCue()
	{
	}
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionCue_NoRegister()
	{
		return UT4QFTask_T4MissionCue::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionSpawnAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MissionSpawnAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MissionRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MissionRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MissionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MissionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Task" },
		{ "IncludePath", "QuestFlow/T4QFTask_T4MissionCue.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeScale_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bApplyTimeSync" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeScale = { "WorldTimeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, WorldTimeScale), METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bApplyTimeSync" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, WorldTimeHour), METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeHour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
	};
#endif
	void Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync_SetBit(void* Obj)
	{
		((UT4QFTask_T4MissionCue*)Obj)->bApplyTimeSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync = { "bApplyTimeSync", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4QFTask_T4MissionCue), &Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionSpawnAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionSpawnAsset = { "MissionSpawnAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, MissionSpawnAsset), Z_Construct_UClass_UT4SpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionSpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionSpawnAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule = { "MissionRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, MissionRule), Z_Construct_UEnum_T4GameData_ET4GameMissionRule, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType = { "MissionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, MissionType), Z_Construct_UEnum_T4GameData_ET4GameMissionType, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionGuid_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionGuid = { "MissionGuid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, MissionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_TextDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionCue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_TextDBKey = { "TextDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionCue, TextDBKey), Z_Construct_UScriptStruct_FT4TextDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_TextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_TextDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_WorldTimeHour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_bApplyTimeSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionSpawnAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_MissionGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::NewProp_TextDBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFTask_T4MissionCue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::ClassParams = {
		&UT4QFTask_T4MissionCue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionCue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFTask_T4MissionCue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFTask_T4MissionCue, 1361820057);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFTask_T4MissionCue>()
	{
		return UT4QFTask_T4MissionCue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFTask_T4MissionCue(Z_Construct_UClass_UT4QFTask_T4MissionCue, &UT4QFTask_T4MissionCue::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFTask_T4MissionCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFTask_T4MissionCue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
