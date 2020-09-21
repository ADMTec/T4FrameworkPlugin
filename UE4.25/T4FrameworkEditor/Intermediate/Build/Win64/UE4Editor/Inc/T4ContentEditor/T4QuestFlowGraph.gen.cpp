// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/QuestEditor/QuestFlow/T4QuestFlowGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QuestFlowGraph() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowGraph_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowGraph();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4QuestFlowGraph::StaticRegisterNativesUT4QuestFlowGraph()
	{
	}
	UClass* Z_Construct_UClass_UT4QuestFlowGraph_NoRegister()
	{
		return UT4QuestFlowGraph::StaticClass();
	}
	struct Z_Construct_UClass_UT4QuestFlowGraph_Statics
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
	UObject* (*const Z_Construct_UClass_UT4QuestFlowGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QuestFlowGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/QuestEditor/QuestFlow/T4QuestFlowGraph.h" },
		{ "ModuleRelativePath", "Private/SubEditor/QuestEditor/QuestFlow/T4QuestFlowGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter_MetaData[] = {
		{ "ModuleRelativePath", "Private/SubEditor/QuestEditor/QuestFlow/T4QuestFlowGraph.h" },
	};
#endif
	void Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter_SetBit(void* Obj)
	{
		((UT4QuestFlowGraph*)Obj)->bIsUsingModCounter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter = { "bIsUsingModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4QuestFlowGraph), &Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_ModCounter_MetaData[] = {
		{ "Comment", "/** increased with every graph rebuild, used to refresh data from subtrees */" },
		{ "ModuleRelativePath", "Private/SubEditor/QuestEditor/QuestFlow/T4QuestFlowGraph.h" },
		{ "ToolTip", "increased with every graph rebuild, used to refresh data from subtrees" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_ModCounter = { "ModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QuestFlowGraph, ModCounter), METADATA_PARAMS(Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_ModCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_ModCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QuestFlowGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_bIsUsingModCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QuestFlowGraph_Statics::NewProp_ModCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QuestFlowGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QuestFlowGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QuestFlowGraph_Statics::ClassParams = {
		&UT4QuestFlowGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QuestFlowGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QuestFlowGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QuestFlowGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QuestFlowGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QuestFlowGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QuestFlowGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QuestFlowGraph, 1636631398);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4QuestFlowGraph>()
	{
		return UT4QuestFlowGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QuestFlowGraph(Z_Construct_UClass_UT4QuestFlowGraph, &UT4QuestFlowGraph::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4QuestFlowGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QuestFlowGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
