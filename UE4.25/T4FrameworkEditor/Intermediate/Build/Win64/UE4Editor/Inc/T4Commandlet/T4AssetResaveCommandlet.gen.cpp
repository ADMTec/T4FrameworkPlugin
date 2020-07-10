// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Commandlet/Private/Commandlets/T4AssetResaveCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AssetResaveCommandlet() {}
// Cross Module References
	T4COMMANDLET_API UClass* Z_Construct_UClass_UT4AssetResaveCommandlet_NoRegister();
	T4COMMANDLET_API UClass* Z_Construct_UClass_UT4AssetResaveCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_T4Commandlet();
// End Cross Module References
	void UT4AssetResaveCommandlet::StaticRegisterNativesUT4AssetResaveCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UT4AssetResaveCommandlet_NoRegister()
	{
		return UT4AssetResaveCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UT4AssetResaveCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #129\n */" },
		{ "IncludePath", "Commandlets/T4AssetResaveCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/T4AssetResaveCommandlet.h" },
		{ "ToolTip", "#129" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AssetResaveCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::ClassParams = {
		&UT4AssetResaveCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AssetResaveCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AssetResaveCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AssetResaveCommandlet, 2367732379);
	template<> T4COMMANDLET_API UClass* StaticClass<UT4AssetResaveCommandlet>()
	{
		return UT4AssetResaveCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AssetResaveCommandlet(Z_Construct_UClass_UT4AssetResaveCommandlet, &UT4AssetResaveCommandlet::StaticClass, TEXT("/Script/T4Commandlet"), TEXT("UT4AssetResaveCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AssetResaveCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
