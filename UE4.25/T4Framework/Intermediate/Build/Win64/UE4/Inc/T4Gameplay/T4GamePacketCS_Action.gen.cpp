// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Server/T4GamePacketCS_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketCS_Action() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDBKey();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting();
// End Cross Module References
class UScriptStruct* FT4GamePacketCS_SkillTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_SkillTarget"), sizeof(FT4GamePacketCS_SkillTarget), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_SkillTarget>()
{
	return FT4GamePacketCS_SkillTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_SkillTarget(FT4GamePacketCS_SkillTarget::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_SkillTarget"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillTarget
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_SkillTarget")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_SkillTarget>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillTarget;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHitBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetHitBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_SkillTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetHitBone_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #49, #68 : Area, #112, #135\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#49, #68 : Area, #112, #135" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetHitBone = { "TargetHitBone", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, TargetHitBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetHitBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetHitBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetDirection_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #49, #68 : Area, #112\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#49, #68 : Area, #112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #63 : \xed\x83\x80\xea\xb2\x9f\xec\x9d\xb4 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xeb\xa8\xbc\xec\xa0\x80 \xec\xb2\xb4\xed\x81\xac! \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Direct \xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#63 : \xed\x83\x80\xea\xb2\x9f\xec\x9d\xb4 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xeb\xa8\xbc\xec\xa0\x80 \xec\xb2\xb4\xed\x81\xac! \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Direct \xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetObjectID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetObjectID = { "TargetObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, TargetObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, TargetType), Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SkillDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SkillDBKey = { "SkillDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, SkillDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SkillDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SkillDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillTarget, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetHitBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_TargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SkillDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_SkillTarget",
		sizeof(FT4GamePacketCS_SkillTarget),
		alignof(FT4GamePacketCS_SkillTarget),
		Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_SkillTarget"), sizeof(FT4GamePacketCS_SkillTarget), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillTarget_Hash() { return 2130773527U; }
class UScriptStruct* FT4GamePacketCS_SkillCancel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_SkillCancel"), sizeof(FT4GamePacketCS_SkillCancel), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_SkillCancel>()
{
	return FT4GamePacketCS_SkillCancel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_SkillCancel(FT4GamePacketCS_SkillCancel::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_SkillCancel"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillCancel
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillCancel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_SkillCancel")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_SkillCancel>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillCancel;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #113, #116\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#113, #116" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_SkillCancel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillCancel, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_SkillCancel",
		sizeof(FT4GamePacketCS_SkillCancel),
		alignof(FT4GamePacketCS_SkillCancel),
		Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_SkillCancel"), sizeof(FT4GamePacketCS_SkillCancel), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCancel_Hash() { return 2292129855U; }
class UScriptStruct* FT4GamePacketCS_SkillCasting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_SkillCasting"), sizeof(FT4GamePacketCS_SkillCasting), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_SkillCasting>()
{
	return FT4GamePacketCS_SkillCasting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_SkillCasting(FT4GamePacketCS_SkillCasting::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_SkillCasting"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillCasting
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillCasting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_SkillCasting")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_SkillCasting>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_SkillCasting;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastingStart_MetaData[];
#endif
		static void NewProp_bCastingStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastingStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #113, #116\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#113, #116" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_SkillCasting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #113 : \xec\xb2\xab \xed\x98\xb8\xec\xb6\x9c\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c true\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
		{ "ToolTip", "#113 : \xec\xb2\xab \xed\x98\xb8\xec\xb6\x9c\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillCasting, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart_SetBit(void* Obj)
	{
		((FT4GamePacketCS_SkillCasting*)Obj)->bCastingStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart = { "bCastingStart", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4GamePacketCS_SkillCasting), &Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SkillDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SkillDBKey = { "SkillDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillCasting, SkillDBKey), Z_Construct_UScriptStruct_FT4GameDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SkillDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SkillDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_SkillCasting, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_bCastingStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SkillDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_SkillCasting",
		sizeof(FT4GamePacketCS_SkillCasting),
		alignof(FT4GamePacketCS_SkillCasting),
		Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_SkillCasting"), sizeof(FT4GamePacketCS_SkillCasting), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_SkillCasting_Hash() { return 2308447820U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
