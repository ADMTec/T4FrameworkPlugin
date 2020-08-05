// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Public/Helper/T4EditorReplaySystemController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EditorReplaySystemController() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorReplaySystemController_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorReplaySystemController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ReplaySystemAsset_NoRegister();
// End Cross Module References
	void UT4EditorReplaySystemController::StaticRegisterNativesUT4EditorReplaySystemController()
	{
	}
	UClass* Z_Construct_UClass_UT4EditorReplaySystemController_NoRegister()
	{
		return UT4EditorReplaySystemController::StaticClass();
	}
	struct Z_Construct_UClass_UT4EditorReplaySystemController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerPossessed_MetaData[];
#endif
		static void NewProp_bPlayerPossessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerPossessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayRepeat_MetaData[];
#endif
		static void NewProp_bPlayRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayRepeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectReplaySystemAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SelectReplaySystemAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EditorReplaySystemController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorReplaySystemController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Helper/T4EditorReplaySystemController.h" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorReplaySystemController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed_MetaData[] = {
		{ "Category", "ReplaySystem" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorReplaySystemController.h" },
	};
#endif
	void Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed_SetBit(void* Obj)
	{
		((UT4EditorReplaySystemController*)Obj)->bPlayerPossessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed = { "bPlayerPossessed", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4EditorReplaySystemController), &Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat_MetaData[] = {
		{ "Category", "ReplaySystem" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorReplaySystemController.h" },
	};
#endif
	void Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat_SetBit(void* Obj)
	{
		((UT4EditorReplaySystemController*)Obj)->bPlayRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat = { "bPlayRepeat", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4EditorReplaySystemController), &Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_SelectReplaySystemAsset_MetaData[] = {
		{ "Category", "ReplaySystem" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorReplaySystemController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_SelectReplaySystemAsset = { "SelectReplaySystemAsset", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EditorReplaySystemController, SelectReplaySystemAsset), Z_Construct_UClass_UT4ReplaySystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_SelectReplaySystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_SelectReplaySystemAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EditorReplaySystemController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayerPossessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_bPlayRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorReplaySystemController_Statics::NewProp_SelectReplaySystemAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EditorReplaySystemController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EditorReplaySystemController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EditorReplaySystemController_Statics::ClassParams = {
		&UT4EditorReplaySystemController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4EditorReplaySystemController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorReplaySystemController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EditorReplaySystemController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EditorReplaySystemController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EditorReplaySystemController, 2348240307);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4EditorReplaySystemController>()
	{
		return UT4EditorReplaySystemController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EditorReplaySystemController(Z_Construct_UClass_UT4EditorReplaySystemController, &UT4EditorReplaySystemController::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4EditorReplaySystemController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EditorReplaySystemController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
