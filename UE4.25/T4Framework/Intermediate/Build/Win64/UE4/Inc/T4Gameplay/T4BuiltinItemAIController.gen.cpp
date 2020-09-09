// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/NPC/T4BuiltinItemAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinItemAIController() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinItemAIController_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinItemAIController();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4AIControllerBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AT4BuiltinItemAIController::StaticRegisterNativesAT4BuiltinItemAIController()
	{
	}
	UClass* Z_Construct_UClass_AT4BuiltinItemAIController_NoRegister()
	{
		return AT4BuiltinItemAIController::StaticClass();
	}
	struct Z_Construct_UClass_AT4BuiltinItemAIController_Statics
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
	UObject* (*const Z_Construct_UClass_AT4BuiltinItemAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4AIControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinItemAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NPC/T4BuiltinItemAIController.h" },
		{ "ModuleRelativePath", "Classes/NPC/T4BuiltinItemAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinItemAIController_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Comment", "/* Cached BT component */" },
		{ "ModuleRelativePath", "Classes/NPC/T4BuiltinItemAIController.h" },
		{ "ToolTip", "Cached BT component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4BuiltinItemAIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4BuiltinItemAIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinItemAIController_Statics::NewProp_BehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinItemAIController_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4BuiltinItemAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4BuiltinItemAIController_Statics::NewProp_BehaviorTreeAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4BuiltinItemAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4BuiltinItemAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4BuiltinItemAIController_Statics::ClassParams = {
		&AT4BuiltinItemAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4BuiltinItemAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinItemAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinItemAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinItemAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4BuiltinItemAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4BuiltinItemAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4BuiltinItemAIController, 2748409330);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4BuiltinItemAIController>()
	{
		return AT4BuiltinItemAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4BuiltinItemAIController(Z_Construct_UClass_AT4BuiltinItemAIController, &AT4BuiltinItemAIController::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4BuiltinItemAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4BuiltinItemAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
