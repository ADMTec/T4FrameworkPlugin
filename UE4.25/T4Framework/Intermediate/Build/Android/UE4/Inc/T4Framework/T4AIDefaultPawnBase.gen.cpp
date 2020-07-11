// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Controller/AI/T4AIDefaultPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AIDefaultPawnBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4AIDefaultPawnBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4AIDefaultPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4AIDefaultPawnBase::StaticRegisterNativesAT4AIDefaultPawnBase()
	{
	}
	UClass* Z_Construct_UClass_AT4AIDefaultPawnBase_NoRegister()
	{
		return AT4AIDefaultPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4AIDefaultPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Controller/AI/T4AIDefaultPawnBase.h" },
		{ "ModuleRelativePath", "Classes/Controller/AI/T4AIDefaultPawnBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4AIDefaultPawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::ClassParams = {
		&AT4AIDefaultPawnBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4AIDefaultPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4AIDefaultPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4AIDefaultPawnBase, 3720617859);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4AIDefaultPawnBase>()
	{
		return AT4AIDefaultPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4AIDefaultPawnBase(Z_Construct_UClass_AT4AIDefaultPawnBase, &AT4AIDefaultPawnBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4AIDefaultPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4AIDefaultPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
