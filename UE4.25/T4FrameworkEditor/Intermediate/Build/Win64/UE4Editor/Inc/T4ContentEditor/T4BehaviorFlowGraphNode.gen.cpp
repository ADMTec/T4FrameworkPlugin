// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BehaviorFlowGraphNode() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4BehaviorFlowGraphNode::StaticRegisterNativesUT4BehaviorFlowGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode_NoRegister()
	{
		return UT4BehaviorFlowGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInjectedNode_MetaData[];
#endif
		static void NewProp_bInjectedNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInjectedNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Services_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode.h" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode_MetaData[] = {
		{ "Comment", "/** if set, this node was injected from subtree and shouldn't be edited */" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode.h" },
		{ "ToolTip", "if set, this node was injected from subtree and shouldn't be edited" },
	};
#endif
	void Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode_SetBit(void* Obj)
	{
		((UT4BehaviorFlowGraphNode*)Obj)->bInjectedNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode = { "bInjectedNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4BehaviorFlowGraphNode), &Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services_MetaData[] = {
		{ "Comment", "/** only some of Mission tree nodes support services */" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/T4BehaviorFlowGraphNode.h" },
		{ "ToolTip", "only some of Mission tree nodes support services" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4BehaviorFlowGraphNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UT4BehaviorFlowGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_bInjectedNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::NewProp_Services_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BehaviorFlowGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::ClassParams = {
		&UT4BehaviorFlowGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BehaviorFlowGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BehaviorFlowGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BehaviorFlowGraphNode, 798046256);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4BehaviorFlowGraphNode>()
	{
		return UT4BehaviorFlowGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BehaviorFlowGraphNode(Z_Construct_UClass_UT4BehaviorFlowGraphNode, &UT4BehaviorFlowGraphNode::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4BehaviorFlowGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BehaviorFlowGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
