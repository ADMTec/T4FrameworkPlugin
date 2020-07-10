// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/Assets/Factories/T4ContentSpawnAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentSpawnAssetFactory() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentSpawnAssetFactory_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentSpawnAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4ContentSpawnAssetFactory::StaticRegisterNativesUT4ContentSpawnAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentSpawnAssetFactory_NoRegister()
	{
		return UT4ContentSpawnAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #118\n */" },
		{ "IncludePath", "Assets/Factories/T4ContentSpawnAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4ContentSpawnAssetFactory.h" },
		{ "ToolTip", "#118" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentSpawnAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::ClassParams = {
		&UT4ContentSpawnAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentSpawnAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentSpawnAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentSpawnAssetFactory, 1699425757);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4ContentSpawnAssetFactory>()
	{
		return UT4ContentSpawnAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentSpawnAssetFactory(Z_Construct_UClass_UT4ContentSpawnAssetFactory, &UT4ContentSpawnAssetFactory::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4ContentSpawnAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentSpawnAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
