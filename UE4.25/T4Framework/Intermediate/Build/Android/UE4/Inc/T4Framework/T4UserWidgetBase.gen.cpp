// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/UI/T4UserWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4UserWidgetBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4UserWidgetBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4UserWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4UserWidgetBase::StaticRegisterNativesUT4UserWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_UT4UserWidgetBase_NoRegister()
	{
		return UT4UserWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4UserWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4UserWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4UserWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/T4UserWidgetBase.h" },
		{ "ModuleRelativePath", "Classes/UI/T4UserWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4UserWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4UserWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4UserWidgetBase_Statics::ClassParams = {
		&UT4UserWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4UserWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4UserWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4UserWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4UserWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4UserWidgetBase, 1814058384);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4UserWidgetBase>()
	{
		return UT4UserWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4UserWidgetBase(Z_Construct_UClass_UT4UserWidgetBase, &UT4UserWidgetBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4UserWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4UserWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
