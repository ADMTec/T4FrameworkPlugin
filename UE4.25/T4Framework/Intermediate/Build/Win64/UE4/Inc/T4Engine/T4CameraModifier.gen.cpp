// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Camera/T4CameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CameraModifier() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CameraModifier_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4CameraModifier::StaticRegisterNativesUT4CameraModifier()
	{
	}
	UClass* Z_Construct_UClass_UT4CameraModifier_NoRegister()
	{
		return UT4CameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UT4CameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier_CameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CameraModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #100\n*/" },
		{ "IncludePath", "Camera/T4CameraModifier.h" },
		{ "ModuleRelativePath", "Classes/Camera/T4CameraModifier.h" },
		{ "ToolTip", "#100" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CameraModifier_Statics::ClassParams = {
		&UT4CameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CameraModifier, 1465457933);
	template<> T4ENGINE_API UClass* StaticClass<UT4CameraModifier>()
	{
		return UT4CameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CameraModifier(Z_Construct_UClass_UT4CameraModifier, &UT4CameraModifier::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4CameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
