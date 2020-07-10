// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4WorldExplorer/Private/Utility/T4WorldThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldThumbnailRenderer() {}
// Cross Module References
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldThumbnailRenderer_NoRegister();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldThumbnailRenderer();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_T4WorldExplorer();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_NoRegister();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldCustomThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
// End Cross Module References
	void UT4WorldThumbnailRenderer::StaticRegisterNativesUT4WorldThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldThumbnailRenderer_NoRegister()
	{
		return UT4WorldThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * \n */" },
		{ "IncludePath", "Utility/T4WorldThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4WorldThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::ClassParams = {
		&UT4WorldThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldThumbnailRenderer, 338232351);
	template<> T4WORLDEXPLORER_API UClass* StaticClass<UT4WorldThumbnailRenderer>()
	{
		return UT4WorldThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldThumbnailRenderer(Z_Construct_UClass_UT4WorldThumbnailRenderer, &UT4WorldThumbnailRenderer::StaticClass, TEXT("/Script/T4WorldExplorer"), TEXT("UT4WorldThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldThumbnailRenderer);
	void UT4WorldCustomThumbnailRenderer::StaticRegisterNativesUT4WorldCustomThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_NoRegister()
	{
		return UT4WorldCustomThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// #91 : refer WorldThumbnailRenderer.h\n" },
		{ "IncludePath", "Utility/T4WorldThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4WorldThumbnailRenderer.h" },
		{ "ToolTip", "#91 : refer WorldThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldCustomThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::ClassParams = {
		&UT4WorldCustomThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldCustomThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldCustomThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldCustomThumbnailRenderer, 1415701577);
	template<> T4WORLDEXPLORER_API UClass* StaticClass<UT4WorldCustomThumbnailRenderer>()
	{
		return UT4WorldCustomThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldCustomThumbnailRenderer(Z_Construct_UClass_UT4WorldCustomThumbnailRenderer, &UT4WorldCustomThumbnailRenderer::StaticClass, TEXT("/Script/T4WorldExplorer"), TEXT("UT4WorldCustomThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldCustomThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
