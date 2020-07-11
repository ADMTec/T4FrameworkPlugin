// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionCommandEditors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionCommandEditors() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorActionCommand();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCommandBase();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTagType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4EditorAction();
// End Cross Module References
class UScriptStruct* FT4EditorActionCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorActionCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorActionCommand, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4EditorActionCommand"), sizeof(FT4EditorActionCommand), Get_Z_Construct_UScriptStruct_FT4EditorActionCommand_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4EditorActionCommand>()
{
	return FT4EditorActionCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorActionCommand(FT4EditorActionCommand::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4EditorActionCommand"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4EditorActionCommand
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4EditorActionCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorActionCommand")),new UScriptStruct::TCppStructOps<FT4EditorActionCommand>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4EditorActionCommand;
	struct Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTagType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTagType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditorActionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditorActionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ET4ActionCommandType::Editor\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandEditors.h" },
		{ "ToolTip", "ET4ActionCommandType::Editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorActionCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #81 : PlayTagSet, PlayTagClear\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandEditors.h" },
		{ "ToolTip", "#81 : PlayTagSet, PlayTagClear" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType = { "PlayTagType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorActionCommand, PlayTagType), Z_Construct_UEnum_T4Asset_ET4PlayTagType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandEditors.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagName = { "PlayTagName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorActionCommand, PlayTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionCommandEditors.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType = { "EditorActionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorActionCommand, EditorActionType), Z_Construct_UEnum_T4Engine_ET4EditorAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_PlayTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::NewProp_EditorActionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		Z_Construct_UScriptStruct_FT4ActionCommandBase,
		&NewStructOps,
		"T4EditorActionCommand",
		sizeof(FT4EditorActionCommand),
		alignof(FT4EditorActionCommand),
		Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorActionCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorActionCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorActionCommand"), sizeof(FT4EditorActionCommand), Get_Z_Construct_UScriptStruct_FT4EditorActionCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorActionCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorActionCommand_Hash() { return 4121137969U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
