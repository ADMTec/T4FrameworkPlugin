// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Server/T4GamePacketCS_Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketCS_Status() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Base();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Posture();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Stance();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay();
// End Cross Module References
class UScriptStruct* FT4GamePacketCS_ExchangeItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_ExchangeItem"), sizeof(FT4GamePacketCS_ExchangeItem), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_ExchangeItem>()
{
	return FT4GamePacketCS_ExchangeItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_ExchangeItem(FT4GamePacketCS_ExchangeItem::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_ExchangeItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_ExchangeItem
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_ExchangeItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_ExchangeItem")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_ExchangeItem>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_ExchangeItem;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_ExchangeItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_CostumeDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_CostumeDBKey = { "CostumeDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_ExchangeItem, CostumeDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_CostumeDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_CostumeDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_ExchangeItem, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_CostumeDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_ExchangeItem",
		sizeof(FT4GamePacketCS_ExchangeItem),
		alignof(FT4GamePacketCS_ExchangeItem),
		Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_ExchangeItem"), sizeof(FT4GamePacketCS_ExchangeItem), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ExchangeItem_Hash() { return 1683009786U; }
class UScriptStruct* FT4GamePacketCS_UnequipItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_UnequipItem"), sizeof(FT4GamePacketCS_UnequipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_UnequipItem>()
{
	return FT4GamePacketCS_UnequipItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_UnequipItem(FT4GamePacketCS_UnequipItem::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_UnequipItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_UnequipItem
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_UnequipItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_UnequipItem")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_UnequipItem>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_UnequipItem;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_UnequipItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon_SetBit(void* Obj)
	{
		((FT4GamePacketCS_UnequipItem*)Obj)->bMainWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon = { "bMainWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketCS_UnequipItem), &Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_WeaponDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_WeaponDBKey = { "WeaponDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_UnequipItem, WeaponDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_WeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_WeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_UnequipItem, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_bMainWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_WeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_UnequipItem",
		sizeof(FT4GamePacketCS_UnequipItem),
		alignof(FT4GamePacketCS_UnequipItem),
		Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_UnequipItem"), sizeof(FT4GamePacketCS_UnequipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_UnequipItem_Hash() { return 1025890864U; }
class UScriptStruct* FT4GamePacketCS_EquipItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_EquipItem"), sizeof(FT4GamePacketCS_EquipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_EquipItem>()
{
	return FT4GamePacketCS_EquipItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_EquipItem(FT4GamePacketCS_EquipItem::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_EquipItem"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_EquipItem
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_EquipItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_EquipItem")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_EquipItem>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_EquipItem;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_EquipItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon_SetBit(void* Obj)
	{
		((FT4GamePacketCS_EquipItem*)Obj)->bMainWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon = { "bMainWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketCS_EquipItem), &Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_WeaponDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_WeaponDBKey = { "WeaponDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_EquipItem, WeaponDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_WeaponDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_WeaponDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_EquipItem, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_bMainWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_WeaponDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_EquipItem",
		sizeof(FT4GamePacketCS_EquipItem),
		alignof(FT4GamePacketCS_EquipItem),
		Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_EquipItem"), sizeof(FT4GamePacketCS_EquipItem), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_EquipItem_Hash() { return 861595741U; }
class UScriptStruct* FT4GamePacketCS_Posture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_Posture"), sizeof(FT4GamePacketCS_Posture), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_Posture>()
{
	return FT4GamePacketCS_Posture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_Posture(FT4GamePacketCS_Posture::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_Posture"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_Posture
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_Posture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_Posture")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_Posture>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_Posture;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
		{ "ToolTip", "#106" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_Posture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_Posture, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_PostureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_Posture, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_PostureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_Posture",
		sizeof(FT4GamePacketCS_Posture),
		alignof(FT4GamePacketCS_Posture),
		Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Posture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_Posture"), sizeof(FT4GamePacketCS_Posture), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Posture_Hash() { return 2720088326U; }
class UScriptStruct* FT4GamePacketCS_Stance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_Stance"), sizeof(FT4GamePacketCS_Stance), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_Stance>()
{
	return FT4GamePacketCS_Stance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_Stance(FT4GamePacketCS_Stance::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_Stance"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_Stance
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_Stance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_Stance")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_Stance>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_Stance;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
		{ "ToolTip", "#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_Stance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_Stance, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_Stance, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_Stance",
		sizeof(FT4GamePacketCS_Stance),
		alignof(FT4GamePacketCS_Stance),
		Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Stance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_Stance"), sizeof(FT4GamePacketCS_Stance), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_Stance_Hash() { return 209308748U; }
class UScriptStruct* FT4GamePacketCS_ReadyToPlay::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_ReadyToPlay"), sizeof(FT4GamePacketCS_ReadyToPlay), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_ReadyToPlay>()
{
	return FT4GamePacketCS_ReadyToPlay::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_ReadyToPlay(FT4GamePacketCS_ReadyToPlay::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_ReadyToPlay"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_ReadyToPlay
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_ReadyToPlay()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_ReadyToPlay")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_ReadyToPlay>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_ReadyToPlay;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4GamePacketCS::Stance // #73\n// ET4GamePacketCS::Posture // #106\n// ET4GamePacketCS::EquipItem\n// ET4GamePacketCS::UnequipItem\n// ET4GamePacketCS::ExchangeItem\n// #146 : \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 PC::BeginPlay \xec\x8b\x9c \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa0\x91\xec\x86\x8d \xec\x99\x84\xeb\xa3\x8c \xed\x86\xb5\xeb\xb3\xb4!\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Status.h" },
		{ "ToolTip", "ET4GamePacketCS::Stance  #73\nET4GamePacketCS::Posture  #106\nET4GamePacketCS::EquipItem\nET4GamePacketCS::UnequipItem\nET4GamePacketCS::ExchangeItem\n#146 : \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 PC::BeginPlay \xec\x8b\x9c \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa0\x91\xec\x86\x8d \xec\x99\x84\xeb\xa3\x8c \xed\x86\xb5\xeb\xb3\xb4!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_ReadyToPlay>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_ReadyToPlay",
		sizeof(FT4GamePacketCS_ReadyToPlay),
		alignof(FT4GamePacketCS_ReadyToPlay),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_ReadyToPlay"), sizeof(FT4GamePacketCS_ReadyToPlay), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_ReadyToPlay_Hash() { return 583195819U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
