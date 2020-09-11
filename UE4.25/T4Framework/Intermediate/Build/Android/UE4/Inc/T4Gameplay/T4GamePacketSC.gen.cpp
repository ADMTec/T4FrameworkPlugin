// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSC() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC();
// End Cross Module References
class UScriptStruct* FT4GamePacketSC_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_Base, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_Base"), sizeof(FT4GamePacketSC_Base), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_Base>()
{
	return FT4GamePacketSC_Base::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_Base(FT4GamePacketSC_Base::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_Base"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Base
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Base()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_Base")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_Base>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Base;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PacketSC;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PacketSC_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_Base>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC = { "PacketSC", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Base, PacketSC), Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::NewProp_PacketSC_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4GamePacketSC_Base",
		sizeof(FT4GamePacketSC_Base),
		alignof(FT4GamePacketSC_Base),
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_Base"), sizeof(FT4GamePacketSC_Base), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Base_Hash() { return 2419213520U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
