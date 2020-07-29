// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Components/T4MovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovementComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4MovementComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4MovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4MovementComponent::StaticRegisterNativesUT4MovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4MovementComponent_NoRegister()
	{
		return UT4MovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4MovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/T4MovementComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/T4MovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4MovementComponent_Statics::ClassParams = {
		&UT4MovementComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4MovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4MovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4MovementComponent, 368845334);
	template<> T4ENGINE_API UClass* StaticClass<UT4MovementComponent>()
	{
		return UT4MovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4MovementComponent(Z_Construct_UClass_UT4MovementComponent, &UT4MovementComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4MovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
