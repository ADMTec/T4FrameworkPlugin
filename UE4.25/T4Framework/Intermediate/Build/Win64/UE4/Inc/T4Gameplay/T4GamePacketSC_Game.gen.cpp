// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSC_Game.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSC_Game() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4MissionTextDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4QuestDBKey();
// End Cross Module References
class UScriptStruct* FT4GamePacketSC_InventoryAdd::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_InventoryAdd"), sizeof(FT4GamePacketSC_InventoryAdd), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_InventoryAdd>()
{
	return FT4GamePacketSC_InventoryAdd::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_InventoryAdd(FT4GamePacketSC_InventoryAdd::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_InventoryAdd"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_InventoryAdd
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_InventoryAdd()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_InventoryAdd")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_InventoryAdd>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_InventoryAdd;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemCounts;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemCounts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDBKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDBKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #168\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
		{ "ToolTip", "#168" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_InventoryAdd>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts = { "ItemCounts", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_InventoryAdd, ItemCounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts_Inner = { "ItemCounts", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys = { "ItemDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_InventoryAdd, ItemDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys_Inner = { "ItemDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemCounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::NewProp_ItemDBKeys_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_InventoryAdd",
		sizeof(FT4GamePacketSC_InventoryAdd),
		alignof(FT4GamePacketSC_InventoryAdd),
		Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_InventoryAdd"), sizeof(FT4GamePacketSC_InventoryAdd), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_InventoryAdd_Hash() { return 1044511639U; }
class UScriptStruct* FT4GamePacketSC_DialogueFinish::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_DialogueFinish"), sizeof(FT4GamePacketSC_DialogueFinish), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_DialogueFinish>()
{
	return FT4GamePacketSC_DialogueFinish::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_DialogueFinish(FT4GamePacketSC_DialogueFinish::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_DialogueFinish"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueFinish
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueFinish()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_DialogueFinish")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueFinish>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_DialogueFinish;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
		{ "ToolTip", "#163" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_DialogueFinish>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_DialogueFinish, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_DialogueFinish",
		sizeof(FT4GamePacketSC_DialogueFinish),
		alignof(FT4GamePacketSC_DialogueFinish),
		Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_DialogueFinish"), sizeof(FT4GamePacketSC_DialogueFinish), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueFinish_Hash() { return 4110534092U; }
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
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
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
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueUpdate_Hash() { return 4056885518U; }
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
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
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
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_DialogueStart_Hash() { return 272007229U; }
class UScriptStruct* FT4GamePacketSC_MissionFinish::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_MissionFinish"), sizeof(FT4GamePacketSC_MissionFinish), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_MissionFinish>()
{
	return FT4GamePacketSC_MissionFinish::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_MissionFinish(FT4GamePacketSC_MissionFinish::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_MissionFinish"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionFinish
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionFinish()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_MissionFinish")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionFinish>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_MissionFinish;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestUniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionFinish>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_MissionUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Optional\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
		{ "ToolTip", "Optional" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_MissionUniqueID = { "MissionUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionFinish, MissionUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_MissionUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_MissionUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionFinish, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_QuestUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_MissionUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::NewProp_QuestUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_MissionFinish",
		sizeof(FT4GamePacketSC_MissionFinish),
		alignof(FT4GamePacketSC_MissionFinish),
		Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_MissionFinish"), sizeof(FT4GamePacketSC_MissionFinish), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionFinish_Hash() { return 261156481U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionTextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionTextDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestUniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_MissionStart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionTextDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionTextDBKey = { "MissionTextDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionStart, MissionTextDBKey), Z_Construct_UScriptStruct_FT4MissionTextDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionTextDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionUniqueID = { "MissionUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionStart, MissionUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_MissionStart, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_QuestUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionTextDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_MissionUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Statics::NewProp_QuestUniqueID,
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
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_MissionStart_Hash() { return 4243152187U; }
class UScriptStruct* FT4GamePacketSC_QuestFinish::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_QuestFinish"), sizeof(FT4GamePacketSC_QuestFinish), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_QuestFinish>()
{
	return FT4GamePacketSC_QuestFinish::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_QuestFinish(FT4GamePacketSC_QuestFinish::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_QuestFinish"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_QuestFinish
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_QuestFinish()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_QuestFinish")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_QuestFinish>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_QuestFinish;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestUniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_QuestFinish>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_QuestFinish, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::NewProp_QuestUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::NewProp_QuestUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_QuestFinish",
		sizeof(FT4GamePacketSC_QuestFinish),
		alignof(FT4GamePacketSC_QuestFinish),
		Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_QuestFinish"), sizeof(FT4GamePacketSC_QuestFinish), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestFinish_Hash() { return 3818283873U; }
class UScriptStruct* FT4GamePacketSC_QuestStart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_QuestStart"), sizeof(FT4GamePacketSC_QuestStart), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_QuestStart>()
{
	return FT4GamePacketSC_QuestStart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_QuestStart(FT4GamePacketSC_QuestStart::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_QuestStart"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_QuestStart
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_QuestStart()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_QuestStart")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_QuestStart>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_QuestStart;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4GamePacketSC::QuestStart // #164\n// ET4GamePacketSC::QuestFinish // #164\n// ET4GamePacketSC::MissionStart // #164\n// ET4GamePacketSC::MissionFinish // #164\n// ET4GamePacketSC::DialogueStart // #163\n// ET4GamePacketSC::DialogueUpdate // #163\n// ET4GamePacketSC::DialogueFinish // #163\n// ET4GamePacketSC::InventoryAdd, // #168\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
		{ "ToolTip", "ET4GamePacketSC::QuestStart  #164\nET4GamePacketSC::QuestFinish  #164\nET4GamePacketSC::MissionStart  #164\nET4GamePacketSC::MissionFinish  #164\nET4GamePacketSC::DialogueStart  #163\nET4GamePacketSC::DialogueUpdate  #163\nET4GamePacketSC::DialogueFinish  #163\nET4GamePacketSC::InventoryAdd,  #168" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_QuestStart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestDBKey = { "QuestDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_QuestStart, QuestDBKey), Z_Construct_UScriptStruct_FT4QuestDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_QuestStart, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestUniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::NewProp_QuestUniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_QuestStart",
		sizeof(FT4GamePacketSC_QuestStart),
		alignof(FT4GamePacketSC_QuestStart),
		Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_QuestStart"), sizeof(FT4GamePacketSC_QuestStart), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_QuestStart_Hash() { return 3090795170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
