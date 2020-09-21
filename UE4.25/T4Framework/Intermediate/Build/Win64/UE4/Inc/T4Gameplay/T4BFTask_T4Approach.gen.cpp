// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/BehaviorFlow/T4BFTask_T4Approach.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BFTask_T4Approach() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BFTask_T4Approach_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BFTask_T4Approach();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4BFTask_T4Approach::StaticRegisterNativesUT4BFTask_T4Approach()
	{
	}
	UClass* Z_Construct_UClass_UT4BFTask_T4Approach_NoRegister()
	{
		return UT4BFTask_T4Approach::StaticClass();
	}
	struct Z_Construct_UClass_UT4BFTask_T4Approach_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BFTask_T4Approach_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BFTask_T4Approach_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Task" },
		{ "IncludePath", "BehaviorFlow/T4BFTask_T4Approach.h" },
		{ "ModuleRelativePath", "Classes/BehaviorFlow/T4BFTask_T4Approach.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BFTask_T4Approach_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BFTask_T4Approach>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BFTask_T4Approach_Statics::ClassParams = {
		&UT4BFTask_T4Approach::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BFTask_T4Approach_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BFTask_T4Approach_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BFTask_T4Approach()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BFTask_T4Approach_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BFTask_T4Approach, 1693713688);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BFTask_T4Approach>()
	{
		return UT4BFTask_T4Approach::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BFTask_T4Approach(Z_Construct_UClass_UT4BFTask_T4Approach, &UT4BFTask_T4Approach::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BFTask_T4Approach"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BFTask_T4Approach);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
