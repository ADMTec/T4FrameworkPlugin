// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Assets/Factories/T4ActionPakAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionPakAssetFactory() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionPakAssetFactory_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionPakAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
// End Cross Module References
	void UT4ActionPakAssetFactory::StaticRegisterNativesUT4ActionPakAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionPakAssetFactory_NoRegister()
	{
		return UT4ActionPakAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionPakAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #24\n */" },
		{ "IncludePath", "Assets/Factories/T4ActionPakAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4ActionPakAssetFactory.h" },
		{ "ToolTip", "#24" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionPakAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::ClassParams = {
		&UT4ActionPakAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionPakAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionPakAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionPakAssetFactory, 3908715571);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionPakAssetFactory>()
	{
		return UT4ActionPakAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionPakAssetFactory(Z_Construct_UClass_UT4ActionPakAssetFactory, &UT4ActionPakAssetFactory::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionPakAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionPakAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
