// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Settings/T4EngineUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EngineUserSettings() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4EngineUserSettings_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4EngineUserSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister();
// End Cross Module References
	void UT4EngineUserSettings::StaticRegisterNativesUT4EngineUserSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4EngineUserSettings_NoRegister()
	{
		return UT4EngineUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4EngineUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSceneEnvironmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailSceneEnvironmentAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSceneEnvironmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSceneEnvironmentAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EngineUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EngineUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/T4EngineUserSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/T4EngineUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #94\n" },
		{ "ModuleRelativePath", "Public/Settings/T4EngineUserSettings.h" },
		{ "ToolTip", "#94" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAsset = { "ThumbnailSceneEnvironmentAsset", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EngineUserSettings, ThumbnailSceneEnvironmentAsset), Z_Construct_UClass_UT4EnvironmentAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Plugins/T4Framework/Config/DefaultT4Framework.ini\n" },
		{ "ModuleRelativePath", "Public/Settings/T4EngineUserSettings.h" },
		{ "ToolTip", "Plugins/T4Framework/Config/DefaultT4Framework.ini" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAsset = { "PreviewSceneEnvironmentAsset", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EngineUserSettings, PreviewSceneEnvironmentAsset), Z_Construct_UClass_UT4EnvironmentAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EngineUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EngineUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EngineUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EngineUserSettings_Statics::ClassParams = {
		&UT4EngineUserSettings::StaticClass,
		"T4Framework",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4EngineUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4EngineUserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EngineUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EngineUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EngineUserSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EngineUserSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EngineUserSettings, 2894057294);
	template<> T4ENGINE_API UClass* StaticClass<UT4EngineUserSettings>()
	{
		return UT4EngineUserSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EngineUserSettings(Z_Construct_UClass_UT4EngineUserSettings, &UT4EngineUserSettings::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4EngineUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EngineUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
