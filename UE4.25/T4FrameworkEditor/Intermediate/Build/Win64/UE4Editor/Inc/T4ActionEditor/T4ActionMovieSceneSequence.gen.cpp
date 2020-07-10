// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Sequencer/T4ActionMovieSceneSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMovieSceneSequence() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieSceneSequence_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieScene_NoRegister();
// End Cross Module References
	void UT4ActionMovieSceneSequence::StaticRegisterNativesUT4ActionMovieSceneSequence()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionMovieSceneSequence_NoRegister()
	{
		return UT4ActionMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContiMovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContiMovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/T4ActionMovieSceneSequence.h" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneSequence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::NewProp_ContiMovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this sequence. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::NewProp_ContiMovieScene = { "ContiMovieScene", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSceneSequence, ContiMovieScene), Z_Construct_UClass_UT4ActionMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::NewProp_ContiMovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::NewProp_ContiMovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::NewProp_ContiMovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionMovieSceneSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::ClassParams = {
		&UT4ActionMovieSceneSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionMovieSceneSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionMovieSceneSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionMovieSceneSequence, 2375939151);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionMovieSceneSequence>()
	{
		return UT4ActionMovieSceneSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionMovieSceneSequence(Z_Construct_UClass_UT4ActionMovieSceneSequence, &UT4ActionMovieSceneSequence::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionMovieSceneSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionMovieSceneSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
