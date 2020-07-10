// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Camera/T4CameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CameraComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CameraComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4CameraComponent::StaticRegisterNativesUT4CameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4CameraComponent_NoRegister()
	{
		return UT4CameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4CameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CameraComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/Framework/Camera/index.html\n */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/T4CameraComponent.h" },
		{ "ModuleRelativePath", "Classes/Camera/T4CameraComponent.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Camera/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CameraComponent_Statics::ClassParams = {
		&UT4CameraComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4CameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CameraComponent, 3834256660);
	template<> T4ENGINE_API UClass* StaticClass<UT4CameraComponent>()
	{
		return UT4CameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CameraComponent(Z_Construct_UClass_UT4CameraComponent, &UT4CameraComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4CameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
