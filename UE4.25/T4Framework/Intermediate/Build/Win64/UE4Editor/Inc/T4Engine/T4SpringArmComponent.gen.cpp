// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Camera/T4SpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SpringArmComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SpringArmComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4SpringArmComponent::StaticRegisterNativesUT4SpringArmComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4SpringArmComponent_NoRegister()
	{
		return UT4SpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4SpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4SpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4SpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * https://docs.unrealengine.com/en-us/Engine/Content/Types/StaticMeshes\n */" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/T4SpringArmComponent.h" },
		{ "ModuleRelativePath", "Classes/Camera/T4SpringArmComponent.h" },
		{ "ToolTip", "https://docs.unrealengine.com/en-us/Engine/Content/Types/StaticMeshes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4SpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4SpringArmComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4SpringArmComponent_Statics::ClassParams = {
		&UT4SpringArmComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4SpringArmComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4SpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4SpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4SpringArmComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4SpringArmComponent, 2803802433);
	template<> T4ENGINE_API UClass* StaticClass<UT4SpringArmComponent>()
	{
		return UT4SpringArmComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4SpringArmComponent(Z_Construct_UClass_UT4SpringArmComponent, &UT4SpringArmComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4SpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4SpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
