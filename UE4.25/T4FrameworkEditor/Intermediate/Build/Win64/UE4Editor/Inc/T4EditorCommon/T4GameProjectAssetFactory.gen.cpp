// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Classes/Factories/T4GameProjectAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameProjectAssetFactory() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4GameProjectAssetFactory_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4GameProjectAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
// End Cross Module References
	void UT4GameProjectAssetFactory::StaticRegisterNativesUT4GameProjectAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4GameProjectAssetFactory_NoRegister()
	{
		return UT4GameProjectAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameProjectAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #118\n */" },
		{ "IncludePath", "Factories/T4GameProjectAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/T4GameProjectAssetFactory.h" },
		{ "ToolTip", "#118" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameProjectAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::ClassParams = {
		&UT4GameProjectAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameProjectAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameProjectAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameProjectAssetFactory, 1307813799);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4GameProjectAssetFactory>()
	{
		return UT4GameProjectAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameProjectAssetFactory(Z_Construct_UClass_UT4GameProjectAssetFactory, &UT4GameProjectAssetFactory::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4GameProjectAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameProjectAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
