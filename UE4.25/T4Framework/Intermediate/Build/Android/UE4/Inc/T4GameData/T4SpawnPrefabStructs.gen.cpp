// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4SpawnPrefabStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SpawnPrefabStructs() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnPrefabData();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCDBKey();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEnemyType();
// End Cross Module References
class UScriptStruct* FT4SpawnPrefabData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SpawnPrefabData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SpawnPrefabData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SpawnPrefabData"), sizeof(FT4SpawnPrefabData), Get_Z_Construct_UScriptStruct_FT4SpawnPrefabData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SpawnPrefabData>()
{
	return FT4SpawnPrefabData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SpawnPrefabData(FT4SpawnPrefabData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SpawnPrefabData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnPrefabData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnPrefabData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SpawnPrefabData")),new UScriptStruct::TCppStructOps<FT4SpawnPrefabData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnPrefabData;
	struct Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBehaviorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideBehaviorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NPCDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SpawnPrefabData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #122\n" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "#122" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnPrefabData, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnPrefabData, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnPrefabData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_OverrideBehaviorData_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_OverrideBehaviorData = { "OverrideBehaviorData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnPrefabData, OverrideBehaviorData), Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_OverrideBehaviorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_OverrideBehaviorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_NPCDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_NPCDBKey = { "NPCDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnPrefabData, NPCDBKey), Z_Construct_UScriptStruct_FT4NPCDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_NPCDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_NPCDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4SpawnPrefabDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "FT4SpawnPrefabDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnPrefabData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_OverrideBehaviorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_NPCDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SpawnPrefabData",
		sizeof(FT4SpawnPrefabData),
		alignof(FT4SpawnPrefabData),
		Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnPrefabData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SpawnPrefabData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SpawnPrefabData"), sizeof(FT4SpawnPrefabData), Get_Z_Construct_UScriptStruct_FT4SpawnPrefabData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SpawnPrefabData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SpawnPrefabData_Hash() { return 4258196430U; }
class UScriptStruct* FT4SpawnOverrideBehaviorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SpawnOverrideBehaviorData"), sizeof(FT4SpawnOverrideBehaviorData), Get_Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SpawnOverrideBehaviorData>()
{
	return FT4SpawnOverrideBehaviorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SpawnOverrideBehaviorData(FT4SpawnOverrideBehaviorData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SpawnOverrideBehaviorData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnOverrideBehaviorData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnOverrideBehaviorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SpawnOverrideBehaviorData")),new UScriptStruct::TCppStructOps<FT4SpawnOverrideBehaviorData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnOverrideBehaviorData;
	struct Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOrKeepAggroTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveOrKeepAggroTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAggressive_MetaData[];
#endif
		static void NewProp_bAggressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAggressive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_IdleWaitTimeSec_MetaData[];
#endif
		static void NewProp_bOverride_IdleWaitTimeSec_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_IdleWaitTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_JumpRate_MetaData[];
#endif
		static void NewProp_bOverride_JumpRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_JumpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RoamingRate_MetaData[];
#endif
		static void NewProp_bOverride_RoamingRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RoamingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RomaingRange_MetaData[];
#endif
		static void NewProp_bOverride_RomaingRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RomaingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SensoryRange_MetaData[];
#endif
		static void NewProp_bOverride_SensoryRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SensoryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AgentRadius_MetaData[];
#endif
		static void NewProp_bOverride_AgentRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData[];
#endif
		static void NewProp_bOverride_ActiveOrKeepAggroTimeSec_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ActiveOrKeepAggroTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Aggressive_MetaData[];
#endif
		static void NewProp_bOverride_Aggressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Aggressive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnemyType_MetaData[];
#endif
		static void NewProp_bOverride_EnemyType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnemyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #118\n */// #114\n// #114\n" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "#118\n // #114\n// #114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SpawnOverrideBehaviorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #140\n" },
		{ "editcondition", "bOverride_JumpRate" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec = { "IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, IdleWaitTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_JumpRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_JumpRate" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_JumpRate = { "JumpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, JumpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RoamingRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_RoamingRate" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RoamingRate = { "RoamingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, RoamingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RomaingRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "editcondition", "bOverride_RomaingRange" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RomaingRange = { "RomaingRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, RomaingRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RomaingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RomaingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_SensoryRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : Agent \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\x8f Attack/Stop Distance \xec\x97\x90\xec\x84\x9c \xea\xb2\xb9\xec\xb9\x98\xec\xa7\x80 \xec\x95\x8a\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9 (WorldActor = BoundRadius)\n" },
		{ "editcondition", "bOverride_SensoryRange" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "#114 : Agent \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\x8f Attack/Stop Distance \xec\x97\x90\xec\x84\x9c \xea\xb2\xb9\xec\xb9\x98\xec\xa7\x80 \xec\x95\x8a\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9 (WorldActor = BoundRadius)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_SensoryRange = { "SensoryRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, SensoryRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "editcondition", "bOverride_AgentRadius" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, AgentRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "editcondition", "bOverride_ActiveOrKeepAggroTimeSec" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec = { "ActiveOrKeepAggroTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, ActiveOrKeepAggroTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #104\n" },
		{ "editcondition", "bOverride_Aggressive" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "#104" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bAggressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive = { "bAggressive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// Properties\n" },
		{ "editcondition", "bOverride_EnemyType" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnOverrideBehaviorData, EnemyType), Z_Construct_UEnum_T4GameData_ET4GameEnemyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #140\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "#140" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_IdleWaitTimeSec = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec = { "bOverride_IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_JumpRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate = { "bOverride_JumpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_RoamingRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate = { "bOverride_RoamingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_RomaingRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange = { "bOverride_RomaingRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_SensoryRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange = { "bOverride_SensoryRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_AgentRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius = { "bOverride_AgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_ActiveOrKeepAggroTimeSec = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec = { "bOverride_ActiveOrKeepAggroTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_Aggressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive = { "bOverride_Aggressive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// Override\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4SpawnPrefabStructs.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Override" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_SetBit(void* Obj)
	{
		((FT4SpawnOverrideBehaviorData*)Obj)->bOverride_EnemyType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType = { "bOverride_EnemyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4SpawnOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_RomaingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bAggressive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_EnemyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SpawnOverrideBehaviorData",
		sizeof(FT4SpawnOverrideBehaviorData),
		alignof(FT4SpawnOverrideBehaviorData),
		Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SpawnOverrideBehaviorData"), sizeof(FT4SpawnOverrideBehaviorData), Get_Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SpawnOverrideBehaviorData_Hash() { return 4027027800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
