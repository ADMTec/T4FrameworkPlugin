// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/T4AnimSetLayerTemplateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetLayerTemplateBase() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
// End Cross Module References
	void UT4AnimSetLayerTemplateBase::StaticRegisterNativesUT4AnimSetLayerTemplateBase()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase_NoRegister()
	{
		return UT4AnimSetLayerTemplateBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/T4AnimSetLayerTemplateBase.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/T4AnimSetLayerTemplateBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Private/AnimTemplate/T4AnimSetLayerTemplateBase.h" },
	};
#endif
	void Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_SetBit(void* Obj)
	{
		((UT4AnimSetLayerTemplateBase*)Obj)->bShowNotSetProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty = { "bShowNotSetProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4AnimSetLayerTemplateBase), &Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/AnimTemplate/T4AnimSetLayerTemplateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetLayerTemplateBase, PostureName), METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_PostureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_bShowNotSetProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::NewProp_PostureName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetLayerTemplateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::ClassParams = {
		&UT4AnimSetLayerTemplateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetLayerTemplateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetLayerTemplateBase, 1315381852);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetLayerTemplateBase>()
	{
		return UT4AnimSetLayerTemplateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetLayerTemplateBase(Z_Construct_UClass_UT4AnimSetLayerTemplateBase, &UT4AnimSetLayerTemplateBase::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetLayerTemplateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetLayerTemplateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
