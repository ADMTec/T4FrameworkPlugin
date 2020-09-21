// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode_Root.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BehaviorFlowGraphNode_Root() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4BehaviorFlowGraphNode_Root::StaticRegisterNativesUT4BehaviorFlowGraphNode_Root()
	{
	}
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_NoRegister()
	{
		return UT4BehaviorFlowGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4BehaviorFlowGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Root node of this Mission tree, holds Blackboard data */" },
		{ "IncludePath", "SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode_Root.h" },
		{ "ToolTip", "Root node of this Mission tree, holds Blackboard data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BehaviorFlowGraphNode_Root>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::ClassParams = {
		&UT4BehaviorFlowGraphNode_Root::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BehaviorFlowGraphNode_Root, 2910615168);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4BehaviorFlowGraphNode_Root>()
	{
		return UT4BehaviorFlowGraphNode_Root::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BehaviorFlowGraphNode_Root(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Root, &UT4BehaviorFlowGraphNode_Root::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4BehaviorFlowGraphNode_Root"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BehaviorFlowGraphNode_Root);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
