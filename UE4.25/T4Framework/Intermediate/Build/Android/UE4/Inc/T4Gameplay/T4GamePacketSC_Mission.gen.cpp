// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSC_Mission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSC_Mission() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart();
// End Cross Module References
class UScriptStruct* FT4GamePacketSC_DialogueCompleted::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_DialogueCompleted"), sizeof(FT4GamePacketSC_DialogueCompleted), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_DialogueCompleted>()
{
	return FT4GamePacketSC_DialogueCompleted::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_DialogueCompleted(FT4GamePacketSC_DialogueCompleted::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_DialogueCompleted"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueCompleted
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueCompleted()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_DialogueCompleted")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueCompleted>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueCompleted;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
		{ "ToolTip", "#163" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueCompleted>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DialogueCompleted, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_DialogueCompleted",
		sizeof(FT4GamePacketSC_DialogueCompleted),
		alignof(FT4GamePacketSC_DialogueCompleted),
		Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_DialogueCompleted"), sizeof(FT4GamePacketSC_DialogueCompleted), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueCompleted_Hash() { return 1544075979U; }
class UScriptStruct* FT4GamePacketSC_DialogueUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_DialogueUpdate"), sizeof(FT4GamePacketSC_DialogueUpdate), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_DialogueUpdate>()
{
	return FT4GamePacketSC_DialogueUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_DialogueUpdate(FT4GamePacketSC_DialogueUpdate::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_DialogueUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueUpdate
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_DialogueUpdate")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueUpdate>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueUpdate;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
		{ "ToolTip", "#163" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DialogueUpdate, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_DialogueUpdate",
		sizeof(FT4GamePacketSC_DialogueUpdate),
		alignof(FT4GamePacketSC_DialogueUpdate),
		Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_DialogueUpdate"), sizeof(FT4GamePacketSC_DialogueUpdate), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Hash() { return 3228453465U; }
class UScriptStruct* FT4GamePacketSC_DialogueStart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_DialogueStart"), sizeof(FT4GamePacketSC_DialogueStart), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_DialogueStart>()
{
	return FT4GamePacketSC_DialogueStart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_DialogueStart(FT4GamePacketSC_DialogueStart::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_DialogueStart"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueStart
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueStart()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_DialogueStart")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueStart>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueStart;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
		{ "ToolTip", "#163" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueStart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DialogueStart, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_DialogueStart",
		sizeof(FT4GamePacketSC_DialogueStart),
		alignof(FT4GamePacketSC_DialogueStart),
		Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_DialogueStart"), sizeof(FT4GamePacketSC_DialogueStart), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Hash() { return 2109662516U; }
class UScriptStruct* FT4GamePacketSC_MissionCompleted::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_MissionCompleted"), sizeof(FT4GamePacketSC_MissionCompleted), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_MissionCompleted>()
{
	return FT4GamePacketSC_MissionCompleted::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_MissionCompleted(FT4GamePacketSC_MissionCompleted::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_MissionCompleted"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionCompleted
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionCompleted()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_MissionCompleted")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionCompleted>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionCompleted;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
		{ "ToolTip", "#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionCompleted>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::NewProp_ContentDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::NewProp_ContentDBKey = { "ContentDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionCompleted, ContentDBKey), Z_Construct_UScriptStruct_FT4ContentDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::NewProp_ContentDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::NewProp_ContentDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::NewProp_ContentDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_MissionCompleted",
		sizeof(FT4GamePacketSC_MissionCompleted),
		alignof(FT4GamePacketSC_MissionCompleted),
		Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_MissionCompleted"), sizeof(FT4GamePacketSC_MissionCompleted), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionCompleted_Hash() { return 2220737463U; }
class UScriptStruct* FT4GamePacketSC_MissionUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_MissionUpdate"), sizeof(FT4GamePacketSC_MissionUpdate), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_MissionUpdate>()
{
	return FT4GamePacketSC_MissionUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_MissionUpdate(FT4GamePacketSC_MissionUpdate::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_MissionUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionUpdate
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_MissionUpdate")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionUpdate>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionUpdate;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
		{ "ToolTip", "#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::NewProp_ContentDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::NewProp_ContentDBKey = { "ContentDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionUpdate, ContentDBKey), Z_Construct_UScriptStruct_FT4ContentDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::NewProp_ContentDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::NewProp_ContentDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::NewProp_ContentDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_MissionUpdate",
		sizeof(FT4GamePacketSC_MissionUpdate),
		alignof(FT4GamePacketSC_MissionUpdate),
		Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_MissionUpdate"), sizeof(FT4GamePacketSC_MissionUpdate), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionUpdate_Hash() { return 2295040974U; }
class UScriptStruct* FT4GamePacketSC_MissionStart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_MissionStart"), sizeof(FT4GamePacketSC_MissionStart), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_MissionStart>()
{
	return FT4GamePacketSC_MissionStart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_MissionStart(FT4GamePacketSC_MissionStart::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_MissionStart"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionStart
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionStart()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_MissionStart")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionStart>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionStart;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4GamePacketSC::MissionStart\n// ET4GamePacketSC::MissionUpdate\n// ET4GamePacketSC::MissionCompleted\n// ET4GamePacketSC::DialogueStart // #163\n// ET4GamePacketSC::DialogueUpdate // #163\n// ET4GamePacketSC::DialogueCompleted // #163\n// #73\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
		{ "ToolTip", "ET4GamePacketSC::MissionStart\nET4GamePacketSC::MissionUpdate\nET4GamePacketSC::MissionCompleted\nET4GamePacketSC::DialogueStart  #163\nET4GamePacketSC::DialogueUpdate  #163\nET4GamePacketSC::DialogueCompleted  #163\n#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionStart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_ContentDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Mission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_ContentDBKey = { "ContentDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionStart, ContentDBKey), Z_Construct_UScriptStruct_FT4ContentDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_ContentDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_ContentDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_ContentDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_MissionStart",
		sizeof(FT4GamePacketSC_MissionStart),
		alignof(FT4GamePacketSC_MissionStart),
		Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_MissionStart"), sizeof(FT4GamePacketSC_MissionStart), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Hash() { return 1314726876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
