// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/AIController/T4NPCAIStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4NPCAIStructs() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCAIBehaviorData();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
class UScriptStruct* FT4NPCAIBehaviorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4NPCAIBehaviorData"), sizeof(FT4NPCAIBehaviorData), Get_Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4NPCAIBehaviorData>()
{
	return FT4NPCAIBehaviorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NPCAIBehaviorData(FT4NPCAIBehaviorData::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4NPCAIBehaviorData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4NPCAIBehaviorData
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4NPCAIBehaviorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NPCAIBehaviorData")),new UScriptStruct::TCppStructOps<FT4NPCAIBehaviorData>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4NPCAIBehaviorData;
	struct Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleWaitTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleWaitTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RomaingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RomaingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensoryRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensoryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOrKeepAggroTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveOrKeepAggroTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAggressive_MetaData[];
#endif
		static void NewProp_bAggressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAggressive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #114\n */// #114\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#114\n // #114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NPCAIBehaviorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_IdleWaitTimeSec = { "IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCAIBehaviorData, IdleWaitTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_JumpRate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_JumpRate = { "JumpRate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCAIBehaviorData, JumpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RoamingRate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RoamingRate = { "RoamingRate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCAIBehaviorData, RoamingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RomaingRange_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RomaingRange = { "RomaingRange", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCAIBehaviorData, RomaingRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RomaingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RomaingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_SensoryRange_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_SensoryRange = { "SensoryRange", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCAIBehaviorData, SensoryRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec = { "ActiveOrKeepAggroTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NPCAIBehaviorData, ActiveOrKeepAggroTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #114\n// FT4NPCAIBehaviorData : AIController (Runtime)\n// FT4NPCBehaviorData : NPC DataTable (Original Set)\n// FT4GameOverrideNPCBehaviorData : Spawn Asset (Instance Set)\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAIStructs.h" },
		{ "ToolTip", "#114\nFT4NPCAIBehaviorData : AIController (Runtime)\nFT4NPCBehaviorData : NPC DataTable (Original Set)\nFT4GameOverrideNPCBehaviorData : Spawn Asset (Instance Set)" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive_SetBit(void* Obj)
	{
		((FT4NPCAIBehaviorData*)Obj)->bAggressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive = { "bAggressive", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4NPCAIBehaviorData), &Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_RomaingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::NewProp_bAggressive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4NPCAIBehaviorData",
		sizeof(FT4NPCAIBehaviorData),
		alignof(FT4NPCAIBehaviorData),
		Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NPCAIBehaviorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NPCAIBehaviorData"), sizeof(FT4NPCAIBehaviorData), Get_Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NPCAIBehaviorData_Hash() { return 895548028U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
