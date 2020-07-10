// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/Assets/Factories/T4CostumeEntityAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CostumeEntityAssetFactory() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4CostumeEntityAssetFactory_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4CostumeEntityAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
// End Cross Module References
	void UT4CostumeEntityAssetFactory::StaticRegisterNativesUT4CostumeEntityAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4CostumeEntityAssetFactory_NoRegister()
	{
		return UT4CostumeEntityAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #35\n */" },
		{ "IncludePath", "Assets/Factories/T4CostumeEntityAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4CostumeEntityAssetFactory.h" },
		{ "ToolTip", "#35" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CostumeEntityAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::ClassParams = {
		&UT4CostumeEntityAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CostumeEntityAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CostumeEntityAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CostumeEntityAssetFactory, 4117846512);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4CostumeEntityAssetFactory>()
	{
		return UT4CostumeEntityAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CostumeEntityAssetFactory(Z_Construct_UClass_UT4CostumeEntityAssetFactory, &UT4CostumeEntityAssetFactory::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4CostumeEntityAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CostumeEntityAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
