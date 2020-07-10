// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/AIController/BTTasks/T4BTTask_T4Wait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BTTask_T4Wait() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BTTask_T4Wait_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BTTask_T4Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4BTTask_T4Wait::StaticRegisterNativesUT4BTTask_T4Wait()
	{
	}
	UClass* Z_Construct_UClass_UT4BTTask_T4Wait_NoRegister()
	{
		return UT4BTTask_T4Wait::StaticClass();
	}
	struct Z_Construct_UClass_UT4BTTask_T4Wait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BTTask_T4Wait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BTTask_T4Wait_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Wait" },
		{ "IncludePath", "AIController/BTTasks/T4BTTask_T4Wait.h" },
		{ "ModuleRelativePath", "Classes/AIController/BTTasks/T4BTTask_T4Wait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BTTask_T4Wait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BTTask_T4Wait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BTTask_T4Wait_Statics::ClassParams = {
		&UT4BTTask_T4Wait::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4BTTask_T4Wait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BTTask_T4Wait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BTTask_T4Wait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BTTask_T4Wait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BTTask_T4Wait, 2775334580);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BTTask_T4Wait>()
	{
		return UT4BTTask_T4Wait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BTTask_T4Wait(Z_Construct_UClass_UT4BTTask_T4Wait, &UT4BTTask_T4Wait::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BTTask_T4Wait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BTTask_T4Wait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
