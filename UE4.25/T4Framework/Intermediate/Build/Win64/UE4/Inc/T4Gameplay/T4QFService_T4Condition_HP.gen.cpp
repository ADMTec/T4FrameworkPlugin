// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFService_T4Condition_HP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFService_T4Condition_HP() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4Condition_HP_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4Condition_HP();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4QFService_T4Condition_HP::StaticRegisterNativesUT4QFService_T4Condition_HP()
	{
	}
	UClass* Z_Construct_UClass_UT4QFService_T4Condition_HP_NoRegister()
	{
		return UT4QFService_T4Condition_HP::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4QFService_T4ConditionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFService_T4Condition_HP.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_HP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #168\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_HP.h" },
		{ "ToolTip", "#168" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFService_T4Condition_HP, MaxHP), METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MinHP_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_HP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MinHP = { "MinHP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFService_T4Condition_HP, MinHP), METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MinHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MinHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::NewProp_MinHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFService_T4Condition_HP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::ClassParams = {
		&UT4QFService_T4Condition_HP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFService_T4Condition_HP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFService_T4Condition_HP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFService_T4Condition_HP, 3015969564);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFService_T4Condition_HP>()
	{
		return UT4QFService_T4Condition_HP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFService_T4Condition_HP(Z_Construct_UClass_UT4QFService_T4Condition_HP, &UT4QFService_T4Condition_HP::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFService_T4Condition_HP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFService_T4Condition_HP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
