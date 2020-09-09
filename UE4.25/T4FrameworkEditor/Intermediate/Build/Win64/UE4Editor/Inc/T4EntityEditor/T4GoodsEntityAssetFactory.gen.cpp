// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/Assets/Factories/T4GoodsEntityAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GoodsEntityAssetFactory() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4GoodsEntityAssetFactory_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4GoodsEntityAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
// End Cross Module References
	void UT4GoodsEntityAssetFactory::StaticRegisterNativesUT4GoodsEntityAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4GoodsEntityAssetFactory_NoRegister()
	{
		return UT4GoodsEntityAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #164\n */" },
		{ "IncludePath", "Assets/Factories/T4GoodsEntityAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4GoodsEntityAssetFactory.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GoodsEntityAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::ClassParams = {
		&UT4GoodsEntityAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GoodsEntityAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GoodsEntityAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GoodsEntityAssetFactory, 473159106);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4GoodsEntityAssetFactory>()
	{
		return UT4GoodsEntityAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GoodsEntityAssetFactory(Z_Construct_UClass_UT4GoodsEntityAssetFactory, &UT4GoodsEntityAssetFactory::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4GoodsEntityAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GoodsEntityAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
