// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/ActionPak/T4ActionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionBase() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionBase();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4LifecycleType();
// End Cross Module References
class UScriptStruct* FT4ActionBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionBase, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionBase"), sizeof(FT4ActionBase), Get_Z_Construct_UScriptStruct_FT4ActionBase_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionBase>()
{
	return FT4ActionBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionBase(FT4ActionBase::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionBase"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionBase
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionBase")),new UScriptStruct::TCppStructOps<FT4ActionBase>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionBase;
	struct Z_Construct_UScriptStruct_FT4ActionBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifecycleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LifecycleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LifecycleType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "ModuleRelativePath", "Public/ActionPak/T4ActionBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// Delay Time, \xec\xa6\x89 \xec\x9d\xb4 \xec\x8b\x9c\xea\xb0\x84 \xed\x9b\x84 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xeb\x90\x98\xeb\x8a\x94 \xea\xb2\x83, Offset \xea\xb0\x9c\xeb\x85\x90\xea\xb3\xbc \xeb\x8b\xa4\xeb\xa6\x84\xec\x97\x90 \xec\x9c\xa0\xec\x9d\x98! (Offset = \xec\xa7\x80\xec\xa0\x95 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb1\xb4\xeb\x84\x88\xeb\x9d\x84\xec\x96\xb4 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4)\n" },
		{ "ModuleRelativePath", "Public/ActionPak/T4ActionBase.h" },
		{ "ToolTip", "Delay Time, \xec\xa6\x89 \xec\x9d\xb4 \xec\x8b\x9c\xea\xb0\x84 \xed\x9b\x84 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xeb\x90\x98\xeb\x8a\x94 \xea\xb2\x83, Offset \xea\xb0\x9c\xeb\x85\x90\xea\xb3\xbc \xeb\x8b\xa4\xeb\xa6\x84\xec\x97\x90 \xec\x9c\xa0\xec\x9d\x98! (Offset = \xec\xa7\x80\xec\xa0\x95 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb1\xb4\xeb\x84\x88\xeb\x9d\x84\xec\x96\xb4 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionBase, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/ActionPak/T4ActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionBase, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeCommonActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPak/T4ActionBase.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeCommonActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType = { "LifecycleType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionBase, LifecycleType), Z_Construct_UEnum_T4Asset_ET4LifecycleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionBase_Statics::NewProp_LifecycleType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ActionBase",
		sizeof(FT4ActionBase),
		alignof(FT4ActionBase),
		Z_Construct_UScriptStruct_FT4ActionBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionBase"), sizeof(FT4ActionBase), Get_Z_Construct_UScriptStruct_FT4ActionBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionBase_Hash() { return 3207134264U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
