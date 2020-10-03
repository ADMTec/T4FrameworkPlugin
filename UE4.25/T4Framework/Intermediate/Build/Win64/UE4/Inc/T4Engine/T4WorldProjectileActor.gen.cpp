// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/T4WorldProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldProjectileActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldProjectileActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldProjectileActor();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ProjectileMovementComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SphereComponent_NoRegister();
// End Cross Module References
	void AT4WorldProjectileActor::StaticRegisterNativesAT4WorldProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_AT4WorldProjectileActor_NoRegister()
	{
		return AT4WorldProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4WorldActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// #127\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WorldActor/T4WorldProjectileActor.h" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldProjectileActor.h" },
		{ "ToolTip", "#127" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_ProjectileComponent_MetaData[] = {
		{ "Category", "World" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldProjectileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_ProjectileComponent = { "ProjectileComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldProjectileActor, ProjectileComponent), Z_Construct_UClass_UT4ProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_ProjectileComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_ProjectileComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "World" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldProjectileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldProjectileActor, CollisionComponent), Z_Construct_UClass_UT4SphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldProjectileActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_ProjectileComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldProjectileActor_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldProjectileActor_Statics::ClassParams = {
		&AT4WorldProjectileActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4WorldProjectileActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldProjectileActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldProjectileActor, 464589999);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldProjectileActor>()
	{
		return AT4WorldProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldProjectileActor(Z_Construct_UClass_AT4WorldProjectileActor, &AT4WorldProjectileActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
