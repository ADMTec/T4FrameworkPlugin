// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4LevelEditorMode/Private/Details/T4LevelEditorContentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4LevelEditorContentData() {}
// Cross Module References
	T4LEVELEDITORMODE_API UScriptStruct* Z_Construct_UScriptStruct_FT4LevelEditorContentData();
	UPackage* Z_Construct_UPackage__Script_T4LevelEditorMode();
// End Cross Module References
class UScriptStruct* FT4LevelEditorContentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4LEVELEDITORMODE_API uint32 Get_Z_Construct_UScriptStruct_FT4LevelEditorContentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4LevelEditorContentData, Z_Construct_UPackage__Script_T4LevelEditorMode(), TEXT("T4LevelEditorContentData"), sizeof(FT4LevelEditorContentData), Get_Z_Construct_UScriptStruct_FT4LevelEditorContentData_Hash());
	}
	return Singleton;
}
template<> T4LEVELEDITORMODE_API UScriptStruct* StaticStruct<FT4LevelEditorContentData>()
{
	return FT4LevelEditorContentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4LevelEditorContentData(FT4LevelEditorContentData::StaticStruct, TEXT("/Script/T4LevelEditorMode"), TEXT("T4LevelEditorContentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4LevelEditorMode_StaticRegisterNativesFT4LevelEditorContentData
{
	FScriptStruct_T4LevelEditorMode_StaticRegisterNativesFT4LevelEditorContentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4LevelEditorContentData")),new UScriptStruct::TCppStructOps<FT4LevelEditorContentData>);
	}
} ScriptStruct_T4LevelEditorMode_StaticRegisterNativesFT4LevelEditorContentData;
	struct Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #149\n */" },
		{ "ModuleRelativePath", "Private/Details/T4LevelEditorContentData.h" },
		{ "ToolTip", "#149" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4LevelEditorContentData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4LevelEditorMode,
		nullptr,
		&NewStructOps,
		"T4LevelEditorContentData",
		sizeof(FT4LevelEditorContentData),
		alignof(FT4LevelEditorContentData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4LevelEditorContentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4LevelEditorContentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4LevelEditorMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4LevelEditorContentData"), sizeof(FT4LevelEditorContentData), Get_Z_Construct_UScriptStruct_FT4LevelEditorContentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4LevelEditorContentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4LevelEditorContentData_Hash() { return 4004441457U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
