// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Sequencer/T4ActionMovieSceneEvalTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMovieSceneEvalTemplate() {}
// Cross Module References
	T4ACTIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
// End Cross Module References
class UScriptStruct* FT4ActionMovieSceneEvalTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ACTIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate, Z_Construct_UPackage__Script_T4ActionEditor(), TEXT("T4ActionMovieSceneEvalTemplate"), sizeof(FT4ActionMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Hash());
	}
	return Singleton;
}
template<> T4ACTIONEDITOR_API UScriptStruct* StaticStruct<FT4ActionMovieSceneEvalTemplate>()
{
	return FT4ActionMovieSceneEvalTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionMovieSceneEvalTemplate(FT4ActionMovieSceneEvalTemplate::StaticStruct, TEXT("/Script/T4ActionEditor"), TEXT("T4ActionMovieSceneEvalTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSceneEvalTemplate
{
	FScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSceneEvalTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionMovieSceneEvalTemplate")),new UScriptStruct::TCppStructOps<FT4ActionMovieSceneEvalTemplate>);
	}
} ScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSceneEvalTemplate;
	struct Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #56\n */" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneEvalTemplate.h" },
		{ "ToolTip", "#56" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionMovieSceneEvalTemplate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"T4ActionMovieSceneEvalTemplate",
		sizeof(FT4ActionMovieSceneEvalTemplate),
		alignof(FT4ActionMovieSceneEvalTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4ActionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionMovieSceneEvalTemplate"), sizeof(FT4ActionMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneEvalTemplate_Hash() { return 4021221661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
