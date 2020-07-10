// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4WorldExplorer/Private/Assets/Factories/T4EnvironmentAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EnvironmentAssetFactory() {}
// Cross Module References
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4EnvironmentAssetFactory_NoRegister();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4EnvironmentAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4WorldExplorer();
// End Cross Module References
	void UT4EnvironmentAssetFactory::StaticRegisterNativesUT4EnvironmentAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4EnvironmentAssetFactory_NoRegister()
	{
		return UT4EnvironmentAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #90\n */" },
		{ "IncludePath", "Assets/Factories/T4EnvironmentAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4EnvironmentAssetFactory.h" },
		{ "ToolTip", "#90" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EnvironmentAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::ClassParams = {
		&UT4EnvironmentAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EnvironmentAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EnvironmentAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EnvironmentAssetFactory, 2184106313);
	template<> T4WORLDEXPLORER_API UClass* StaticClass<UT4EnvironmentAssetFactory>()
	{
		return UT4EnvironmentAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EnvironmentAssetFactory(Z_Construct_UClass_UT4EnvironmentAssetFactory, &UT4EnvironmentAssetFactory::StaticClass, TEXT("/Script/T4WorldExplorer"), TEXT("UT4EnvironmentAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EnvironmentAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
