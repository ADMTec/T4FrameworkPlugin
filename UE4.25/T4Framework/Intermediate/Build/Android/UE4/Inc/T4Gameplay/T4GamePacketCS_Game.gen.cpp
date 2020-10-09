// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/Server/T4GamePacketCS_Game.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketCS_Game() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_Base();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameDialogueResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
// End Cross Module References
class UScriptStruct* FT4GamePacketCS_DialogueAnswer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GamePacketCS_DialogueAnswer"), sizeof(FT4GamePacketCS_DialogueAnswer), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GamePacketCS_DialogueAnswer>()
{
	return FT4GamePacketCS_DialogueAnswer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GamePacketCS_DialogueAnswer(FT4GamePacketCS_DialogueAnswer::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GamePacketCS_DialogueAnswer"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_DialogueAnswer
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_DialogueAnswer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GamePacketCS_DialogueAnswer")),new UScriptStruct::TCppStructOps<FT4GamePacketCS_DialogueAnswer>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GamePacketCS_DialogueAnswer;
	struct Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueCueUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueCueUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #113, #116\n" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Game.h" },
		{ "ToolTip", "#113, #116" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GamePacketCS_DialogueAnswer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult = { "DialogueResult", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_DialogueAnswer, DialogueResult), Z_Construct_UEnum_T4Gameplay_ET4GameDialogueResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueCueUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueCueUniqueID = { "DialogueCueUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_DialogueAnswer, DialogueCueUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueCueUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueCueUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueUniqueID = { "DialogueUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_DialogueAnswer, DialogueUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_QuestUniqueID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_QuestUniqueID = { "QuestUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_DialogueAnswer, QuestUniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_QuestUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_QuestUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Protocol/Server/T4GamePacketCS_Game.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GamePacketCS_DialogueAnswer, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueCueUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_DialogueUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_QuestUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4GamePacketCS_Base,
		&NewStructOps,
		"T4GamePacketCS_DialogueAnswer",
		sizeof(FT4GamePacketCS_DialogueAnswer),
		alignof(FT4GamePacketCS_DialogueAnswer),
		Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GamePacketCS_DialogueAnswer"), sizeof(FT4GamePacketCS_DialogueAnswer), Get_Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GamePacketCS_DialogueAnswer_Hash() { return 3617011717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
