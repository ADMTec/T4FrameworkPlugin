// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/Component/T4SceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SceneComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SceneComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4SceneComponent::StaticRegisterNativesUT4SceneComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4SceneComponent_NoRegister()
	{
		return UT4SceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4SceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4SceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4SceneComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "World/Actor/Component/T4SceneComponent.h" },
		{ "ModuleRelativePath", "Private/World/Actor/Component/T4SceneComponent.h" },
		{ "ToolTip", "https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4SceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4SceneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4SceneComponent_Statics::ClassParams = {
		&UT4SceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4SceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4SceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4SceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4SceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4SceneComponent, 513877794);
	template<> T4ENGINE_API UClass* StaticClass<UT4SceneComponent>()
	{
		return UT4SceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4SceneComponent(Z_Construct_UClass_UT4SceneComponent, &UT4SceneComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4SceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4SceneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
