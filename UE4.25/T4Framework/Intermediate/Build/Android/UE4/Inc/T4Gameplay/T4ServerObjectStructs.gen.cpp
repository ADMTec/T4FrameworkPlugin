// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/Object/T4ServerObjectStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ServerObjectStructs() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectStatus();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4QuestDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectStat();
// End Cross Module References
class UScriptStruct* FT4ServerObjectStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ServerObjectStatus, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ServerObjectStatus"), sizeof(FT4ServerObjectStatus), Get_Z_Construct_UScriptStruct_FT4ServerObjectStatus_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ServerObjectStatus>()
{
	return FT4ServerObjectStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ServerObjectStatus(FT4ServerObjectStatus::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ServerObjectStatus"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectStatus
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ServerObjectStatus")),new UScriptStruct::TCppStructOps<FT4ServerObjectStatus>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectStatus;
	struct Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveQuestMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveQuestMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveQuestMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveQuestMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #141\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#141" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ServerObjectStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#142" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol_SetBit(void* Obj)
	{
		((FT4ServerObjectStatus*)Obj)->bUsePatrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol = { "bUsePatrol", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ServerObjectStatus), &Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AbnormalStatusDurationSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AbnormalStatusDurationSec = { "AbnormalStatusDurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStatus, AbnormalStatusDurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AbnormalStatusDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AbnormalStatusDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #155\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#155" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus_SetBit(void* Obj)
	{
		((FT4ServerObjectStatus*)Obj)->bAbnormalStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus = { "bAbnormalStatus", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ServerObjectStatus), &Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered_SetBit(void* Obj)
	{
		((FT4ServerObjectStatus*)Obj)->bEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered = { "bEntered", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ServerObjectStatus), &Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((FT4ServerObjectStatus*)Obj)->bDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ServerObjectStatus), &Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_Health_Point_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_Health_Point = { "Health_Point", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStatus, Health_Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_Health_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_Health_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStatus, MaxMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_MaxMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_MaxMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStatus, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AnimSetName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AnimSetName = { "AnimSetName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStatus, AnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap = { "ActiveQuestMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStatus, ActiveQuestMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_Key_KeyProp = { "ActiveQuestMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_ValueProp = { "ActiveQuestMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bUsePatrol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AbnormalStatusDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bAbnormalStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_bDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_Health_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_MaxMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_AnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::NewProp_ActiveQuestMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4ServerObjectStatus",
		sizeof(FT4ServerObjectStatus),
		alignof(FT4ServerObjectStatus),
		Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ServerObjectStatus"), sizeof(FT4ServerObjectStatus), Get_Z_Construct_UScriptStruct_FT4ServerObjectStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ServerObjectStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectStatus_Hash() { return 1491159089U; }
class UScriptStruct* FT4ServerObjectQuestInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ServerObjectQuestInfo"), sizeof(FT4ServerObjectQuestInfo), Get_Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ServerObjectQuestInfo>()
{
	return FT4ServerObjectQuestInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ServerObjectQuestInfo(FT4ServerObjectQuestInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ServerObjectQuestInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectQuestInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectQuestInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ServerObjectQuestInfo")),new UScriptStruct::TCppStructOps<FT4ServerObjectQuestInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectQuestInfo;
	struct Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMissionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveMissionMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveMissionMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveMissionMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestUniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#164" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ServerObjectQuestInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap = { "ActiveMissionMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectQuestInfo, ActiveMissionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_Key_KeyProp = { "ActiveMissionMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_ValueProp = { "ActiveMissionMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectQuestInfo, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestDBKey = { "QuestDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectQuestInfo, QuestDBKey), Z_Construct_UScriptStruct_FT4QuestDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectQuestInfo, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_ActiveMissionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::NewProp_QuestUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4ServerObjectQuestInfo",
		sizeof(FT4ServerObjectQuestInfo),
		alignof(FT4ServerObjectQuestInfo),
		Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ServerObjectQuestInfo"), sizeof(FT4ServerObjectQuestInfo), Get_Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectQuestInfo_Hash() { return 1795478679U; }
class UScriptStruct* FT4ServerObjectMissionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ServerObjectMissionInfo"), sizeof(FT4ServerObjectMissionInfo), Get_Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ServerObjectMissionInfo>()
{
	return FT4ServerObjectMissionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ServerObjectMissionInfo(FT4ServerObjectMissionInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ServerObjectMissionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectMissionInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectMissionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ServerObjectMissionInfo")),new UScriptStruct::TCppStructOps<FT4ServerObjectMissionInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectMissionInfo;
	struct Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionUniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#164" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ServerObjectMissionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectMissionInfo, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_QuestDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_QuestDBKey = { "QuestDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectMissionInfo, QuestDBKey), Z_Construct_UScriptStruct_FT4QuestDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_QuestDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_QuestDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_MissionUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_MissionUniqueID = { "MissionUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectMissionInfo, MissionUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_MissionUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_MissionUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_QuestDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::NewProp_MissionUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4ServerObjectMissionInfo",
		sizeof(FT4ServerObjectMissionInfo),
		alignof(FT4ServerObjectMissionInfo),
		Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ServerObjectMissionInfo"), sizeof(FT4ServerObjectMissionInfo), Get_Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectMissionInfo_Hash() { return 3160195413U; }
class UScriptStruct* FT4ServerObjectStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ServerObjectStat, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ServerObjectStat"), sizeof(FT4ServerObjectStat), Get_Z_Construct_UScriptStruct_FT4ServerObjectStat_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ServerObjectStat>()
{
	return FT4ServerObjectStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ServerObjectStat(FT4ServerObjectStat::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ServerObjectStat"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectStat
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ServerObjectStat")),new UScriptStruct::TCppStructOps<FT4ServerObjectStat>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ServerObjectStat;
	struct Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ServerObjectStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Dodge_Rate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xeb\xaa\x85\xec\xa4\x91\xeb\xa5\xa0\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xeb\xaa\x85\xec\xa4\x91\xeb\xa5\xa0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Dodge_Rate = { "Dodge_Rate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStat, Dodge_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Dodge_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Dodge_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Hit_Rate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Hit_Rate = { "Hit_Rate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStat, Hit_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Hit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Hit_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Defensive_Power_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Defensive_Power = { "Defensive_Power", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStat, Defensive_Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Defensive_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Defensive_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Striking_Power_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// \xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "\xed\x94\xbc, \xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Striking_Power = { "Striking_Power", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStat, Striking_Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Striking_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Striking_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Health_Point_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// FT4StatTableRow\n// Total Stat = InitializeNPCStatDBKey + MainWeaponDBKey (Stat)\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ServerObjectStructs.h" },
		{ "ToolTip", "FT4StatTableRow\nTotal Stat = InitializeNPCStatDBKey + MainWeaponDBKey (Stat)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Health_Point = { "Health_Point", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ServerObjectStat, Health_Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Health_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Health_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Dodge_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Hit_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Defensive_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Striking_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::NewProp_Health_Point,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4ServerObjectStat",
		sizeof(FT4ServerObjectStat),
		alignof(FT4ServerObjectStat),
		Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ServerObjectStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ServerObjectStat"), sizeof(FT4ServerObjectStat), Get_Z_Construct_UScriptStruct_FT4ServerObjectStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ServerObjectStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ServerObjectStat_Hash() { return 314675557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
