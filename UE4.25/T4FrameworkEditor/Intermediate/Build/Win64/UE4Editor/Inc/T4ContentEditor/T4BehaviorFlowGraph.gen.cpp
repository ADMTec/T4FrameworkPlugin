// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/BehaviorEditor/Graph/T4BehaviorFlowGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BehaviorFlowGraph() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraph_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraph();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4BehaviorFlowGraph::StaticRegisterNativesUT4BehaviorFlowGraph()
	{
	}
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraph_NoRegister()
	{
		return UT4BehaviorFlowGraph::StaticClass();
	}
	struct Z_Construct_UClass_UT4BehaviorFlowGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingModCounter_MetaData[];
#endif
		static void NewProp_bIsUsingModCounter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingModCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/BehaviorEditor/Graph/T4BehaviorFlowGraph.h" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/Graph/T4BehaviorFlowGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter_MetaData[] = {
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/Graph/T4BehaviorFlowGraph.h" },
	};
#endif
	void Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter_SetBit(void* Obj)
	{
		((UT4BehaviorFlowGraph*)Obj)->bIsUsingModCounter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter = { "bIsUsingModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4BehaviorFlowGraph), &Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_ModCounter_MetaData[] = {
		{ "Comment", "/** increased with every graph rebuild, used to refresh data from subtrees */" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/Graph/T4BehaviorFlowGraph.h" },
		{ "ToolTip", "increased with every graph rebuild, used to refresh data from subtrees" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_ModCounter = { "ModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4BehaviorFlowGraph, ModCounter), METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_ModCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_ModCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_bIsUsingModCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::NewProp_ModCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BehaviorFlowGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::ClassParams = {
		&UT4BehaviorFlowGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BehaviorFlowGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BehaviorFlowGraph, 2702760728);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4BehaviorFlowGraph>()
	{
		return UT4BehaviorFlowGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BehaviorFlowGraph(Z_Construct_UClass_UT4BehaviorFlowGraph, &UT4BehaviorFlowGraph::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4BehaviorFlowGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BehaviorFlowGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
