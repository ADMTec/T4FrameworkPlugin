// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/AIController/T4NPCAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4NPCAIController() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4NPCAIController_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4NPCAIController();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4AIControllerBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AT4NPCAIController::StaticRegisterNativesAT4NPCAIController()
	{
	}
	UClass* Z_Construct_UClass_AT4NPCAIController_NoRegister()
	{
		return AT4NPCAIController::StaticClass();
	}
	struct Z_Construct_UClass_AT4NPCAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4NPCAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4AIControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4NPCAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIController/T4NPCAIController.h" },
		{ "ModuleRelativePath", "Classes/AIController/T4NPCAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4NPCAIController_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Comment", "/* Cached BT component */" },
		{ "ModuleRelativePath", "Classes/AIController/T4NPCAIController.h" },
		{ "ToolTip", "Cached BT component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4NPCAIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4NPCAIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4NPCAIController_Statics::NewProp_BehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4NPCAIController_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4NPCAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4NPCAIController_Statics::NewProp_BehaviorTreeAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4NPCAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4NPCAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4NPCAIController_Statics::ClassParams = {
		&AT4NPCAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4NPCAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4NPCAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4NPCAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4NPCAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4NPCAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4NPCAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4NPCAIController, 3714688326);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4NPCAIController>()
	{
		return AT4NPCAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4NPCAIController(Z_Construct_UClass_AT4NPCAIController, &AT4NPCAIController::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4NPCAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4NPCAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
