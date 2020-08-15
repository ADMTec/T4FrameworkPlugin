// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4ContentSpawnObjectStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentSpawnObjectStructs() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnObjectData();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnWaypointData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FT4ContentSpawnObjectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentSpawnObjectData"), sizeof(FT4ContentSpawnObjectData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentSpawnObjectData>()
{
	return FT4ContentSpawnObjectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentSpawnObjectData(FT4ContentSpawnObjectData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentSpawnObjectData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnObjectData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnObjectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentSpawnObjectData")),new UScriptStruct::TCppStructOps<FT4ContentSpawnObjectData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnObjectData;
	struct Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaypointDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaypointDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrefabID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #118\n */" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
		{ "ToolTip", "#118" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentSpawnObjectData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #122\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
		{ "ToolTip", "#122" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas = { "WaypointDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, WaypointDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas_Inner = { "WaypointDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4SpawnWaypointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_PrefabID_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_PrefabID = { "PrefabID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, PrefabID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_PrefabID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_PrefabID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4ContentSpawnObjectDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnObjectStructs.h" },
		{ "ToolTip", "FT4ContentSpawnObjectDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnObjectData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_WaypointDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_PrefabID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentSpawnObjectData",
		sizeof(FT4ContentSpawnObjectData),
		alignof(FT4ContentSpawnObjectData),
		Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnObjectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentSpawnObjectData"), sizeof(FT4ContentSpawnObjectData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnObjectData_Hash() { return 3374706681U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
