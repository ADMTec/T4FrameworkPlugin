// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/Command/T4ActionWorldCommands.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionWorldCommands() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActorID();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4LayerType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldTravelActionCommand();
// End Cross Module References
class UScriptStruct* FT4WorldDespawnActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4WorldDespawnActionCommand"), sizeof(FT4WorldDespawnActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4WorldDespawnActionCommand>()
{
	return FT4WorldDespawnActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WorldDespawnActionCommand(FT4WorldDespawnActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4WorldDespawnActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldDespawnActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldDespawnActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WorldDespawnActionCommand")),new UScriptStruct::TCppStructOps<FT4WorldDespawnActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4WorldDespawnActionCommand;
	struct Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WorldDespawnActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_FadeOutTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_FadeOutTimeSec = { "FadeOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldDespawnActionCommand, FadeOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_FadeOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_FadeOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_ActorID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldDespawnActionCommand, ActorID), Z_Construct_UScriptStruct_FT4ActorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_ActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_ActorID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_FadeOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::NewProp_ActorID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4WorldDespawnActionCommand",
		sizeof(FT4WorldDespawnActionCommand),
		alignof(FT4WorldDespawnActionCommand),
		Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WorldDespawnActionCommand"), sizeof(FT4WorldDespawnActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WorldDespawnActionCommand_Hash() { return 1736094653U; }
class UScriptStruct* FT4WorldSpawnActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4WorldSpawnActionCommand"), sizeof(FT4WorldSpawnActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4WorldSpawnActionCommand>()
{
	return FT4WorldSpawnActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WorldSpawnActionCommand(FT4WorldSpawnActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4WorldSpawnActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldSpawnActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldSpawnActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WorldSpawnActionCommand")),new UScriptStruct::TCppStructOps<FT4WorldSpawnActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4WorldSpawnActionCommand;
	struct Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorSourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MirrorSourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorSourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMirrorActor_MetaData[];
#endif
		static void NewProp_bUseMirrorActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMirrorActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayer_MetaData[];
#endif
		static void NewProp_bPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DBKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DBKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkinName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntityAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WorldSpawnActionCommand>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xeb\xaf\xb8\xeb\x9f\xac\xeb\xa7\x81 Actor \xeb\xa1\x9c \xec\x83\x9d\xec\x84\xb1 \xec\x97\xac\xeb\xb6\x80\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#140 : \xeb\xaf\xb8\xeb\x9f\xac\xeb\xa7\x81 Actor \xeb\xa1\x9c \xec\x83\x9d\xec\x84\xb1 \xec\x97\xac\xeb\xb6\x80" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType = { "MirrorSourceType", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, MirrorSourceType), Z_Construct_UEnum_T4Engine_ET4LayerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor_SetBit(void* Obj)
	{
		((FT4WorldSpawnActionCommand*)Obj)->bUseMirrorActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor = { "bUseMirrorActor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4WorldSpawnActionCommand), &Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer_SetBit(void* Obj)
	{
		((FT4WorldSpawnActionCommand*)Obj)->bPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer = { "bPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4WorldSpawnActionCommand), &Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_DBKeyName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_DBKeyName = { "DBKeyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, DBKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_DBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_DBKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #73, #111\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#73, #111" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #73 : \xec\xb4\x88\xea\xb8\xb0 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xeb\xa1\x9c\xeb\x94\xa9 \xed\x83\x80\xec\x9e\x84\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x8c\xec\x9c\xbc\xeb\xa1\x9c \xea\xb0\x80\xea\xb8\x89\xec\xa0\x81 \xec\x8a\xa4\xed\x8f\xb0\xec\x8b\x9c\xec\x97\x90\xeb\x8f\x84 \xec\x84\xa4\xec\xa0\x95\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\xb2\x98\xeb\xa6\xac\xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#73 : \xec\xb4\x88\xea\xb8\xb0 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xeb\xa1\x9c\xeb\x94\xa9 \xed\x83\x80\xec\x9e\x84\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x8c\xec\x9c\xbc\xeb\xa1\x9c \xea\xb0\x80\xea\xb8\x89\xec\xa0\x81 \xec\x8a\xa4\xed\x8f\xb0\xec\x8b\x9c\xec\x97\x90\xeb\x8f\x84 \xec\x84\xa4\xec\xa0\x95\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xec\xb2\x98\xeb\xa6\xac\xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_AnimSetName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : \xea\xb8\xb0\xeb\xb3\xb8 \xec\x8a\xa4\xed\x82\xa8\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#135 : \xea\xb8\xb0\xeb\xb3\xb8 \xec\x8a\xa4\xed\x82\xa8" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_AnimSetName = { "AnimSetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, AnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_AnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_AnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SkinName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SkinName = { "SkinName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, SkinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SkinName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityAssetPath_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityAssetPath = { "EntityAssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, EntityAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, EntityType), Z_Construct_UEnum_T4Asset_ET4EntityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #114 : GameObject ID\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#114 : GameObject ID" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_OwnerObjectID_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_OwnerObjectID = { "OwnerObjectID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, OwnerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_OwnerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_OwnerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_ActorID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// SaveReplaySnapshot() // #68\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "SaveReplaySnapshot()  #68" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldSpawnActionCommand, ActorID), Z_Construct_UScriptStruct_FT4ActorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_ActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_ActorID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MirrorSourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bUseMirrorActor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_bPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_DBKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_AnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_SkinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_EntityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_OwnerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::NewProp_ActorID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4WorldSpawnActionCommand",
		sizeof(FT4WorldSpawnActionCommand),
		alignof(FT4WorldSpawnActionCommand),
		Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WorldSpawnActionCommand"), sizeof(FT4WorldSpawnActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WorldSpawnActionCommand_Hash() { return 3519717314U; }
class UScriptStruct* FT4WorldTimeSyncActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4WorldTimeSyncActionCommand"), sizeof(FT4WorldTimeSyncActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4WorldTimeSyncActionCommand>()
{
	return FT4WorldTimeSyncActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WorldTimeSyncActionCommand(FT4WorldTimeSyncActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4WorldTimeSyncActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldTimeSyncActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldTimeSyncActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WorldTimeSyncActionCommand")),new UScriptStruct::TCppStructOps<FT4WorldTimeSyncActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4WorldTimeSyncActionCommand;
	struct Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeHour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeHour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #146\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#146" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WorldTimeSyncActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeScale_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #146 : 0 ~ 24, -1.0f \xeb\xac\xb4\xec\x8b\x9c\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "#146 : 0 ~ 24, -1.0f \xeb\xac\xb4\xec\x8b\x9c" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeScale = { "WorldTimeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldTimeSyncActionCommand, WorldTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldTimeSyncActionCommand, WorldTimeHour), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeHour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::NewProp_WorldTimeHour,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4WorldTimeSyncActionCommand",
		sizeof(FT4WorldTimeSyncActionCommand),
		alignof(FT4WorldTimeSyncActionCommand),
		Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WorldTimeSyncActionCommand"), sizeof(FT4WorldTimeSyncActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WorldTimeSyncActionCommand_Hash() { return 2484220065U; }
class UScriptStruct* FT4WorldTravelActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4WorldTravelActionCommand"), sizeof(FT4WorldTravelActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4WorldTravelActionCommand>()
{
	return FT4WorldTravelActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4WorldTravelActionCommand(FT4WorldTravelActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4WorldTravelActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldTravelActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4WorldTravelActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4WorldTravelActionCommand")),new UScriptStruct::TCppStructOps<FT4WorldTravelActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4WorldTravelActionCommand;
	struct Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreveiwScene_MetaData[];
#endif
		static void NewProp_bPreveiwScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreveiwScene;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorldKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapEntityOrLevelAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapEntityOrLevelAssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4ActionCommandType::WorldTravel\n// ET4ActionCommandType::WorldTimeSync // #146\n// ET4ActionCommandType::WorldSpawn\n// ET4ActionCommandType::WorldDespawn\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "ET4ActionCommandType::WorldTravel\nET4ActionCommandType::WorldTimeSync  #146\nET4ActionCommandType::WorldSpawn\nET4ActionCommandType::WorldDespawn" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4WorldTravelActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldTravelActionCommand, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene_SetBit(void* Obj)
	{
		((FT4WorldTravelActionCommand*)Obj)->bPreveiwScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene = { "bPreveiwScene", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4WorldTravelActionCommand), &Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_WorldKeyName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// def MapEntity or LevelAsset\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
		{ "ToolTip", "def MapEntity or LevelAsset" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_WorldKeyName = { "WorldKeyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldTravelActionCommand, WorldKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_WorldKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_WorldKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_MapEntityOrLevelAssetPath_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionWorldCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_MapEntityOrLevelAssetPath = { "MapEntityOrLevelAssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4WorldTravelActionCommand, MapEntityOrLevelAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_MapEntityOrLevelAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_MapEntityOrLevelAssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_StartLocation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_bPreveiwScene,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_WorldKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::NewProp_MapEntityOrLevelAssetPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4WorldTravelActionCommand",
		sizeof(FT4WorldTravelActionCommand),
		alignof(FT4WorldTravelActionCommand),
		Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4WorldTravelActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4WorldTravelActionCommand"), sizeof(FT4WorldTravelActionCommand), Get_Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4WorldTravelActionCommand_Hash() { return 505962809U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
