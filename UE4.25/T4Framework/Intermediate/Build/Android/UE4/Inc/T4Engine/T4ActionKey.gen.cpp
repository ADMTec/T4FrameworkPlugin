// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionKey() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
class UScriptStruct* FT4ActionKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionKey, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionKey"), sizeof(FT4ActionKey), Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionKey>()
{
	return FT4ActionKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionKey(FT4ActionKey::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionKey
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionKey")),new UScriptStruct::TCppStructOps<FT4ActionKey>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionKey;
	struct Z_Construct_UScriptStruct_FT4ActionKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideExisting_MetaData[];
#endif
		static void NewProp_bOverrideExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrimary_MetaData[];
#endif
		static void NewProp_bPrimary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #20\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionKey.h" },
		{ "ToolTip", "#20" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName_MetaData[] = {
		{ "Comment", "// #44 : \xec\x9d\xb4\xeb\xaf\xb8 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\xa4\x91\xec\x9d\xb8 Primary Key \xea\xb0\x80 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xec\x82\xad\xec\xa0\x9c\xed\x95\x98\xea\xb3\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4...\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionKey.h" },
		{ "ToolTip", "#44 : \xec\x9d\xb4\xeb\xaf\xb8 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\xa4\x91\xec\x9d\xb8 Primary Key \xea\xb0\x80 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xec\x82\xad\xec\xa0\x9c\xed\x95\x98\xea\xb3\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName = { "DebugKeyName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionKey, DebugKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting_MetaData[] = {
		{ "Comment", "// #20 : \xea\xbc\xad \xed\x95\x98\xeb\x82\x98\xeb\xa7\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9...\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionKey.h" },
		{ "ToolTip", "#20 : \xea\xbc\xad \xed\x95\x98\xeb\x82\x98\xeb\xa7\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9..." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting_SetBit(void* Obj)
	{
		((FT4ActionKey*)Obj)->bOverrideExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting = { "bOverrideExisting", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionKey), &Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionKey.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_SetBit(void* Obj)
	{
		((FT4ActionKey*)Obj)->bPrimary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary = { "bPrimary", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionKey), &Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionKey.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bOverrideExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionKey",
		sizeof(FT4ActionKey),
		alignof(FT4ActionKey),
		Z_Construct_UScriptStruct_FT4ActionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionKey"), sizeof(FT4ActionKey), Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash() { return 2894282950U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
