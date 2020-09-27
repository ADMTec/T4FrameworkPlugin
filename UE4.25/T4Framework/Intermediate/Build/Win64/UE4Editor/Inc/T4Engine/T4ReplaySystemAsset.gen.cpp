// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/ReplaySystem/T4ReplaySystemAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ReplaySystemAsset() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReplayData();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StopActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionPackActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ResurrectActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4DieActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4CrowdControlActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4HitActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkinActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4CostumeActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StanceActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4LockOnActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4AimActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TurnActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RotationActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TeleportActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4JumpActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveStopActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldTravelActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReplayItem();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReplayHeader();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionCommandType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActorID();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ReplaySystemAsset_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ReplaySystemAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FT4ReplayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ReplayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ReplayData, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ReplayData"), sizeof(FT4ReplayData), Get_Z_Construct_UScriptStruct_FT4ReplayData_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ReplayData>()
{
	return FT4ReplayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ReplayData(FT4ReplayData::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ReplayData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayData
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ReplayData")),new UScriptStruct::TCppStructOps<FT4ReplayData>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayData;
	struct Z_Construct_UScriptStruct_FT4ReplayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorActions_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StopActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PakActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PakActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResurrectActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResurrectActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResurrectActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DieActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DieActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DieActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdControlActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CrowdControlActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrowdControlActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkinActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CostumeActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CostumeActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequipWeaponActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnequipWeaponActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnequipWeaponActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipWeaponActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipWeaponActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipWeaponActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StanceActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StanceActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSetActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSetActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockOnActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockOnActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockOnActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AimActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TurnActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurnActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeleportActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JumpActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSegmentsActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveSegmentsActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSegmentsActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedSyncActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveSpeedSyncActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSpeedSyncActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveStopActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveStopActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveStopActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSyncActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveSyncActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSyncActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnActorActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DespawnActorActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DespawnActorActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnActorActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnActorActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnActorActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeSyncActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldTimeSyncActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTimeSyncActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTravelActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldTravelActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTravelActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActionParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayActionParameters;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlayActionParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayActionParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ReplayData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// T4ActionCommandEditors.h\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "T4ActionCommandEditors.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions = { "EditorActions", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, EditorActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions_Inner = { "EditorActions", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EditorActionCommand, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions = { "StopActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, StopActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions_Inner = { "StopActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4StopActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// T4ActionCommandCommons.h\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "T4ActionCommandCommons.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions = { "PakActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, PakActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions_Inner = { "PakActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ActionPackActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions = { "ResurrectActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, ResurrectActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions_Inner = { "ResurrectActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ResurrectActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions = { "DieActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, DieActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions_Inner = { "DieActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4DieActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions = { "CrowdControlActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, CrowdControlActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions_Inner = { "CrowdControlActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4CrowdControlActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #130\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#130" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions = { "HitActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, HitActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions_Inner = { "HitActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4HitActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions = { "SkinActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, SkinActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions_Inner = { "SkinActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4SkinActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions = { "CostumeActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, CostumeActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions_Inner = { "CostumeActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4CostumeActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions = { "UnequipWeaponActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, UnequipWeaponActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions_Inner = { "UnequipWeaponActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#106" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions = { "EquipWeaponActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, EquipWeaponActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions_Inner = { "EquipWeaponActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#73" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions = { "StanceActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, StanceActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions_Inner = { "StanceActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4StanceActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions = { "AnimSetActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, AnimSetActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions_Inner = { "AnimSetActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #113\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#113" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions = { "LockOnActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, LockOnActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions_Inner = { "LockOnActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4LockOnActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// T4ActionCommandStatus.h\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions = { "AimActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, AimActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions_Inner = { "AimActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AimActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions = { "TurnActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, TurnActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions_Inner = { "TurnActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4TurnActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions = { "RotationActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, RotationActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions_Inner = { "RotationActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4RotationActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions = { "TeleportActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, TeleportActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions_Inner = { "TeleportActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4TeleportActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions = { "JumpActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, JumpActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions_Inner = { "JumpActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4JumpActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions = { "MoveSegmentsActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, MoveSegmentsActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions_Inner = { "MoveSegmentsActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions = { "MoveSpeedSyncActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, MoveSpeedSyncActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions_Inner = { "MoveSpeedSyncActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions = { "MoveStopActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, MoveStopActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions_Inner = { "MoveStopActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MoveStopActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = Default)\n//TArray<FT4MoveAsyncActionCommand> MoveAsyncActions; // #150 :  Async Action \xec\x9d\x80 \xeb\x85\xb9\xed\x99\x94\xec\x97\x90\xec\x84\x9c \xec\xa0\x9c\xec\x99\xb8\xed\x95\x9c\xeb\x8b\xa4. \xeb\xa6\xac\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x97\x90\xec\x84\x9c MyPC \xeb\x8a\x94 MoveSync Action \xec\x9c\xbc\xeb\xa1\x9c \xec\x9b\x80\xec\xa7\x81\xec\x9d\xb8\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = Default)\nTArray<FT4MoveAsyncActionCommand> MoveAsyncActions;  #150 :  Async Action \xec\x9d\x80 \xeb\x85\xb9\xed\x99\x94\xec\x97\x90\xec\x84\x9c \xec\xa0\x9c\xec\x99\xb8\xed\x95\x9c\xeb\x8b\xa4. \xeb\xa6\xac\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x97\x90\xec\x84\x9c MyPC \xeb\x8a\x94 MoveSync Action \xec\x9c\xbc\xeb\xa1\x9c \xec\x9b\x80\xec\xa7\x81\xec\x9d\xb8\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions = { "MoveSyncActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, MoveSyncActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions_Inner = { "MoveSyncActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MoveSyncActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions = { "DespawnActorActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, DespawnActorActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions_Inner = { "DespawnActorActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #146\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "#146" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions = { "SpawnActorActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, SpawnActorActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions_Inner = { "SpawnActorActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions = { "WorldTimeSyncActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, WorldTimeSyncActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions_Inner = { "WorldTimeSyncActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// T4ActionCommandWorlds.h\n" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ToolTip", "T4ActionCommandWorlds.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions = { "WorldTravelActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, WorldTravelActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions_Inner = { "WorldTravelActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4WorldTravelActionCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters = { "PlayActionParameters", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, PlayActionParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_Key_KeyProp = { "PlayActionParameters_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_ValueProp = { "PlayActionParameters", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ActionParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions = { "PlayActions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, PlayActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions_Inner = { "PlayActions", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ReplayItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_Header_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayData, Header), Z_Construct_UScriptStruct_FT4ReplayHeader, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ReplayData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EditorActions_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StopActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PakActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_ResurrectActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DieActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CrowdControlActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_HitActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SkinActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_CostumeActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_UnequipWeaponActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_EquipWeaponActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_StanceActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AnimSetActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_LockOnActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_AimActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TurnActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_RotationActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_TeleportActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_JumpActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSegmentsActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSpeedSyncActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveStopActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_MoveSyncActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_DespawnActorActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_SpawnActorActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTimeSyncActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_WorldTravelActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActionParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_PlayActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayData_Statics::NewProp_Header,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ReplayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ReplayData",
		sizeof(FT4ReplayData),
		alignof(FT4ReplayData),
		Z_Construct_UScriptStruct_FT4ReplayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ReplayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ReplayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ReplayData"), sizeof(FT4ReplayData), Get_Z_Construct_UScriptStruct_FT4ReplayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ReplayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ReplayData_Hash() { return 271261803U; }
class UScriptStruct* FT4ReplayItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ReplayItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ReplayItem, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ReplayItem"), sizeof(FT4ReplayItem), Get_Z_Construct_UScriptStruct_FT4ReplayItem_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ReplayItem>()
{
	return FT4ReplayItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ReplayItem(FT4ReplayItem::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ReplayItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayItem
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ReplayItem")),new UScriptStruct::TCppStructOps<FT4ReplayItem>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayItem;
	struct Z_Construct_UScriptStruct_FT4ReplayItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCommandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCommandType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionCommandType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UniqueKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ReplayItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionArrayIndex_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionArrayIndex = { "ActionArrayIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayItem, ActionArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType = { "ActionCommandType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayItem, ActionCommandType), Z_Construct_UEnum_T4Engine_ET4ActionCommandType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActorID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayItem, ActorID), Z_Construct_UScriptStruct_FT4ActorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_UniqueKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_UniqueKey = { "UniqueKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayItem, UniqueKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_UniqueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_UniqueKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayItem, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ReplayItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActionCommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_ActorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_UniqueKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayItem_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ReplayItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ReplayItem",
		sizeof(FT4ReplayItem),
		alignof(FT4ReplayItem),
		Z_Construct_UScriptStruct_FT4ReplayItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ReplayItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ReplayItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ReplayItem"), sizeof(FT4ReplayItem), Get_Z_Construct_UScriptStruct_FT4ReplayItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ReplayItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ReplayItem_Hash() { return 4053018718U; }
class UScriptStruct* FT4ReplayHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ReplayHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ReplayHeader, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ReplayHeader"), sizeof(FT4ReplayHeader), Get_Z_Construct_UScriptStruct_FT4ReplayHeader_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ReplayHeader>()
{
	return FT4ReplayHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ReplayHeader(FT4ReplayHeader::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ReplayHeader"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayHeader
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ReplayHeader")),new UScriptStruct::TCppStructOps<FT4ReplayHeader>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ReplayHeader;
	struct Z_Construct_UScriptStruct_FT4ReplayHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalPlayTimeSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ReplayHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::NewProp_TotalPlayTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::NewProp_TotalPlayTimeSec = { "TotalPlayTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReplayHeader, TotalPlayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::NewProp_TotalPlayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::NewProp_TotalPlayTimeSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::NewProp_TotalPlayTimeSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ReplayHeader",
		sizeof(FT4ReplayHeader),
		alignof(FT4ReplayHeader),
		Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ReplayHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ReplayHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ReplayHeader"), sizeof(FT4ReplayHeader), Get_Z_Construct_UScriptStruct_FT4ReplayHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ReplayHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ReplayHeader_Hash() { return 1410077161U; }
	void UT4ReplaySystemAsset::StaticRegisterNativesUT4ReplaySystemAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ReplaySystemAsset_NoRegister()
	{
		return UT4ReplaySystemAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ReplaySystemAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ReplaySystemAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ReplaySystemAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "ReplaySystem/T4ReplaySystemAsset.h" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ReplaySystemAsset_Statics::NewProp_ReplayData_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ReplaySystem/T4ReplaySystemAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ReplaySystemAsset_Statics::NewProp_ReplayData = { "ReplayData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ReplaySystemAsset, ReplayData), Z_Construct_UScriptStruct_FT4ReplayData, METADATA_PARAMS(Z_Construct_UClass_UT4ReplaySystemAsset_Statics::NewProp_ReplayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ReplaySystemAsset_Statics::NewProp_ReplayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ReplaySystemAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ReplaySystemAsset_Statics::NewProp_ReplayData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ReplaySystemAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ReplaySystemAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ReplaySystemAsset_Statics::ClassParams = {
		&UT4ReplaySystemAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ReplaySystemAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ReplaySystemAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ReplaySystemAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ReplaySystemAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ReplaySystemAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ReplaySystemAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ReplaySystemAsset, 3515077013);
	template<> T4ENGINE_API UClass* StaticClass<UT4ReplaySystemAsset>()
	{
		return UT4ReplaySystemAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ReplaySystemAsset(Z_Construct_UClass_UT4ReplaySystemAsset, &UT4ReplaySystemAsset::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4ReplaySystemAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ReplaySystemAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ReplaySystemAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
