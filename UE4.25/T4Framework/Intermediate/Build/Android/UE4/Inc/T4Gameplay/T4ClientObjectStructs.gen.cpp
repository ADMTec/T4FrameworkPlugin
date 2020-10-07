// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Client/Object/T4ClientObjectStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ClientObjectStructs() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4QuestDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4MissionTextDBKey();
// End Cross Module References
class UScriptStruct* FT4ClientObjectQuestInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ClientObjectQuestInfo"), sizeof(FT4ClientObjectQuestInfo), Get_Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ClientObjectQuestInfo>()
{
	return FT4ClientObjectQuestInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ClientObjectQuestInfo(FT4ClientObjectQuestInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ClientObjectQuestInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ClientObjectQuestInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ClientObjectQuestInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ClientObjectQuestInfo")),new UScriptStruct::TCppStructOps<FT4ClientObjectQuestInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ClientObjectQuestInfo;
	struct Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MissionMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionMap_ValueProp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
		{ "ToolTip", "#164" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ClientObjectQuestInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap = { "MissionMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectQuestInfo, MissionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_Key_KeyProp = { "MissionMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_ValueProp = { "MissionMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectQuestInfo, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestDBKey = { "QuestDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectQuestInfo, QuestDBKey), Z_Construct_UScriptStruct_FT4QuestDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectQuestInfo, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_MissionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::NewProp_QuestUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4ClientObjectQuestInfo",
		sizeof(FT4ClientObjectQuestInfo),
		alignof(FT4ClientObjectQuestInfo),
		Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ClientObjectQuestInfo"), sizeof(FT4ClientObjectQuestInfo), Get_Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ClientObjectQuestInfo_Hash() { return 2635439214U; }
class UScriptStruct* FT4ClientObjectMissionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ClientObjectMissionInfo"), sizeof(FT4ClientObjectMissionInfo), Get_Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ClientObjectMissionInfo>()
{
	return FT4ClientObjectMissionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ClientObjectMissionInfo(FT4ClientObjectMissionInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ClientObjectMissionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ClientObjectMissionInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ClientObjectMissionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ClientObjectMissionInfo")),new UScriptStruct::TCppStructOps<FT4ClientObjectMissionInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ClientObjectMissionInfo;
	struct Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionTextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionTextDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionUniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #164\n */// #164\n" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
		{ "ToolTip", "#164\n // #164" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ClientObjectMissionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectMissionInfo, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionTextDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionTextDBKey = { "MissionTextDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectMissionInfo, MissionTextDBKey), Z_Construct_UScriptStruct_FT4MissionTextDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionTextDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4ClientObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionUniqueID = { "MissionUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ClientObjectMissionInfo, MissionUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionTextDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::NewProp_MissionUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4ClientObjectMissionInfo",
		sizeof(FT4ClientObjectMissionInfo),
		alignof(FT4ClientObjectMissionInfo),
		Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ClientObjectMissionInfo"), sizeof(FT4ClientObjectMissionInfo), Get_Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ClientObjectMissionInfo_Hash() { return 515366633U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
