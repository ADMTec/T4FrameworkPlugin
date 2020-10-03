// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Public/T4GameDataStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameDataStructs() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameWorldSettings();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4RewardItemPackageData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4VisualReactionData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPackAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FT4GameWorldSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4GameWorldSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameWorldSettings, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4GameWorldSettings"), sizeof(FT4GameWorldSettings), Get_Z_Construct_UScriptStruct_FT4GameWorldSettings_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4GameWorldSettings>()
{
	return FT4GameWorldSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameWorldSettings(FT4GameWorldSettings::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4GameWorldSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4GameWorldSettings
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4GameWorldSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameWorldSettings")),new UScriptStruct::TCppStructOps<FT4GameWorldSettings>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4GameWorldSettings;
	struct Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyTimeSync_MetaData[];
#endif
		static void NewProp_bApplyTimeSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyTimeSync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameWorldSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeScale_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bApplyTimeSync" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeScale = { "WorldTimeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameWorldSettings, WorldTimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bApplyTimeSync" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameWorldSettings, WorldTimeHour), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeHour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync_SetBit(void* Obj)
	{
		((FT4GameWorldSettings*)Obj)->bApplyTimeSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync = { "bApplyTimeSync", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GameWorldSettings), &Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_WorldTimeHour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::NewProp_bApplyTimeSync,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4GameWorldSettings",
		sizeof(FT4GameWorldSettings),
		alignof(FT4GameWorldSettings),
		Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameWorldSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameWorldSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameWorldSettings"), sizeof(FT4GameWorldSettings), Get_Z_Construct_UScriptStruct_FT4GameWorldSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameWorldSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameWorldSettings_Hash() { return 1032108732U; }
class UScriptStruct* FT4RewardItemPackageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4RewardItemPackageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4RewardItemPackageData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4RewardItemPackageData"), sizeof(FT4RewardItemPackageData), Get_Z_Construct_UScriptStruct_FT4RewardItemPackageData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4RewardItemPackageData>()
{
	return FT4RewardItemPackageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4RewardItemPackageData(FT4RewardItemPackageData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4RewardItemPackageData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4RewardItemPackageData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4RewardItemPackageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4RewardItemPackageData")),new UScriptStruct::TCppStructOps<FT4RewardItemPackageData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4RewardItemPackageData;
	struct Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4RewardItemPackageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RewardItemPackageData, ItemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemDBKey = { "ItemDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RewardItemPackageData, ItemDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::NewProp_ItemDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4RewardItemPackageData",
		sizeof(FT4RewardItemPackageData),
		alignof(FT4RewardItemPackageData),
		Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4RewardItemPackageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4RewardItemPackageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4RewardItemPackageData"), sizeof(FT4RewardItemPackageData), Get_Z_Construct_UScriptStruct_FT4RewardItemPackageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4RewardItemPackageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4RewardItemPackageData_Hash() { return 1734116452U; }
class UScriptStruct* FT4VisualReactionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4VisualReactionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4VisualReactionData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4VisualReactionData"), sizeof(FT4VisualReactionData), Get_Z_Construct_UScriptStruct_FT4VisualReactionData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4VisualReactionData>()
{
	return FT4VisualReactionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4VisualReactionData(FT4VisualReactionData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4VisualReactionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4VisualReactionData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4VisualReactionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4VisualReactionData")),new UScriptStruct::TCppStructOps<FT4VisualReactionData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4VisualReactionData;
	struct Z_Construct_UScriptStruct_FT4VisualReactionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirborneActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AirborneActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StunActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KnockbackActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitActionPackAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #161 : EffectSet \xec\x97\x90\xec\x84\x9c \xeb\x8c\x80\xec\xb2\xb4\xeb\x90\xa8\n" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
		{ "ToolTip", "#161 : EffectSet \xec\x97\x90\xec\x84\x9c \xeb\x8c\x80\xec\xb2\xb4\xeb\x90\xa8" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4VisualReactionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_AirborneActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_AirborneActionPackAsset = { "AirborneActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4VisualReactionData, AirborneActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_AirborneActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_AirborneActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_StunActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_StunActionPackAsset = { "StunActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4VisualReactionData, StunActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_StunActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_StunActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_KnockbackActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_KnockbackActionPackAsset = { "KnockbackActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4VisualReactionData, KnockbackActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_KnockbackActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_KnockbackActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_HitActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/T4GameDataStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_HitActionPackAsset = { "HitActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4VisualReactionData, HitActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_HitActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_HitActionPackAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_AirborneActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_StunActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_KnockbackActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::NewProp_HitActionPackAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4VisualReactionData",
		sizeof(FT4VisualReactionData),
		alignof(FT4VisualReactionData),
		Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4VisualReactionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4VisualReactionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4VisualReactionData"), sizeof(FT4VisualReactionData), Get_Z_Construct_UScriptStruct_FT4VisualReactionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4VisualReactionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4VisualReactionData_Hash() { return 1989002469U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
