// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSCStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSCStructs() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FT4PacketSC_MoveSegmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketSC_MoveSegmentData"), sizeof(FT4PacketSC_MoveSegmentData), Get_Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketSC_MoveSegmentData>()
{
	return FT4PacketSC_MoveSegmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketSC_MoveSegmentData(FT4PacketSC_MoveSegmentData::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketSC_MoveSegmentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketSC_MoveSegmentData
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketSC_MoveSegmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketSC_MoveSegmentData")),new UScriptStruct::TCppStructOps<FT4PacketSC_MoveSegmentData>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketSC_MoveSegmentData;
	struct Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #161\n */// #161\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSCStructs.h" },
		{ "ToolTip", "#161\n // #161" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketSC_MoveSegmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_TimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSCStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketSC_MoveSegmentData, TimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_TimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_TimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSCStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketSC_MoveSegmentData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4PacketSC_MoveSegmentData",
		sizeof(FT4PacketSC_MoveSegmentData),
		alignof(FT4PacketSC_MoveSegmentData),
		Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketSC_MoveSegmentData"), sizeof(FT4PacketSC_MoveSegmentData), Get_Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketSC_MoveSegmentData_Hash() { return 3283810301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
