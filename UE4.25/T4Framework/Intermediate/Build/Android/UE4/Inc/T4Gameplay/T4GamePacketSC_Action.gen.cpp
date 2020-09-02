// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Client/T4GamePacketSC_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketSC_Action() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_Base();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting();
// End Cross Module References
class UScriptStruct* FT4GamePacketSC_EffectStun::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectStun"), sizeof(FT4GamePacketSC_EffectStun), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectStun>()
{
	return FT4GamePacketSC_EffectStun::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectStun(FT4GamePacketSC_EffectStun::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectStun"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectStun
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectStun()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectStun")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectStun>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectStun;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectStun>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectStun, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_AttackerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectStun, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_EffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectStun, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_EffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectStun",
		sizeof(FT4GamePacketSC_EffectStun),
		alignof(FT4GamePacketSC_EffectStun),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectStun"), sizeof(FT4GamePacketSC_EffectStun), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectStun_Hash() { return 1743995960U; }
class UScriptStruct* FT4GamePacketSC_EffectAirborne::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectAirborne"), sizeof(FT4GamePacketSC_EffectAirborne), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectAirborne>()
{
	return FT4GamePacketSC_EffectAirborne::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectAirborne(FT4GamePacketSC_EffectAirborne::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectAirborne"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectAirborne
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectAirborne()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectAirborne")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectAirborne>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectAirborne;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectAirborne>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectAirborne, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_AttackerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectAirborne, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_EffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectAirborne, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_EffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectAirborne",
		sizeof(FT4GamePacketSC_EffectAirborne),
		alignof(FT4GamePacketSC_EffectAirborne),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectAirborne"), sizeof(FT4GamePacketSC_EffectAirborne), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectAirborne_Hash() { return 2250300054U; }
class UScriptStruct* FT4GamePacketSC_EffectKnockback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectKnockback"), sizeof(FT4GamePacketSC_EffectKnockback), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectKnockback>()
{
	return FT4GamePacketSC_EffectKnockback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectKnockback(FT4GamePacketSC_EffectKnockback::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectKnockback"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectKnockback
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectKnockback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectKnockback")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectKnockback>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectKnockback;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollideTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementCollideTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementCollideLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackerObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackerObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectKnockback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideTimeSec = { "MovementCollideTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, MovementCollideTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideLocation = { "MovementCollideLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, MovementCollideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementDurationSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementDurationSec = { "MovementDurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, MovementDurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_AttackerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_EffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectKnockback, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementCollideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_MovementDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_EffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectKnockback",
		sizeof(FT4GamePacketSC_EffectKnockback),
		alignof(FT4GamePacketSC_EffectKnockback),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectKnockback"), sizeof(FT4GamePacketSC_EffectKnockback), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectKnockback_Hash() { return 1544331450U; }
class UScriptStruct* FT4GamePacketSC_EffectArea::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectArea"), sizeof(FT4GamePacketSC_EffectArea), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectArea>()
{
	return FT4GamePacketSC_EffectArea::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectArea(FT4GamePacketSC_EffectArea::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectArea"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectArea
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectArea()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectArea")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectArea>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectArea;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectArea>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #68 : area attack\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#68 : area attack" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectArea, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_AttackerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectArea, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectArea, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_EffectDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::NewProp_EffectDBKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectArea",
		sizeof(FT4GamePacketSC_EffectArea),
		alignof(FT4GamePacketSC_EffectArea),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectArea"), sizeof(FT4GamePacketSC_EffectArea), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectArea_Hash() { return 2099235551U; }
class UScriptStruct* FT4GamePacketSC_EffectDirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectDirect"), sizeof(FT4GamePacketSC_EffectDirect), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectDirect>()
{
	return FT4GamePacketSC_EffectDirect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectDirect(FT4GamePacketSC_EffectDirect::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectDirect"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectDirect
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectDirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectDirect")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectDirect>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectDirect;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectDirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectDirect, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_AttackerObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectDirect, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_EffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectDirect, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_EffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectDirect",
		sizeof(FT4GamePacketSC_EffectDirect),
		alignof(FT4GamePacketSC_EffectDirect),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectDirect"), sizeof(FT4GamePacketSC_EffectDirect), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDirect_Hash() { return 3955249167U; }
class UScriptStruct* FT4GamePacketSC_EffectDebuff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectDebuff"), sizeof(FT4GamePacketSC_EffectDebuff), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectDebuff>()
{
	return FT4GamePacketSC_EffectDebuff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectDebuff(FT4GamePacketSC_EffectDebuff::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectDebuff"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectDebuff
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectDebuff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectDebuff")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectDebuff>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectDebuff;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #158 : Zone Weather\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#158 : Zone Weather" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectDebuff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_SenderObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_SenderObjectID = { "SenderObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectDebuff, SenderObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_SenderObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_SenderObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectDebuff, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_EffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectDebuff, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_SenderObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_EffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectDebuff",
		sizeof(FT4GamePacketSC_EffectDebuff),
		alignof(FT4GamePacketSC_EffectDebuff),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectDebuff"), sizeof(FT4GamePacketSC_EffectDebuff), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectDebuff_Hash() { return 135197651U; }
class UScriptStruct* FT4GamePacketSC_EffectBuff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_EffectBuff"), sizeof(FT4GamePacketSC_EffectBuff), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_EffectBuff>()
{
	return FT4GamePacketSC_EffectBuff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_EffectBuff(FT4GamePacketSC_EffectBuff::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_EffectBuff"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectBuff
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectBuff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_EffectBuff")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectBuff>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_EffectBuff;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #158 : Zone Weather\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#158 : Zone Weather" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_EffectBuff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_SenderObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_SenderObjectID = { "SenderObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectBuff, SenderObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_SenderObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_SenderObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_EffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_EffectDBKey = { "EffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectBuff, EffectDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_EffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_EffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_EffectBuff, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_SenderObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_EffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_EffectBuff",
		sizeof(FT4GamePacketSC_EffectBuff),
		alignof(FT4GamePacketSC_EffectBuff),
		Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_EffectBuff"), sizeof(FT4GamePacketSC_EffectBuff), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_EffectBuff_Hash() { return 1705017863U; }
class UScriptStruct* FT4GamePacketSC_SkillTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_SkillTarget"), sizeof(FT4GamePacketSC_SkillTarget), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_SkillTarget>()
{
	return FT4GamePacketSC_SkillTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_SkillTarget(FT4GamePacketSC_SkillTarget::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_SkillTarget"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillTarget
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_SkillTarget")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_SkillTarget>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillTarget;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollideTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementCollideTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementCollideLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHitBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetHitBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_SkillTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideTimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideTimeSec = { "MovementCollideTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, MovementCollideTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideLocation = { "MovementCollideLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, MovementCollideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementDurationSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #63 : Range Attack \xec\x9d\xb4\xeb\x9d\xbc\xeb\xa9\xb4 ProjectileSpeed \xeb\xa1\x9c \xea\xb3\x84\xec\x82\xb0\xeb\x90\x9c Duration \xec\x8b\x9c\xea\xb0\x84\xec\x9d\xb4 \xeb\x84\x98\xec\x96\xb4\xec\x98\xa8\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#63 : Range Attack \xec\x9d\xb4\xeb\x9d\xbc\xeb\xa9\xb4 ProjectileSpeed \xeb\xa1\x9c \xea\xb3\x84\xec\x82\xb0\xeb\x90\x9c Duration \xec\x8b\x9c\xea\xb0\x84\xec\x9d\xb4 \xeb\x84\x98\xec\x96\xb4\xec\x98\xa8\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementDurationSec = { "MovementDurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, MovementDurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ProjectileDurationSec_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #135 : Location \xea\xb3\xbc Direction \xeb\xb6\x84\xeb\xa6\xac\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#135 : Location \xea\xb3\xbc Direction \xeb\xb6\x84\xeb\xa6\xac" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ProjectileDurationSec = { "ProjectileDurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, ProjectileDurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ProjectileDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ProjectileDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetDirection_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #49, #68, #112\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#49, #68, #112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #112 : TargetActorID Valid \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0\xeb\xa7\x8c, \xed\x98\x84\xec\x9e\xac\xeb\x8a\x94 \xec\x88\x9c\xec\x88\x98 \xeb\xb9\x84\xec\xa5\xac\xec\x96\xbc \xec\x9a\xa9\xeb\x8f\x84\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#112 : TargetActorID Valid \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0\xeb\xa7\x8c, \xed\x98\x84\xec\x9e\xac\xeb\x8a\x94 \xec\x88\x9c\xec\x88\x98 \xeb\xb9\x84\xec\xa5\xac\xec\x96\xbc \xec\x9a\xa9\xeb\x8f\x84" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetHitBone_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #63 : \xed\x83\x80\xea\xb2\x9f\xec\x9d\xb4 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xeb\xa8\xbc\xec\xa0\x80 \xec\xb2\xb4\xed\x81\xac! \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Direct \xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#63 : \xed\x83\x80\xea\xb2\x9f\xec\x9d\xb4 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xeb\xa8\xbc\xec\xa0\x80 \xec\xb2\xb4\xed\x81\xac! \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Direct \xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetHitBone = { "TargetHitBone", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, TargetHitBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetHitBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetHitBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetObjectID = { "TargetObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, TargetObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, TargetType), Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_SkillDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_SkillDBKey = { "SkillDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, SkillDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_SkillDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_SkillDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillTarget, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementCollideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_MovementDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ProjectileDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetHitBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_TargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_SkillDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_SkillTarget",
		sizeof(FT4GamePacketSC_SkillTarget),
		alignof(FT4GamePacketSC_SkillTarget),
		Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_SkillTarget"), sizeof(FT4GamePacketSC_SkillTarget), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillTarget_Hash() { return 3228625770U; }
class UScriptStruct* FT4GamePacketSC_SkillCancel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_SkillCancel"), sizeof(FT4GamePacketSC_SkillCancel), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_SkillCancel>()
{
	return FT4GamePacketSC_SkillCancel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_SkillCancel(FT4GamePacketSC_SkillCancel::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_SkillCancel"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillCancel
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillCancel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_SkillCancel")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_SkillCancel>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillCancel;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #113, #116\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#113, #116" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_SkillCancel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillCancel, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_SkillCancel",
		sizeof(FT4GamePacketSC_SkillCancel),
		alignof(FT4GamePacketSC_SkillCancel),
		Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_SkillCancel"), sizeof(FT4GamePacketSC_SkillCancel), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCancel_Hash() { return 103472744U; }
class UScriptStruct* FT4GamePacketSC_SkillCasting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketSC_SkillCasting"), sizeof(FT4GamePacketSC_SkillCasting), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketSC_SkillCasting>()
{
	return FT4GamePacketSC_SkillCasting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketSC_SkillCasting(FT4GamePacketSC_SkillCasting::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketSC_SkillCasting"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillCasting
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillCasting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketSC_SkillCasting")),new UScriptStruct::TCppStructOps<FT4GamePacketSC_SkillCasting>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketSC_SkillCasting;
	struct Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartCasting_MetaData[];
#endif
		static void NewProp_bStartCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartCasting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #113, #116\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#113, #116" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketSC_SkillCasting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #113 : \xec\xb2\xab \xed\x98\xb8\xec\xb6\x9c\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c true\n" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
		{ "ToolTip", "#113 : \xec\xb2\xab \xed\x98\xb8\xec\xb6\x9c\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillCasting, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting_SetBit(void* Obj)
	{
		((FT4GamePacketSC_SkillCasting*)Obj)->bStartCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting = { "bStartCasting", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketSC_SkillCasting), &Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_SkillDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_SkillDBKey = { "SkillDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillCasting, SkillDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_SkillDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_SkillDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Client/T4GamePacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketSC_SkillCasting, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_ObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_bStartCasting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_SkillDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketSC_Base,
		&NewStructOps,
		"T4GamePacketSC_SkillCasting",
		sizeof(FT4GamePacketSC_SkillCasting),
		alignof(FT4GamePacketSC_SkillCasting),
		Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketSC_SkillCasting"), sizeof(FT4GamePacketSC_SkillCasting), Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketSC_SkillCasting_Hash() { return 3712404780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
