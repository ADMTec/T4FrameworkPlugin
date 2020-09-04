// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Components/T4AudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AudioComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AudioComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4AudioComponent::StaticRegisterNativesUT4AudioComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4AudioComponent_NoRegister()
	{
		return UT4AudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4AudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AudioComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #152\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/T4AudioComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/T4AudioComponent.h" },
		{ "ToolTip", "#152" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AudioComponent_Statics::ClassParams = {
		&UT4AudioComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AudioComponent, 1595077218);
	template<> T4ENGINE_API UClass* StaticClass<UT4AudioComponent>()
	{
		return UT4AudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AudioComponent(Z_Construct_UClass_UT4AudioComponent, &UT4AudioComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4AudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
