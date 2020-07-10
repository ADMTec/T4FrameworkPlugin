// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Commandlet/Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ParagonHeroMetadata() {}
// Cross Module References
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameDataInfo();
	UPackage* Z_Construct_UPackage__Script_T4Commandlet();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameAttackType();
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkillPropertyInfo();
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementActionInfo();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MovementType();
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileActionInfo();
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleActionInfo();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AttachParent();
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationParamInfo();
	T4COMMANDLET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationAssetInfo();
	T4COMMANDLET_API UClass* Z_Construct_UClass_UT4HeroObject_NoRegister();
	T4COMMANDLET_API UClass* Z_Construct_UClass_UT4HeroObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FT4GameDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4GameDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameDataInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4GameDataInfo"), sizeof(FT4GameDataInfo), Get_Z_Construct_UScriptStruct_FT4GameDataInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4GameDataInfo>()
{
	return FT4GameDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameDataInfo(FT4GameDataInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4GameDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4GameDataInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4GameDataInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameDataInfo")),new UScriptStruct::TCppStructOps<FT4GameDataInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4GameDataInfo;
	struct Z_Construct_UScriptStruct_FT4GameDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleWaitTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleWaitTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensoryRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensoryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRotationRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRotationRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlaceRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaceRotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CombatMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_IdleWaitTimeSec = { "IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, IdleWaitTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpRate_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpRate = { "JumpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, JumpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RoamingRate_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RoamingRate = { "RoamingRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, RoamingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MaxAttackRange_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MaxAttackRange = { "MaxAttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, MaxAttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MaxAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MaxAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MinAttackRange_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MinAttackRange = { "MinAttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, MinAttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MinAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MinAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SensoryRange_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SensoryRange = { "SensoryRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, SensoryRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, WeaponName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MoveRotationRateScale_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MoveRotationRateScale = { "MoveRotationRateScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, MoveRotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MoveRotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MoveRotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_InPlaceRotationRate_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_InPlaceRotationRate = { "InPlaceRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, InPlaceRotationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_InPlaceRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_InPlaceRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpHeightSpeed_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpHeightSpeed = { "JumpHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, JumpHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpMaxHeight_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpMaxHeight = { "JumpMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, JumpMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SprintMoveSpeed_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SprintMoveSpeed = { "SprintMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, SprintMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SprintMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SprintMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_CombatMoveSpeed_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_CombatMoveSpeed = { "CombatMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, CombatMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_CombatMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_CombatMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_DefaultMoveSpeed_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "Comment", "// Capsule and AgentRadius;\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "Capsule and AgentRadius;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_DefaultMoveSpeed = { "DefaultMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, DefaultMoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_DefaultMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_DefaultMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundRadius_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "Comment", "// Capsule\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "Capsule" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundRadius = { "BoundRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, BoundRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundHeight_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundHeight = { "BoundHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, BoundHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, AttackType), Z_Construct_UEnum_T4GameData_ET4GameAttackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RaceName_MetaData[] = {
		{ "Category", "T4GameDataInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RaceName = { "RaceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameDataInfo, RaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MaxAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MinAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_MoveRotationRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_InPlaceRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_JumpMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_SprintMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_CombatMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_DefaultMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_BoundHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_AttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::NewProp_RaceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4GameDataInfo",
		sizeof(FT4GameDataInfo),
		alignof(FT4GameDataInfo),
		Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameDataInfo"), sizeof(FT4GameDataInfo), Get_Z_Construct_UScriptStruct_FT4GameDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameDataInfo_Hash() { return 3898599836U; }
class UScriptStruct* FT4SkillPropertyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkillPropertyInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4SkillPropertyInfo"), sizeof(FT4SkillPropertyInfo), Get_Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4SkillPropertyInfo>()
{
	return FT4SkillPropertyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkillPropertyInfo(FT4SkillPropertyInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4SkillPropertyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4SkillPropertyInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4SkillPropertyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkillPropertyInfo")),new UScriptStruct::TCppStructOps<FT4SkillPropertyInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4SkillPropertyInfo;
	struct Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkillPropertyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_HitDelayTimeSec_MetaData[] = {
		{ "Category", "T4SkillPropertyInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_HitDelayTimeSec = { "HitDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillPropertyInfo, HitDelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_HitDelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_HitDelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_StatName_MetaData[] = {
		{ "Category", "T4SkillPropertyInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillPropertyInfo, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_StatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4SkillPropertyInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkillPropertyInfo, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_HitDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4SkillPropertyInfo",
		sizeof(FT4SkillPropertyInfo),
		alignof(FT4SkillPropertyInfo),
		Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkillPropertyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkillPropertyInfo"), sizeof(FT4SkillPropertyInfo), Get_Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkillPropertyInfo_Hash() { return 221861240U; }
class UScriptStruct* FT4MovementActionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4MovementActionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovementActionInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4MovementActionInfo"), sizeof(FT4MovementActionInfo), Get_Z_Construct_UScriptStruct_FT4MovementActionInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4MovementActionInfo>()
{
	return FT4MovementActionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovementActionInfo(FT4MovementActionInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4MovementActionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4MovementActionInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4MovementActionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovementActionInfo")),new UScriptStruct::TCppStructOps<FT4MovementActionInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4MovementActionInfo;
	struct Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAngleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAngleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAngleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovementActionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeightSpeed_MetaData[] = {
		{ "Category", "T4MovementActionInfo" },
		{ "Comment", "// #135 : Area or Knockback, Airborne\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#135 : Area or Knockback, Airborne" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeightSpeed = { "MaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionInfo, MaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "T4MovementActionInfo" },
		{ "Comment", "// #140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionInfo, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "T4MovementActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionInfo, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType_MetaData[] = {
		{ "Category", "T4MovementActionInfo" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType = { "MoveAngleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionInfo, MoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "T4MovementActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionInfo, MovementType), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4MovementActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementActionInfo, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MoveAngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_MovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4MovementActionInfo",
		sizeof(FT4MovementActionInfo),
		alignof(FT4MovementActionInfo),
		Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovementActionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovementActionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovementActionInfo"), sizeof(FT4MovementActionInfo), Get_Z_Construct_UScriptStruct_FT4MovementActionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovementActionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovementActionInfo_Hash() { return 3260786140U; }
class UScriptStruct* FT4ProjectileActionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ProjectileActionInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4ProjectileActionInfo"), sizeof(FT4ProjectileActionInfo), Get_Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4ProjectileActionInfo>()
{
	return FT4ProjectileActionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ProjectileActionInfo(FT4ProjectileActionInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4ProjectileActionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4ProjectileActionInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4ProjectileActionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ProjectileActionInfo")),new UScriptStruct::TCppStructOps<FT4ProjectileActionInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4ProjectileActionInfo;
	struct Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProjectileMotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectileMotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndParticleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndParticleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadParticleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeadParticleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ProjectileActionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "Comment", "// XY\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "XY" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, ProjectileSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion = { "ProjectileMotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, ProjectileMotion), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_EndParticleName_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_EndParticleName = { "EndParticleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, EndParticleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_EndParticleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_EndParticleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_HeadParticleName_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_HeadParticleName = { "HeadParticleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, HeadParticleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_HeadParticleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_HeadParticleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4ProjectileActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ProjectileActionInfo, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ProjectileMotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_EndParticleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_HeadParticleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4ProjectileActionInfo",
		sizeof(FT4ProjectileActionInfo),
		alignof(FT4ProjectileActionInfo),
		Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileActionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ProjectileActionInfo"), sizeof(FT4ProjectileActionInfo), Get_Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ProjectileActionInfo_Hash() { return 4230755445U; }
class UScriptStruct* FT4ParticleActionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4ParticleActionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ParticleActionInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4ParticleActionInfo"), sizeof(FT4ParticleActionInfo), Get_Z_Construct_UScriptStruct_FT4ParticleActionInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4ParticleActionInfo>()
{
	return FT4ParticleActionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ParticleActionInfo(FT4ParticleActionInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4ParticleActionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4ParticleActionInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4ParticleActionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ParticleActionInfo")),new UScriptStruct::TCppStructOps<FT4ParticleActionInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4ParticleActionInfo;
	struct Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachParent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParticleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ParticleActionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_StartTimeSec_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_StartTimeSec = { "StartTimeSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, StartTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_StartTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_StartTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, AttachParent), Z_Construct_UEnum_T4Asset_ET4AttachParent, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ParticleName_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ParticleName = { "ParticleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, ParticleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ParticleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ParticleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4ParticleActionInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ParticleActionInfo, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_StartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_AttachParent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_ParticleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4ParticleActionInfo",
		sizeof(FT4ParticleActionInfo),
		alignof(FT4ParticleActionInfo),
		Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleActionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ParticleActionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ParticleActionInfo"), sizeof(FT4ParticleActionInfo), Get_Z_Construct_UScriptStruct_FT4ParticleActionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ParticleActionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ParticleActionInfo_Hash() { return 1694302405U; }
class UScriptStruct* FT4AnimationParamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimationParamInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimationParamInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4AnimationParamInfo"), sizeof(FT4AnimationParamInfo), Get_Z_Construct_UScriptStruct_FT4AnimationParamInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4AnimationParamInfo>()
{
	return FT4AnimationParamInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimationParamInfo(FT4AnimationParamInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4AnimationParamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4AnimationParamInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4AnimationParamInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimationParamInfo")),new UScriptStruct::TCppStructOps<FT4AnimationParamInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4AnimationParamInfo;
	struct Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimationParamInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "T4AnimationParamInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationParamInfo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4AnimationParamInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationParamInfo, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "T4AnimationParamInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationParamInfo, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_PostureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_SectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::NewProp_PostureName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4AnimationParamInfo",
		sizeof(FT4AnimationParamInfo),
		alignof(FT4AnimationParamInfo),
		Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationParamInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimationParamInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimationParamInfo"), sizeof(FT4AnimationParamInfo), Get_Z_Construct_UScriptStruct_FT4AnimationParamInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimationParamInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimationParamInfo_Hash() { return 2669509637U; }
class UScriptStruct* FT4AnimationAssetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4COMMANDLET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimationAssetInfo, Z_Construct_UPackage__Script_T4Commandlet(), TEXT("T4AnimationAssetInfo"), sizeof(FT4AnimationAssetInfo), Get_Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Hash());
	}
	return Singleton;
}
template<> T4COMMANDLET_API UScriptStruct* StaticStruct<FT4AnimationAssetInfo>()
{
	return FT4AnimationAssetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimationAssetInfo(FT4AnimationAssetInfo::StaticStruct, TEXT("/Script/T4Commandlet"), TEXT("T4AnimationAssetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Commandlet_StaticRegisterNativesFT4AnimationAssetInfo
{
	FScriptStruct_T4Commandlet_StaticRegisterNativesFT4AnimationAssetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimationAssetInfo")),new UScriptStruct::TCppStructOps<FT4AnimationAssetInfo>);
	}
} ScriptStruct_T4Commandlet_StaticRegisterNativesFT4AnimationAssetInfo;
	struct Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayEndLoop_MetaData[];
#endif
		static void NewProp_bPlayEndLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayEndLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * #135, #142\n */" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#135, #142" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimationAssetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop_MetaData[] = {
		{ "Category", "T4AnimationAssetInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop_SetBit(void* Obj)
	{
		((FT4AnimationAssetInfo*)Obj)->bPlayEndLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop = { "bPlayEndLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimationAssetInfo), &Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "T4AnimationAssetInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationAssetInfo, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "T4AnimationAssetInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationAssetInfo, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "T4AnimationAssetInfo" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimationAssetInfo, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_PostureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_bPlayEndLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_SectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::NewProp_PostureName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
		nullptr,
		&NewStructOps,
		"T4AnimationAssetInfo",
		sizeof(FT4AnimationAssetInfo),
		alignof(FT4AnimationAssetInfo),
		Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationAssetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Commandlet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimationAssetInfo"), sizeof(FT4AnimationAssetInfo), Get_Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimationAssetInfo_Hash() { return 4059215501U; }
	DEFINE_FUNCTION(UT4HeroObject::execAddMovementAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_ENUM(ET4MovementType,Z_Param_InMovementType);
		P_GET_ENUM(ET4MoveAngleType,Z_Param_InMoveAngleType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxHeightSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMovementAction(Z_Param_InSectionName,ET4MovementType(Z_Param_InMovementType),ET4MoveAngleType(Z_Param_InMoveAngleType),Z_Param_InMaxDistance,Z_Param_InMaxHeight,Z_Param_InMaxHeightSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddProjectileAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InHeadParticleName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InEndParticleName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionPoint);
		P_GET_ENUM(ET4MovementType,Z_Param_InProjectileMotion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InProjectileSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddProjectileAction(Z_Param_InSectionName,Z_Param_InHeadParticleName,Z_Param_InEndParticleName,Z_Param_InActionPoint,ET4MovementType(Z_Param_InProjectileMotion),Z_Param_InProjectileSpeed,Z_Param_InMaxHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddParticleAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InParticleName);
		P_GET_ENUM(ET4AttachParent,Z_Param_InAttachParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTimeSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDurationSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddParticleAction(Z_Param_InSectionName,Z_Param_InParticleName,ET4AttachParent(Z_Param_InAttachParent),Z_Param_InActionPoint,Z_Param_InStartTimeSec,Z_Param_InDurationSec,Z_Param_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddAnimationAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAnimationAction(Z_Param_InSectionName,Z_Param_InAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddSkillProperty)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InStatDBKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHitDelayTimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSkillProperty(Z_Param_InSectionName,Z_Param_InStatDBKey,Z_Param_InHitDelayTimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddAnimationParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAnimationParameter(Z_Param_InSectionName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddSystemLayerAnimSequence)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
		P_GET_UBOOL(Z_Param_bInPlayEndLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSystemLayerAnimSequence(Z_Param_InSectionName,Z_Param_InAssetName,Z_Param_bInPlayEndLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddStateLayerBlendSpace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStateLayerBlendSpace(Z_Param_InSectionName,Z_Param_InAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execAddStateLayerAnimSequence)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStateLayerAnimSequence(Z_Param_InSectionName,Z_Param_InAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execSetPostureName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPostureName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostureName(Z_Param_InPostureName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4HeroObject::execRegister)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InHeroName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Register(Z_Param_InHeroName);
		P_NATIVE_END;
	}
	void UT4HeroObject::StaticRegisterNativesUT4HeroObject()
	{
		UClass* Class = UT4HeroObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnimationAction", &UT4HeroObject::execAddAnimationAction },
			{ "AddAnimationParameter", &UT4HeroObject::execAddAnimationParameter },
			{ "AddMovementAction", &UT4HeroObject::execAddMovementAction },
			{ "AddParticleAction", &UT4HeroObject::execAddParticleAction },
			{ "AddProjectileAction", &UT4HeroObject::execAddProjectileAction },
			{ "AddSkillProperty", &UT4HeroObject::execAddSkillProperty },
			{ "AddStateLayerAnimSequence", &UT4HeroObject::execAddStateLayerAnimSequence },
			{ "AddStateLayerBlendSpace", &UT4HeroObject::execAddStateLayerBlendSpace },
			{ "AddSystemLayerAnimSequence", &UT4HeroObject::execAddSystemLayerAnimSequence },
			{ "Register", &UT4HeroObject::execRegister },
			{ "SetPostureName", &UT4HeroObject::execSetPostureName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics
	{
		struct T4HeroObject_eventAddAnimationAction_Parms
		{
			FName InSectionName;
			FString InAssetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddAnimationAction_Parms, InAssetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddAnimationAction_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::NewProp_InAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddAnimationAction", nullptr, nullptr, sizeof(T4HeroObject_eventAddAnimationAction_Parms), Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddAnimationAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddAnimationAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics
	{
		struct T4HeroObject_eventAddAnimationParameter_Parms
		{
			FName InSectionName;
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddAnimationParameter_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddAnimationParameter_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// #142 : Die \xeb\xa5\x98\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9.\xeb\xa7\x88\xec\xa7\x80\xeb\xa7\x89 \xec\x8b\x9c\xed\x80\x80\xec\x8a\xa4 \xeb\xa3\xa8\xed\x95\x91 \xec\xb2\x98\xeb\xa6\xac\xea\xb0\x80 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#142 : Die \xeb\xa5\x98\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9.\xeb\xa7\x88\xec\xa7\x80\xeb\xa7\x89 \xec\x8b\x9c\xed\x80\x80\xec\x8a\xa4 \xeb\xa3\xa8\xed\x95\x91 \xec\xb2\x98\xeb\xa6\xac\xea\xb0\x80 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddAnimationParameter", nullptr, nullptr, sizeof(T4HeroObject_eventAddAnimationParameter_Parms), Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics
	{
		struct T4HeroObject_eventAddMovementAction_Parms
		{
			FName InSectionName;
			ET4MovementType InMovementType;
			ET4MoveAngleType InMoveAngleType;
			float InMaxDistance;
			float InMaxHeight;
			float InMaxHeightSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxHeightSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxDistance;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMoveAngleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMoveAngleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMovementType_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMaxHeightSpeed = { "InMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddMovementAction_Parms, InMaxHeightSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMaxHeight = { "InMaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddMovementAction_Parms, InMaxHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMaxDistance = { "InMaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddMovementAction_Parms, InMaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMoveAngleType = { "InMoveAngleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddMovementAction_Parms, InMoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMovementType = { "InMovementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddMovementAction_Parms, InMovementType), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddMovementAction_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMoveAngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InMovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// #135\n// #140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY\n// #135 : Area or Knockback, Airborne\n// #140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#135\n#140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY\n#135 : Area or Knockback, Airborne\n#140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddMovementAction", nullptr, nullptr, sizeof(T4HeroObject_eventAddMovementAction_Parms), Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddMovementAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddMovementAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics
	{
		struct T4HeroObject_eventAddParticleAction_Parms
		{
			FName InSectionName;
			FString InParticleName;
			ET4AttachParent InAttachParent;
			FName InActionPoint;
			float InStartTimeSec;
			float InDurationSec;
			float InScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDurationSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartTimeSec;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionPoint;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAttachParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAttachParent_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InParticleName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InDurationSec = { "InDurationSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InDurationSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InStartTimeSec = { "InStartTimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InStartTimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InActionPoint = { "InActionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InActionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InAttachParent = { "InAttachParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InAttachParent), Z_Construct_UEnum_T4Asset_ET4AttachParent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InAttachParent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InParticleName = { "InParticleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InParticleName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddParticleAction_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InStartTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InAttachParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InAttachParent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InParticleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddParticleAction", nullptr, nullptr, sizeof(T4HeroObject_eventAddParticleAction_Parms), Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddParticleAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddParticleAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics
	{
		struct T4HeroObject_eventAddProjectileAction_Parms
		{
			FName InSectionName;
			FString InHeadParticleName;
			FString InEndParticleName;
			FName InActionPoint;
			ET4MovementType InProjectileMotion;
			float InProjectileSpeed;
			float InMaxHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InProjectileSpeed;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InProjectileMotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InProjectileMotion_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionPoint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InEndParticleName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InHeadParticleName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InMaxHeight = { "InMaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InMaxHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InProjectileSpeed = { "InProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InProjectileSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InProjectileMotion = { "InProjectileMotion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InProjectileMotion), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InProjectileMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InActionPoint = { "InActionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InActionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InEndParticleName = { "InEndParticleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InEndParticleName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InHeadParticleName = { "InHeadParticleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InHeadParticleName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddProjectileAction_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InProjectileMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InProjectileMotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InEndParticleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InHeadParticleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// #127\n// XY\n// #127 : \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0(Parabola) \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#127\nXY\n#127 : \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0(Parabola) \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddProjectileAction", nullptr, nullptr, sizeof(T4HeroObject_eventAddProjectileAction_Parms), Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddProjectileAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddProjectileAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics
	{
		struct T4HeroObject_eventAddSkillProperty_Parms
		{
			FName InSectionName;
			FName InStatDBKey;
			float InHitDelayTimeSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHitDelayTimeSec;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InStatDBKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::NewProp_InHitDelayTimeSec = { "InHitDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddSkillProperty_Parms, InHitDelayTimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::NewProp_InStatDBKey = { "InStatDBKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddSkillProperty_Parms, InStatDBKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddSkillProperty_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::NewProp_InHitDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::NewProp_InStatDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddSkillProperty", nullptr, nullptr, sizeof(T4HeroObject_eventAddSkillProperty_Parms), Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddSkillProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddSkillProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics
	{
		struct T4HeroObject_eventAddStateLayerAnimSequence_Parms
		{
			FName InSectionName;
			FString InAssetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddStateLayerAnimSequence_Parms, InAssetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddStateLayerAnimSequence_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::NewProp_InAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddStateLayerAnimSequence", nullptr, nullptr, sizeof(T4HeroObject_eventAddStateLayerAnimSequence_Parms), Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics
	{
		struct T4HeroObject_eventAddStateLayerBlendSpace_Parms
		{
			FName InSectionName;
			FString InAssetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddStateLayerBlendSpace_Parms, InAssetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddStateLayerBlendSpace_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::NewProp_InAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddStateLayerBlendSpace", nullptr, nullptr, sizeof(T4HeroObject_eventAddStateLayerBlendSpace_Parms), Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics
	{
		struct T4HeroObject_eventAddSystemLayerAnimSequence_Parms
		{
			FName InSectionName;
			FString InAssetName;
			bool bInPlayEndLoop;
		};
		static void NewProp_bInPlayEndLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInPlayEndLoop;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_bInPlayEndLoop_SetBit(void* Obj)
	{
		((T4HeroObject_eventAddSystemLayerAnimSequence_Parms*)Obj)->bInPlayEndLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_bInPlayEndLoop = { "bInPlayEndLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4HeroObject_eventAddSystemLayerAnimSequence_Parms), &Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_bInPlayEndLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddSystemLayerAnimSequence_Parms, InAssetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventAddSystemLayerAnimSequence_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_bInPlayEndLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_InAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::NewProp_InSectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "AddSystemLayerAnimSequence", nullptr, nullptr, sizeof(T4HeroObject_eventAddSystemLayerAnimSequence_Parms), Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_Register_Statics
	{
		struct T4HeroObject_eventRegister_Parms
		{
			FName InHeroName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InHeroName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_Register_Statics::NewProp_InHeroName = { "InHeroName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventRegister_Parms, InHeroName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_Register_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_Register_Statics::NewProp_InHeroName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_Register_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "Register", nullptr, nullptr, sizeof(T4HeroObject_eventRegister_Parms), Z_Construct_UFunction_UT4HeroObject_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_Register_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_Register_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_Register_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_Register()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_Register_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics
	{
		struct T4HeroObject_eventSetPostureName_Parms
		{
			FName InPostureName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InPostureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::NewProp_InPostureName = { "InPostureName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4HeroObject_eventSetPostureName_Parms, InPostureName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::NewProp_InPostureName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4HeroObject, nullptr, "SetPostureName", nullptr, nullptr, sizeof(T4HeroObject_eventSetPostureName_Parms), Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4HeroObject_SetPostureName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4HeroObject_SetPostureName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UT4HeroObject_NoRegister()
	{
		return UT4HeroObject::StaticClass();
	}
	struct Z_Construct_UClass_UT4HeroObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementActionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MovementActionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementActionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileActionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProjectileActionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileActionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleActionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleActionInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleActionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPropertyInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillPropertyInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillPropertyInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLayerAnimSequenceInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillLayerAnimSequenceInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillLayerAnimSequenceInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemLayerAnimSequenceInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SystemLayerAnimSequenceInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemLayerAnimSequenceInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateLayerParameterInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateLayerParameterInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateLayerParameterInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateLayerAnimSequenceInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateLayerAnimSequenceInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateLayerAnimSequenceInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateLayerBlendSpaceInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateLayerBlendSpaceInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateLayerBlendSpaceInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDataInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameDataInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSprintPosture_MetaData[];
#endif
		static void NewProp_bHasSprintPosture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSprintPosture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNonCombatPosture_MetaData[];
#endif
		static void NewProp_bHasNonCombatPosture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNonCombatPosture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4HeroObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Commandlet,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4HeroObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4HeroObject_AddAnimationAction, "AddAnimationAction" }, // 3768825122
		{ &Z_Construct_UFunction_UT4HeroObject_AddAnimationParameter, "AddAnimationParameter" }, // 1667894223
		{ &Z_Construct_UFunction_UT4HeroObject_AddMovementAction, "AddMovementAction" }, // 3481278086
		{ &Z_Construct_UFunction_UT4HeroObject_AddParticleAction, "AddParticleAction" }, // 2050468503
		{ &Z_Construct_UFunction_UT4HeroObject_AddProjectileAction, "AddProjectileAction" }, // 923744024
		{ &Z_Construct_UFunction_UT4HeroObject_AddSkillProperty, "AddSkillProperty" }, // 1171920691
		{ &Z_Construct_UFunction_UT4HeroObject_AddStateLayerAnimSequence, "AddStateLayerAnimSequence" }, // 1534565648
		{ &Z_Construct_UFunction_UT4HeroObject_AddStateLayerBlendSpace, "AddStateLayerBlendSpace" }, // 3019066917
		{ &Z_Construct_UFunction_UT4HeroObject_AddSystemLayerAnimSequence, "AddSystemLayerAnimSequence" }, // 3648542620
		{ &Z_Construct_UFunction_UT4HeroObject_Register, "Register" }, // 3099595428
		{ &Z_Construct_UFunction_UT4HeroObject_SetPostureName, "SetPostureName" }, // 1369911179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos = { "MovementActionInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, MovementActionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos_Inner = { "MovementActionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MovementActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos = { "ProjectileActionInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, ProjectileActionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos_Inner = { "ProjectileActionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ProjectileActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos = { "ParticleActionInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, ParticleActionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos_Inner = { "ParticleActionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ParticleActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos = { "SkillPropertyInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, SkillPropertyInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos_Inner = { "SkillPropertyInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4SkillPropertyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos = { "SkillLayerAnimSequenceInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, SkillLayerAnimSequenceInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos_Inner = { "SkillLayerAnimSequenceInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationAssetInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos = { "SystemLayerAnimSequenceInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, SystemLayerAnimSequenceInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos_Inner = { "SystemLayerAnimSequenceInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationAssetInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos = { "StateLayerParameterInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, StateLayerParameterInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos_Inner = { "StateLayerParameterInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationParamInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos = { "StateLayerAnimSequenceInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, StateLayerAnimSequenceInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos_Inner = { "StateLayerAnimSequenceInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationAssetInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos = { "StateLayerBlendSpaceInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, StateLayerBlendSpaceInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos_Inner = { "StateLayerBlendSpaceInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationAssetInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_GameDataInfo_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_GameDataInfo = { "GameDataInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HeroObject, GameDataInfo), Z_Construct_UScriptStruct_FT4GameDataInfo, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_GameDataInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_GameDataInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture_SetBit(void* Obj)
	{
		((UT4HeroObject*)Obj)->bHasSprintPosture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture = { "bHasSprintPosture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4HeroObject), &Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture_MetaData[] = {
		{ "Category", "T4HeroObject" },
		{ "ModuleRelativePath", "Private/Commandlets/MigrationProcessor/Generator/T4ParagonHeroMetadata.h" },
	};
#endif
	void Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture_SetBit(void* Obj)
	{
		((UT4HeroObject*)Obj)->bHasNonCombatPosture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture = { "bHasNonCombatPosture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4HeroObject), &Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4HeroObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_MovementActionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ProjectileActionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_ParticleActionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillPropertyInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SkillLayerAnimSequenceInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_SystemLayerAnimSequenceInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerParameterInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerAnimSequenceInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_StateLayerBlendSpaceInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_GameDataInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasSprintPosture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HeroObject_Statics::NewProp_bHasNonCombatPosture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4HeroObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4HeroObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4HeroObject_Statics::ClassParams = {
		&UT4HeroObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4HeroObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4HeroObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HeroObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4HeroObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4HeroObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4HeroObject, 1039632722);
	template<> T4COMMANDLET_API UClass* StaticClass<UT4HeroObject>()
	{
		return UT4HeroObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4HeroObject(Z_Construct_UClass_UT4HeroObject, &UT4HeroObject::StaticClass, TEXT("/Script/T4Commandlet"), TEXT("UT4HeroObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4HeroObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
