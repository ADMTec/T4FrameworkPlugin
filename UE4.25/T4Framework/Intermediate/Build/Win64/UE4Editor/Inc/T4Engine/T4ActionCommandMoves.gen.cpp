// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionCommandMoves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionCommandMoves() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4LaunchActionCommand();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPackAsset_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4LoadingPolicy();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActorID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4MovementPathType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MovementType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveStopActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TurnActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RotationActionCommand();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4TargetType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TeleportActionCommand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4JumpActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand();
// End Cross Module References
class UScriptStruct* FT4LaunchActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4LaunchActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4LaunchActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4LaunchActionCommand"), sizeof(FT4LaunchActionCommand), Get_Z_Construct_UScriptStruct_FT4LaunchActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4LaunchActionCommand>()
{
	return FT4LaunchActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4LaunchActionCommand(FT4LaunchActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4LaunchActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4LaunchActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4LaunchActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4LaunchActionCommand")),new UScriptStruct::TCppStructOps<FT4LaunchActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4LaunchActionCommand;
	struct Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTargetBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitTargetBoneName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerActorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirborneFlightTimeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirborneFlightTimeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollideTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollideTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollideLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceleratedMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AcceleratedMotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AcceleratedMotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetActorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitializeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementPathType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementPathType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementPathType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4LaunchActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OscillateRange_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127 : \xed\x9d\x94\xeb\x93\xa4\xeb\xa6\xbc \xec\x97\xac\xeb\xb6\x80\n" },
		{ "EditCondition", "bUseOscillate" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#127 : \xed\x9d\x94\xeb\x93\xa4\xeb\xa6\xbc \xec\x97\xac\xeb\xb6\x80" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OscillateRange = { "OscillateRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, OscillateRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OscillateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OscillateRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate_SetBit(void* Obj)
	{
		((FT4LaunchActionCommand*)Obj)->bUseOscillate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate = { "bUseOscillate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4LaunchActionCommand), &Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BounceOutActionPackAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127 : \xeb\xaa\x85\xed\x99\x95\xed\x95\x9c \xed\x83\x80\xea\xb2\x9f\xec\x97\x86\xec\x9d\xb4 \xeb\xac\xb4\xed\x95\x9c\xeb\x8c\x80\xeb\xa1\x9c \xeb\xb0\x9c\xec\x82\xac\xeb\x90\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xed\x9a\xa8\xea\xb3\xbc \xec\xb2\x98\xeb\xa6\xac \xec\x82\xac\xec\x9a\xa9 \xec\x97\xac\xeb\xb6\x80\n" },
		{ "EditCondition", "bEnableBounceOut" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#127 : \xeb\xaa\x85\xed\x99\x95\xed\x95\x9c \xed\x83\x80\xea\xb2\x9f\xec\x97\x86\xec\x9d\xb4 \xeb\xac\xb4\xed\x95\x9c\xeb\x8c\x80\xeb\xa1\x9c \xeb\xb0\x9c\xec\x82\xac\xeb\x90\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xed\x9a\xa8\xea\xb3\xbc \xec\xb2\x98\xeb\xa6\xac \xec\x82\xac\xec\x9a\xa9 \xec\x97\xac\xeb\xb6\x80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BounceOutActionPackAsset = { "BounceOutActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, BounceOutActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BounceOutActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BounceOutActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : Actor \xec\xb6\xa9\xeb\x8f\x8c\xec\x9d\xb4\xeb\x9d\xbc\xeb\xa9\xb4 \xeb\xb3\xb8 \xec\x9c\x84\xec\xb9\x98\xeb\xa5\xbc \xec\xb0\xb8\xec\xa1\xb0\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#135 : Actor \xec\xb6\xa9\xeb\x8f\x8c\xec\x9d\xb4\xeb\x9d\xbc\xeb\xa9\xb4 \xeb\xb3\xb8 \xec\x9c\x84\xec\xb9\x98\xeb\xa5\xbc \xec\xb0\xb8\xec\xa1\xb0" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut_SetBit(void* Obj)
	{
		((FT4LaunchActionCommand*)Obj)->bEnableBounceOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut = { "bEnableBounceOut", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4LaunchActionCommand), &Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitTargetBoneName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81 \xec\x8b\x9c\xea\xb0\x84\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81 \xec\x8b\x9c\xea\xb0\x84" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitTargetBoneName = { "HitTargetBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, HitTargetBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitTargetBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitTargetBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitAttachedTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81\xec\x9d\x84 \xeb\x82\xa8\xea\xb8\xb8\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80 (Arrow : true, Fireball : false)\n" },
		{ "EditCondition", "bEnableHitAttached" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#112 : \xec\xb6\xa9\xeb\x8f\x8c \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xec\x9e\x94\xec\x83\x81\xec\x9d\x84 \xeb\x82\xa8\xea\xb8\xb8\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80 (Arrow : true, Fireball : false)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitAttachedTimeSec = { "HitAttachedTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, HitAttachedTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitAttachedTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitAttachedTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#127" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached_SetBit(void* Obj)
	{
		((FT4LaunchActionCommand*)Obj)->bEnableHitAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached = { "bEnableHitAttached", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4LaunchActionCommand), &Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitialRollAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitialRollAngle = { "InitialRollAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, InitialRollAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitialRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitialRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle_SetBit(void* Obj)
	{
		((FT4LaunchActionCommand*)Obj)->bRandomRollAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle = { "bRandomRollAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4LaunchActionCommand), &Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_EndActionPackAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_EndActionPackAsset = { "EndActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, EndActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_EndActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_EndActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HeadActionPackAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#112" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HeadActionPackAsset = { "HeadActionPackAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, HeadActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HeadActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HeadActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OwnerActorID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// Projectile Properties\n//\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "Projectile Properties" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OwnerActorID = { "OwnerActorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, OwnerActorID), Z_Construct_UScriptStruct_FT4ActorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OwnerActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OwnerActorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AirborneFlightTimeRatio_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AirborneFlightTimeRatio = { "AirborneFlightTimeRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, AirborneFlightTimeRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AirborneFlightTimeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AirborneFlightTimeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideTimeSec = { "CollideTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, CollideTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// Movement Properties\n//\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "Movement Properties" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideLocation = { "CollideLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, CollideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BoundLength_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BoundLength = { "BoundLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, BoundLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BoundLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BoundLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion = { "AcceleratedMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, AcceleratedMotion), Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_ShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_ShootDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_TargetActorID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xed\x98\x84\xec\x9e\xac\xeb\x8a\x94 Airborne \xec\x97\xb0\xec\xb6\x9c\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : \xed\x98\x84\xec\x9e\xac\xeb\x8a\x94 Airborne \xec\x97\xb0\xec\xb6\x9c\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_TargetActorID = { "TargetActorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, TargetActorID), Z_Construct_UScriptStruct_FT4ActorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_TargetActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_TargetActorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : DurationSec \xeb\xa5\xbc \xea\xb0\x90\xec\x95\x88\xed\x95\x9c Gravity\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : DurationSec \xeb\xa5\xbc \xea\xb0\x90\xec\x95\x88\xed\x95\x9c Gravity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GravityZ_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #132, #140 : \xec\x88\x98\xec\xa7\x81 \xec\x86\x8d\xeb\x8f\x84\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#132, #140 : \xec\x88\x98\xec\xa7\x81 \xec\x86\x8d\xeb\x8f\x84" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GravityZ = { "GravityZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, GravityZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GravityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_VerticalSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : ProjecitleSpeed or MovementSpeed (\xec\x88\x98\xed\x8f\x89)\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#135 : ProjecitleSpeed or MovementSpeed (\xec\x88\x98\xed\x8f\x89)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_VerticalSpeed = { "VerticalSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, VerticalSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_VerticalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_VerticalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitializeSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitializeSpeed = { "InitializeSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, InitializeSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitializeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitializeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType = { "MovementPathType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, MovementPathType), Z_Construct_UEnum_T4Engine_ET4MovementPathType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// Common Properties\n//\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "Common Properties" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LaunchActionCommand, MovementType), Z_Construct_UEnum_T4Asset_ET4MovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OscillateRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bUseOscillate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BounceOutActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableBounceOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitTargetBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HitAttachedTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bEnableHitAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitialRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_bRandomRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_EndActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_HeadActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_OwnerActorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AirborneFlightTimeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_CollideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_BoundLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_AcceleratedMotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_ShootDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_TargetActorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_GravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_VerticalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_InitializeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementPathType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::NewProp_MovementType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4LaunchActionCommand",
		sizeof(FT4LaunchActionCommand),
		alignof(FT4LaunchActionCommand),
		Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4LaunchActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4LaunchActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4LaunchActionCommand"), sizeof(FT4LaunchActionCommand), Get_Z_Construct_UScriptStruct_FT4LaunchActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4LaunchActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4LaunchActionCommand_Hash() { return 2825808982U; }
class UScriptStruct* FT4MoveSpeedSyncActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveSpeedSyncActionCommand"), sizeof(FT4MoveSpeedSyncActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveSpeedSyncActionCommand>()
{
	return FT4MoveSpeedSyncActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveSpeedSyncActionCommand(FT4MoveSpeedSyncActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveSpeedSyncActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSpeedSyncActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSpeedSyncActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveSpeedSyncActionCommand")),new UScriptStruct::TCppStructOps<FT4MoveSpeedSyncActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSpeedSyncActionCommand;
	struct Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #52\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#52" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveSpeedSyncActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSpeedSyncActionCommand, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::NewProp_MoveSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4MoveSpeedSyncActionCommand",
		sizeof(FT4MoveSpeedSyncActionCommand),
		alignof(FT4MoveSpeedSyncActionCommand),
		Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveSpeedSyncActionCommand"), sizeof(FT4MoveSpeedSyncActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Hash() { return 1739982365U; }
class UScriptStruct* FT4MoveStopActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveStopActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveStopActionCommand"), sizeof(FT4MoveStopActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveStopActionCommand>()
{
	return FT4MoveStopActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveStopActionCommand(FT4MoveStopActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveStopActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveStopActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveStopActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveStopActionCommand")),new UScriptStruct::TCppStructOps<FT4MoveStopActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveStopActionCommand;
	struct Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncLocation_MetaData[];
#endif
		static void NewProp_bSyncLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #52\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#52" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveStopActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #40 : degree, LockOn \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xb0\xa9\xed\x96\xa5\xea\xb3\xbc \xeb\x8b\xac\xeb\x9d\xbc\xec\xa7\x84\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#40 : degree, LockOn \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xb0\xa9\xed\x96\xa5\xea\xb3\xbc \xeb\x8b\xac\xeb\x9d\xbc\xec\xa7\x84\xeb\x8b\xa4." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation_SetBit(void* Obj)
	{
		((FT4MoveStopActionCommand*)Obj)->bSyncLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation = { "bSyncLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4MoveStopActionCommand), &Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveStopActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_StopLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_StopLocation = { "StopLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveStopActionCommand, StopLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_StopLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_StopLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_bSyncLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_StopLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4MoveStopActionCommand",
		sizeof(FT4MoveStopActionCommand),
		alignof(FT4MoveStopActionCommand),
		Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveStopActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveStopActionCommand"), sizeof(FT4MoveStopActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Hash() { return 3470308774U; }
class UScriptStruct* FT4TurnActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4TurnActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4TurnActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4TurnActionCommand"), sizeof(FT4TurnActionCommand), Get_Z_Construct_UScriptStruct_FT4TurnActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4TurnActionCommand>()
{
	return FT4TurnActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4TurnActionCommand(FT4TurnActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4TurnActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4TurnActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4TurnActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4TurnActionCommand")),new UScriptStruct::TCppStructOps<FT4TurnActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4TurnActionCommand;
	struct Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurnRight_MetaData[];
#endif
		static void NewProp_bTurnRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurnRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4TurnActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TurnActionCommand, TurnRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight_SetBit(void* Obj)
	{
		((FT4TurnActionCommand*)Obj)->bTurnRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight = { "bTurnRight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4TurnActionCommand), &Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4TurnActionCommand",
		sizeof(FT4TurnActionCommand),
		alignof(FT4TurnActionCommand),
		Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4TurnActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4TurnActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4TurnActionCommand"), sizeof(FT4TurnActionCommand), Get_Z_Construct_UScriptStruct_FT4TurnActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4TurnActionCommand_Hash() { return 3496090310U; }
class UScriptStruct* FT4RotationActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4RotationActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4RotationActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4RotationActionCommand"), sizeof(FT4RotationActionCommand), Get_Z_Construct_UScriptStruct_FT4RotationActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4RotationActionCommand>()
{
	return FT4RotationActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4RotationActionCommand(FT4RotationActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4RotationActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4RotationActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4RotationActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4RotationActionCommand")),new UScriptStruct::TCppStructOps<FT4RotationActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4RotationActionCommand;
	struct Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4RotationActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #44 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * RotationRateScale, 0 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\xa6\x89\xec\x8b\x9c \xeb\xb3\x80\xea\xb2\xbd\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#44 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * RotationRateScale, 0 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\xa6\x89\xec\x8b\x9c \xeb\xb3\x80\xea\xb2\xbd" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RotationActionCommand, TargetYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale = { "RotationRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RotationActionCommand, RotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RotationActionCommand, TargetType), Z_Construct_UEnum_T4Engine_ET4TargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4RotationActionCommand",
		sizeof(FT4RotationActionCommand),
		alignof(FT4RotationActionCommand),
		Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4RotationActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4RotationActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4RotationActionCommand"), sizeof(FT4RotationActionCommand), Get_Z_Construct_UScriptStruct_FT4RotationActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4RotationActionCommand_Hash() { return 71840834U; }
class UScriptStruct* FT4TeleportActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4TeleportActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4TeleportActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4TeleportActionCommand"), sizeof(FT4TeleportActionCommand), Get_Z_Construct_UScriptStruct_FT4TeleportActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4TeleportActionCommand>()
{
	return FT4TeleportActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4TeleportActionCommand(FT4TeleportActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4TeleportActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4TeleportActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4TeleportActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4TeleportActionCommand")),new UScriptStruct::TCppStructOps<FT4TeleportActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4TeleportActionCommand;
	struct Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #34\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#34" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4TeleportActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TeleportActionCommand, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TeleportActionCommand, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4TeleportActionCommand",
		sizeof(FT4TeleportActionCommand),
		alignof(FT4TeleportActionCommand),
		Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4TeleportActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4TeleportActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4TeleportActionCommand"), sizeof(FT4TeleportActionCommand), Get_Z_Construct_UScriptStruct_FT4TeleportActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4TeleportActionCommand_Hash() { return 2543104092U; }
class UScriptStruct* FT4JumpActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4JumpActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4JumpActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4JumpActionCommand"), sizeof(FT4JumpActionCommand), Get_Z_Construct_UScriptStruct_FT4JumpActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4JumpActionCommand>()
{
	return FT4JumpActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4JumpActionCommand(FT4JumpActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4JumpActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4JumpActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4JumpActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4JumpActionCommand")),new UScriptStruct::TCppStructOps<FT4JumpActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4JumpActionCommand;
	struct Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollideTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollideTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollideLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4JumpActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed = { "HeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, HeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec = { "CollideTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, CollideTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : Musb be FT4ActionBase::DurationSec, Ref FT4ActionCommandBase::OffsetTimeSec\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#140 : Musb be FT4ActionBase::DurationSec, Ref FT4ActionCommandBase::OffsetTimeSec" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation = { "CollideLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, CollideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_GoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_GoalLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_GoalLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4JumpActionCommand",
		sizeof(FT4JumpActionCommand),
		alignof(FT4JumpActionCommand),
		Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4JumpActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4JumpActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4JumpActionCommand"), sizeof(FT4JumpActionCommand), Get_Z_Construct_UScriptStruct_FT4JumpActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4JumpActionCommand_Hash() { return 2326776457U; }
class UScriptStruct* FT4MoveSyncActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveSyncActionCommand"), sizeof(FT4MoveSyncActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveSyncActionCommand>()
{
	return FT4MoveSyncActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveSyncActionCommand(FT4MoveSyncActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveSyncActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSyncActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSyncActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveSyncActionCommand")),new UScriptStruct::TCppStructOps<FT4MoveSyncActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSyncActionCommand;
	struct Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerNavPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerNavPoint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMaxSpeed_MetaData[];
#endif
		static void NewProp_bForceMaxSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #33, #40\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#33, #40" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveSyncActionCommand>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #52\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#52" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection = { "ServerDirection", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, ServerDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint = { "ServerNavPoint", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, ServerNavPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #40 : degree, LockOn \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xb0\xa9\xed\x96\xa5\xea\xb3\xbc \xeb\x8b\xac\xeb\x9d\xbc\xec\xa7\x84\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#40 : degree, LockOn \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xb0\xa9\xed\x96\xa5\xea\xb3\xbc \xeb\x8b\xac\xeb\x9d\xbc\xec\xa7\x84\xeb\x8b\xa4." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed_SetBit(void* Obj)
	{
		((FT4MoveSyncActionCommand*)Obj)->bForceMaxSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed = { "bForceMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4MoveSyncActionCommand), &Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveVelocity_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveVelocity = { "MoveVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, MoveVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bForceMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4MoveSyncActionCommand",
		sizeof(FT4MoveSyncActionCommand),
		alignof(FT4MoveSyncActionCommand),
		Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSyncActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveSyncActionCommand"), sizeof(FT4MoveSyncActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Hash() { return 1545904743U; }
class UScriptStruct* FT4MoveAsyncActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveAsyncActionCommand"), sizeof(FT4MoveAsyncActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveAsyncActionCommand>()
{
	return FT4MoveAsyncActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveAsyncActionCommand(FT4MoveAsyncActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveAsyncActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveAsyncActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveAsyncActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveAsyncActionCommand")),new UScriptStruct::TCppStructOps<FT4MoveAsyncActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveAsyncActionCommand;
	struct Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #40\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
		{ "ToolTip", "#40" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveAsyncActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveAsyncActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveAsyncActionCommand, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_MoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_MoveDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_MoveDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4MoveAsyncActionCommand",
		sizeof(FT4MoveAsyncActionCommand),
		alignof(FT4MoveAsyncActionCommand),
		Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveAsyncActionCommand"), sizeof(FT4MoveAsyncActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Hash() { return 2385573245U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
