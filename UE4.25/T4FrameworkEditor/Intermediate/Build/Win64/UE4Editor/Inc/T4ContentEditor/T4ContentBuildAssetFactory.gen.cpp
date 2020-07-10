// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/Assets/Factories/T4ContentBuildAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentBuildAssetFactory() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentBuildAssetFactory_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentBuildAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4ContentBuildAssetFactory::StaticRegisterNativesUT4ContentBuildAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentBuildAssetFactory_NoRegister()
	{
		return UT4ContentBuildAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #118\n */" },
		{ "IncludePath", "Assets/Factories/T4ContentBuildAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4ContentBuildAssetFactory.h" },
		{ "ToolTip", "#118" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentBuildAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::ClassParams = {
		&UT4ContentBuildAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentBuildAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentBuildAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentBuildAssetFactory, 4064563033);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4ContentBuildAssetFactory>()
	{
		return UT4ContentBuildAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentBuildAssetFactory(Z_Construct_UClass_UT4ContentBuildAssetFactory, &UT4ContentBuildAssetFactory::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4ContentBuildAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentBuildAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
