// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode_Task.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BehaviorFlowGraphNode_Task() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4BehaviorFlowGraphNode_Task::StaticRegisterNativesUT4BehaviorFlowGraphNode_Task()
	{
	}
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_NoRegister()
	{
		return UT4BehaviorFlowGraphNode_Task::StaticClass();
	}
	struct Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4BehaviorFlowGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode_Task.h" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode_Task.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BehaviorFlowGraphNode_Task>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::ClassParams = {
		&UT4BehaviorFlowGraphNode_Task::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BehaviorFlowGraphNode_Task, 2514649203);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4BehaviorFlowGraphNode_Task>()
	{
		return UT4BehaviorFlowGraphNode_Task::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BehaviorFlowGraphNode_Task(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Task, &UT4BehaviorFlowGraphNode_Task::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4BehaviorFlowGraphNode_Task"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BehaviorFlowGraphNode_Task);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
