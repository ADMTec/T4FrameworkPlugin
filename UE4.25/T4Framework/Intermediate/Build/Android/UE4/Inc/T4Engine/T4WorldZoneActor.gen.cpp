// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/T4WorldZoneActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldZoneActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldZoneActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldZoneActor();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4EnvironmentZoneComponent_NoRegister();
// End Cross Module References
	void AT4WorldZoneActor::StaticRegisterNativesAT4WorldZoneActor()
	{
	}
	UClass* Z_Construct_UClass_AT4WorldZoneActor_NoRegister()
	{
		return AT4WorldZoneActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldZoneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentZoneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvironmentZoneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldZoneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4WorldActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldZoneActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WorldActor/T4WorldZoneActor.h" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldZoneActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldZoneActor_Statics::NewProp_EnvironmentZoneComponent_MetaData[] = {
		{ "Category", "Zone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldZoneActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldZoneActor_Statics::NewProp_EnvironmentZoneComponent = { "EnvironmentZoneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldZoneActor, EnvironmentZoneComponent), Z_Construct_UClass_UT4EnvironmentZoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldZoneActor_Statics::NewProp_EnvironmentZoneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldZoneActor_Statics::NewProp_EnvironmentZoneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldZoneActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldZoneActor_Statics::NewProp_EnvironmentZoneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldZoneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldZoneActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldZoneActor_Statics::ClassParams = {
		&AT4WorldZoneActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4WorldZoneActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldZoneActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldZoneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldZoneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldZoneActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldZoneActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldZoneActor, 1948001034);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldZoneActor>()
	{
		return AT4WorldZoneActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldZoneActor(Z_Construct_UClass_AT4WorldZoneActor, &AT4WorldZoneActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldZoneActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldZoneActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
