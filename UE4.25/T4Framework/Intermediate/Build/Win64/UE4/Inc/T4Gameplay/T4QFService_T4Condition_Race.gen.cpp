// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFService_T4Condition_Race.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFService_T4Condition_Race() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4Condition_Race_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4Condition_Race();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4QFService_T4Condition_Race::StaticRegisterNativesUT4QFService_T4Condition_Race()
	{
	}
	UClass* Z_Construct_UClass_UT4QFService_T4Condition_Race_NoRegister()
	{
		return UT4QFService_T4Condition_Race::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4QFService_T4ConditionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFService_T4Condition_Race.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_Race.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::NewProp_RaceName_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_Race.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::NewProp_RaceName = { "RaceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFService_T4Condition_Race, RaceName), METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::NewProp_RaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::NewProp_RaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::NewProp_RaceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFService_T4Condition_Race>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::ClassParams = {
		&UT4QFService_T4Condition_Race::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFService_T4Condition_Race()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFService_T4Condition_Race_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFService_T4Condition_Race, 3352099057);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFService_T4Condition_Race>()
	{
		return UT4QFService_T4Condition_Race::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFService_T4Condition_Race(Z_Construct_UClass_UT4QFService_T4Condition_Race, &UT4QFService_T4Condition_Race::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFService_T4Condition_Race"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFService_T4Condition_Race);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
