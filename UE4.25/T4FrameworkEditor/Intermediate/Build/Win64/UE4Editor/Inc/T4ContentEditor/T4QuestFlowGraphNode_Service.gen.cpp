// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/Quest/QuestFlow/T4QuestFlowGraphNode_Service.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QuestFlowGraphNode_Service() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowGraphNode_Service_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowGraphNode_Service();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowGraphNode();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4QuestFlowGraphNode_Service::StaticRegisterNativesUT4QuestFlowGraphNode_Service()
	{
	}
	UClass* Z_Construct_UClass_UT4QuestFlowGraphNode_Service_NoRegister()
	{
		return UT4QuestFlowGraphNode_Service::StaticClass();
	}
	struct Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4QuestFlowGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/Quest/QuestFlow/T4QuestFlowGraphNode_Service.h" },
		{ "ModuleRelativePath", "Private/SubEditor/Quest/QuestFlow/T4QuestFlowGraphNode_Service.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QuestFlowGraphNode_Service>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::ClassParams = {
		&UT4QuestFlowGraphNode_Service::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QuestFlowGraphNode_Service()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QuestFlowGraphNode_Service_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QuestFlowGraphNode_Service, 2771693957);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4QuestFlowGraphNode_Service>()
	{
		return UT4QuestFlowGraphNode_Service::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QuestFlowGraphNode_Service(Z_Construct_UClass_UT4QuestFlowGraphNode_Service, &UT4QuestFlowGraphNode_Service::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4QuestFlowGraphNode_Service"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QuestFlowGraphNode_Service);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
