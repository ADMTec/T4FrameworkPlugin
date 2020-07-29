// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Components/T4SphereComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SphereComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SphereComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4SphereComponent::StaticRegisterNativesUT4SphereComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4SphereComponent_NoRegister()
	{
		return UT4SphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4SphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4SphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4SphereComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/Framework/Pawn/Character/index.html\n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/T4SphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/T4SphereComponent.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Pawn/Character/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4SphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4SphereComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4SphereComponent_Statics::ClassParams = {
		&UT4SphereComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4SphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4SphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4SphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4SphereComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4SphereComponent, 3061838432);
	template<> T4ENGINE_API UClass* StaticClass<UT4SphereComponent>()
	{
		return UT4SphereComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4SphereComponent(Z_Construct_UClass_UT4SphereComponent, &UT4SphereComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4SphereComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4SphereComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
