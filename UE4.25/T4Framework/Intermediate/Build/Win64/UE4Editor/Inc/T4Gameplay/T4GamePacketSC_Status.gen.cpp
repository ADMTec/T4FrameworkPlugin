// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSC_Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSC_Status() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Die();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Posture();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Stance();
// End Cross Module References
class UScriptStruct* FT4GamePacketSC_Resurrect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_Resurrect"), sizeof(FT4GamePacketSC_Resurrect), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_Resurrect>()
{
	return FT4GamePacketSC_Resurrect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_Resurrect(FT4GamePacketSC_Resurrect::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_Resurrect"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Resurrect
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Resurrect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_Resurrect")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_Resurrect>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Resurrect;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_Resurrect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Resurrect, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_Resurrect",
		sizeof(FT4GamePacketSC_Resurrect),
		alignof(FT4GamePacketSC_Resurrect),
		Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_Resurrect"), sizeof(FT4GamePacketSC_Resurrect), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Resurrect_Hash() { return 2061765652U; }
class UScriptStruct* FT4GamePacketSC_Die::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_Die, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_Die"), sizeof(FT4GamePacketSC_Die), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_Die>()
{
	return FT4GamePacketSC_Die::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_Die(FT4GamePacketSC_Die::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_Die"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Die
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Die()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_Die")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_Die>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Die;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackerObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackerObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_Die>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Die, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_AttackerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Die, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ReactionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Die, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ReactionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_Die",
		sizeof(FT4GamePacketSC_Die),
		alignof(FT4GamePacketSC_Die),
		Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Die()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_Die"), sizeof(FT4GamePacketSC_Die), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Die_Hash() { return 2462557878U; }
class UScriptStruct* FT4GamePacketSC_ExchangeItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_ExchangeItem"), sizeof(FT4GamePacketSC_ExchangeItem), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_ExchangeItem>()
{
	return FT4GamePacketSC_ExchangeItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_ExchangeItem(FT4GamePacketSC_ExchangeItem::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_ExchangeItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_ExchangeItem
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_ExchangeItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_ExchangeItem")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_ExchangeItem>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_ExchangeItem;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CostumeDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_ExchangeItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_CostumeDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_CostumeDBKey = { "CostumeDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_ExchangeItem, CostumeDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_CostumeDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_CostumeDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_ExchangeItem, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_CostumeDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_ExchangeItem",
		sizeof(FT4GamePacketSC_ExchangeItem),
		alignof(FT4GamePacketSC_ExchangeItem),
		Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_ExchangeItem"), sizeof(FT4GamePacketSC_ExchangeItem), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_ExchangeItem_Hash() { return 521155849U; }
class UScriptStruct* FT4GamePacketSC_UnequipItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_UnequipItem"), sizeof(FT4GamePacketSC_UnequipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_UnequipItem>()
{
	return FT4GamePacketSC_UnequipItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_UnequipItem(FT4GamePacketSC_UnequipItem::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_UnequipItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_UnequipItem
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_UnequipItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_UnequipItem")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_UnequipItem>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_UnequipItem;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMainWeapon_MetaData[];
#endif
		static void NewProp_bMainWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMainWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_UnequipItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon_SetBit(void* Obj)
	{
		((FT4GamePacketSC_UnequipItem*)Obj)->bMainWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon = { "bMainWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketSC_UnequipItem), &Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_WeaponDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_WeaponDBKey = { "WeaponDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_UnequipItem, WeaponDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_WeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_WeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_UnequipItem, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_bMainWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_WeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_UnequipItem",
		sizeof(FT4GamePacketSC_UnequipItem),
		alignof(FT4GamePacketSC_UnequipItem),
		Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_UnequipItem"), sizeof(FT4GamePacketSC_UnequipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_UnequipItem_Hash() { return 3681555650U; }
class UScriptStruct* FT4GamePacketSC_EquipItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EquipItem"), sizeof(FT4GamePacketSC_EquipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EquipItem>()
{
	return FT4GamePacketSC_EquipItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EquipItem(FT4GamePacketSC_EquipItem::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EquipItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EquipItem
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EquipItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EquipItem")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EquipItem>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EquipItem;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequipWeaponDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnequipWeaponDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMainWeapon_MetaData[];
#endif
		static void NewProp_bMainWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMainWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EquipItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_UnequipWeaponDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #48\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
		{ "ToolTip", "#48" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_UnequipWeaponDBKey = { "UnequipWeaponDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EquipItem, UnequipWeaponDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_UnequipWeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_UnequipWeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon_SetBit(void* Obj)
	{
		((FT4GamePacketSC_EquipItem*)Obj)->bMainWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon = { "bMainWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketSC_EquipItem), &Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_WeaponDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_WeaponDBKey = { "WeaponDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EquipItem, WeaponDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_WeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_WeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EquipItem, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_UnequipWeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_bMainWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_WeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EquipItem",
		sizeof(FT4GamePacketSC_EquipItem),
		alignof(FT4GamePacketSC_EquipItem),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EquipItem"), sizeof(FT4GamePacketSC_EquipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EquipItem_Hash() { return 1032477551U; }
class UScriptStruct* FT4GamePacketSC_Posture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_Posture"), sizeof(FT4GamePacketSC_Posture), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_Posture>()
{
	return FT4GamePacketSC_Posture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_Posture(FT4GamePacketSC_Posture::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_Posture"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Posture
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Posture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_Posture")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_Posture>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Posture;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
		{ "ToolTip", "#106" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_Posture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Posture, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Posture, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_PostureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Posture, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_PostureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_Posture",
		sizeof(FT4GamePacketSC_Posture),
		alignof(FT4GamePacketSC_Posture),
		Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Posture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_Posture"), sizeof(FT4GamePacketSC_Posture), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Posture_Hash() { return 1217007565U; }
class UScriptStruct* FT4GamePacketSC_Stance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_Stance"), sizeof(FT4GamePacketSC_Stance), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_Stance>()
{
	return FT4GamePacketSC_Stance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_Stance(FT4GamePacketSC_Stance::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_Stance"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Stance
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Stance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_Stance")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_Stance>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_Stance;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4GamePacketSC::Stance // #73\n// ET4GamePacketSC::Posture // #106\n// ET4GamePacketSC::EquipItem\n// ET4GamePacketSC::UnequipItem\n// ET4GamePacketSC::ExchangeItem\n// ET4GamePacketSC::Die // #76\n// ET4GamePacketSC::Resurrect // #76\n// #73\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
		{ "ToolTip", "ET4GamePacketSC::Stance  #73\nET4GamePacketSC::Posture  #106\nET4GamePacketSC::EquipItem\nET4GamePacketSC::UnequipItem\nET4GamePacketSC::ExchangeItem\nET4GamePacketSC::Die  #76\nET4GamePacketSC::Resurrect  #76\n#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_Stance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Stance, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_Stance, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_Stance",
		sizeof(FT4GamePacketSC_Stance),
		alignof(FT4GamePacketSC_Stance),
		Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Stance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_Stance"), sizeof(FT4GamePacketSC_Stance), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_Stance_Hash() { return 3390112623U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
