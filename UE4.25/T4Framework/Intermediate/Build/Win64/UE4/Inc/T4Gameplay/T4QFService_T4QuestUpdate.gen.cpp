// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFService_T4QuestUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFService_T4QuestUpdate() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4QuestUpdate_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4QuestUpdate();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4QFService_T4QuestUpdate::StaticRegisterNativesUT4QFService_T4QuestUpdate()
	{
	}
	UClass* Z_Construct_UClass_UT4QFService_T4QuestUpdate_NoRegister()
	{
		return UT4QFService_T4QuestUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFService_T4QuestUpdate.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4QuestUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFService_T4QuestUpdate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::ClassParams = {
		&UT4QFService_T4QuestUpdate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFService_T4QuestUpdate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFService_T4QuestUpdate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFService_T4QuestUpdate, 1312250828);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFService_T4QuestUpdate>()
	{
		return UT4QFService_T4QuestUpdate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFService_T4QuestUpdate(Z_Construct_UClass_UT4QFService_T4QuestUpdate, &UT4QFService_T4QuestUpdate::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFService_T4QuestUpdate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFService_T4QuestUpdate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
