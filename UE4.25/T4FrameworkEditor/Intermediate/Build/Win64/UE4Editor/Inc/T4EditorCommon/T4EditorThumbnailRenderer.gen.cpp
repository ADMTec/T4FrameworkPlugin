// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Public/Utility/T4EditorThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EditorThumbnailRenderer() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
// End Cross Module References
	void UT4EditorThumbnailRenderer::StaticRegisterNativesUT4EditorThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer_NoRegister()
	{
		return UT4EditorThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4EditorThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/Utility/T4EditorThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EditorThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::ClassParams = {
		&UT4EditorThumbnailRenderer::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EditorThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EditorThumbnailRenderer, 2610541296);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4EditorThumbnailRenderer>()
	{
		return UT4EditorThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EditorThumbnailRenderer(Z_Construct_UClass_UT4EditorThumbnailRenderer, &UT4EditorThumbnailRenderer::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4EditorThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EditorThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
