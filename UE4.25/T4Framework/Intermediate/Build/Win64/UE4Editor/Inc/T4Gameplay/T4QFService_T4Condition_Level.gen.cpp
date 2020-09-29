// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFService_T4Condition_Level.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFService_T4Condition_Level() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4Condition_Level_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4Condition_Level();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4QFService_T4Condition_Level::StaticRegisterNativesUT4QFService_T4Condition_Level()
	{
	}
	UClass* Z_Construct_UClass_UT4QFService_T4Condition_Level_NoRegister()
	{
		return UT4QFService_T4Condition_Level::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MinLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4QFService_T4ConditionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFService_T4Condition_Level.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_Level.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// #168\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_Level.h" },
		{ "ToolTip", "#168" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFService_T4Condition_Level, MaxLevel), METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MaxLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MinLevel_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4Condition_Level.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MinLevel = { "MinLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFService_T4Condition_Level, MinLevel), METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MinLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MinLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MaxLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::NewProp_MinLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFService_T4Condition_Level>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::ClassParams = {
		&UT4QFService_T4Condition_Level::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFService_T4Condition_Level()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFService_T4Condition_Level_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFService_T4Condition_Level, 2656350497);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFService_T4Condition_Level>()
	{
		return UT4QFService_T4Condition_Level::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFService_T4Condition_Level(Z_Construct_UClass_UT4QFService_T4Condition_Level, &UT4QFService_T4Condition_Level::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFService_T4Condition_Level"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFService_T4Condition_Level);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif