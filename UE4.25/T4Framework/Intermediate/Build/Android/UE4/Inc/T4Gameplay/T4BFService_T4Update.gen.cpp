// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/BehaviorFlow/T4BFService_T4Update.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BFService_T4Update() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BFService_T4Update_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BFService_T4Update();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4BFService_T4Update::StaticRegisterNativesUT4BFService_T4Update()
	{
	}
	UClass* Z_Construct_UClass_UT4BFService_T4Update_NoRegister()
	{
		return UT4BFService_T4Update::StaticClass();
	}
	struct Z_Construct_UClass_UT4BFService_T4Update_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BFService_T4Update_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BFService_T4Update_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorFlow/T4BFService_T4Update.h" },
		{ "ModuleRelativePath", "Classes/BehaviorFlow/T4BFService_T4Update.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BFService_T4Update_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BFService_T4Update>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BFService_T4Update_Statics::ClassParams = {
		&UT4BFService_T4Update::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4BFService_T4Update_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BFService_T4Update_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BFService_T4Update()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BFService_T4Update_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BFService_T4Update, 3909009477);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BFService_T4Update>()
	{
		return UT4BFService_T4Update::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BFService_T4Update(Z_Construct_UClass_UT4BFService_T4Update, &UT4BFService_T4Update::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BFService_T4Update"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BFService_T4Update);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
