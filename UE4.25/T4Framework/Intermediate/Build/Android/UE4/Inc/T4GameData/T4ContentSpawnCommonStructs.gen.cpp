// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4ContentSpawnCommonStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentSpawnCommonStructs() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnWaypointData();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PathSegmentData_NoRegister();
// End Cross Module References
class UScriptStruct* FT4SpawnWaypointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SpawnWaypointData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SpawnWaypointData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SpawnWaypointData"), sizeof(FT4SpawnWaypointData), Get_Z_Construct_UScriptStruct_FT4SpawnWaypointData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SpawnWaypointData>()
{
	return FT4SpawnWaypointData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SpawnWaypointData(FT4SpawnWaypointData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SpawnWaypointData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnWaypointData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnWaypointData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SpawnWaypointData")),new UScriptStruct::TCppStructOps<FT4SpawnWaypointData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnWaypointData;
	struct Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSegmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PathSegmentData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #155\n */" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnCommonStructs.h" },
		{ "ToolTip", "#155" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SpawnWaypointData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnCommonStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnWaypointData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_DebugColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_PathSegmentData_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnCommonStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_PathSegmentData = { "PathSegmentData", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnWaypointData, PathSegmentData), Z_Construct_UClass_UT4PathSegmentData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_PathSegmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_PathSegmentData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_DebugColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::NewProp_PathSegmentData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SpawnWaypointData",
		sizeof(FT4SpawnWaypointData),
		alignof(FT4SpawnWaypointData),
		Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnWaypointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SpawnWaypointData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SpawnWaypointData"), sizeof(FT4SpawnWaypointData), Get_Z_Construct_UScriptStruct_FT4SpawnWaypointData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SpawnWaypointData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SpawnWaypointData_Hash() { return 1281628400U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
