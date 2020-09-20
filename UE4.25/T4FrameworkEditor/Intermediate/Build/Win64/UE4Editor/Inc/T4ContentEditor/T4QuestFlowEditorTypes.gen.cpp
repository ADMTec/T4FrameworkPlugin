// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/SubEditor/Quest/QuestFlow/T4QuestFlowEditorTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QuestFlowEditorTypes() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowEditorTypes_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4QuestFlowEditorTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
// End Cross Module References
	void UT4QuestFlowEditorTypes::StaticRegisterNativesUT4QuestFlowEditorTypes()
	{
	}
	UClass* Z_Construct_UClass_UT4QuestFlowEditorTypes_NoRegister()
	{
		return UT4QuestFlowEditorTypes::StaticClass();
	}
	struct Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubEditor/Quest/QuestFlow/T4QuestFlowEditorTypes.h" },
		{ "ModuleRelativePath", "Private/SubEditor/Quest/QuestFlow/T4QuestFlowEditorTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QuestFlowEditorTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::ClassParams = {
		&UT4QuestFlowEditorTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QuestFlowEditorTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QuestFlowEditorTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QuestFlowEditorTypes, 205278668);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4QuestFlowEditorTypes>()
	{
		return UT4QuestFlowEditorTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QuestFlowEditorTypes(Z_Construct_UClass_UT4QuestFlowEditorTypes, &UT4QuestFlowEditorTypes::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4QuestFlowEditorTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QuestFlowEditorTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
