// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/Settings/T4ContentEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentEditorSettings() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentEditorSettings_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentEditorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UT4ContentEditorSettings::StaticRegisterNativesUT4ContentEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentEditorSettings_NoRegister()
	{
		return UT4ContentEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentAnchorNoneEntityAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentAnchorNoneEntityAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentAnchorPropEntityAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentAnchorPropEntityAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentAnchorCharacterEntityAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentAnchorCharacterEntityAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RacesConstantTablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RacesConstantTablePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "IncludePath", "Settings/T4ContentEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/T4ContentEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorNoneEntityAssetPath_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Private/Settings/T4ContentEditorSettings.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorNoneEntityAssetPath = { "ContentAnchorNoneEntityAssetPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentEditorSettings, ContentAnchorNoneEntityAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorNoneEntityAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorNoneEntityAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorPropEntityAssetPath_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Private/Settings/T4ContentEditorSettings.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorPropEntityAssetPath = { "ContentAnchorPropEntityAssetPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentEditorSettings, ContentAnchorPropEntityAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorPropEntityAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorPropEntityAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorCharacterEntityAssetPath_MetaData[] = {
		{ "Category", "ConstantTable" },
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Private/Settings/T4ContentEditorSettings.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorCharacterEntityAssetPath = { "ContentAnchorCharacterEntityAssetPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentEditorSettings, ContentAnchorCharacterEntityAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorCharacterEntityAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorCharacterEntityAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_RacesConstantTablePath_MetaData[] = {
		{ "Category", "Game Constant Table" },
		{ "Comment", "// Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini\n" },
		{ "ModuleRelativePath", "Private/Settings/T4ContentEditorSettings.h" },
		{ "ToolTip", "Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_RacesConstantTablePath = { "RacesConstantTablePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentEditorSettings, RacesConstantTablePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_RacesConstantTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_RacesConstantTablePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ContentEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorNoneEntityAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorPropEntityAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_ContentAnchorCharacterEntityAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentEditorSettings_Statics::NewProp_RacesConstantTablePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentEditorSettings_Statics::ClassParams = {
		&UT4ContentEditorSettings::StaticClass,
		"T4FrameworkEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ContentEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentEditorSettings, 2437826751);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4ContentEditorSettings>()
	{
		return UT4ContentEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentEditorSettings(Z_Construct_UClass_UT4ContentEditorSettings, &UT4ContentEditorSettings::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4ContentEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
