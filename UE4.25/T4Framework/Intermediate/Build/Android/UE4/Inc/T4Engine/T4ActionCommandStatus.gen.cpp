// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionCommandStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionCommandStatus() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionStopActionCommand();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityReactionType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ResurrectActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4DieActionCommand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4CrowdControlActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4HitActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4SkinActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4CostumeActionCommand();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponEntityData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StanceActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4LockOnActionCommand();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4AimActionCommand();
// End Cross Module References
class UScriptStruct* FT4ReactionStopActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ReactionStopActionCommand"), sizeof(FT4ReactionStopActionCommand), Get_Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ReactionStopActionCommand>()
{
	return FT4ReactionStopActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ReactionStopActionCommand(FT4ReactionStopActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ReactionStopActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ReactionStopActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ReactionStopActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ReactionStopActionCommand")),new UScriptStruct::TCppStructOps<FT4ReactionStopActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ReactionStopActionCommand;
	struct Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #132\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#132" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ReactionStopActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionStopActionCommand, ReactionType), Z_Construct_UEnum_T4Asset_ET4EntityReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ReactionStopActionCommand, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::NewProp_ReactionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4ReactionStopActionCommand",
		sizeof(FT4ReactionStopActionCommand),
		alignof(FT4ReactionStopActionCommand),
		Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionStopActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ReactionStopActionCommand"), sizeof(FT4ReactionStopActionCommand), Get_Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ReactionStopActionCommand_Hash() { return 2817980617U; }
class UScriptStruct* FT4ResurrectActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ResurrectActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ResurrectActionCommand"), sizeof(FT4ResurrectActionCommand), Get_Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ResurrectActionCommand>()
{
	return FT4ResurrectActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ResurrectActionCommand(FT4ResurrectActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ResurrectActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ResurrectActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ResurrectActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ResurrectActionCommand")),new UScriptStruct::TCppStructOps<FT4ResurrectActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ResurrectActionCommand;
	struct Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ResurrectActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ResurrectActionCommand, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::NewProp_ReactionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::NewProp_ReactionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4ResurrectActionCommand",
		sizeof(FT4ResurrectActionCommand),
		alignof(FT4ResurrectActionCommand),
		Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ResurrectActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ResurrectActionCommand"), sizeof(FT4ResurrectActionCommand), Get_Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ResurrectActionCommand_Hash() { return 2089067609U; }
class UScriptStruct* FT4DieActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4DieActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4DieActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4DieActionCommand"), sizeof(FT4DieActionCommand), Get_Z_Construct_UScriptStruct_FT4DieActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4DieActionCommand>()
{
	return FT4DieActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4DieActionCommand(FT4DieActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4DieActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4DieActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4DieActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4DieActionCommand")),new UScriptStruct::TCppStructOps<FT4DieActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4DieActionCommand;
	struct Z_Construct_UScriptStruct_FT4DieActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4DieActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DieActionCommand, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ShootDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4DieActionCommand, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ReactionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ShootDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::NewProp_ReactionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4DieActionCommand",
		sizeof(FT4DieActionCommand),
		alignof(FT4DieActionCommand),
		Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4DieActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4DieActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4DieActionCommand"), sizeof(FT4DieActionCommand), Get_Z_Construct_UScriptStruct_FT4DieActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4DieActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4DieActionCommand_Hash() { return 746455908U; }
class UScriptStruct* FT4CrowdControlActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4CrowdControlActionCommand"), sizeof(FT4CrowdControlActionCommand), Get_Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4CrowdControlActionCommand>()
{
	return FT4CrowdControlActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CrowdControlActionCommand(FT4CrowdControlActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4CrowdControlActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4CrowdControlActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4CrowdControlActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CrowdControlActionCommand")),new UScriptStruct::TCppStructOps<FT4CrowdControlActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4CrowdControlActionCommand;
	struct Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CrowdControlActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : Knockback & Airborne & Stun\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#135 : Knockback & Airborne & Stun" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CrowdControlActionCommand, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ShootDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CrowdControlActionCommand, ReactionType), Z_Construct_UEnum_T4Asset_ET4EntityReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CrowdControlActionCommand, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ShootDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::NewProp_ReactionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4CrowdControlActionCommand",
		sizeof(FT4CrowdControlActionCommand),
		alignof(FT4CrowdControlActionCommand),
		Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CrowdControlActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CrowdControlActionCommand"), sizeof(FT4CrowdControlActionCommand), Get_Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CrowdControlActionCommand_Hash() { return 3790428770U; }
class UScriptStruct* FT4HitActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4HitActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4HitActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4HitActionCommand"), sizeof(FT4HitActionCommand), Get_Z_Construct_UScriptStruct_FT4HitActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4HitActionCommand>()
{
	return FT4HitActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4HitActionCommand(FT4HitActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4HitActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4HitActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4HitActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4HitActionCommand")),new UScriptStruct::TCppStructOps<FT4HitActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4HitActionCommand;
	struct Z_Construct_UScriptStruct_FT4HitActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4HitActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HitActionCommand, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ShootDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HitActionCommand, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ReactionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ShootDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::NewProp_ReactionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4HitActionCommand",
		sizeof(FT4HitActionCommand),
		alignof(FT4HitActionCommand),
		Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4HitActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4HitActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4HitActionCommand"), sizeof(FT4HitActionCommand), Get_Z_Construct_UScriptStruct_FT4HitActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4HitActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4HitActionCommand_Hash() { return 4037084923U; }
class UScriptStruct* FT4SkinActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4SkinActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SkinActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4SkinActionCommand"), sizeof(FT4SkinActionCommand), Get_Z_Construct_UScriptStruct_FT4SkinActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4SkinActionCommand>()
{
	return FT4SkinActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SkinActionCommand(FT4SkinActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4SkinActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4SkinActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4SkinActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SkinActionCommand")),new UScriptStruct::TCppStructOps<FT4SkinActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4SkinActionCommand;
	struct Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetSkinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #130\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#130" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SkinActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::NewProp_TargetSkinName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::NewProp_TargetSkinName = { "TargetSkinName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SkinActionCommand, TargetSkinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::NewProp_TargetSkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::NewProp_TargetSkinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::NewProp_TargetSkinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4SkinActionCommand",
		sizeof(FT4SkinActionCommand),
		alignof(FT4SkinActionCommand),
		Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SkinActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SkinActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SkinActionCommand"), sizeof(FT4SkinActionCommand), Get_Z_Construct_UScriptStruct_FT4SkinActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SkinActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SkinActionCommand_Hash() { return 729923587U; }
class UScriptStruct* FT4CostumeActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4CostumeActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4CostumeActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4CostumeActionCommand"), sizeof(FT4CostumeActionCommand), Get_Z_Construct_UScriptStruct_FT4CostumeActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4CostumeActionCommand>()
{
	return FT4CostumeActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4CostumeActionCommand(FT4CostumeActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4CostumeActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4CostumeActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4CostumeActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4CostumeActionCommand")),new UScriptStruct::TCppStructOps<FT4CostumeActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4CostumeActionCommand;
	struct Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearDefault_MetaData[];
#endif
		static void NewProp_bClearDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPartsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPartsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CostumeEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #37\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4CostumeActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault_SetBit(void* Obj)
	{
		((FT4CostumeActionCommand*)Obj)->bClearDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault = { "bClearDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4CostumeActionCommand), &Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_TargetPartsName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_TargetPartsName = { "TargetPartsName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeActionCommand, TargetPartsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_TargetPartsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_TargetPartsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_CostumeEntityAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_CostumeEntityAsset = { "CostumeEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4CostumeActionCommand, CostumeEntityAsset), Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_CostumeEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_CostumeEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_bClearDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_TargetPartsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::NewProp_CostumeEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4CostumeActionCommand",
		sizeof(FT4CostumeActionCommand),
		alignof(FT4CostumeActionCommand),
		Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4CostumeActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4CostumeActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4CostumeActionCommand"), sizeof(FT4CostumeActionCommand), Get_Z_Construct_UScriptStruct_FT4CostumeActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4CostumeActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4CostumeActionCommand_Hash() { return 1794364887U; }
class UScriptStruct* FT4UnequipWeaponActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4UnequipWeaponActionCommand"), sizeof(FT4UnequipWeaponActionCommand), Get_Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4UnequipWeaponActionCommand>()
{
	return FT4UnequipWeaponActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4UnequipWeaponActionCommand(FT4UnequipWeaponActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4UnequipWeaponActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4UnequipWeaponActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4UnequipWeaponActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4UnequipWeaponActionCommand")),new UScriptStruct::TCppStructOps<FT4UnequipWeaponActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4UnequipWeaponActionCommand;
	struct Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeAnimSetSync_MetaData[];
#endif
		static void NewProp_bChangeAnimSetSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeAnimSetSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeDefaultAnimSet_MetaData[];
#endif
		static void NewProp_bChangeDefaultAnimSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeDefaultAnimSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentActionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentActionKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #48\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#48" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4UnequipWeaponActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #110 : Default AnimSet \xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#110 : Default AnimSet \xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_SetBit(void* Obj)
	{
		((FT4UnequipWeaponActionCommand*)Obj)->bChangeAnimSetSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync = { "bChangeAnimSetSync", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4UnequipWeaponActionCommand), &Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #111 : \xeb\x82\xb4\xeb\xb6\x80\xec\x97\x90\xec\x84\x9c \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xea\xb4\x80\xeb\xa6\xac \xec\x9a\xa9\xeb\x8f\x84\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Equip \xec\x97\x90\xec\x84\x9c \xeb\x84\xa3\xec\x96\xb4\xec\xa4\x80 ActionKey\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#111 : \xeb\x82\xb4\xeb\xb6\x80\xec\x97\x90\xec\x84\x9c \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xea\xb4\x80\xeb\xa6\xac \xec\x9a\xa9\xeb\x8f\x84\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Equip \xec\x97\x90\xec\x84\x9c \xeb\x84\xa3\xec\x96\xb4\xec\xa4\x80 ActionKey" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet_SetBit(void* Obj)
	{
		((FT4UnequipWeaponActionCommand*)Obj)->bChangeDefaultAnimSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet = { "bChangeDefaultAnimSet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4UnequipWeaponActionCommand), &Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_EquipmentActionKey_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_EquipmentActionKey = { "EquipmentActionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4UnequipWeaponActionCommand, EquipmentActionKey), Z_Construct_UScriptStruct_FT4ActionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_EquipmentActionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_EquipmentActionKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_bChangeDefaultAnimSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::NewProp_EquipmentActionKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4UnequipWeaponActionCommand",
		sizeof(FT4UnequipWeaponActionCommand),
		alignof(FT4UnequipWeaponActionCommand),
		Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4UnequipWeaponActionCommand"), sizeof(FT4UnequipWeaponActionCommand), Get_Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4UnequipWeaponActionCommand_Hash() { return 201992410U; }
class UScriptStruct* FT4EquipWeaponActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4EquipWeaponActionCommand"), sizeof(FT4EquipWeaponActionCommand), Get_Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4EquipWeaponActionCommand>()
{
	return FT4EquipWeaponActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EquipWeaponActionCommand(FT4EquipWeaponActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4EquipWeaponActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EquipWeaponActionCommand")),new UScriptStruct::TCppStructOps<FT4EquipWeaponActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponActionCommand;
	struct Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeAnimSetSync_MetaData[];
#endif
		static void NewProp_bChangeAnimSetSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeAnimSetSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangeAnimSetInEntity_MetaData[];
#endif
		static void NewProp_bChangeAnimSetInEntity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeAnimSetInEntity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubWeaponDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubWeaponDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubWeaponDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentActionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentActionKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EquipWeaponActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #110 : Weapon Entity \xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c AnimSet \xeb\x8f\x84 \xed\x95\xa8\xea\xbb\x98 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#110 : Weapon Entity \xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c AnimSet \xeb\x8f\x84 \xed\x95\xa8\xea\xbb\x98 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4." },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_SetBit(void* Obj)
	{
		((FT4EquipWeaponActionCommand*)Obj)->bChangeAnimSetSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync = { "bChangeAnimSetSync", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EquipWeaponActionCommand), &Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #111\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#111" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity_SetBit(void* Obj)
	{
		((FT4EquipWeaponActionCommand*)Obj)->bChangeAnimSetInEntity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity = { "bChangeAnimSetInEntity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EquipWeaponActionCommand), &Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas = { "SubWeaponDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponActionCommand, SubWeaponDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas_Inner = { "SubWeaponDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EquipWeaponEntityData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_MainWeaponData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #111 : \xeb\x82\xb4\xeb\xb6\x80\xec\x97\x90\xec\x84\x9c \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xea\xb4\x80\xeb\xa6\xac \xec\x9a\xa9\xeb\x8f\x84\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Equip \xec\x97\x90\xec\x84\x9c \xeb\x84\xa3\xec\x96\xb4\xec\xa4\x80 ActionKey\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#111 : \xeb\x82\xb4\xeb\xb6\x80\xec\x97\x90\xec\x84\x9c \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xea\xb4\x80\xeb\xa6\xac \xec\x9a\xa9\xeb\x8f\x84\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\xa0 Equip \xec\x97\x90\xec\x84\x9c \xeb\x84\xa3\xec\x96\xb4\xec\xa4\x80 ActionKey" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_MainWeaponData = { "MainWeaponData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponActionCommand, MainWeaponData), Z_Construct_UScriptStruct_FT4EquipWeaponEntityData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_MainWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_MainWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_EquipmentActionKey_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_EquipmentActionKey = { "EquipmentActionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponActionCommand, EquipmentActionKey), Z_Construct_UScriptStruct_FT4ActionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_EquipmentActionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_EquipmentActionKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_bChangeAnimSetInEntity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_SubWeaponDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_MainWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::NewProp_EquipmentActionKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4EquipWeaponActionCommand",
		sizeof(FT4EquipWeaponActionCommand),
		alignof(FT4EquipWeaponActionCommand),
		Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EquipWeaponActionCommand"), sizeof(FT4EquipWeaponActionCommand), Get_Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponActionCommand_Hash() { return 3133811499U; }
class UScriptStruct* FT4EquipWeaponEntityData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4EquipWeaponEntityData"), sizeof(FT4EquipWeaponEntityData), Get_Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4EquipWeaponEntityData>()
{
	return FT4EquipWeaponEntityData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EquipWeaponEntityData(FT4EquipWeaponEntityData::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4EquipWeaponEntityData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponEntityData
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponEntityData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EquipWeaponEntityData")),new UScriptStruct::TCppStructOps<FT4EquipWeaponEntityData>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4EquipWeaponEntityData;
	struct Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEquipPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideEquipPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #111\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#111" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EquipWeaponEntityData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_OverrideEquipPoint_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_OverrideEquipPoint = { "OverrideEquipPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponEntityData, OverrideEquipPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_OverrideEquipPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_OverrideEquipPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_WeaponEntityAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_WeaponEntityAsset = { "WeaponEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EquipWeaponEntityData, WeaponEntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_WeaponEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_WeaponEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_OverrideEquipPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::NewProp_WeaponEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4EquipWeaponEntityData",
		sizeof(FT4EquipWeaponEntityData),
		alignof(FT4EquipWeaponEntityData),
		Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EquipWeaponEntityData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EquipWeaponEntityData"), sizeof(FT4EquipWeaponEntityData), Get_Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EquipWeaponEntityData_Hash() { return 2495071177U; }
class UScriptStruct* FT4StanceActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4StanceActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4StanceActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4StanceActionCommand"), sizeof(FT4StanceActionCommand), Get_Z_Construct_UScriptStruct_FT4StanceActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4StanceActionCommand>()
{
	return FT4StanceActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4StanceActionCommand(FT4StanceActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4StanceActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4StanceActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4StanceActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4StanceActionCommand")),new UScriptStruct::TCppStructOps<FT4StanceActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4StanceActionCommand;
	struct Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImmediate_MetaData[];
#endif
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#106" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4StanceActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140 : InMoveSpeed per Stance\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#140 : InMoveSpeed per Stance" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((FT4StanceActionCommand*)Obj)->bImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StanceActionCommand), &Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StanceActionCommand, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4StanceActionCommand, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_StanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_bImmediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::NewProp_StanceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4StanceActionCommand",
		sizeof(FT4StanceActionCommand),
		alignof(FT4StanceActionCommand),
		Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4StanceActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4StanceActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4StanceActionCommand"), sizeof(FT4StanceActionCommand), Get_Z_Construct_UScriptStruct_FT4StanceActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4StanceActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4StanceActionCommand_Hash() { return 2498907780U; }
class UScriptStruct* FT4AnimSetActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4AnimSetActionCommand"), sizeof(FT4AnimSetActionCommand), Get_Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4AnimSetActionCommand>()
{
	return FT4AnimSetActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetActionCommand(FT4AnimSetActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4AnimSetActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4AnimSetActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4AnimSetActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetActionCommand")),new UScriptStruct::TCppStructOps<FT4AnimSetActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4AnimSetActionCommand;
	struct Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyFlush_MetaData[];
#endif
		static void NewProp_bOnlyFlush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFlush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImmediate_MetaData[];
#endif
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #111\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#111" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush_SetBit(void* Obj)
	{
		((FT4AnimSetActionCommand*)Obj)->bOnlyFlush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush = { "bOnlyFlush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetActionCommand), &Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((FT4AnimSetActionCommand*)Obj)->bImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetActionCommand), &Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_AnimSetName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_AnimSetName = { "AnimSetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetActionCommand, AnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_AnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_AnimSetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bOnlyFlush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_bImmediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::NewProp_AnimSetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4AnimSetActionCommand",
		sizeof(FT4AnimSetActionCommand),
		alignof(FT4AnimSetActionCommand),
		Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetActionCommand"), sizeof(FT4AnimSetActionCommand), Get_Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetActionCommand_Hash() { return 309146603U; }
class UScriptStruct* FT4LockOnActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4LockOnActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4LockOnActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4LockOnActionCommand"), sizeof(FT4LockOnActionCommand), Get_Z_Construct_UScriptStruct_FT4LockOnActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4LockOnActionCommand>()
{
	return FT4LockOnActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4LockOnActionCommand(FT4LockOnActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4LockOnActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4LockOnActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4LockOnActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4LockOnActionCommand")),new UScriptStruct::TCppStructOps<FT4LockOnActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4LockOnActionCommand;
	struct Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetLocked_MetaData[];
#endif
		static void NewProp_bSetLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4LockOnActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_HeadYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4LockOnActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked_SetBit(void* Obj)
	{
		((FT4LockOnActionCommand*)Obj)->bSetLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked = { "bSetLocked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4LockOnActionCommand), &Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_HeadYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::NewProp_bSetLocked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4LockOnActionCommand",
		sizeof(FT4LockOnActionCommand),
		alignof(FT4LockOnActionCommand),
		Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4LockOnActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4LockOnActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4LockOnActionCommand"), sizeof(FT4LockOnActionCommand), Get_Z_Construct_UScriptStruct_FT4LockOnActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4LockOnActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4LockOnActionCommand_Hash() { return 928284004U; }
class UScriptStruct* FT4AimActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4AimActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AimActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4AimActionCommand"), sizeof(FT4AimActionCommand), Get_Z_Construct_UScriptStruct_FT4AimActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4AimActionCommand>()
{
	return FT4AimActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AimActionCommand(FT4AimActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4AimActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4AimActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4AimActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AimActionCommand")),new UScriptStruct::TCppStructOps<FT4AimActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4AimActionCommand;
	struct Z_Construct_UScriptStruct_FT4AimActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClear_MetaData[];
#endif
		static void NewProp_bClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #113\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#113" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AimActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_TargetDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #40\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
		{ "ToolTip", "#40" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AimActionCommand, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_TargetDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_TargetDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_HeadYawAngle_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_HeadYawAngle = { "HeadYawAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AimActionCommand, HeadYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_HeadYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_HeadYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear_SetBit(void* Obj)
	{
		((FT4AimActionCommand*)Obj)->bClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear = { "bClear", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AimActionCommand), &Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_HeadYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::NewProp_bClear,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4AimActionCommand",
		sizeof(FT4AimActionCommand),
		alignof(FT4AimActionCommand),
		Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AimActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AimActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AimActionCommand"), sizeof(FT4AimActionCommand), Get_Z_Construct_UScriptStruct_FT4AimActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AimActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AimActionCommand_Hash() { return 1651870310U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
