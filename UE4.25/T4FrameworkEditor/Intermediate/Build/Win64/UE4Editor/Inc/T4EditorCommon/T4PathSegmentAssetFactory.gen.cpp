// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Private/Assets/Factories/T4PathSegmentAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PathSegmentAssetFactory() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4PathSegmentAssetFactory_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4PathSegmentAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
// End Cross Module References
	void UT4PathSegmentAssetFactory::StaticRegisterNativesUT4PathSegmentAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4PathSegmentAssetFactory_NoRegister()
	{
		return UT4PathSegmentAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #155\n */" },
		{ "IncludePath", "Assets/Factories/T4PathSegmentAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4PathSegmentAssetFactory.h" },
		{ "ToolTip", "#155" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PathSegmentAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::ClassParams = {
		&UT4PathSegmentAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PathSegmentAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PathSegmentAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PathSegmentAssetFactory, 151755669);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4PathSegmentAssetFactory>()
	{
		return UT4PathSegmentAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PathSegmentAssetFactory(Z_Construct_UClass_UT4PathSegmentAssetFactory, &UT4PathSegmentAssetFactory::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4PathSegmentAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PathSegmentAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
