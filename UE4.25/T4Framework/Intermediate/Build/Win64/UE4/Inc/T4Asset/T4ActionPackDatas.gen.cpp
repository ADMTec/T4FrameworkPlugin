// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/ActionPack/T4ActionPackDatas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionPackDatas() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4VoidActionData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionDataBase();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvironmentActionData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ZoneEntityAsset_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTarget();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AttachParent();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4PostProcessActionData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4BuiltInEasing();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeAnimData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeOscillationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFOscillator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVOscillator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FROscillator();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkSectionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4TimeScaleActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayTagActionData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTagType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionTestSettings();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityReactionType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileTestSettings();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPackAsset_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MovementType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4LoadingPolicy();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4DecalActionData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleActionData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MeshActionData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionAnimSequenceData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayCount();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementTestSettings();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4BranchActionData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4BranchCondition();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionDataType();
// End Cross Module References
class UScriptStruct* FT4VoidActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4VoidActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4VoidActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4VoidActionData"), sizeof(FT4VoidActionData), Get_Z_Construct_UScriptStruct_FT4VoidActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4VoidActionData>()
{
	return FT4VoidActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4VoidActionData(FT4VoidActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4VoidActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4VoidActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4VoidActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4VoidActionData")),new UScriptStruct::TCppStructOps<FT4VoidActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4VoidActionData;
	struct Z_Construct_UScriptStruct_FT4VoidActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4VoidActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #56, #134: Action Editor \xec\x97\x90\xec\x84\x9c Invisible or Isolate \xeb\xa1\x9c \xec\xb6\x9c\xeb\xa0\xa5\xec\x9d\x84 \xec\xa0\x9c\xec\x96\xb4\xed\x95\xa0 \xeb\x95\x8c \xeb\x8d\x94\xeb\xaf\xb8\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9 (delay, duration \xeb\x8f\x99\xec\x9e\x91 \xeb\xb3\xb4\xec\x9e\xa5)\n// WARN : \xec\x8b\x9c\xec\x8a\xa4\xed\x83\xac\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xec\x98\x88\xec\x95\xbd\xeb\x90\x9c Struct \xec\x9e\x84\xec\x9c\xbc\xeb\xa1\x9c Action Editor \xec\x99\x80 \xec\x97\xb0\xea\xb3\x84\xed\x95\x9c \xec\x9e\x91\xec\x97\x85\xec\x9d\x84 \xed\x95\xa0 \xed\x95\x84\xec\x9a\x94\xea\xb0\x80 \xec\x97\x86\xec\x9d\x8c!\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#56, #134: Action Editor \xec\x97\x90\xec\x84\x9c Invisible or Isolate \xeb\xa1\x9c \xec\xb6\x9c\xeb\xa0\xa5\xec\x9d\x84 \xec\xa0\x9c\xec\x96\xb4\xed\x95\xa0 \xeb\x95\x8c \xeb\x8d\x94\xeb\xaf\xb8\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9 (delay, duration \xeb\x8f\x99\xec\x9e\x91 \xeb\xb3\xb4\xec\x9e\xa5)\nWARN : \xec\x8b\x9c\xec\x8a\xa4\xed\x83\xac\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xec\x98\x88\xec\x95\xbd\xeb\x90\x9c Struct \xec\x9e\x84\xec\x9c\xbc\xeb\xa1\x9c Action Editor \xec\x99\x80 \xec\x97\xb0\xea\xb3\x84\xed\x95\x9c \xec\x9e\x91\xec\x97\x85\xec\x9d\x84 \xed\x95\xa0 \xed\x95\x84\xec\x9a\x94\xea\xb0\x80 \xec\x97\x86\xec\x9d\x8c!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4VoidActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4VoidActionData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4VoidActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4VoidActionData",
		sizeof(FT4VoidActionData),
		alignof(FT4VoidActionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4VoidActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4VoidActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4VoidActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4VoidActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4VoidActionData"), sizeof(FT4VoidActionData), Get_Z_Construct_UScriptStruct_FT4VoidActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4VoidActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4VoidActionData_Hash() { return 1296868796U; }
class UScriptStruct* FT4EnvironmentActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvironmentActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvironmentActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvironmentActionData"), sizeof(FT4EnvironmentActionData), Get_Z_Construct_UScriptStruct_FT4EnvironmentActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvironmentActionData>()
{
	return FT4EnvironmentActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvironmentActionData(FT4EnvironmentActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvironmentActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvironmentActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvironmentActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvironmentActionData")),new UScriptStruct::TCppStructOps<FT4EnvironmentActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvironmentActionData;
	struct Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideBlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideBlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideBlendTime_MetaData[];
#endif
		static void NewProp_bOverrideBlendTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ZoneEntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentInheritPoint_MetaData[];
#endif
		static void NewProp_bParentInheritPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentInheritPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachParent_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvironmentActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bOverrideBlendTime" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendOutTimeSec = { "OverrideBlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvironmentActionData, OverrideBlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bOverrideBlendTime" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendInTimeSec = { "OverrideBlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvironmentActionData, OverrideBlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime_SetBit(void* Obj)
	{
		((FT4EnvironmentActionData*)Obj)->bOverrideBlendTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime = { "bOverrideBlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvironmentActionData), &Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ZoneEntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #100\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#100" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ZoneEntityAsset = { "ZoneEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvironmentActionData, ZoneEntityAsset), Z_Construct_UClass_UT4ZoneEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ZoneEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ZoneEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget = { "PlayTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvironmentActionData, PlayTarget), Z_Construct_UEnum_T4Asset_ET4PlayTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d...\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvironmentActionData, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint_SetBit(void* Obj)
	{
		((FT4EnvironmentActionData*)Obj)->bParentInheritPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint = { "bParentInheritPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvironmentActionData), &Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeEnvironmentActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeEnvironmentActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvironmentActionData, AttachParent), Z_Construct_UEnum_T4Asset_ET4AttachParent, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_OverrideBlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bOverrideBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ZoneEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_PlayTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_bParentInheritPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::NewProp_AttachParent_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4EnvironmentActionData",
		sizeof(FT4EnvironmentActionData),
		alignof(FT4EnvironmentActionData),
		Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvironmentActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvironmentActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvironmentActionData"), sizeof(FT4EnvironmentActionData), Get_Z_Construct_UScriptStruct_FT4EnvironmentActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvironmentActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvironmentActionData_Hash() { return 3388008727U; }
class UScriptStruct* FT4PostProcessActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4PostProcessActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PostProcessActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4PostProcessActionData"), sizeof(FT4PostProcessActionData), Get_Z_Construct_UScriptStruct_FT4PostProcessActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4PostProcessActionData>()
{
	return FT4PostProcessActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PostProcessActionData(FT4PostProcessActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4PostProcessActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4PostProcessActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4PostProcessActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PostProcessActionData")),new UScriptStruct::TCppStructOps<FT4PostProcessActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4PostProcessActionData;
	struct Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOutCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOutCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendInCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendInCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTarget_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #100\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#100" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PostProcessActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessActionData, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessActionData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve = { "BlendOutCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessActionData, BlendOutCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessActionData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #100\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#100" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve = { "BlendInCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessActionData, BlendInCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizePostProcessActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizePostProcessActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget = { "PlayTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessActionData, PlayTarget), Z_Construct_UEnum_T4Asset_ET4PlayTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendOutCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_BlendInCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::NewProp_PlayTarget_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4PostProcessActionData",
		sizeof(FT4PostProcessActionData),
		alignof(FT4PostProcessActionData),
		Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PostProcessActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PostProcessActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PostProcessActionData"), sizeof(FT4PostProcessActionData), Get_Z_Construct_UScriptStruct_FT4PostProcessActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PostProcessActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PostProcessActionData_Hash() { return 4056919015U; }
class UScriptStruct* FT4CameraShakeActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CameraShakeActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4CameraShakeActionData"), sizeof(FT4CameraShakeActionData), Get_Z_Construct_UScriptStruct_FT4CameraShakeActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4CameraShakeActionData>()
{
	return FT4CameraShakeActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CameraShakeActionData(FT4CameraShakeActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4CameraShakeActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CameraShakeActionData")),new UScriptStruct::TCppStructOps<FT4CameraShakeActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeActionData;
	struct Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OscillationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTarget_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CameraShakeActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_AnimData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeActionData, AnimData), Z_Construct_UScriptStruct_FT4CameraShakeAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_AnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_AnimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_OscillationData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_OscillationData = { "OscillationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeActionData, OscillationData), Z_Construct_UScriptStruct_FT4CameraShakeOscillationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_OscillationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_OscillationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeActionData, UserDefinedPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_UserDefinedPlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeActionData, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #100\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeActionData, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #101 : UCameraShake : Property\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#101 : UCameraShake : Property" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget = { "PlayTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeActionData, PlayTarget), Z_Construct_UEnum_T4Asset_ET4PlayTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_AnimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_OscillationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_UserDefinedPlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::NewProp_PlayTarget_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4CameraShakeActionData",
		sizeof(FT4CameraShakeActionData),
		alignof(FT4CameraShakeActionData),
		Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CameraShakeActionData"), sizeof(FT4CameraShakeActionData), Get_Z_Construct_UScriptStruct_FT4CameraShakeActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CameraShakeActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeActionData_Hash() { return 1344333394U; }
class UScriptStruct* FT4CameraShakeAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CameraShakeAnimData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4CameraShakeAnimData"), sizeof(FT4CameraShakeAnimData), Get_Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4CameraShakeAnimData>()
{
	return FT4CameraShakeAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CameraShakeAnimData(FT4CameraShakeAnimData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4CameraShakeAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeAnimData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CameraShakeAnimData")),new UScriptStruct::TCppStructOps<FT4CameraShakeAnimData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeAnimData;
	struct Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomAnimSegmentDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomAnimSegmentDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomAnimSegment_MetaData[];
#endif
		static void NewProp_bRandomAnimSegment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomAnimSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CameraShakeAnimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeAnimData, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_CameraAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_CameraAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_RandomAnimSegmentDuration_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bRandomAnimSegment" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_RandomAnimSegmentDuration = { "RandomAnimSegmentDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeAnimData, RandomAnimSegmentDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_RandomAnimSegmentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_RandomAnimSegmentDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment_SetBit(void* Obj)
	{
		((FT4CameraShakeAnimData*)Obj)->bRandomAnimSegment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment = { "bRandomAnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FT4CameraShakeAnimData), &Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendOutTime_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendOutTime = { "AnimBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeAnimData, AnimBlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendInTime_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendInTime = { "AnimBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeAnimData, AnimBlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimScale_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimScale = { "AnimScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeAnimData, AnimScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeAnimData, AnimPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimPlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_CameraAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_RandomAnimSegmentDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_bRandomAnimSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::NewProp_AnimPlayRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4CameraShakeAnimData",
		sizeof(FT4CameraShakeAnimData),
		alignof(FT4CameraShakeAnimData),
		Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CameraShakeAnimData"), sizeof(FT4CameraShakeAnimData), Get_Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeAnimData_Hash() { return 770035868U; }
class UScriptStruct* FT4CameraShakeOscillationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4CameraShakeOscillationData"), sizeof(FT4CameraShakeOscillationData), Get_Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4CameraShakeOscillationData>()
{
	return FT4CameraShakeOscillationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CameraShakeOscillationData(FT4CameraShakeOscillationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4CameraShakeOscillationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeOscillationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeOscillationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CameraShakeOscillationData")),new UScriptStruct::TCppStructOps<FT4CameraShakeOscillationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4CameraShakeOscillationData;
	struct Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FOVOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #101\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#101" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CameraShakeOscillationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_FOVOscillation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_FOVOscillation = { "FOVOscillation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeOscillationData, FOVOscillation), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_FOVOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_FOVOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_LocOscillation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_LocOscillation = { "LocOscillation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeOscillationData, LocOscillation), Z_Construct_UScriptStruct_FVOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_LocOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_LocOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_RotOscillation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_RotOscillation = { "RotOscillation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeOscillationData, RotOscillation), Z_Construct_UScriptStruct_FROscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_RotOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_RotOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeOscillationData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraShakeOscillationData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendInTimeSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_FOVOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_LocOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_RotOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::NewProp_BlendInTimeSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4CameraShakeOscillationData",
		sizeof(FT4CameraShakeOscillationData),
		alignof(FT4CameraShakeOscillationData),
		Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeOscillationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CameraShakeOscillationData"), sizeof(FT4CameraShakeOscillationData), Get_Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CameraShakeOscillationData_Hash() { return 2783141860U; }
class UScriptStruct* FT4CameraWorkActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CameraWorkActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4CameraWorkActionData"), sizeof(FT4CameraWorkActionData), Get_Z_Construct_UScriptStruct_FT4CameraWorkActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4CameraWorkActionData>()
{
	return FT4CameraWorkActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CameraWorkActionData(FT4CameraWorkActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4CameraWorkActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CameraWorkActionData")),new UScriptStruct::TCppStructOps<FT4CameraWorkActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkActionData;
	struct Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOutCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOutCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendInCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendInCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTarget_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CameraWorkActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_SectionData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkActionData, SectionData), Z_Construct_UScriptStruct_FT4CameraWorkSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_SectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_SectionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkActionData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve = { "BlendOutCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkActionData, BlendOutCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkActionData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve = { "BlendInCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkActionData, BlendInCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeCameraWorkActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeCameraWorkActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget = { "PlayTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkActionData, PlayTarget), Z_Construct_UEnum_T4Asset_ET4PlayTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_SectionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendOutCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_BlendInCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::NewProp_PlayTarget_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4CameraWorkActionData",
		sizeof(FT4CameraWorkActionData),
		alignof(FT4CameraWorkActionData),
		Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CameraWorkActionData"), sizeof(FT4CameraWorkActionData), Get_Z_Construct_UScriptStruct_FT4CameraWorkActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CameraWorkActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkActionData_Hash() { return 3074542145U; }
class UScriptStruct* FT4CameraWorkSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CameraWorkSectionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4CameraWorkSectionData"), sizeof(FT4CameraWorkSectionData), Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4CameraWorkSectionData>()
{
	return FT4CameraWorkSectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CameraWorkSectionData(FT4CameraWorkSectionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4CameraWorkSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkSectionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CameraWorkSectionData")),new UScriptStruct::TCppStructOps<FT4CameraWorkSectionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkSectionData;
	struct Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyDatas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CameraWorkSectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas = { "KeyDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionData, KeyDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas_Inner = { "KeyDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::NewProp_KeyDatas_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4CameraWorkSectionData",
		sizeof(FT4CameraWorkSectionData),
		alignof(FT4CameraWorkSectionData),
		Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CameraWorkSectionData"), sizeof(FT4CameraWorkSectionData), Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionData_Hash() { return 897071290U; }
class UScriptStruct* FT4CameraWorkSectionKeyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4CameraWorkSectionKeyData"), sizeof(FT4CameraWorkSectionKeyData), Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4CameraWorkSectionKeyData>()
{
	return FT4CameraWorkSectionKeyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CameraWorkSectionKeyData(FT4CameraWorkSectionKeyData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4CameraWorkSectionKeyData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkSectionKeyData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkSectionKeyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CameraWorkSectionKeyData")),new UScriptStruct::TCppStructOps<FT4CameraWorkSectionKeyData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4CameraWorkSectionKeyData;
	struct Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVDegree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVDegree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverse_MetaData[];
#endif
		static void NewProp_bInverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LookAtPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EasingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EasingCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EasingCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #58\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#58" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CameraWorkSectionKeyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_FOVDegree_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_FOVDegree = { "FOVDegree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, FOVDegree), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_FOVDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_FOVDegree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// Local\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "Local" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ViewDirection_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// LookAtPoint Inverse\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "LookAtPoint Inverse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ViewDirection = { "ViewDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, ViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ViewDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// ActionPoint\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "ActionPoint" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse_SetBit(void* Obj)
	{
		((FT4CameraWorkSectionKeyData*)Obj)->bInverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse = { "bInverse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4CameraWorkSectionKeyData), &Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_LookAtPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #102 : Droplist \xec\x84\xa0\xed\x83\x9d\xec\x8b\x9c PropertyChanged event \xea\xb0\x80 \xec\x99\x80\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd\xec\x9d\x84 \xeb\xaa\xbb\xed\x95\x98\xeb\x8a\x94 \xeb\xac\xb8\xec\xa0\x9c\xea\xb0\x80 \xec\x9e\x88\xec\x96\xb4 \xed\x95\x98\xeb\x93\x9c\xec\xbd\x94\xeb\x94\xa9\xed\x95\x9c \xec\xb2\x98\xeb\xa6\xac\xea\xb0\x80 \xec\x9e\x88\xec\x9d\x8c. \xec\x9d\xb4\xeb\xa6\x84\xec\x9c\xbc\xeb\xa1\x9c \xea\xb2\x80\xec\x83\x89!!\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#102 : Droplist \xec\x84\xa0\xed\x83\x9d\xec\x8b\x9c PropertyChanged event \xea\xb0\x80 \xec\x99\x80\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd\xec\x9d\x84 \xeb\xaa\xbb\xed\x95\x98\xeb\x8a\x94 \xeb\xac\xb8\xec\xa0\x9c\xea\xb0\x80 \xec\x9e\x88\xec\x96\xb4 \xed\x95\x98\xeb\x93\x9c\xec\xbd\x94\xeb\x94\xa9\xed\x95\x9c \xec\xb2\x98\xeb\xa6\xac\xea\xb0\x80 \xec\x9e\x88\xec\x9d\x8c. \xec\x9d\xb4\xeb\xa6\x84\xec\x9c\xbc\xeb\xa1\x9c \xea\xb2\x80\xec\x83\x89!!" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_LookAtPoint = { "LookAtPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, LookAtPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_LookAtPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_LookAtPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// FrameNumber \xeb\xa5\xbc Sec \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "FrameNumber \xeb\xa5\xbc Sec \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve = { "EasingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, EasingCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// Track Section \xec\x9d\x98 FFrameNumber \xec\xa6\x89, FrameNumber \xea\xb0\x80 Unique Key \xea\xb0\x80 \xeb\x90\xa8\xec\x9c\xbc\xeb\xa1\x9c \xec\xa0\x80\xec\x9e\xa5\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "Track Section \xec\x9d\x98 FFrameNumber \xec\xa6\x89, FrameNumber \xea\xb0\x80 Unique Key \xea\xb0\x80 \xeb\x90\xa8\xec\x9c\xbc\xeb\xa1\x9c \xec\xa0\x80\xec\x9e\xa5\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ChannelKey_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #58 : Property \xec\x88\x98\xec\xa0\x95\xec\x8b\x9c UT4CameraWorkSectionKeyObject \xec\x97\x90\xeb\x8f\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa4\x84 \xea\xb2\x83!\n//       SaveCameraSectionKeyObject, UpdateCameraSectionKeyObject\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#58 : Property \xec\x88\x98\xec\xa0\x95\xec\x8b\x9c UT4CameraWorkSectionKeyObject \xec\x97\x90\xeb\x8f\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa4\x84 \xea\xb2\x83!\n      SaveCameraSectionKeyObject, UpdateCameraSectionKeyObject" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ChannelKey = { "ChannelKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CameraWorkSectionKeyData, ChannelKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ChannelKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ChannelKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_FOVDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ViewDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_bInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_LookAtPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_EasingCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::NewProp_ChannelKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4CameraWorkSectionKeyData",
		sizeof(FT4CameraWorkSectionKeyData),
		alignof(FT4CameraWorkSectionKeyData),
		Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CameraWorkSectionKeyData"), sizeof(FT4CameraWorkSectionKeyData), Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CameraWorkSectionKeyData_Hash() { return 4262881397U; }
class UScriptStruct* FT4TimeScaleActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4TimeScaleActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4TimeScaleActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4TimeScaleActionData"), sizeof(FT4TimeScaleActionData), Get_Z_Construct_UScriptStruct_FT4TimeScaleActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4TimeScaleActionData>()
{
	return FT4TimeScaleActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4TimeScaleActionData(FT4TimeScaleActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4TimeScaleActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4TimeScaleActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4TimeScaleActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4TimeScaleActionData")),new UScriptStruct::TCppStructOps<FT4TimeScaleActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4TimeScaleActionData;
	struct Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOutCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOutCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendInCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendInCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTarget_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #102\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#102" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4TimeScaleActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "UIMax", "5" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TimeScaleActionData, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TimeScaleActionData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve = { "BlendOutCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TimeScaleActionData, BlendOutCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TimeScaleActionData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve = { "BlendInCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TimeScaleActionData, BlendInCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeTimeScaleActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeTimeScaleActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget = { "PlayTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TimeScaleActionData, PlayTarget), Z_Construct_UEnum_T4Asset_ET4PlayTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendOutCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_BlendInCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::NewProp_PlayTarget_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4TimeScaleActionData",
		sizeof(FT4TimeScaleActionData),
		alignof(FT4TimeScaleActionData),
		Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4TimeScaleActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4TimeScaleActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4TimeScaleActionData"), sizeof(FT4TimeScaleActionData), Get_Z_Construct_UScriptStruct_FT4TimeScaleActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4TimeScaleActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4TimeScaleActionData_Hash() { return 22089915U; }
class UScriptStruct* FT4PlayTagActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4PlayTagActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PlayTagActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4PlayTagActionData"), sizeof(FT4PlayTagActionData), Get_Z_Construct_UScriptStruct_FT4PlayTagActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4PlayTagActionData>()
{
	return FT4PlayTagActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PlayTagActionData(FT4PlayTagActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4PlayTagActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4PlayTagActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4PlayTagActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PlayTagActionData")),new UScriptStruct::TCppStructOps<FT4PlayTagActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4PlayTagActionData;
	struct Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTagType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTagType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #81\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#81" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PlayTagActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagName = { "PlayTagName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayTagActionData, PlayTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizePlayTagActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizePlayTagActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType = { "PlayTagType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PlayTagActionData, PlayTagType), Z_Construct_UEnum_T4Asset_ET4PlayTagType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::NewProp_PlayTagType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4PlayTagActionData",
		sizeof(FT4PlayTagActionData),
		alignof(FT4PlayTagActionData),
		Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PlayTagActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PlayTagActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PlayTagActionData"), sizeof(FT4PlayTagActionData), Get_Z_Construct_UScriptStruct_FT4PlayTagActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PlayTagActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PlayTagActionData_Hash() { return 2535382980U; }
class UScriptStruct* FT4ReactionActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ReactionActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ReactionActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ReactionActionData"), sizeof(FT4ReactionActionData), Get_Z_Construct_UScriptStruct_FT4ReactionActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ReactionActionData>()
{
	return FT4ReactionActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ReactionActionData(FT4ReactionActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ReactionActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ReactionActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ReactionActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ReactionActionData")),new UScriptStruct::TCppStructOps<FT4ReactionActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ReactionActionData;
	struct Z_Construct_UScriptStruct_FT4ReactionActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRotation_MetaData[];
#endif
		static void NewProp_bUseRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ReactionActionData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionActionData, TestSettings), Z_Construct_UScriptStruct_FT4ReactionTestSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_TestSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// hit : Left (\xec\xa2\x8c\xec\xb8\xa1\xec\x9c\xbc\xeb\xa1\x9c)\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "hit : Left (\xec\xa2\x8c\xec\xb8\xa1\xec\x9c\xbc\xeb\xa1\x9c)" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation_SetBit(void* Obj)
	{
		((FT4ReactionActionData*)Obj)->bUseRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation = { "bUseRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ReactionActionData), &Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_D_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// hit : Right (\xec\x9a\xb0\xec\xb8\xa1\xec\x9c\xbc\xeb\xa1\x9c), knockback : Up (\xea\xb3\xb5\xec\xa4\x91\xec\x9c\xbc\xeb\xa1\x9c)\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "hit : Right (\xec\x9a\xb0\xec\xb8\xa1\xec\x9c\xbc\xeb\xa1\x9c), knockback : Up (\xea\xb3\xb5\xec\xa4\x91\xec\x9c\xbc\xeb\xa1\x9c)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_D = { "ReactionName_D", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionActionData, ReactionName_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_C_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// hit : Front (\xec\x95\x9e\xec\x9c\xbc\xeb\xa1\x9c \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84), knockback : Front (\xec\x95\x9e\xec\x9c\xbc\xeb\xa1\x9c \xeb\xb0\x80\xeb\xa6\xbc)\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "hit : Front (\xec\x95\x9e\xec\x9c\xbc\xeb\xa1\x9c \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84), knockback : Front (\xec\x95\x9e\xec\x9c\xbc\xeb\xa1\x9c \xeb\xb0\x80\xeb\xa6\xbc)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_C = { "ReactionName_C", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionActionData, ReactionName_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_B_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// hit : Back (\xeb\x92\xa4\xeb\xa1\x9c \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84), knockback : Back (\xeb\x92\xa4\xeb\xa1\x9c \xeb\xb0\x80\xeb\xa6\xbc)\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "hit : Back (\xeb\x92\xa4\xeb\xa1\x9c \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84), knockback : Back (\xeb\x92\xa4\xeb\xa1\x9c \xeb\xb0\x80\xeb\xa6\xbc)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_B = { "ReactionName_B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionActionData, ReactionName_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_A_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_A = { "ReactionName_A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionActionData, ReactionName_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeReactionActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeReactionActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionActionData, ReactionType), Z_Construct_UEnum_T4Asset_ET4EntityReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_TestSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_bUseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionName_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::NewProp_ReactionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4ReactionActionData",
		sizeof(FT4ReactionActionData),
		alignof(FT4ReactionActionData),
		Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ReactionActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ReactionActionData"), sizeof(FT4ReactionActionData), Get_Z_Construct_UScriptStruct_FT4ReactionActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ReactionActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ReactionActionData_Hash() { return 3904225384U; }
class UScriptStruct* FT4ReactionTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ReactionTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ReactionTestSettings, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ReactionTestSettings"), sizeof(FT4ReactionTestSettings), Get_Z_Construct_UScriptStruct_FT4ReactionTestSettings_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ReactionTestSettings>()
{
	return FT4ReactionTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ReactionTestSettings(FT4ReactionTestSettings::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ReactionTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ReactionTestSettings
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ReactionTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ReactionTestSettings")),new UScriptStruct::TCppStructOps<FT4ReactionTestSettings>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ReactionTestSettings;
	struct Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTestReverseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bTestReverseRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #135 : \n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#135 :" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ReactionTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::NewProp_bTestReverseRotation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::NewProp_bTestReverseRotation = { "bTestReverseRotation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionTestSettings, bTestReverseRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::NewProp_bTestReverseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::NewProp_bTestReverseRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::NewProp_bTestReverseRotation,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ReactionTestSettings",
		sizeof(FT4ReactionTestSettings),
		alignof(FT4ReactionTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ReactionTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ReactionTestSettings"), sizeof(FT4ReactionTestSettings), Get_Z_Construct_UScriptStruct_FT4ReactionTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ReactionTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ReactionTestSettings_Hash() { return 1405253262U; }
class UScriptStruct* FT4ProjectileActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ProjectileActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ProjectileActionData"), sizeof(FT4ProjectileActionData), Get_Z_Construct_UScriptStruct_FT4ProjectileActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ProjectileActionData>()
{
	return FT4ProjectileActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ProjectileActionData(FT4ProjectileActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ProjectileActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ProjectileActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ProjectileActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ProjectileActionData")),new UScriptStruct::TCppStructOps<FT4ProjectileActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ProjectileActionData;
	struct Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingStopDelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CastingStopDelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowDelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowDelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillateRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillateRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOscillate_MetaData[];
#endif
		static void NewProp_bUseOscillate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOscillate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceOutActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BounceOutActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBounceOut_MetaData[];
#endif
		static void NewProp_bEnableBounceOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBounceOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAttachedTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitAttachedTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHitAttached_MetaData[];
#endif
		static void NewProp_bEnableHitAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHitAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRollAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomRollAngle_MetaData[];
#endif
		static void NewProp_bRandomRollAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceleratedMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AcceleratedMotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AcceleratedMotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProjectileMotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectileMotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EndActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HeadActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CastingActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#63" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ProjectileActionData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, TestSettings), Z_Construct_UScriptStruct_FT4ProjectileTestSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_TestSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingStopDelayTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// Play \xec\x9d\xb4\xed\x9b\x84 ActionPoint \xec\x97\x90\xec\x84\x9c \xeb\x96\xa8\xec\x96\xb4\xec\xa7\x80\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84!\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "Play \xec\x9d\xb4\xed\x9b\x84 ActionPoint \xec\x97\x90\xec\x84\x9c \xeb\x96\xa8\xec\x96\xb4\xec\xa7\x80\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingStopDelayTimeSec = { "CastingStopDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, CastingStopDelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingStopDelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingStopDelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ThrowDelayTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #112 : Projectile \xec\x9d\x98 \xea\xb8\xb8\xec\x9d\xb4, \xec\xb6\xa9\xeb\x8f\x8c \xea\xb3\x84\xec\x82\xb0\xec\x97\x90\xec\x84\x9c Offset \xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9. (\xec\x9b\x90\xec\xa0\x90 \xec\x97\x90\xec\x84\x9c\xec\x9d\x98 \xea\xb8\xb8\xec\x9d\xb4)\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#112 : Projectile \xec\x9d\x98 \xea\xb8\xb8\xec\x9d\xb4, \xec\xb6\xa9\xeb\x8f\x8c \xea\xb3\x84\xec\x82\xb0\xec\x97\x90\xec\x84\x9c Offset \xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9. (\xec\x9b\x90\xec\xa0\x90 \xec\x97\x90\xec\x84\x9c\xec\x9d\x98 \xea\xb8\xb8\xec\x9d\xb4)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ThrowDelayTimeSec = { "ThrowDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, ThrowDelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ThrowDelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ThrowDelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileLength_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127 : \xed\x9d\x94\xeb\x93\xa4\xeb\xa6\xbc \xed\x81\xac\xea\xb8\xb0\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127 : \xed\x9d\x94\xeb\x93\xa4\xeb\xa6\xbc \xed\x81\xac\xea\xb8\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileLength = { "ProjectileLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, ProjectileLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_OscillateRange_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127 : \xed\x9d\x94\xeb\x93\xa4\xeb\xa6\xbc \xec\x97\xac\xeb\xb6\x80\n" },
		{ "EditCondition", "bUseOscillate" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127 : \xed\x9d\x94\xeb\x93\xa4\xeb\xa6\xbc \xec\x97\xac\xeb\xb6\x80" },
		{ "UIMax", "45" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_OscillateRange = { "OscillateRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, OscillateRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_OscillateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_OscillateRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate_SetBit(void* Obj)
	{
		((FT4ProjectileActionData*)Obj)->bUseOscillate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate = { "bUseOscillate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ProjectileActionData), &Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_BounceOutActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127 : \xeb\xaa\x85\xed\x99\x95\xed\x95\x9c \xed\x83\x80\xea\xb2\x9f\xec\x97\x86\xec\x9d\xb4 \xeb\xac\xb4\xed\x95\x9c\xeb\x8c\x80\xeb\xa1\x9c \xeb\xb0\x9c\xec\x82\xac\xeb\x90\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xed\x9a\xa8\xea\xb3\xbc \xec\xb2\x98\xeb\xa6\xac \xec\x82\xac\xec\x9a\xa9 \xec\x97\xac\xeb\xb6\x80\n" },
		{ "EditCondition", "bEnableBounceOut" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127 : \xeb\xaa\x85\xed\x99\x95\xed\x95\x9c \xed\x83\x80\xea\xb2\x9f\xec\x97\x86\xec\x9d\xb4 \xeb\xac\xb4\xed\x95\x9c\xeb\x8c\x80\xeb\xa1\x9c \xeb\xb0\x9c\xec\x82\xac\xeb\x90\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xed\x9a\xa8\xea\xb3\xbc \xec\xb2\x98\xeb\xa6\xac \xec\x82\xac\xec\x9a\xa9 \xec\x97\xac\xeb\xb6\x80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_BounceOutActionPackAsset = { "BounceOutActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, BounceOutActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_BounceOutActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_BounceOutActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81 \xec\x8b\x9c\xea\xb0\x84\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81 \xec\x8b\x9c\xea\xb0\x84" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut_SetBit(void* Obj)
	{
		((FT4ProjectileActionData*)Obj)->bEnableBounceOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut = { "bEnableBounceOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ProjectileActionData), &Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HitAttachedTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81\xec\x9d\x84 \xeb\x82\xa8\xea\xb8\xb8\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80 (Arrow : true, Fireball : false)\n" },
		{ "EditCondition", "bEnableHitAttached" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81\xec\x9d\x84 \xeb\x82\xa8\xea\xb8\xb8\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80 (Arrow : true, Fireball : false)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HitAttachedTimeSec = { "HitAttachedTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, HitAttachedTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HitAttachedTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HitAttachedTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached_SetBit(void* Obj)
	{
		((FT4ProjectileActionData*)Obj)->bEnableHitAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached = { "bEnableHitAttached", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ProjectileActionData), &Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_InitialRollAngle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127\n" },
		{ "EditCondition", "!bRandomRollAngle" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_InitialRollAngle = { "InitialRollAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, InitialRollAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_InitialRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_InitialRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127 : \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0(Parabola) \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127 : \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0(Parabola) \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle_SetBit(void* Obj)
	{
		((FT4ProjectileActionData*)Obj)->bRandomRollAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle = { "bRandomRollAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ProjectileActionData), &Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127" },
		{ "UIMax", "1000" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion = { "AcceleratedMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, AcceleratedMotion), Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion = { "ProjectileMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, ProjectileMotion), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_EndActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_EndActionPackAsset = { "EndActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, EndActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_EndActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_EndActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HeadActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HeadActionPackAsset = { "HeadActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, HeadActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HeadActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HeadActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// \xec\x96\xb4\xeb\x94\x98\xea\xb0\x80\xec\x97\x90 \xeb\xb6\x99\xec\x96\xb4\xec\x95\xbc \xed\x95\xa0 \xea\xb2\xbd\xec\x9a\xb0. \xec\x98\x88) \xec\x98\xa4\xeb\xa5\xb8\xec\x86\x90...\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "\xec\x96\xb4\xeb\x94\x98\xea\xb0\x80\xec\x97\x90 \xeb\xb6\x99\xec\x96\xb4\xec\x95\xbc \xed\x95\xa0 \xea\xb2\xbd\xec\x9a\xb0. \xec\x98\x88) \xec\x98\xa4\xeb\xa5\xb8\xec\x86\x90..." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingActionPackAsset = { "CastingActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, CastingActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeProjectileActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeProjectileActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionData, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ActionPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_TestSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingStopDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ThrowDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_OscillateRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bUseOscillate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_BounceOutActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableBounceOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HitAttachedTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bEnableHitAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_InitialRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_bRandomRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_AcceleratedMotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ProjectileMotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_EndActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_HeadActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_CastingActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::NewProp_ActionPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4ProjectileActionData",
		sizeof(FT4ProjectileActionData),
		alignof(FT4ProjectileActionData),
		Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ProjectileActionData"), sizeof(FT4ProjectileActionData), Get_Z_Construct_UScriptStruct_FT4ProjectileActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ProjectileActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileActionData_Hash() { return 2440958518U; }
class UScriptStruct* FT4ProjectileTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ProjectileTestSettings, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ProjectileTestSettings"), sizeof(FT4ProjectileTestSettings), Get_Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ProjectileTestSettings>()
{
	return FT4ProjectileTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ProjectileTestSettings(FT4ProjectileTestSettings::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ProjectileTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ProjectileTestSettings
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ProjectileTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ProjectileTestSettings")),new UScriptStruct::TCppStructOps<FT4ProjectileTestSettings>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ProjectileTestSettings;
	struct Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestInitializeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestInitializeSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #132 : \xeb\x84\xa4\xec\x9d\xb4\xeb\xb0\x8d\xec\x97\x90 \xeb\xaa\x85\xec\x8b\x9c\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c Test prefix \xeb\xa5\xbc \xeb\xb6\x99\xec\x9d\xbc \xea\xb2\x83! \xec\x82\xac\xec\x9a\xa9\xec\xa4\x91 \xed\x98\xbc\xeb\x9e\x80\xec\x9d\x84 \xec\x95\xbc\xea\xb8\xb0\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#132 : \xeb\x84\xa4\xec\x9d\xb4\xeb\xb0\x8d\xec\x97\x90 \xeb\xaa\x85\xec\x8b\x9c\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c Test prefix \xeb\xa5\xbc \xeb\xb6\x99\xec\x9d\xbc \xea\xb2\x83! \xec\x82\xac\xec\x9a\xa9\xec\xa4\x91 \xed\x98\xbc\xeb\x9e\x80\xec\x9d\x84 \xec\x95\xbc\xea\xb8\xb0\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ProjectileTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::NewProp_TestInitializeSpeed_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::NewProp_TestInitializeSpeed = { "TestInitializeSpeed", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileTestSettings, TestInitializeSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::NewProp_TestInitializeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::NewProp_TestInitializeSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::NewProp_TestInitializeSpeed,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ProjectileTestSettings",
		sizeof(FT4ProjectileTestSettings),
		alignof(FT4ProjectileTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ProjectileTestSettings"), sizeof(FT4ProjectileTestSettings), Get_Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileTestSettings_Hash() { return 2092650834U; }
class UScriptStruct* FT4DecalActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4DecalActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4DecalActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4DecalActionData"), sizeof(FT4DecalActionData), Get_Z_Construct_UScriptStruct_FT4DecalActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4DecalActionData>()
{
	return FT4DecalActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4DecalActionData(FT4DecalActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4DecalActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4DecalActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4DecalActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4DecalActionData")),new UScriptStruct::TCppStructOps<FT4DecalActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4DecalActionData;
	struct Z_Construct_UScriptStruct_FT4DecalActionData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecalSortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentInheritPoint_MetaData[];
#endif
		static void NewProp_bParentInheritPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentInheritPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachParent_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4DecalActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeOutTimeSec = { "FadeOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, FadeOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeInTimeSec = { "FadeInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, FadeInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSortOrder_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #54\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#54" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSortOrder = { "DecalSortOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, DecalSortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d...\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint_SetBit(void* Obj)
	{
		((FT4DecalActionData*)Obj)->bParentInheritPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint = { "bParentInheritPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4DecalActionData), &Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeDecalActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeDecalActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DecalActionData, AttachParent), Z_Construct_UEnum_T4Asset_ET4AttachParent, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4DecalActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_FadeInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalSortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_bParentInheritPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DecalActionData_Statics::NewProp_AttachParent_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4DecalActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4DecalActionData",
		sizeof(FT4DecalActionData),
		alignof(FT4DecalActionData),
		Z_Construct_UScriptStruct_FT4DecalActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DecalActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4DecalActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4DecalActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4DecalActionData"), sizeof(FT4DecalActionData), Get_Z_Construct_UScriptStruct_FT4DecalActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4DecalActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4DecalActionData_Hash() { return 471121470U; }
class UScriptStruct* FT4ParticleActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ParticleActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ParticleActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ParticleActionData"), sizeof(FT4ParticleActionData), Get_Z_Construct_UScriptStruct_FT4ParticleActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ParticleActionData>()
{
	return FT4ParticleActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ParticleActionData(FT4ParticleActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ParticleActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ParticleActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ParticleActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ParticleActionData")),new UScriptStruct::TCppStructOps<FT4ParticleActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ParticleActionData;
	struct Z_Construct_UScriptStruct_FT4ParticleActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentInheritPoint_MetaData[];
#endif
		static void NewProp_bParentInheritPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentInheritPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachParent_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ParticleActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #54\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#54" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalScale_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalScale = { "LocalScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, LocalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalRotation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, LocalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalOffset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ParticleAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #57\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#57" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ParticleAsset = { "ParticleAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, ParticleAsset), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ParticleAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ParticleAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d...\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint_SetBit(void* Obj)
	{
		((FT4ParticleActionData*)Obj)->bParentInheritPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint = { "bParentInheritPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ParticleActionData), &Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeParticleActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeParticleActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionData, AttachParent), Z_Construct_UEnum_T4Asset_ET4AttachParent, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LocalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ParticleAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_bParentInheritPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::NewProp_AttachParent_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4ParticleActionData",
		sizeof(FT4ParticleActionData),
		alignof(FT4ParticleActionData),
		Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ParticleActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ParticleActionData"), sizeof(FT4ParticleActionData), Get_Z_Construct_UScriptStruct_FT4ParticleActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ParticleActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ParticleActionData_Hash() { return 4263552168U; }
class UScriptStruct* FT4MeshActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4MeshActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MeshActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4MeshActionData"), sizeof(FT4MeshActionData), Get_Z_Construct_UScriptStruct_FT4MeshActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4MeshActionData>()
{
	return FT4MeshActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MeshActionData(FT4MeshActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4MeshActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4MeshActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4MeshActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MeshActionData")),new UScriptStruct::TCppStructOps<FT4MeshActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4MeshActionData;
	struct Z_Construct_UScriptStruct_FT4MeshActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentInheritPoint_MetaData[];
#endif
		static void NewProp_bParentInheritPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentInheritPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachParent_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#108" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MeshActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalScale_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#108" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalScale = { "LocalScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, LocalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalRotation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#112" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, LocalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalOffset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #57\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#57" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, StaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d...\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#76 : Parent ActionPoint \xea\xb0\x80 \xec\x97\x86\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xb3\xb8\xeb\x9e\x98 \xec\x84\xb8\xed\x8c\x85\xec\x9d\x84 \xeb\x94\xb0\xeb\xa5\xb4\xeb\x8f\x84\xeb\xa1\x9d..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint_SetBit(void* Obj)
	{
		((FT4MeshActionData*)Obj)->bParentInheritPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint = { "bParentInheritPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4MeshActionData), &Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeMeshActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeMeshActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MeshActionData, AttachParent), Z_Construct_UEnum_T4Asset_ET4AttachParent, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MeshActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LocalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_StaticMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_bParentInheritPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MeshActionData_Statics::NewProp_AttachParent_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MeshActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4MeshActionData",
		sizeof(FT4MeshActionData),
		alignof(FT4MeshActionData),
		Z_Construct_UScriptStruct_FT4MeshActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MeshActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MeshActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MeshActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MeshActionData"), sizeof(FT4MeshActionData), Get_Z_Construct_UScriptStruct_FT4MeshActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MeshActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MeshActionData_Hash() { return 2034251365U; }
class UScriptStruct* FT4AnimationActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimationActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimationActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimationActionData"), sizeof(FT4AnimationActionData), Get_Z_Construct_UScriptStruct_FT4AnimationActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimationActionData>()
{
	return FT4AnimationActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimationActionData(FT4AnimationActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimationActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimationActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimationActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimationActionData")),new UScriptStruct::TCppStructOps<FT4AnimationActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimationActionData;
	struct Z_Construct_UScriptStruct_FT4AnimationActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSequenceDatas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimationActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeAnimationActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeAnimationActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas = { "AnimSequenceDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationActionData, AnimSequenceDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas_Inner = { "AnimSequenceDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ActionAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::NewProp_AnimSequenceDatas_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4AnimationActionData",
		sizeof(FT4AnimationActionData),
		alignof(FT4AnimationActionData),
		Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimationActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimationActionData"), sizeof(FT4AnimationActionData), Get_Z_Construct_UScriptStruct_FT4AnimationActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimationActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimationActionData_Hash() { return 2193535727U; }
class UScriptStruct* FT4ActionAnimSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionAnimSequenceData"), sizeof(FT4ActionAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionAnimSequenceData>()
{
	return FT4ActionAnimSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionAnimSequenceData(FT4ActionAnimSequenceData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionAnimSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionAnimSequenceData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionAnimSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionAnimSequenceData")),new UScriptStruct::TCppStructOps<FT4ActionAnimSequenceData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionAnimSequenceData;
	struct Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCutOffTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayCutOffTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayCount_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #134\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#134" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionAnimSequenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimSequenceData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #134 : \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\xa4\x91\xec\x9d\xb8 \xec\x95\xa0\xeb\x8b\x88\xeb\xa5\xbc \xec\xa7\x9c\xeb\xa5\xb4\xea\xb3\xa0 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x84\xeb\x8b\xa4. Sequential \xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#134 : \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\xa4\x91\xec\x9d\xb8 \xec\x95\xa0\xeb\x8b\x88\xeb\xa5\xbc \xec\xa7\x9c\xeb\xa5\xb4\xea\xb3\xa0 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x84\xeb\x8b\xa4. Sequential \xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimSequenceData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCutOffTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCutOffTimeSec = { "PlayCutOffTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimSequenceData, PlayCutOffTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCutOffTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCutOffTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimSequenceData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount = { "PlayCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimSequenceData, PlayCount), Z_Construct_UEnum_T4Asset_ET4PlayCount, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimSequenceData, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCutOffTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_PlayCount_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ActionAnimSequenceData",
		sizeof(FT4ActionAnimSequenceData),
		alignof(FT4ActionAnimSequenceData),
		Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionAnimSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionAnimSequenceData"), sizeof(FT4ActionAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionAnimSequenceData_Hash() { return 3684552815U; }
class UScriptStruct* FT4MovementActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4MovementActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovementActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4MovementActionData"), sizeof(FT4MovementActionData), Get_Z_Construct_UScriptStruct_FT4MovementActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4MovementActionData>()
{
	return FT4MovementActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovementActionData(FT4MovementActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4MovementActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4MovementActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4MovementActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovementActionData")),new UScriptStruct::TCppStructOps<FT4MovementActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4MovementActionData;
	struct Z_Construct_UScriptStruct_FT4MovementActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirborneFlightTimeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirborneFlightTimeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceleratedMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AcceleratedMotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AcceleratedMotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #132\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#132" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovementActionData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionData, TestSettings), Z_Construct_UScriptStruct_FT4MovementTestSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_TestSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AirborneFlightTimeRatio_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AirborneFlightTimeRatio = { "AirborneFlightTimeRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionData, AirborneFlightTimeRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AirborneFlightTimeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AirborneFlightTimeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #132\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#132" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion = { "AcceleratedMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionData, AcceleratedMotion), Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeMovementActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeMovementActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionData, MovementType), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MovementActionData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_TestSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AirborneFlightTimeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_AcceleratedMotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionData_Statics::NewProp_MovementType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovementActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4MovementActionData",
		sizeof(FT4MovementActionData),
		alignof(FT4MovementActionData),
		Z_Construct_UScriptStruct_FT4MovementActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovementActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovementActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovementActionData"), sizeof(FT4MovementActionData), Get_Z_Construct_UScriptStruct_FT4MovementActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovementActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovementActionData_Hash() { return 572314157U; }
class UScriptStruct* FT4MovementTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4MovementTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovementTestSettings, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4MovementTestSettings"), sizeof(FT4MovementTestSettings), Get_Z_Construct_UScriptStruct_FT4MovementTestSettings_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4MovementTestSettings>()
{
	return FT4MovementTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovementTestSettings(FT4MovementTestSettings::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4MovementTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4MovementTestSettings
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4MovementTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovementTestSettings")),new UScriptStruct::TCppStructOps<FT4MovementTestSettings>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4MovementTestSettings;
	struct Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMaxHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestMaxHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMaxMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestMaxMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMoveAngleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TestMoveAngleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMoveAngleType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #132 : \xeb\x84\xa4\xec\x9d\xb4\xeb\xb0\x8d\xec\x97\x90 \xeb\xaa\x85\xec\x8b\x9c\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c Test prefix \xeb\xa5\xbc \xeb\xb6\x99\xec\x9d\xbc \xea\xb2\x83! \xec\x82\xac\xec\x9a\xa9\xec\xa4\x91 \xed\x98\xbc\xeb\x9e\x80\xec\x9d\x84 \xec\x95\xbc\xea\xb8\xb0\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#132 : \xeb\x84\xa4\xec\x9d\xb4\xeb\xb0\x8d\xec\x97\x90 \xeb\xaa\x85\xec\x8b\x9c\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c Test prefix \xeb\xa5\xbc \xeb\xb6\x99\xec\x9d\xbc \xea\xb2\x83! \xec\x82\xac\xec\x9a\xa9\xec\xa4\x91 \xed\x98\xbc\xeb\x9e\x80\xec\x9d\x84 \xec\x95\xbc\xea\xb8\xb0\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovementTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeightSpeed_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127, #132 : \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8\xec\x9a\xa9 \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#127, #132 : \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8\xec\x9a\xa9 \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeightSpeed = { "TestMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementTestSettings, TestMaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// #132 : \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8\xec\x9a\xa9 \xec\x86\x8d\xeb\x8f\x84\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#132 : \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8\xec\x9a\xa9 \xec\x86\x8d\xeb\x8f\x84" },
		{ "UIMax", "1500.0" },
		{ "UIMin", "5.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeight = { "TestMaxHeight", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementTestSettings, TestMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxMoveSpeed_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #140 : \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8\xec\x9a\xa9 \xec\xb5\x9c\xeb\x8c\x80 \xea\xb1\xb0\xeb\xa6\xac\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#140 : \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8\xec\x9a\xa9 \xec\xb5\x9c\xeb\x8c\x80 \xea\xb1\xb0\xeb\xa6\xac" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxMoveSpeed = { "TestMaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementTestSettings, TestMaxMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxDistance_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxDistance = { "TestMaxDistance", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementTestSettings, TestMaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType = { "TestMoveAngleType", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementTestSettings, TestMoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::NewProp_TestMoveAngleType_Underlying,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4MovementTestSettings",
		sizeof(FT4MovementTestSettings),
		alignof(FT4MovementTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovementTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovementTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovementTestSettings"), sizeof(FT4MovementTestSettings), Get_Z_Construct_UScriptStruct_FT4MovementTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovementTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovementTestSettings_Hash() { return 2287526079U; }
class UScriptStruct* FT4BranchActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4BranchActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4BranchActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4BranchActionData"), sizeof(FT4BranchActionData), Get_Z_Construct_UScriptStruct_FT4BranchActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4BranchActionData>()
{
	return FT4BranchActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4BranchActionData(FT4BranchActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4BranchActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4BranchActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4BranchActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4BranchActionData")),new UScriptStruct::TCppStructOps<FT4BranchActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4BranchActionData;
	struct Z_Construct_UScriptStruct_FT4BranchActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConditionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Contition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Contition_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4BranchActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #54\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#54" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4BranchActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4BranchActionData, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ActionPackAsset = { "ActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4BranchActionData, ActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ConditionName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4BranchActionData, ConditionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ConditionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ConditionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeBranchActionDetails\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeBranchActionDetails" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition = { "Contition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4BranchActionData, Contition), Z_Construct_UEnum_T4Asset_ET4BranchCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4BranchActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_ConditionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4BranchActionData_Statics::NewProp_Contition_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4BranchActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionDataBase,
		&NewStructOps,
		"T4BranchActionData",
		sizeof(FT4BranchActionData),
		alignof(FT4BranchActionData),
		Z_Construct_UScriptStruct_FT4BranchActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4BranchActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4BranchActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4BranchActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4BranchActionData"), sizeof(FT4BranchActionData), Get_Z_Construct_UScriptStruct_FT4BranchActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4BranchActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4BranchActionData_Hash() { return 1651051365U; }
class UScriptStruct* FT4ActionDataBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionDataBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionDataBase, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionDataBase"), sizeof(FT4ActionDataBase), Get_Z_Construct_UScriptStruct_FT4ActionDataBase_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionDataBase>()
{
	return FT4ActionDataBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionDataBase(FT4ActionDataBase::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionDataBase"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionDataBase
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionDataBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionDataBase")),new UScriptStruct::TCppStructOps<FT4ActionDataBase>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionDataBase;
	struct Z_Construct_UScriptStruct_FT4ActionDataBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColorTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColorTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeaderKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionDataType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionDataType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionDataBase>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DebugColorTint_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DebugColorTint = { "DebugColorTint", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDataBase, DebugColorTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DebugColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DebugColorTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDataBase, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DisplayName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDataBase, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_HeaderKey_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #39 : FT4ActionDetails::CustomizeCommonActionDetails\n// #24 : Composite \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8!\n// #65 : Property \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c\xec\x97\x90\xeb\x8a\x94 FT4ActionCompositeData::CloneAndAddAction \xec\x97\x90\xeb\x8f\x84 \xeb\xb0\x98\xec\x98\x81\xed\x95\xa0 \xea\xb2\x83! (FT4ActionCompositeData::CopyAction)\n" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
		{ "ToolTip", "#39 : FT4ActionDetails::CustomizeCommonActionDetails\n#24 : Composite \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa8!\n#65 : Property \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c\xec\x97\x90\xeb\x8a\x94 FT4ActionCompositeData::CloneAndAddAction \xec\x97\x90\xeb\x8f\x84 \xeb\xb0\x98\xec\x98\x81\xed\x95\xa0 \xea\xb2\x83! (FT4ActionCompositeData::CopyAction)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_HeaderKey = { "HeaderKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDataBase, HeaderKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_HeaderKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_HeaderKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackDatas.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType = { "ActionDataType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDataBase, ActionDataType), Z_Construct_UEnum_T4Asset_ET4ActionDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DebugColorTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_HeaderKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::NewProp_ActionDataType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4ActionBase,
		&NewStructOps,
		"T4ActionDataBase",
		sizeof(FT4ActionDataBase),
		alignof(FT4ActionDataBase),
		Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionDataBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionDataBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionDataBase"), sizeof(FT4ActionDataBase), Get_Z_Construct_UScriptStruct_FT4ActionDataBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionDataBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionDataBase_Hash() { return 336828901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
