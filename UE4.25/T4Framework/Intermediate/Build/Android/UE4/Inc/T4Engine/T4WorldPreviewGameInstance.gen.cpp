// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/System/Context/Preview/T4WorldPreviewGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldPreviewGameInstance() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4WorldPreviewGameInstance_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4WorldPreviewGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4WorldPreviewGameInstance::StaticRegisterNativesUT4WorldPreviewGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldPreviewGameInstance_NoRegister()
	{
		return UT4WorldPreviewGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/System/Context/Preview/T4WorldPreviewGameInstance.h" },
		{ "ModuleRelativePath", "Private/World/System/Context/Preview/T4WorldPreviewGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldPreviewGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::ClassParams = {
		&UT4WorldPreviewGameInstance::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldPreviewGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldPreviewGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldPreviewGameInstance, 2711174692);
	template<> T4ENGINE_API UClass* StaticClass<UT4WorldPreviewGameInstance>()
	{
		return UT4WorldPreviewGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldPreviewGameInstance(Z_Construct_UClass_UT4WorldPreviewGameInstance, &UT4WorldPreviewGameInstance::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4WorldPreviewGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldPreviewGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
