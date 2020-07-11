// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Controller/AI/T4AIControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AIControllerBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4AIControllerBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4AIControllerBase();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4AIControllerBase::StaticRegisterNativesAT4AIControllerBase()
	{
	}
	UClass* Z_Construct_UClass_AT4AIControllerBase_NoRegister()
	{
		return AT4AIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4AIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4AIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Controller/AI/T4AIControllerBase.h" },
		{ "ModuleRelativePath", "Classes/Controller/AI/T4AIControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4AIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4AIControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4AIControllerBase_Statics::ClassParams = {
		&AT4AIControllerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4AIControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4AIControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4AIControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4AIControllerBase, 3732695434);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4AIControllerBase>()
	{
		return AT4AIControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4AIControllerBase(Z_Construct_UClass_AT4AIControllerBase, &AT4AIControllerBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4AIControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4AIControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
