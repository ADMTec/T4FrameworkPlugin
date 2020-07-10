// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Camera/T4EditorCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EditorCameraActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4EditorCameraActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4EditorCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void AT4EditorCameraActor::StaticRegisterNativesAT4EditorCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AT4EditorCameraActor_NoRegister()
	{
		return AT4EditorCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4EditorCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4EditorCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4EditorCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Camera/T4EditorCameraActor.h" },
		{ "ModuleRelativePath", "Classes/Camera/T4EditorCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4EditorCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4EditorCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4EditorCameraActor_Statics::ClassParams = {
		&AT4EditorCameraActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4EditorCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4EditorCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4EditorCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4EditorCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4EditorCameraActor, 1143143657);
	template<> T4ENGINE_API UClass* StaticClass<AT4EditorCameraActor>()
	{
		return AT4EditorCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4EditorCameraActor(Z_Construct_UClass_AT4EditorCameraActor, &AT4EditorCameraActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4EditorCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4EditorCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
