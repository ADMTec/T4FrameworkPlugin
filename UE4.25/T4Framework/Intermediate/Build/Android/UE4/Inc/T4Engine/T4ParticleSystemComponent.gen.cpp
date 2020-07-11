// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/Component/T4ParticleSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ParticleSystemComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ParticleSystemComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ParticleSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4ParticleSystemComponent::StaticRegisterNativesUT4ParticleSystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4ParticleSystemComponent_NoRegister()
	{
		return UT4ParticleSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4ParticleSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ParticleSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ParticleSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Engine/Rendering/ParticleSystems/\n */" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "World/Actor/Component/T4ParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Private/World/Actor/Component/T4ParticleSystemComponent.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Engine/Rendering/ParticleSystems/" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ParticleSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ParticleSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ParticleSystemComponent_Statics::ClassParams = {
		&UT4ParticleSystemComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ParticleSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ParticleSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ParticleSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ParticleSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ParticleSystemComponent, 644272470);
	template<> T4ENGINE_API UClass* StaticClass<UT4ParticleSystemComponent>()
	{
		return UT4ParticleSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ParticleSystemComponent(Z_Construct_UClass_UT4ParticleSystemComponent, &UT4ParticleSystemComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4ParticleSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ParticleSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
