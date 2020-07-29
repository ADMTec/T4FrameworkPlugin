// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Components/T4SplineMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SplineMeshComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SplineMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SplineMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4SplineMeshComponent::StaticRegisterNativesUT4SplineMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4SplineMeshComponent_NoRegister()
	{
		return UT4SplineMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4SplineMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4SplineMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4SplineMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #153\n */" },
		{ "HideCategories", "Physics Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/T4SplineMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/T4SplineMeshComponent.h" },
		{ "ToolTip", "#153" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4SplineMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4SplineMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4SplineMeshComponent_Statics::ClassParams = {
		&UT4SplineMeshComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4SplineMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4SplineMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4SplineMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4SplineMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4SplineMeshComponent, 3304518387);
	template<> T4ENGINE_API UClass* StaticClass<UT4SplineMeshComponent>()
	{
		return UT4SplineMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4SplineMeshComponent(Z_Construct_UClass_UT4SplineMeshComponent, &UT4SplineMeshComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4SplineMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4SplineMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
