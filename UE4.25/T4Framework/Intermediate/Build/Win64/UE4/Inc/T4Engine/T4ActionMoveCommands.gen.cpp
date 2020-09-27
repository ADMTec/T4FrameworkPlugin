// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/Command/T4ActionMoveCommands.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMoveCommands() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TurnActionCommand();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RotationActionCommand();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4TargetType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4TeleportActionCommand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4JumpActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSegmentActionData();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4MoveSegmentType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveStopActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSyncActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand();
// End Cross Module References
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TurnActionCommand, TurnRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_TurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TurnActionCommand_Statics::NewProp_bTurnRight_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4TurnActionCommand_Hash() { return 2282366543U; }
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#44 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * RotationRateScale, 0 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\xa6\x89\xec\x8b\x9c \xeb\xb3\x80\xea\xb2\xbd" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RotationActionCommand, TargetYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale = { "RotationRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4RotationActionCommand, RotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_RotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4RotationActionCommand_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4RotationActionCommand_Hash() { return 420386922U; }
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TeleportActionCommand, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TeleportActionCommand_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4TeleportActionCommand_Hash() { return 3515096005U; }
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed = { "HeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, HeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_HeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#140 : \xec\xa0\x90\xed\x94\x84\xec\x8b\x9c \xec\xb2\xab\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb6\x80\xeb\x94\xaa\xed\x9e\x88\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 Zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec = { "CollideTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, CollideTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : Musb be FT4ActionBase::DurationSec, Ref FT4ActionCommandBase::OffsetTimeSec\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#140 : Musb be FT4ActionBase::DurationSec, Ref FT4ActionCommandBase::OffsetTimeSec" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation = { "CollideLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4JumpActionCommand, CollideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_CollideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4JumpActionCommand_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4JumpActionCommand_Hash() { return 1844199351U; }
class UScriptStruct* FT4MoveSegmentsActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveSegmentsActionCommand"), sizeof(FT4MoveSegmentsActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveSegmentsActionCommand>()
{
	return FT4MoveSegmentsActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveSegmentsActionCommand(FT4MoveSegmentsActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveSegmentsActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSegmentsActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSegmentsActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveSegmentsActionCommand")),new UScriptStruct::TCppStructOps<FT4MoveSegmentsActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSegmentsActionCommand;
	struct Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSegmentDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveSegmentDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSegmentDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSegmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveSegmentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveSegmentType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#161" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveSegmentsActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #156\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#156" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas = { "MoveSegmentDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSegmentsActionCommand, MoveSegmentDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas_Inner = { "MoveSegmentDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MoveSegmentActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType = { "MoveSegmentType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSegmentsActionCommand, MoveSegmentType), Z_Construct_UEnum_T4Engine_ET4MoveSegmentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::NewProp_MoveSegmentType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4MoveSegmentsActionCommand",
		sizeof(FT4MoveSegmentsActionCommand),
		alignof(FT4MoveSegmentsActionCommand),
		Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveSegmentsActionCommand"), sizeof(FT4MoveSegmentsActionCommand), Get_Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSegmentsActionCommand_Hash() { return 1851308686U; }
class UScriptStruct* FT4MoveSegmentActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MoveSegmentActionData, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MoveSegmentActionData"), sizeof(FT4MoveSegmentActionData), Get_Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MoveSegmentActionData>()
{
	return FT4MoveSegmentActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MoveSegmentActionData(FT4MoveSegmentActionData::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MoveSegmentActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSegmentActionData
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSegmentActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MoveSegmentActionData")),new UScriptStruct::TCppStructOps<FT4MoveSegmentActionData>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MoveSegmentActionData;
	struct Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#161" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MoveSegmentActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_TimeSec_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSegmentActionData, TimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_TimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_TimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSegmentActionData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4MoveSegmentActionData",
		sizeof(FT4MoveSegmentActionData),
		alignof(FT4MoveSegmentActionData),
		Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MoveSegmentActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MoveSegmentActionData"), sizeof(FT4MoveSegmentActionData), Get_Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSegmentActionData_Hash() { return 1903080250U; }
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSpeedSyncActionCommand_Hash() { return 3788698117U; }
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveStopActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Statics::NewProp_StopLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveStopActionCommand_Hash() { return 1327163429U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGoalOnNavMesh_MetaData[];
#endif
		static void NewProp_bGoalOnNavMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGoalOnNavMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #33, #40\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#52" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection = { "ServerDirection", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, ServerDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint = { "ServerNavPoint", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, ServerNavPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #150\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#150" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #165 : add bGoalOnNavMesh : Zone Waypoint\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#165 : add bGoalOnNavMesh : Zone Waypoint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #50, #150\n" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
		{ "ToolTip", "#50, #150" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh_SetBit(void* Obj)
	{
		((FT4MoveSyncActionCommand*)Obj)->bGoalOnNavMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh = { "bGoalOnNavMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4MoveSyncActionCommand), &Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveSyncActionCommand, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_GoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_GoalLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_ServerNavPoint,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_HeadYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_bGoalOnNavMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Statics::NewProp_GoalLocation,
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
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveSyncActionCommand_Hash() { return 553281747U; }
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MoveAsyncActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/Command/T4ActionMoveCommands.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FT4MoveAsyncActionCommand_Hash() { return 527962448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
