// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/AITree/T4ATTask_T4Dead.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ATTask_T4Dead() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ATTask_T4Dead_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ATTask_T4Dead();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4ATTask_T4Dead::StaticRegisterNativesUT4ATTask_T4Dead()
	{
	}
	UClass* Z_Construct_UClass_UT4ATTask_T4Dead_NoRegister()
	{
		return UT4ATTask_T4Dead::StaticClass();
	}
	struct Z_Construct_UClass_UT4ATTask_T4Dead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ATTask_T4Dead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4Dead_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Task" },
		{ "IncludePath", "AITree/T4ATTask_T4Dead.h" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4Dead.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ATTask_T4Dead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ATTask_T4Dead>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ATTask_T4Dead_Statics::ClassParams = {
		&UT4ATTask_T4Dead::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4Dead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4Dead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ATTask_T4Dead()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ATTask_T4Dead_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ATTask_T4Dead, 2140863464);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4ATTask_T4Dead>()
	{
		return UT4ATTask_T4Dead::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ATTask_T4Dead(Z_Construct_UClass_UT4ATTask_T4Dead, &UT4ATTask_T4Dead::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4ATTask_T4Dead"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ATTask_T4Dead);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
