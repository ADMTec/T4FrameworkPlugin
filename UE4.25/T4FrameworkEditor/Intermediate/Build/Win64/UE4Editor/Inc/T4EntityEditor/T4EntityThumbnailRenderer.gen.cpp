// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/Utility/T4EntityThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EntityThumbnailRenderer() {}
// Cross Module References
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4MapEntityThumbnailRenderer_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4MapEntityThumbnailRenderer();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4ActorEntityThumbnailRenderer();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4PropEntityThumbnailRenderer_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4PropEntityThumbnailRenderer();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetThumbnailRenderer_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetThumbnailRenderer();
// End Cross Module References
	void UT4MapEntityThumbnailRenderer::StaticRegisterNativesUT4MapEntityThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4MapEntityThumbnailRenderer_NoRegister()
	{
		return UT4MapEntityThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * \n */// WARN : #84 SaveThumbnailImage \xec\x97\x90 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xed\x8f\xac\xeb\xa9\xa7\xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xec\xa0\x80\xec\x9e\xa5\xec\x9d\xb4 \xeb\x90\x9c\xeb\x8b\xa4.\n" },
		{ "IncludePath", "Utility/T4EntityThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4EntityThumbnailRenderer.h" },
		{ "ToolTip", "// WARN : #84 SaveThumbnailImage \xec\x97\x90 \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xed\x8f\xac\xeb\xa9\xa7\xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xec\xa0\x80\xec\x9e\xa5\xec\x9d\xb4 \xeb\x90\x9c\xeb\x8b\xa4." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MapEntityThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::ClassParams = {
		&UT4MapEntityThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MapEntityThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4MapEntityThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4MapEntityThumbnailRenderer, 1192228107);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4MapEntityThumbnailRenderer>()
	{
		return UT4MapEntityThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4MapEntityThumbnailRenderer(Z_Construct_UClass_UT4MapEntityThumbnailRenderer, &UT4MapEntityThumbnailRenderer::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4MapEntityThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MapEntityThumbnailRenderer);
	void UT4ActorEntityThumbnailRenderer::StaticRegisterNativesUT4ActorEntityThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_NoRegister()
	{
		return UT4ActorEntityThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4EntityThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4EntityThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActorEntityThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::ClassParams = {
		&UT4ActorEntityThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActorEntityThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActorEntityThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActorEntityThumbnailRenderer, 3918554673);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4ActorEntityThumbnailRenderer>()
	{
		return UT4ActorEntityThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActorEntityThumbnailRenderer(Z_Construct_UClass_UT4ActorEntityThumbnailRenderer, &UT4ActorEntityThumbnailRenderer::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4ActorEntityThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActorEntityThumbnailRenderer);
	void UT4PropEntityThumbnailRenderer::StaticRegisterNativesUT4PropEntityThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4PropEntityThumbnailRenderer_NoRegister()
	{
		return UT4PropEntityThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4EntityThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4EntityThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PropEntityThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::ClassParams = {
		&UT4PropEntityThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PropEntityThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PropEntityThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PropEntityThumbnailRenderer, 1577046715);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4PropEntityThumbnailRenderer>()
	{
		return UT4PropEntityThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PropEntityThumbnailRenderer(Z_Construct_UClass_UT4PropEntityThumbnailRenderer, &UT4PropEntityThumbnailRenderer::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4PropEntityThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PropEntityThumbnailRenderer);
	void UT4WeaponEntityThumbnailRenderer::StaticRegisterNativesUT4WeaponEntityThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_NoRegister()
	{
		return UT4WeaponEntityThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4EntityThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4EntityThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WeaponEntityThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::ClassParams = {
		&UT4WeaponEntityThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WeaponEntityThumbnailRenderer, 1533854544);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4WeaponEntityThumbnailRenderer>()
	{
		return UT4WeaponEntityThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WeaponEntityThumbnailRenderer(Z_Construct_UClass_UT4WeaponEntityThumbnailRenderer, &UT4WeaponEntityThumbnailRenderer::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4WeaponEntityThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WeaponEntityThumbnailRenderer);
	void UT4CostumeEntityThumbnailRenderer::StaticRegisterNativesUT4CostumeEntityThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_NoRegister()
	{
		return UT4CostumeEntityThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4EntityThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4EntityThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CostumeEntityThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::ClassParams = {
		&UT4CostumeEntityThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CostumeEntityThumbnailRenderer, 3784111862);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4CostumeEntityThumbnailRenderer>()
	{
		return UT4CostumeEntityThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CostumeEntityThumbnailRenderer(Z_Construct_UClass_UT4CostumeEntityThumbnailRenderer, &UT4CostumeEntityThumbnailRenderer::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4CostumeEntityThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CostumeEntityThumbnailRenderer);
	void UT4AnimSetThumbnailRenderer::StaticRegisterNativesUT4AnimSetThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetThumbnailRenderer_NoRegister()
	{
		return UT4AnimSetThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EditorThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/T4EntityThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Utility/T4EntityThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::ClassParams = {
		&UT4AnimSetThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetThumbnailRenderer, 2001879612);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetThumbnailRenderer>()
	{
		return UT4AnimSetThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetThumbnailRenderer(Z_Construct_UClass_UT4AnimSetThumbnailRenderer, &UT4AnimSetThumbnailRenderer::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
