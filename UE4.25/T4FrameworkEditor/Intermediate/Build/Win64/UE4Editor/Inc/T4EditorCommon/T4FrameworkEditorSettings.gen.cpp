// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Public/Settings/T4FrameworkEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4FrameworkEditorSettings() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4FrameworkEditorSettings_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4FrameworkEditorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UT4FrameworkEditorSettings::StaticRegisterNativesUT4FrameworkEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4FrameworkEditorSettings_NoRegister()
	{
		return UT4FrameworkEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4FrameworkEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltinConstantMasterLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BuiltinConstantMasterLanguage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltinConstantMasterDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BuiltinConstantMasterDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltinGameModeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltinGameModeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltinGameInstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltinGameInstanceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "IncludePath", "Settings/T4FrameworkEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/T4FrameworkEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterLanguage_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #158\n" },
		{ "ModuleRelativePath", "Public/Settings/T4FrameworkEditorSettings.h" },
		{ "ToolTip", "#158" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterLanguage = { "BuiltinConstantMasterLanguage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4FrameworkEditorSettings, BuiltinConstantMasterLanguage), METADATA_PARAMS(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterLanguage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterDataTable_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #56\n" },
		{ "ModuleRelativePath", "Public/Settings/T4FrameworkEditorSettings.h" },
		{ "ToolTip", "#56" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterDataTable = { "BuiltinConstantMasterDataTable", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4FrameworkEditorSettings, BuiltinConstantMasterDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameModeClass_MetaData[] = {
		{ "Category", "PlayMode" },
		{ "Comment", "// #56\n" },
		{ "ModuleRelativePath", "Public/Settings/T4FrameworkEditorSettings.h" },
		{ "ToolTip", "#56" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameModeClass = { "BuiltinGameModeClass", nullptr, (EPropertyFlags)0x0010000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4FrameworkEditorSettings, BuiltinGameModeClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameModeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameModeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameInstanceClass_MetaData[] = {
		{ "Category", "PlayMode" },
		{ "Comment", "// Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini\n" },
		{ "ModuleRelativePath", "Public/Settings/T4FrameworkEditorSettings.h" },
		{ "ToolTip", "Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameInstanceClass = { "BuiltinGameInstanceClass", nullptr, (EPropertyFlags)0x0010000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4FrameworkEditorSettings, BuiltinGameInstanceClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameInstanceClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterLanguage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinConstantMasterDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameModeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::NewProp_BuiltinGameInstanceClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4FrameworkEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::ClassParams = {
		&UT4FrameworkEditorSettings::StaticClass,
		"T4FrameworkEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4FrameworkEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4FrameworkEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4FrameworkEditorSettings, 1473476841);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4FrameworkEditorSettings>()
	{
		return UT4FrameworkEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4FrameworkEditorSettings(Z_Construct_UClass_UT4FrameworkEditorSettings, &UT4FrameworkEditorSettings::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4FrameworkEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4FrameworkEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
