// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Components/T4TextRenderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4TextRenderComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4TextRenderComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4TextRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4TextRenderComponent::StaticRegisterNativesUT4TextRenderComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4TextRenderComponent_NoRegister()
	{
		return UT4TextRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4TextRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4TextRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextRenderComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4TextRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #119\n */" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/T4TextRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/T4TextRenderComponent.h" },
		{ "ToolTip", "#119" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4TextRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4TextRenderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4TextRenderComponent_Statics::ClassParams = {
		&UT4TextRenderComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4TextRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4TextRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4TextRenderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4TextRenderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4TextRenderComponent, 3685167583);
	template<> T4ENGINE_API UClass* StaticClass<UT4TextRenderComponent>()
	{
		return UT4TextRenderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4TextRenderComponent(Z_Construct_UClass_UT4TextRenderComponent, &UT4TextRenderComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4TextRenderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4TextRenderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
