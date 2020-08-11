// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Private/Assets/Factories/T4PathSegmentDataFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PathSegmentDataFactory() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4PathSegmentDataFactory_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4PathSegmentDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
// End Cross Module References
	void UT4PathSegmentDataFactory::StaticRegisterNativesUT4PathSegmentDataFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4PathSegmentDataFactory_NoRegister()
	{
		return UT4PathSegmentDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4PathSegmentDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #155\n */" },
		{ "IncludePath", "Assets/Factories/T4PathSegmentDataFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4PathSegmentDataFactory.h" },
		{ "ToolTip", "#155" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PathSegmentDataFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::ClassParams = {
		&UT4PathSegmentDataFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PathSegmentDataFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PathSegmentDataFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PathSegmentDataFactory, 2153458598);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4PathSegmentDataFactory>()
	{
		return UT4PathSegmentDataFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PathSegmentDataFactory(Z_Construct_UClass_UT4PathSegmentDataFactory, &UT4PathSegmentDataFactory::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4PathSegmentDataFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PathSegmentDataFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
