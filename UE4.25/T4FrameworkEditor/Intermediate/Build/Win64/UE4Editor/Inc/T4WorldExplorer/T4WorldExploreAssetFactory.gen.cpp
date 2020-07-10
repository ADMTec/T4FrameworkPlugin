// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4WorldExplorer/Private/Assets/Factories/T4WorldExploreAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldExploreAssetFactory() {}
// Cross Module References
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldExploreAssetFactory_NoRegister();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldExploreAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4WorldExplorer();
// End Cross Module References
	void UT4WorldExploreAssetFactory::StaticRegisterNativesUT4WorldExploreAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldExploreAssetFactory_NoRegister()
	{
		return UT4WorldExploreAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #83\n */" },
		{ "IncludePath", "Assets/Factories/T4WorldExploreAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4WorldExploreAssetFactory.h" },
		{ "ToolTip", "#83" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldExploreAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::ClassParams = {
		&UT4WorldExploreAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldExploreAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldExploreAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldExploreAssetFactory, 2130296456);
	template<> T4WORLDEXPLORER_API UClass* StaticClass<UT4WorldExploreAssetFactory>()
	{
		return UT4WorldExploreAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldExploreAssetFactory(Z_Construct_UClass_UT4WorldExploreAssetFactory, &UT4WorldExploreAssetFactory::StaticClass, TEXT("/Script/T4WorldExplorer"), TEXT("UT4WorldExploreAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldExploreAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
