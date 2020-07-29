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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSceneEnvironmentAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailSceneEnvironmentAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSceneEnvironmentAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewSceneEnvironmentAssetPath;
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
		{ "Comment", "/**\n  * #153\n */" },
		{ "IncludePath", "Settings/T4EngineUserSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/T4EngineUserSettings.h" },
		{ "ToolTip", "#153" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAssetPath_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #94\n" },
		{ "ModuleRelativePath", "Public/Settings/T4EngineUserSettings.h" },
		{ "ToolTip", "#94" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAssetPath = { "ThumbnailSceneEnvironmentAssetPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EngineUserSettings, ThumbnailSceneEnvironmentAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAssetPath_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Plugins/T4Framework/Config/DefaultT4Framework.ini\n" },
		{ "ModuleRelativePath", "Public/Settings/T4EngineUserSettings.h" },
		{ "ToolTip", "Plugins/T4Framework/Config/DefaultT4Framework.ini" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAssetPath = { "PreviewSceneEnvironmentAssetPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EngineUserSettings, PreviewSceneEnvironmentAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EngineUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_ThumbnailSceneEnvironmentAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EngineUserSettings_Statics::NewProp_PreviewSceneEnvironmentAssetPath,
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
	IMPLEMENT_CLASS(UT4EngineUserSettings, 4202743036);
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
