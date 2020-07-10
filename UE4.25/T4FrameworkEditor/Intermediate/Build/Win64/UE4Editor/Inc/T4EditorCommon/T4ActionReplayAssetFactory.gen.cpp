// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Private/Assets/Factories/T4ActionReplayAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionReplayAssetFactory() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4ActionReplayAssetFactory_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4ActionReplayAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
// End Cross Module References
	void UT4ActionReplayAssetFactory::StaticRegisterNativesUT4ActionReplayAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionReplayAssetFactory_NoRegister()
	{
		return UT4ActionReplayAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #39\n */" },
		{ "IncludePath", "Assets/Factories/T4ActionReplayAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/Factories/T4ActionReplayAssetFactory.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionReplayAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::ClassParams = {
		&UT4ActionReplayAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionReplayAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionReplayAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionReplayAssetFactory, 3616701882);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4ActionReplayAssetFactory>()
	{
		return UT4ActionReplayAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionReplayAssetFactory(Z_Construct_UClass_UT4ActionReplayAssetFactory, &UT4ActionReplayAssetFactory::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4ActionReplayAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionReplayAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
