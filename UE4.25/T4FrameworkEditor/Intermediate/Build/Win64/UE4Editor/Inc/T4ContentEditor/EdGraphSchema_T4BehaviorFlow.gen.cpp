// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/BehaviorEditor/BehaviorFlow/EdGraphSchema_T4BehaviorFlow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_T4BehaviorFlow() {}
// Cross Module References
	T4CONTENTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
// End Cross Module References
class UScriptStruct* FT4BehaviorFlowSchemaAction_AutoArrange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CONTENTEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange, Z_Construct_UPackage__Script_T4ContentEditor(), TEXT("T4BehaviorFlowSchemaAction_AutoArrange"), sizeof(FT4BehaviorFlowSchemaAction_AutoArrange), Get_Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Hash());
	}
	return Singleton;
}
template<> T4CONTENTEDITOR_API UScriptStruct* StaticStruct<FT4BehaviorFlowSchemaAction_AutoArrange>()
{
	return FT4BehaviorFlowSchemaAction_AutoArrange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange(FT4BehaviorFlowSchemaAction_AutoArrange::StaticStruct, TEXT("/Script/T4ContentEditor"), TEXT("T4BehaviorFlowSchemaAction_AutoArrange"), false, nullptr, nullptr);
static struct FScriptStruct_T4ContentEditor_StaticRegisterNativesFT4BehaviorFlowSchemaAction_AutoArrange
{
	FScriptStruct_T4ContentEditor_StaticRegisterNativesFT4BehaviorFlowSchemaAction_AutoArrange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4BehaviorFlowSchemaAction_AutoArrange")),new UScriptStruct::TCppStructOps<FT4BehaviorFlowSchemaAction_AutoArrange>);
	}
} ScriptStruct_T4ContentEditor_StaticRegisterNativesFT4BehaviorFlowSchemaAction_AutoArrange;
	struct Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to auto arrange the graph */" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/EdGraphSchema_T4BehaviorFlow.h" },
		{ "ToolTip", "Action to auto arrange the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4BehaviorFlowSchemaAction_AutoArrange>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"T4BehaviorFlowSchemaAction_AutoArrange",
		sizeof(FT4BehaviorFlowSchemaAction_AutoArrange),
		alignof(FT4BehaviorFlowSchemaAction_AutoArrange),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4ContentEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4BehaviorFlowSchemaAction_AutoArrange"), sizeof(FT4BehaviorFlowSchemaAction_AutoArrange), Get_Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4BehaviorFlowSchemaAction_AutoArrange_Hash() { return 3292303780U; }
	void UT4EdGraphSchema_T4BehaviorFlow::StaticRegisterNativesUT4EdGraphSchema_T4BehaviorFlow()
	{
	}
	UClass* Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_NoRegister()
	{
		return UT4EdGraphSchema_T4BehaviorFlow::StaticClass();
	}
	struct Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/BehaviorEditor/BehaviorFlow/EdGraphSchema_T4BehaviorFlow.h" },
		{ "ModuleRelativePath", "Private/SubEditor/BehaviorEditor/BehaviorFlow/EdGraphSchema_T4BehaviorFlow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EdGraphSchema_T4BehaviorFlow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::ClassParams = {
		&UT4EdGraphSchema_T4BehaviorFlow::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EdGraphSchema_T4BehaviorFlow, 3992222519);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4EdGraphSchema_T4BehaviorFlow>()
	{
		return UT4EdGraphSchema_T4BehaviorFlow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EdGraphSchema_T4BehaviorFlow(Z_Construct_UClass_UT4EdGraphSchema_T4BehaviorFlow, &UT4EdGraphSchema_T4BehaviorFlow::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4EdGraphSchema_T4BehaviorFlow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EdGraphSchema_T4BehaviorFlow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
