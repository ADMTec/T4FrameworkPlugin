// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ContentEditor/Private/Utility/T4ContentThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentThumbnailRenderer() {}
// Cross Module References
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentBuildThumbnailRenderer();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_T4ContentEditor();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_NoRegister();
	T4CONTENTEDITOR_API UClass* Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer();
// End Cross Module References
	void UT4ContentBuildThumbnailRenderer::StaticRegisterNativesUT4ContentBuildThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_NoRegister()
	{
		return UT4ContentBuildThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * \n */" },
		{ "IncludePath", "Utility/T4ContentThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4ContentThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentBuildThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::ClassParams = {
		&UT4ContentBuildThumbnailRenderer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentBuildThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentBuildThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentBuildThumbnailRenderer, 1366210208);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4ContentBuildThumbnailRenderer>()
	{
		return UT4ContentBuildThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentBuildThumbnailRenderer(Z_Construct_UClass_UT4ContentBuildThumbnailRenderer, &UT4ContentBuildThumbnailRenderer::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4ContentBuildThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentBuildThumbnailRenderer);
	void UT4ContentSpawnThumbnailRenderer::StaticRegisterNativesUT4ContentSpawnThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_NoRegister()
	{
		return UT4ContentSpawnThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ContentEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4ContentThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4ContentThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentSpawnThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::ClassParams = {
		&UT4ContentSpawnThumbnailRenderer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentSpawnThumbnailRenderer, 1543739942);
	template<> T4CONTENTEDITOR_API UClass* StaticClass<UT4ContentSpawnThumbnailRenderer>()
	{
		return UT4ContentSpawnThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentSpawnThumbnailRenderer(Z_Construct_UClass_UT4ContentSpawnThumbnailRenderer, &UT4ContentSpawnThumbnailRenderer::StaticClass, TEXT("/Script/T4ContentEditor"), TEXT("UT4ContentSpawnThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentSpawnThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
