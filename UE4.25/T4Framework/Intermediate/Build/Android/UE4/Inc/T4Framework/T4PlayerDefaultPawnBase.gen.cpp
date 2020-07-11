// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Controller/Player/T4PlayerDefaultPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerDefaultPawnBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerDefaultPawnBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerDefaultPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4PlayerDefaultPawnBase::StaticRegisterNativesAT4PlayerDefaultPawnBase()
	{
	}
	UClass* Z_Construct_UClass_AT4PlayerDefaultPawnBase_NoRegister()
	{
		return AT4PlayerDefaultPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Controller/Player/T4PlayerDefaultPawnBase.h" },
		{ "ModuleRelativePath", "Classes/Controller/Player/T4PlayerDefaultPawnBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PlayerDefaultPawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::ClassParams = {
		&AT4PlayerDefaultPawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PlayerDefaultPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4PlayerDefaultPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4PlayerDefaultPawnBase, 1280671917);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4PlayerDefaultPawnBase>()
	{
		return AT4PlayerDefaultPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4PlayerDefaultPawnBase(Z_Construct_UClass_AT4PlayerDefaultPawnBase, &AT4PlayerDefaultPawnBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4PlayerDefaultPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PlayerDefaultPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
