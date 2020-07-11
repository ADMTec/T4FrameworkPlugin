// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/T4GameInstanceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameInstanceBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameInstanceBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameInstanceBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4GameInstanceBase::StaticRegisterNativesUT4GameInstanceBase()
	{
	}
	UClass* Z_Construct_UClass_UT4GameInstanceBase_NoRegister()
	{
		return UT4GameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "T4GameInstanceBase.h" },
		{ "ModuleRelativePath", "Classes/T4GameInstanceBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameInstanceBase_Statics::ClassParams = {
		&UT4GameInstanceBase::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameInstanceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameInstanceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameInstanceBase, 944457775);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4GameInstanceBase>()
	{
		return UT4GameInstanceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameInstanceBase(Z_Construct_UClass_UT4GameInstanceBase, &UT4GameInstanceBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4GameInstanceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameInstanceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
