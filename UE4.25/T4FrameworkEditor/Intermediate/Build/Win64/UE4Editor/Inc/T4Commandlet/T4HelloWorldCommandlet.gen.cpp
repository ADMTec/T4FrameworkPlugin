// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Commandlet/Private/Commandlets/T4HelloWorldCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4HelloWorldCommandlet() {}
// Cross Module References
	T4COMMANDLET_API UClass* Z_Construct_UClass_UT4HelloWorldCommandlet_NoRegister();
	T4COMMANDLET_API UClass* Z_Construct_UClass_UT4HelloWorldCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_T4Commandlet();
// End Cross Module References
	void UT4HelloWorldCommandlet::StaticRegisterNativesUT4HelloWorldCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UT4HelloWorldCommandlet_NoRegister()
	{
		return UT4HelloWorldCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UT4HelloWorldCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #129\n */" },
		{ "IncludePath", "Commandlets/T4HelloWorldCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/T4HelloWorldCommandlet.h" },
		{ "ToolTip", "#129" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4HelloWorldCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::ClassParams = {
		&UT4HelloWorldCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4HelloWorldCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4HelloWorldCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4HelloWorldCommandlet, 288082768);
	template<> T4COMMANDLET_API UClass* StaticClass<UT4HelloWorldCommandlet>()
	{
		return UT4HelloWorldCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4HelloWorldCommandlet(Z_Construct_UClass_UT4HelloWorldCommandlet, &UT4HelloWorldCommandlet::StaticClass, TEXT("/Script/T4Commandlet"), TEXT("UT4HelloWorldCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4HelloWorldCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
