// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4ItemTableRowBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemTableRowBase() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemTableRowBase();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
class UScriptStruct* FT4ItemTableRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ItemTableRowBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ItemTableRowBase, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ItemTableRowBase"), sizeof(FT4ItemTableRowBase), Get_Z_Construct_UScriptStruct_FT4ItemTableRowBase_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ItemTableRowBase>()
{
	return FT4ItemTableRowBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ItemTableRowBase(FT4ItemTableRowBase::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ItemTableRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ItemTableRowBase
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ItemTableRowBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ItemTableRowBase")),new UScriptStruct::TCppStructOps<FT4ItemTableRowBase>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ItemTableRowBase;
	struct Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropBehaviorTreePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DropBehaviorTreePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TableRow/T4ItemTableRowBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ItemTableRowBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::NewProp_DropBehaviorTreePath_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/TableRow/T4ItemTableRowBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::NewProp_DropBehaviorTreePath = { "DropBehaviorTreePath", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ItemTableRowBase, DropBehaviorTreePath), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::NewProp_DropBehaviorTreePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::NewProp_DropBehaviorTreePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::NewProp_DropBehaviorTreePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FT4TableRowBase,
		&NewStructOps,
		"T4ItemTableRowBase",
		sizeof(FT4ItemTableRowBase),
		alignof(FT4ItemTableRowBase),
		Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ItemTableRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ItemTableRowBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ItemTableRowBase"), sizeof(FT4ItemTableRowBase), Get_Z_Construct_UScriptStruct_FT4ItemTableRowBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ItemTableRowBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ItemTableRowBase_Hash() { return 1616003445U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
