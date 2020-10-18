// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Classes/Factories/T4GameSpawnAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameSpawnAssetFactory() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4GameSpawnAssetFactory_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4GameSpawnAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
// End Cross Module References
	void UT4GameSpawnAssetFactory::StaticRegisterNativesUT4GameSpawnAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4GameSpawnAssetFactory_NoRegister()
	{
		return UT4GameSpawnAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #118\n */" },
		{ "IncludePath", "Factories/T4GameSpawnAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/T4GameSpawnAssetFactory.h" },
		{ "ToolTip", "#118" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameSpawnAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::ClassParams = {
		&UT4GameSpawnAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameSpawnAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameSpawnAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameSpawnAssetFactory, 425989470);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4GameSpawnAssetFactory>()
	{
		return UT4GameSpawnAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameSpawnAssetFactory(Z_Construct_UClass_UT4GameSpawnAssetFactory, &UT4GameSpawnAssetFactory::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4GameSpawnAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameSpawnAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
