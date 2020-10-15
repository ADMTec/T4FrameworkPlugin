// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/Services/QuestSystem/T4ServerQuestController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ServerQuestController() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4ServerQuestController_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4ServerQuestController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4QuestFlowAsset_NoRegister();
// End Cross Module References
	void AT4ServerQuestController::StaticRegisterNativesAT4ServerQuestController()
	{
	}
	UClass* Z_Construct_UClass_AT4ServerQuestController_NoRegister()
	{
		return AT4ServerQuestController::StaticClass();
	}
	struct Z_Construct_UClass_AT4ServerQuestController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestFlowAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestFlowAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4ServerQuestController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ServerQuestController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainFrame/Server/Services/QuestSystem/T4ServerQuestController.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Services/QuestSystem/T4ServerQuestController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ServerQuestController_Statics::NewProp_QuestFlowAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MainFrame/Server/Services/QuestSystem/T4ServerQuestController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4ServerQuestController_Statics::NewProp_QuestFlowAsset = { "QuestFlowAsset", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4ServerQuestController, QuestFlowAsset), Z_Construct_UClass_UT4QuestFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4ServerQuestController_Statics::NewProp_QuestFlowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4ServerQuestController_Statics::NewProp_QuestFlowAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4ServerQuestController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4ServerQuestController_Statics::NewProp_QuestFlowAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4ServerQuestController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4ServerQuestController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4ServerQuestController_Statics::ClassParams = {
		&AT4ServerQuestController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4ServerQuestController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4ServerQuestController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4ServerQuestController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4ServerQuestController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4ServerQuestController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4ServerQuestController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4ServerQuestController, 1119848802);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4ServerQuestController>()
	{
		return AT4ServerQuestController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4ServerQuestController(Z_Construct_UClass_AT4ServerQuestController, &AT4ServerQuestController::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4ServerQuestController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4ServerQuestController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
