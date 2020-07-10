// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Sequencer/T4ActionMovieSceneChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMovieSceneChannel() {}
// Cross Module References
	T4ACTIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	T4ACTIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSectionKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FT4ActionMovieSceneChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ACTIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel, Z_Construct_UPackage__Script_T4ActionEditor(), TEXT("T4ActionMovieSceneChannel"), sizeof(FT4ActionMovieSceneChannel), Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Hash());
	}
	return Singleton;
}
template<> T4ACTIONEDITOR_API UScriptStruct* StaticStruct<FT4ActionMovieSceneChannel>()
{
	return FT4ActionMovieSceneChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionMovieSceneChannel(FT4ActionMovieSceneChannel::StaticStruct, TEXT("/Script/T4ActionEditor"), TEXT("T4ActionMovieSceneChannel"), false, nullptr, nullptr);
static struct FScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSceneChannel
{
	FScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSceneChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionMovieSceneChannel")),new UScriptStruct::TCppStructOps<FT4ActionMovieSceneChannel>);
	}
} ScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSceneChannel;
	struct Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionMovieSceneChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionMovieSceneChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ActionMovieSectionKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Array of times for each key */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneChannel.h" },
		{ "ToolTip", "Array of times for each key" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionMovieSceneChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::NewProp_KeyTimes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"T4ActionMovieSceneChannel",
		sizeof(FT4ActionMovieSceneChannel),
		alignof(FT4ActionMovieSceneChannel),
		Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4ActionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionMovieSceneChannel"), sizeof(FT4ActionMovieSceneChannel), Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel_Hash() { return 1519315612U; }
class UScriptStruct* FT4ActionMovieSectionKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ACTIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionMovieSectionKey, Z_Construct_UPackage__Script_T4ActionEditor(), TEXT("T4ActionMovieSectionKey"), sizeof(FT4ActionMovieSectionKey), Get_Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Hash());
	}
	return Singleton;
}
template<> T4ACTIONEDITOR_API UScriptStruct* StaticStruct<FT4ActionMovieSectionKey>()
{
	return FT4ActionMovieSectionKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionMovieSectionKey(FT4ActionMovieSectionKey::StaticStruct, TEXT("/Script/T4ActionEditor"), TEXT("T4ActionMovieSectionKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSectionKey
{
	FScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSectionKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionMovieSectionKey")),new UScriptStruct::TCppStructOps<FT4ActionMovieSectionKey>);
	}
} ScriptStruct_T4ActionEditor_StaticRegisterNativesFT4ActionMovieSectionKey;
	struct Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  *\n */" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionMovieSectionKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::NewProp_ChannelKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::NewProp_ChannelKey = { "ChannelKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionMovieSectionKey, ChannelKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::NewProp_ChannelKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::NewProp_ChannelKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::NewProp_ChannelKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
		nullptr,
		&NewStructOps,
		"T4ActionMovieSectionKey",
		sizeof(FT4ActionMovieSectionKey),
		alignof(FT4ActionMovieSectionKey),
		Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSectionKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4ActionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionMovieSectionKey"), sizeof(FT4ActionMovieSectionKey), Get_Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionMovieSectionKey_Hash() { return 1330868653U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
