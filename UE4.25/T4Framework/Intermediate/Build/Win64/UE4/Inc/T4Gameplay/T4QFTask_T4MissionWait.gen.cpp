// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFTask_T4MissionWait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFTask_T4MissionWait() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionWait_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4MissionWait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4RewardDBKey();
// End Cross Module References
	void UT4QFTask_T4MissionWait::StaticRegisterNativesUT4QFTask_T4MissionWait()
	{
	}
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionWait_NoRegister()
	{
		return UT4QFTask_T4MissionWait::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #164\n */" },
		{ "HideCategories", "Task" },
		{ "IncludePath", "QuestFlow/T4QFTask_T4MissionWait.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionWait.h" },
		{ "ToolTip", "#164" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::NewProp_RewardDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4MissionWait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::NewProp_RewardDBKey = { "RewardDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4MissionWait, RewardDBKey), Z_Construct_UScriptStruct_FT4RewardDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::NewProp_RewardDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::NewProp_RewardDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::NewProp_RewardDBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFTask_T4MissionWait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::ClassParams = {
		&UT4QFTask_T4MissionWait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFTask_T4MissionWait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFTask_T4MissionWait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFTask_T4MissionWait, 1648566830);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFTask_T4MissionWait>()
	{
		return UT4QFTask_T4MissionWait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFTask_T4MissionWait(Z_Construct_UClass_UT4QFTask_T4MissionWait, &UT4QFTask_T4MissionWait::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFTask_T4MissionWait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFTask_T4MissionWait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
