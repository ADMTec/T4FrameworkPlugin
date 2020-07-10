// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Sequencer/T4ActionMovieScene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMovieScene() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieScene_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
// End Cross Module References
	void UT4ActionMovieScene::StaticRegisterNativesUT4ActionMovieScene()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionMovieScene_NoRegister()
	{
		return UT4ActionMovieScene::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionMovieScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionMovieScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieScene_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #54\n */" },
		{ "IncludePath", "Sequencer/T4ActionMovieScene.h" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieScene.h" },
		{ "ToolTip", "#54" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionMovieScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionMovieScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionMovieScene_Statics::ClassParams = {
		&UT4ActionMovieScene::StaticClass,
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
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionMovieScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionMovieScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionMovieScene, 3753184779);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionMovieScene>()
	{
		return UT4ActionMovieScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionMovieScene(Z_Construct_UClass_UT4ActionMovieScene, &UT4ActionMovieScene::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionMovieScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionMovieScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
