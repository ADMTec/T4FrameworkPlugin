// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/Command/T4ActionCommandBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionCommandBase() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionBase();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionCommandType();
// End Cross Module References
class UScriptStruct* FT4ActionCommandBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionCommandBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionCommandBase, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionCommandBase"), sizeof(FT4ActionCommandBase), Get_Z_Construct_UScriptStruct_FT4ActionCommandBase_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionCommandBase>()
{
	return FT4ActionCommandBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionCommandBase(FT4ActionCommandBase::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionCommandBase"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionCommandBase
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionCommandBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionCommandBase")),new UScriptStruct::TCppStructOps<FT4ActionCommandBase>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionCommandBase;
	struct Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransient_MetaData[];
#endif
		static void NewProp_bTransient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCommandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCommandType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionCommandType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionCommandBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionCommandBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient_MetaData[] = {
		{ "Comment", "// \xec\xa7\x80\xec\xa0\x95 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb1\xb4\xeb\x84\x88\xeb\x9d\x84\xec\x96\xb4 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionCommandBase.h" },
		{ "ToolTip", "\xec\xa7\x80\xec\xa0\x95 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb1\xb4\xeb\x84\x88\xeb\x9d\x84\xec\x96\xb4 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient_SetBit(void* Obj)
	{
		((FT4ActionCommandBase*)Obj)->bTransient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient = { "bTransient", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionCommandBase), &Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_OffsetTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionCommandBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_OffsetTimeSec = { "OffsetTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCommandBase, OffsetTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_OffsetTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_OffsetTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionKey_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionCommandBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCommandBase, ActionKey), Z_Construct_UScriptStruct_FT4ActionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionCommandBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType = { "ActionCommandType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCommandBase, ActionCommandType), Z_Construct_UEnum_T4Engine_ET4ActionCommandType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_bTransient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_OffsetTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::NewProp_ActionCommandType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionBase,
		&NewStructOps,
		"T4ActionCommandBase",
		sizeof(FT4ActionCommandBase),
		alignof(FT4ActionCommandBase),
		Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionCommandBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionCommandBase"), sizeof(FT4ActionCommandBase), Get_Z_Construct_UScriptStruct_FT4ActionCommandBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionCommandBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionCommandBase_Hash() { return 1793684414U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
