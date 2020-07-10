// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/Assets/Factories/T4PropEntityAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PropEntityAssetFactory() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4PropEntityAssetFactory_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4PropEntityAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
// End Cross Module References
	void UT4PropEntityAssetFactory::StaticRegisterNativesUT4PropEntityAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4PropEntityAssetFactory_NoRegister()
	{
		return UT4PropEntityAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4PropEntityAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #35\n */" },
		{ "IncludePath", "Assets/Factories/T4PropEntityAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4PropEntityAssetFactory.h" },
		{ "ToolTip", "#35" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PropEntityAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::ClassParams = {
		&UT4PropEntityAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PropEntityAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PropEntityAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PropEntityAssetFactory, 3960349409);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4PropEntityAssetFactory>()
	{
		return UT4PropEntityAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PropEntityAssetFactory(Z_Construct_UClass_UT4PropEntityAssetFactory, &UT4PropEntityAssetFactory::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4PropEntityAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PropEntityAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
