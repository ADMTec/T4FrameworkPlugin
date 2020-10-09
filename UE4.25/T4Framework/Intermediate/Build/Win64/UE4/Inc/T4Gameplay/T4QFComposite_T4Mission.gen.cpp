// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFComposite_T4Mission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFComposite_T4Mission() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFComposite_T4Mission_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFComposite_T4Mission();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameWorldSettings();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4SpawnAsset_NoRegister();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionRule();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameMissionType();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4MissionTextDBKey();
// End Cross Module References
	void UT4QFComposite_T4Mission::StaticRegisterNativesUT4QFComposite_T4Mission()
	{
	}
	UClass* Z_Construct_UClass_UT4QFComposite_T4Mission_NoRegister()
	{
		return UT4QFComposite_T4Mission::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFComposite_T4Mission_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideWorldSettings;
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
	UObject* (*const Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTComposite_Sequence,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFComposite_T4Mission.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Mission.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_OverrideWorldSettings_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_OverrideWorldSettings = { "OverrideWorldSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFComposite_T4Mission, OverrideWorldSettings), Z_Construct_UScriptStruct_FT4GameWorldSettings, METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_OverrideWorldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_OverrideWorldSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionSpawnAsset_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Mission.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionSpawnAsset = { "MissionSpawnAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFComposite_T4Mission, MissionSpawnAsset), Z_Construct_UClass_UT4SpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionSpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionSpawnAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Mission.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule = { "MissionRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFComposite_T4Mission, MissionRule), Z_Construct_UEnum_T4GameData_ET4GameMissionRule, METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Mission.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType = { "MissionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFComposite_T4Mission, MissionType), Z_Construct_UEnum_T4GameData_ET4GameMissionType, METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionTextDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionTextDBKey = { "MissionTextDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFComposite_T4Mission, MissionTextDBKey), Z_Construct_UScriptStruct_FT4MissionTextDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionTextDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_OverrideWorldSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionSpawnAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::NewProp_MissionTextDBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFComposite_T4Mission>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::ClassParams = {
		&UT4QFComposite_T4Mission::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFComposite_T4Mission()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFComposite_T4Mission_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFComposite_T4Mission, 1901620791);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFComposite_T4Mission>()
	{
		return UT4QFComposite_T4Mission::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFComposite_T4Mission(Z_Construct_UClass_UT4QFComposite_T4Mission, &UT4QFComposite_T4Mission::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFComposite_T4Mission"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFComposite_T4Mission);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
