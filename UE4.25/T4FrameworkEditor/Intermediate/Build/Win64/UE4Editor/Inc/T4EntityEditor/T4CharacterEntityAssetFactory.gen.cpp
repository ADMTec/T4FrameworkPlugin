// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/Assets/Factories/T4CharacterEntityAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CharacterEntityAssetFactory() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4CharacterEntityAssetFactory_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4CharacterEntityAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
// End Cross Module References
	void UT4CharacterEntityAssetFactory::StaticRegisterNativesUT4CharacterEntityAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4CharacterEntityAssetFactory_NoRegister()
	{
		return UT4CharacterEntityAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #39\n */" },
		{ "IncludePath", "Assets/Factories/T4CharacterEntityAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4CharacterEntityAssetFactory.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CharacterEntityAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::ClassParams = {
		&UT4CharacterEntityAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CharacterEntityAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CharacterEntityAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CharacterEntityAssetFactory, 3900574190);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4CharacterEntityAssetFactory>()
	{
		return UT4CharacterEntityAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CharacterEntityAssetFactory(Z_Construct_UClass_UT4CharacterEntityAssetFactory, &UT4CharacterEntityAssetFactory::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4CharacterEntityAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CharacterEntityAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
