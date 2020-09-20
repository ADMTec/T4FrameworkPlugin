// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFTask_T4MissionStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFTask_T4MissionStart() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionStart_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionStart();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4QFTask_T4MissionStart::StaticRegisterNativesUT4QFTask_T4MissionStart()
	{
	}
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionStart_NoRegister()
	{
		return UT4QFTask_T4MissionStart::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Task" },
		{ "IncludePath", "QuestFlow/T4QFTask_T4MissionStart.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionStart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFTask_T4MissionStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::ClassParams = {
		&UT4QFTask_T4MissionStart::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFTask_T4MissionStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFTask_T4MissionStart, 3165020715);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFTask_T4MissionStart>()
	{
		return UT4QFTask_T4MissionStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFTask_T4MissionStart(Z_Construct_UClass_UT4QFTask_T4MissionStart, &UT4QFTask_T4MissionStart::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFTask_T4MissionStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFTask_T4MissionStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
