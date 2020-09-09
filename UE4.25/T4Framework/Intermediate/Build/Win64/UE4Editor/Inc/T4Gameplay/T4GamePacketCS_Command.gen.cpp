// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Server/T4GamePacketCS_Command.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketCS_Command() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent();
// End Cross Module References
class UScriptStruct* FT4GamePacketCS_CmdBookmark::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdBookmark"), sizeof(FT4GamePacketCS_CmdBookmark), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdBookmark>()
{
	return FT4GamePacketCS_CmdBookmark::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdBookmark(FT4GamePacketCS_CmdBookmark::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdBookmark"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdBookmark
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdBookmark()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdBookmark")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdBookmark>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdBookmark;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeHour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeHour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdBookmark>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdBookmark, WorldTimeHour), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_WorldTimeHour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdBookmark, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdBookmark, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_WorldTimeHour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdBookmark",
		sizeof(FT4GamePacketCS_CmdBookmark),
		alignof(FT4GamePacketCS_CmdBookmark),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdBookmark"), sizeof(FT4GamePacketCS_CmdBookmark), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdBookmark_Hash() { return 3947764595U; }
class UScriptStruct* FT4GamePacketCS_CmdTeleport::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdTeleport"), sizeof(FT4GamePacketCS_CmdTeleport), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdTeleport>()
{
	return FT4GamePacketCS_CmdTeleport::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdTeleport(FT4GamePacketCS_CmdTeleport::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdTeleport"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdTeleport
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdTeleport()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdTeleport")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdTeleport>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdTeleport;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdTeleport>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdTeleport, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdTeleport, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdTeleport, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdTeleport",
		sizeof(FT4GamePacketCS_CmdTeleport),
		alignof(FT4GamePacketCS_CmdTeleport),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdTeleport"), sizeof(FT4GamePacketCS_CmdTeleport), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdTeleport_Hash() { return 2645360842U; }
class UScriptStruct* FT4GamePacketCS_CmdLeave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdLeave"), sizeof(FT4GamePacketCS_CmdLeave), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdLeave>()
{
	return FT4GamePacketCS_CmdLeave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdLeave(FT4GamePacketCS_CmdLeave::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdLeave"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdLeave
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdLeave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdLeave")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdLeave>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdLeave;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #68\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#68" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdLeave>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdLeave, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::NewProp_LeaveObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdLeave",
		sizeof(FT4GamePacketCS_CmdLeave),
		alignof(FT4GamePacketCS_CmdLeave),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdLeave"), sizeof(FT4GamePacketCS_CmdLeave), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdLeave_Hash() { return 1141514920U; }
class UScriptStruct* FT4GamePacketCS_CmdRespawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdRespawn"), sizeof(FT4GamePacketCS_CmdRespawn), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdRespawn>()
{
	return FT4GamePacketCS_CmdRespawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdRespawn(FT4GamePacketCS_CmdRespawn::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdRespawn"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdRespawn
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdRespawn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdRespawn")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdRespawn>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdRespawn;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RespawnObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#140" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdRespawn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::NewProp_RespawnObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::NewProp_RespawnObjectID = { "RespawnObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdRespawn, RespawnObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::NewProp_RespawnObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::NewProp_RespawnObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::NewProp_RespawnObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdRespawn",
		sizeof(FT4GamePacketCS_CmdRespawn),
		alignof(FT4GamePacketCS_CmdRespawn),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdRespawn"), sizeof(FT4GamePacketCS_CmdRespawn), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdRespawn_Hash() { return 298576699U; }
class UScriptStruct* FT4GamePacketCS_CmdItemEnter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdItemEnter"), sizeof(FT4GamePacketCS_CmdItemEnter), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdItemEnter>()
{
	return FT4GamePacketCS_CmdItemEnter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdItemEnter(FT4GamePacketCS_CmdItemEnter::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdItemEnter"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdItemEnter
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdItemEnter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdItemEnter")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdItemEnter>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdItemEnter;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReservedObjectID;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #41\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#41" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdItemEnter>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ReservedObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ReservedObjectID = { "ReservedObjectID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdItemEnter, ReservedObjectID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ReservedObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ReservedObjectID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdItemEnter, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdItemEnter, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ItemDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ItemDBKey = { "ItemDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdItemEnter, ItemDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ItemDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ItemDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_NameID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_NameID = { "NameID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdItemEnter, NameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_NameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_NameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdItemEnter, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ReservedObjectID,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_ItemDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_NameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdItemEnter",
		sizeof(FT4GamePacketCS_CmdItemEnter),
		alignof(FT4GamePacketCS_CmdItemEnter),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdItemEnter"), sizeof(FT4GamePacketCS_CmdItemEnter), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdItemEnter_Hash() { return 207813616U; }
class UScriptStruct* FT4GamePacketCS_CmdNPCEnter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdNPCEnter"), sizeof(FT4GamePacketCS_CmdNPCEnter), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdNPCEnter>()
{
	return FT4GamePacketCS_CmdNPCEnter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter(FT4GamePacketCS_CmdNPCEnter::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdNPCEnter"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdNPCEnter
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdNPCEnter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdNPCEnter")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdNPCEnter>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdNPCEnter;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReservedObjectID;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NPCDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #31\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdNPCEnter>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_ReservedObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_ReservedObjectID = { "ReservedObjectID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdNPCEnter, ReservedObjectID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_ReservedObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_ReservedObjectID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdNPCEnter, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdNPCEnter, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NPCDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NPCDBKey = { "NPCDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdNPCEnter, NPCDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NPCDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NPCDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NameID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NameID = { "NameID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdNPCEnter, NameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdNPCEnter, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_ReservedObjectID,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NPCDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_NameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdNPCEnter",
		sizeof(FT4GamePacketCS_CmdNPCEnter),
		alignof(FT4GamePacketCS_CmdNPCEnter),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdNPCEnter"), sizeof(FT4GamePacketCS_CmdNPCEnter), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdNPCEnter_Hash() { return 2895026636U; }
class UScriptStruct* FT4GamePacketCS_CmdPCEnter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdPCEnter"), sizeof(FT4GamePacketCS_CmdPCEnter), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdPCEnter>()
{
	return FT4GamePacketCS_CmdPCEnter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdPCEnter(FT4GamePacketCS_CmdPCEnter::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdPCEnter"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdPCEnter
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdPCEnter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdPCEnter")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdPCEnter>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdPCEnter;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitializeSpawn_MetaData[];
#endif
		static void NewProp_bInitializeSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializeSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdPCEnter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn_SetBit(void* Obj)
	{
		((FT4GamePacketCS_CmdPCEnter*)Obj)->bInitializeSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn = { "bInitializeSpawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketCS_CmdPCEnter), &Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdPCEnter, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdPCEnter, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_PlayerDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_PlayerDBKey = { "PlayerDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdPCEnter, PlayerDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_PlayerDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_PlayerDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_bInitializeSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::NewProp_PlayerDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdPCEnter",
		sizeof(FT4GamePacketCS_CmdPCEnter),
		alignof(FT4GamePacketCS_CmdPCEnter),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdPCEnter"), sizeof(FT4GamePacketCS_CmdPCEnter), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPCEnter_Hash() { return 567684U; }
class UScriptStruct* FT4GamePacketCS_CmdChangePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdChangePlayer"), sizeof(FT4GamePacketCS_CmdChangePlayer), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdChangePlayer>()
{
	return FT4GamePacketCS_CmdChangePlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer(FT4GamePacketCS_CmdChangePlayer::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdChangePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdChangePlayer
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdChangePlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdChangePlayer")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdChangePlayer>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdChangePlayer;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #11, #52\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#11, #52" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdChangePlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_ChangeObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_ChangeObjectID = { "ChangeObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdChangePlayer, ChangeObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_ChangeObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_ChangeObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdChangePlayer, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_ChangeObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdChangePlayer",
		sizeof(FT4GamePacketCS_CmdChangePlayer),
		alignof(FT4GamePacketCS_CmdChangePlayer),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdChangePlayer"), sizeof(FT4GamePacketCS_CmdChangePlayer), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdChangePlayer_Hash() { return 1808492296U; }
class UScriptStruct* FT4GamePacketCS_CmdWorldTimeSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdWorldTimeSync"), sizeof(FT4GamePacketCS_CmdWorldTimeSync), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdWorldTimeSync>()
{
	return FT4GamePacketCS_CmdWorldTimeSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync(FT4GamePacketCS_CmdWorldTimeSync::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdWorldTimeSync"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdWorldTimeSync
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdWorldTimeSync()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdWorldTimeSync")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdWorldTimeSync>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdWorldTimeSync;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #146\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "#146" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdWorldTimeSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeScale_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeScale = { "WorldTimeScale", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdWorldTimeSync, WorldTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdWorldTimeSync, WorldTimeHour), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeHour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::NewProp_WorldTimeHour,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdWorldTimeSync",
		sizeof(FT4GamePacketCS_CmdWorldTimeSync),
		alignof(FT4GamePacketCS_CmdWorldTimeSync),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdWorldTimeSync"), sizeof(FT4GamePacketCS_CmdWorldTimeSync), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTimeSync_Hash() { return 2568875127U; }
class UScriptStruct* FT4GamePacketCS_CmdWorldTravel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdWorldTravel"), sizeof(FT4GamePacketCS_CmdWorldTravel), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdWorldTravel>()
{
	return FT4GamePacketCS_CmdWorldTravel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel(FT4GamePacketCS_CmdWorldTravel::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdWorldTravel"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdWorldTravel
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdWorldTravel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdWorldTravel")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdWorldTravel>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdWorldTravel;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdWorldTravel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::NewProp_WorldDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::NewProp_WorldDBKey = { "WorldDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdWorldTravel, WorldDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::NewProp_WorldDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::NewProp_WorldDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::NewProp_WorldDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdWorldTravel",
		sizeof(FT4GamePacketCS_CmdWorldTravel),
		alignof(FT4GamePacketCS_CmdWorldTravel),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdWorldTravel"), sizeof(FT4GamePacketCS_CmdWorldTravel), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdWorldTravel_Hash() { return 350473948U; }
class UScriptStruct* FT4GamePacketCS_CmdPlayContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_CmdPlayContent"), sizeof(FT4GamePacketCS_CmdPlayContent), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_CmdPlayContent>()
{
	return FT4GamePacketCS_CmdPlayContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_CmdPlayContent(FT4GamePacketCS_CmdPlayContent::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_CmdPlayContent"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdPlayContent
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdPlayContent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_CmdPlayContent")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdPlayContent>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_CmdPlayContent;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplay_MetaData[];
#endif
		static void NewProp_bReplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4GamePacketCS::CmdTeleport\n// ET4GamePacketCS::CmdBookmark // #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
		{ "ToolTip", "ET4GamePacketCS::CmdTeleport\nET4GamePacketCS::CmdBookmark  #140" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_CmdPlayContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay_SetBit(void* Obj)
	{
		((FT4GamePacketCS_CmdPlayContent*)Obj)->bReplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay = { "bReplay", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketCS_CmdPlayContent), &Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_ContentDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_ContentDBKey = { "ContentDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_CmdPlayContent, ContentDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_ContentDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_ContentDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_bReplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::NewProp_ContentDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_CmdPlayContent",
		sizeof(FT4GamePacketCS_CmdPlayContent),
		alignof(FT4GamePacketCS_CmdPlayContent),
		Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_CmdPlayContent"), sizeof(FT4GamePacketCS_CmdPlayContent), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_CmdPlayContent_Hash() { return 204989154U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
