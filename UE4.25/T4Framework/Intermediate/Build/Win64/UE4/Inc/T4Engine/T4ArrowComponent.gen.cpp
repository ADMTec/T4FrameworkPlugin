// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Components/T4ArrowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ArrowComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ArrowComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4ArrowComponent::StaticRegisterNativesUT4ArrowComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4ArrowComponent_NoRegister()
	{
		return UT4ArrowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4ArrowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ArrowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArrowComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ArrowComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #153\n */" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/T4ArrowComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/T4ArrowComponent.h" },
		{ "ToolTip", "#153" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ArrowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ArrowComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ArrowComponent_Statics::ClassParams = {
		&UT4ArrowComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ArrowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ArrowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ArrowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ArrowComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ArrowComponent, 1084624652);
	template<> T4ENGINE_API UClass* StaticClass<UT4ArrowComponent>()
	{
		return UT4ArrowComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ArrowComponent(Z_Construct_UClass_UT4ArrowComponent, &UT4ArrowComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4ArrowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ArrowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
