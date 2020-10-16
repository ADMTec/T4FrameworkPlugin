// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Public/Settings/T4GameDataSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameDataSettings() {}
// Cross Module References
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameDataSettings_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameDataSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UT4GameDataSettings::StaticRegisterNativesUT4GameDataSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4GameDataSettings_NoRegister()
	{
		return UT4GameDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMasterDataTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GameMasterDataTableAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameDataSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "T4GameData" },
		{ "IncludePath", "Settings/T4GameDataSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/T4GameDataSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameDataSettings_Statics::NewProp_GameMasterDataTableAsset_MetaData[] = {
		{ "Category", "Game Master" },
		{ "Comment", "// Plugins/T4Framework/Config/DefaultT4Framework.ini\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameDataSettings.h" },
		{ "ToolTip", "Plugins/T4Framework/Config/DefaultT4Framework.ini" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4GameDataSettings_Statics::NewProp_GameMasterDataTableAsset = { "GameMasterDataTableAsset", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameDataSettings, GameMasterDataTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4GameDataSettings_Statics::NewProp_GameMasterDataTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameDataSettings_Statics::NewProp_GameMasterDataTableAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4GameDataSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameDataSettings_Statics::NewProp_GameMasterDataTableAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameDataSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameDataSettings_Statics::ClassParams = {
		&UT4GameDataSettings::StaticClass,
		"T4Framework",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4GameDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameDataSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameDataSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameDataSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameDataSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameDataSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameDataSettings, 3220877617);
	template<> T4GAMEDATA_API UClass* StaticClass<UT4GameDataSettings>()
	{
		return UT4GameDataSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameDataSettings(Z_Construct_UClass_UT4GameDataSettings, &UT4GameDataSettings::StaticClass, TEXT("/Script/T4GameData"), TEXT("UT4GameDataSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameDataSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
