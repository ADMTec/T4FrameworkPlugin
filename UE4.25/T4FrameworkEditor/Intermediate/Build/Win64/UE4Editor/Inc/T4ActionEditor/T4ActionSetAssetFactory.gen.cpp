// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Assets/Factories/T4ActionSetAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionSetAssetFactory() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionSetAssetFactory_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionSetAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
// End Cross Module References
	void UT4ActionSetAssetFactory::StaticRegisterNativesUT4ActionSetAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionSetAssetFactory_NoRegister()
	{
		return UT4ActionSetAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionSetAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #24\n */" },
		{ "IncludePath", "Assets/Factories/T4ActionSetAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4ActionSetAssetFactory.h" },
		{ "ToolTip", "#24" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionSetAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::ClassParams = {
		&UT4ActionSetAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionSetAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionSetAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionSetAssetFactory, 1246168236);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionSetAssetFactory>()
	{
		return UT4ActionSetAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionSetAssetFactory(Z_Construct_UClass_UT4ActionSetAssetFactory, &UT4ActionSetAssetFactory::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionSetAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionSetAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
