// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/TableRow/T4TableRowBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4TableRowBase() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameDBType();
// End Cross Module References
class UScriptStruct* FT4TableRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4TableRowBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4TableRowBase, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4TableRowBase"), sizeof(FT4TableRowBase), Get_Z_Construct_UScriptStruct_FT4TableRowBase_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4TableRowBase>()
{
	return FT4TableRowBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4TableRowBase(FT4TableRowBase::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4TableRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4TableRowBase
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4TableRowBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4TableRowBase")),new UScriptStruct::TCppStructOps<FT4TableRowBase>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4TableRowBase;
	struct Z_Construct_UScriptStruct_FT4TableRowBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPinned_MetaData[];
#endif
		static void NewProp_bPinned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DBKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DBKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DBType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DBType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DBType_Underlying;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TableRowBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/\n */" },
		{ "ModuleRelativePath", "Classes/TableRow/T4TableRowBase.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/DataDriven/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4TableRowBase>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_ParentRowName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Classes/TableRow/T4TableRowBase.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_ParentRowName = { "ParentRowName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TableRowBase, ParentRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_ParentRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_ParentRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/TableRow/T4TableRowBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned_SetBit(void* Obj)
	{
		((FT4TableRowBase*)Obj)->bPinned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned = { "bPinned", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4TableRowBase), &Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBKeyName_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Classes/TableRow/T4TableRowBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBKeyName = { "DBKeyName", nullptr, (EPropertyFlags)0x0010000800022001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TableRowBase, DBKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Classes/TableRow/T4TableRowBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType = { "DBType", nullptr, (EPropertyFlags)0x0010000800022001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TableRowBase, DBType), Z_Construct_UEnum_T4GameData_ET4GameDBType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/TableRow/T4TableRowBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TableRowBase, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_FolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4TableRowBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_ParentRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_bPinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_DBType_Underlying,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TableRowBase_Statics::NewProp_FolderName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4TableRowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4TableRowBase",
		sizeof(FT4TableRowBase),
		alignof(FT4TableRowBase),
		Z_Construct_UScriptStruct_FT4TableRowBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TableRowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4TableRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4TableRowBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4TableRowBase"), sizeof(FT4TableRowBase), Get_Z_Construct_UScriptStruct_FT4TableRowBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4TableRowBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4TableRowBase_Hash() { return 480829137U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
