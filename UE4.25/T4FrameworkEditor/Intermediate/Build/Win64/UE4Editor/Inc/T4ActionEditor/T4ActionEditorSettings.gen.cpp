// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Settings/T4ActionEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionEditorSettings() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionEditorSettings_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionEditorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister();
// End Cross Module References
	void UT4ActionEditorSettings::StaticRegisterNativesUT4ActionEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionEditorSettings_NoRegister()
	{
		return UT4ActionEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionAnchorDefaultEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActionAnchorDefaultEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/T4ActionEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/T4ActionEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionEditorSettings_Statics::NewProp_ActionAnchorDefaultEntityAsset_MetaData[] = {
		{ "Category", "EditorAnchorEntity" },
		{ "Comment", "// Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini\n" },
		{ "ModuleRelativePath", "Private/Settings/T4ActionEditorSettings.h" },
		{ "ToolTip", "Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4ActionEditorSettings_Statics::NewProp_ActionAnchorDefaultEntityAsset = { "ActionAnchorDefaultEntityAsset", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionEditorSettings, ActionAnchorDefaultEntityAsset), Z_Construct_UClass_UT4ActorEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ActionEditorSettings_Statics::NewProp_ActionAnchorDefaultEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionEditorSettings_Statics::NewProp_ActionAnchorDefaultEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionEditorSettings_Statics::NewProp_ActionAnchorDefaultEntityAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionEditorSettings_Statics::ClassParams = {
		&UT4ActionEditorSettings::StaticClass,
		"T4FrameworkEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionEditorSettings, 2520398675);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionEditorSettings>()
	{
		return UT4ActionEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionEditorSettings(Z_Construct_UClass_UT4ActionEditorSettings, &UT4ActionEditorSettings::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
