// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/AITree/T4ATTask_T4Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ATTask_T4Attack() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ATTask_T4Attack_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ATTask_T4Attack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4ATTask_T4Attack::StaticRegisterNativesUT4ATTask_T4Attack()
	{
	}
	UClass* Z_Construct_UClass_UT4ATTask_T4Attack_NoRegister()
	{
		return UT4ATTask_T4Attack::StaticClass();
	}
	struct Z_Construct_UClass_UT4ATTask_T4Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ATTask_T4Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4Attack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Wait Task" },
		{ "IncludePath", "AITree/T4ATTask_T4Attack.h" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ATTask_T4Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ATTask_T4Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ATTask_T4Attack_Statics::ClassParams = {
		&UT4ATTask_T4Attack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ATTask_T4Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ATTask_T4Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ATTask_T4Attack, 638578267);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4ATTask_T4Attack>()
	{
		return UT4ATTask_T4Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ATTask_T4Attack(Z_Construct_UClass_UT4ATTask_T4Attack, &UT4ATTask_T4Attack::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4ATTask_T4Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ATTask_T4Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
