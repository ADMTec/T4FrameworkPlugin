// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionCommandCommons.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionCommandCommons() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StopActionCommand();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionPakActionCommand();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4LoadingPolicy();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPakAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FT4StopActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4StopActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4StopActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4StopActionCommand"), sizeof(FT4StopActionCommand), Get_Z_Construct_UScriptStruct_FT4StopActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4StopActionCommand>()
{
	return FT4StopActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4StopActionCommand(FT4StopActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4StopActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4StopActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4StopActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4StopActionCommand")),new UScriptStruct::TCppStructOps<FT4StopActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4StopActionCommand;
	struct Z_Construct_UScriptStruct_FT4StopActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSameKeyNameRemoveAll_MetaData[];
#endif
		static void NewProp_bSameKeyNameRemoveAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSameKeyNameRemoveAll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandCommons.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4StopActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandCommons.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll_SetBit(void* Obj)
	{
		((FT4StopActionCommand*)Obj)->bSameKeyNameRemoveAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll = { "bSameKeyNameRemoveAll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StopActionCommand), &Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::NewProp_bSameKeyNameRemoveAll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4StopActionCommand",
		sizeof(FT4StopActionCommand),
		alignof(FT4StopActionCommand),
		Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4StopActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4StopActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4StopActionCommand"), sizeof(FT4StopActionCommand), Get_Z_Construct_UScriptStruct_FT4StopActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4StopActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4StopActionCommand_Hash() { return 2814539748U; }
class UScriptStruct* FT4ActionPakActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionPakActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionPakActionCommand"), sizeof(FT4ActionPakActionCommand), Get_Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionPakActionCommand>()
{
	return FT4ActionPakActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionPakActionCommand(FT4ActionPakActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionPakActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionPakActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionPakActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionPakActionCommand")),new UScriptStruct::TCppStructOps<FT4ActionPakActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionPakActionCommand;
	struct Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActionPakAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4ActionCommandType::ActionPak\n// ET4ActionCommandType::Stop\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandCommons.h" },
		{ "ToolTip", "ET4ActionCommandType::ActionPak\nET4ActionCommandType::Stop" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionPakActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandCommons.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionPakActionCommand, LoadingPolicy), Z_Construct_UEnum_T4Asset_ET4LoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_ActionPakAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandCommons.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_ActionPakAsset = { "ActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionPakActionCommand, ActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_ActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_ActionPakAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::NewProp_ActionPakAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4ActionPakActionCommand",
		sizeof(FT4ActionPakActionCommand),
		alignof(FT4ActionPakActionCommand),
		Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionPakActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionPakActionCommand"), sizeof(FT4ActionPakActionCommand), Get_Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionPakActionCommand_Hash() { return 755040839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
