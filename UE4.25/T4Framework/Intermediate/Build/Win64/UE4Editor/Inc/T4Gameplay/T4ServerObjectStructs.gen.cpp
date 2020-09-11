// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Server/Object/T4ServerObjectStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ServerObjectStructs() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameObjectStatus();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameObjectMissionInfo();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameObjectStat();
// End Cross Module References
class UScriptStruct* FT4GameObjectStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameObjectStatus, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GameObjectStatus"), sizeof(FT4GameObjectStatus), Get_Z_Construct_UScriptStruct_FT4GameObjectStatus_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GameObjectStatus>()
{
	return FT4GameObjectStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameObjectStatus(FT4GameObjectStatus::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GameObjectStatus"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectStatus
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameObjectStatus")),new UScriptStruct::TCppStructOps<FT4GameObjectStatus>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectStatus;
	struct Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePatrol_MetaData[];
#endif
		static void NewProp_bUsePatrol_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePatrol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbnormalStatusDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbnormalStatusDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbnormalStatus_MetaData[];
#endif
		static void NewProp_bAbnormalStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbnormalStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntered_MetaData[];
#endif
		static void NewProp_bEntered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveMissions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveMissions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #141\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#141" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameObjectStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#142" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol_SetBit(void* Obj)
	{
		((FT4GameObjectStatus*)Obj)->bUsePatrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol = { "bUsePatrol", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GameObjectStatus), &Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AbnormalStatusDurationSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AbnormalStatusDurationSec = { "AbnormalStatusDurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStatus, AbnormalStatusDurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AbnormalStatusDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AbnormalStatusDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #155\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#155" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus_SetBit(void* Obj)
	{
		((FT4GameObjectStatus*)Obj)->bAbnormalStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus = { "bAbnormalStatus", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GameObjectStatus), &Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered_SetBit(void* Obj)
	{
		((FT4GameObjectStatus*)Obj)->bEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered = { "bEntered", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GameObjectStatus), &Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((FT4GameObjectStatus*)Obj)->bDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GameObjectStatus), &Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_Health_Point_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_Health_Point = { "Health_Point", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStatus, Health_Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_Health_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_Health_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStatus, MaxMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_MaxMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_MaxMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStatus, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AnimSetName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AnimSetName = { "AnimSetName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStatus, AnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions = { "ActiveMissions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStatus, ActiveMissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions_Inner = { "ActiveMissions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4GameObjectMissionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bUsePatrol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AbnormalStatusDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bAbnormalStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_bDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_Health_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_MaxMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_AnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::NewProp_ActiveMissions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4GameObjectStatus",
		sizeof(FT4GameObjectStatus),
		alignof(FT4GameObjectStatus),
		Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameObjectStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameObjectStatus"), sizeof(FT4GameObjectStatus), Get_Z_Construct_UScriptStruct_FT4GameObjectStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameObjectStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectStatus_Hash() { return 922086084U; }
class UScriptStruct* FT4GameObjectMissionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GameObjectMissionInfo"), sizeof(FT4GameObjectMissionInfo), Get_Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GameObjectMissionInfo>()
{
	return FT4GameObjectMissionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameObjectMissionInfo(FT4GameObjectMissionInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GameObjectMissionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectMissionInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectMissionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameObjectMissionInfo")),new UScriptStruct::TCppStructOps<FT4GameObjectMissionInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectMissionInfo;
	struct Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#164" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameObjectMissionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectMissionInfo, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_ContentDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_ContentDBKey = { "ContentDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectMissionInfo, ContentDBKey), Z_Construct_UScriptStruct_FT4ContentDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_ContentDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_ContentDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::NewProp_ContentDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4GameObjectMissionInfo",
		sizeof(FT4GameObjectMissionInfo),
		alignof(FT4GameObjectMissionInfo),
		Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameObjectMissionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameObjectMissionInfo"), sizeof(FT4GameObjectMissionInfo), Get_Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectMissionInfo_Hash() { return 4227509222U; }
class UScriptStruct* FT4GameObjectStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameObjectStat, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GameObjectStat"), sizeof(FT4GameObjectStat), Get_Z_Construct_UScriptStruct_FT4GameObjectStat_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GameObjectStat>()
{
	return FT4GameObjectStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameObjectStat(FT4GameObjectStat::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GameObjectStat"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectStat
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameObjectStat")),new UScriptStruct::TCppStructOps<FT4GameObjectStat>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameObjectStat;
	struct Z_Construct_UScriptStruct_FT4GameObjectStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dodge_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hit_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defensive_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Defensive_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Striking_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Striking_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameObjectStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Dodge_Rate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xeb\xaa\x85\xec\xa4\x91\xeb\xa5\xa0\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xeb\xaa\x85\xec\xa4\x91\xeb\xa5\xa0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Dodge_Rate = { "Dodge_Rate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStat, Dodge_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Dodge_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Dodge_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Hit_Rate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Hit_Rate = { "Hit_Rate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStat, Hit_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Hit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Hit_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Defensive_Power_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Defensive_Power = { "Defensive_Power", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStat, Defensive_Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Defensive_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Defensive_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Striking_Power_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Striking_Power = { "Striking_Power", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStat, Striking_Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Striking_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Striking_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Health_Point_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// FT4StatTableRow\n// Total Stat = InitializeNPCStatDBKey + MainWeaponDBKey (Stat)\n" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "FT4StatTableRow\nTotal Stat = InitializeNPCStatDBKey + MainWeaponDBKey (Stat)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Health_Point = { "Health_Point", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameObjectStat, Health_Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Health_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Health_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Dodge_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Hit_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Defensive_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Striking_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::NewProp_Health_Point,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4GameObjectStat",
		sizeof(FT4GameObjectStat),
		alignof(FT4GameObjectStat),
		Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameObjectStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameObjectStat"), sizeof(FT4GameObjectStat), Get_Z_Construct_UScriptStruct_FT4GameObjectStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameObjectStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameObjectStat_Hash() { return 2569694869U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
