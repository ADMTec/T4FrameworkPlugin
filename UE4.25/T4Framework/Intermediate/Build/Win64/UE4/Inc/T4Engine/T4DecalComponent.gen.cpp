// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/Component/T4DecalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4DecalComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4DecalComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4DecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4DecalComponent::StaticRegisterNativesUT4DecalComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4DecalComponent_NoRegister()
	{
		return UT4DecalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4DecalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4DecalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDecalComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4DecalComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Resources/ContentExamples/Decals/index.html\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "World/Actor/Component/T4DecalComponent.h" },
		{ "ModuleRelativePath", "Private/World/Actor/Component/T4DecalComponent.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Resources/ContentExamples/Decals/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4DecalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4DecalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4DecalComponent_Statics::ClassParams = {
		&UT4DecalComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4DecalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4DecalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4DecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4DecalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4DecalComponent, 572239939);
	template<> T4ENGINE_API UClass* StaticClass<UT4DecalComponent>()
	{
		return UT4DecalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4DecalComponent(Z_Construct_UClass_UT4DecalComponent, &UT4DecalComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4DecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4DecalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
