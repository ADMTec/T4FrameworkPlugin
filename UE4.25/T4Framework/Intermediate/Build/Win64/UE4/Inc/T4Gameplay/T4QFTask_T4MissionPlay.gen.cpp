// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFTask_T4MissionPlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFTask_T4MissionPlay() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionPlay_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionPlay();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4SpawnAsset_NoRegister();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionRule();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionType();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4MissionTextDBKey();
// End Cross Module References
	void UT4QFTask_T4MissionPlay::StaticRegisterNativesUT4QFTask_T4MissionPlay()
	{
	}
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionPlay_NoRegister()
	{
		return UT4QFTask_T4MissionPlay::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionTextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionTextDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Task" },
		{ "IncludePath", "QuestFlow/T4QFTask_T4MissionPlay.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionPlay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionSpawnAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionPlay.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionSpawnAsset = { "MissionSpawnAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionPlay, MissionSpawnAsset), Z_Construct_UClass_UT4SpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionSpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionSpawnAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionPlay.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule = { "MissionRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionPlay, MissionRule), Z_Construct_UEnum_T4GameData_ET4GameMissionRule, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionPlay.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType = { "MissionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionPlay, MissionType), Z_Construct_UEnum_T4GameData_ET4GameMissionType, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionTextDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionTextDBKey = { "MissionTextDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionPlay, MissionTextDBKey), Z_Construct_UScriptStruct_FT4MissionTextDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionTextDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionSpawnAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::NewProp_MissionTextDBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFTask_T4MissionPlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::ClassParams = {
		&UT4QFTask_T4MissionPlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionPlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFTask_T4MissionPlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFTask_T4MissionPlay, 204729255);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFTask_T4MissionPlay>()
	{
		return UT4QFTask_T4MissionPlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFTask_T4MissionPlay(Z_Construct_UClass_UT4QFTask_T4MissionPlay, &UT4QFTask_T4MissionPlay::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFTask_T4MissionPlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFTask_T4MissionPlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
