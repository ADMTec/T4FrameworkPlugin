// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/T4WorldIndicatorActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldIndicatorActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldIndicatorActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldIndicatorActor();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SceneComponent_NoRegister();
// End Cross Module References
	void AT4WorldIndicatorActor::StaticRegisterNativesAT4WorldIndicatorActor()
	{
	}
	UClass* Z_Construct_UClass_AT4WorldIndicatorActor_NoRegister()
	{
		return AT4WorldIndicatorActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldIndicatorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldIndicatorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4WorldActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldIndicatorActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WorldActor/T4WorldIndicatorActor.h" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldIndicatorActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldIndicatorActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "World" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldIndicatorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldIndicatorActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldIndicatorActor, SceneComponent), Z_Construct_UClass_UT4SceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldIndicatorActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldIndicatorActor_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldIndicatorActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldIndicatorActor_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldIndicatorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldIndicatorActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldIndicatorActor_Statics::ClassParams = {
		&AT4WorldIndicatorActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4WorldIndicatorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldIndicatorActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldIndicatorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldIndicatorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldIndicatorActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldIndicatorActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldIndicatorActor, 3020329844);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldIndicatorActor>()
	{
		return AT4WorldIndicatorActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldIndicatorActor(Z_Construct_UClass_AT4WorldIndicatorActor, &AT4WorldIndicatorActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldIndicatorActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldIndicatorActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
