// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/T4AnimsetLayerTemplateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetLayerTemplateBase() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
// End Cross Module References
	void UT4AnimsetLayerTemplateBase::StaticRegisterNativesUT4AnimsetLayerTemplateBase()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase_NoRegister()
	{
		return UT4AnimsetLayerTemplateBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNotSetProperty_MetaData[];
#endif
		static void NewProp_bShowNotSetProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNotSetProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/T4AnimsetLayerTemplateBase.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/T4AnimsetLayerTemplateBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Private/AnimTemplate/T4AnimsetLayerTemplateBase.h" },
	};
#endif
	void Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_SetBit(void* Obj)
	{
		((UT4AnimsetLayerTemplateBase*)Obj)->bShowNotSetProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty = { "bShowNotSetProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4AnimsetLayerTemplateBase), &Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/AnimTemplate/T4AnimsetLayerTemplateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetLayerTemplateBase, StanceName), METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_StanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::NewProp_StanceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimsetLayerTemplateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::ClassParams = {
		&UT4AnimsetLayerTemplateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimsetLayerTemplateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimsetLayerTemplateBase, 706196968);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimsetLayerTemplateBase>()
	{
		return UT4AnimsetLayerTemplateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimsetLayerTemplateBase(Z_Construct_UClass_UT4AnimsetLayerTemplateBase, &UT4AnimsetLayerTemplateBase::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimsetLayerTemplateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimsetLayerTemplateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
