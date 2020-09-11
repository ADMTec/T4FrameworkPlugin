// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSC_Debug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSC_Debug() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
// End Cross Module References
class UScriptStruct* FT4GamePacketSC_DebugAIStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_DebugAIStatus"), sizeof(FT4GamePacketSC_DebugAIStatus), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_DebugAIStatus>()
{
	return FT4GamePacketSC_DebugAIStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_DebugAIStatus(FT4GamePacketSC_DebugAIStatus::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_DebugAIStatus"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DebugAIStatus
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DebugAIStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_DebugAIStatus")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_DebugAIStatus>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DebugAIStatus;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AITaskName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AITaskName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AIStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #140 : NPC Only\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Debug.h" },
		{ "ToolTip", "#140 : NPC Only" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_DebugAIStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AITaskName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Debug.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AITaskName = { "AITaskName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DebugAIStatus, AITaskName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AITaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AITaskName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AIStateName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Debug.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AIStateName = { "AIStateName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DebugAIStatus, AIStateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AIStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AIStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Debug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DebugAIStatus, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AITaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_AIStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_DebugAIStatus",
		sizeof(FT4GamePacketSC_DebugAIStatus),
		alignof(FT4GamePacketSC_DebugAIStatus),
		Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_DebugAIStatus"), sizeof(FT4GamePacketSC_DebugAIStatus), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DebugAIStatus_Hash() { return 2909084107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
