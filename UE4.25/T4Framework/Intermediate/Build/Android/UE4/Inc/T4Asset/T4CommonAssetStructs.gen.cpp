// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Common/T4CommonAssetStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CommonAssetStructs() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorBookmarkData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FT4EditorTestAutomationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorTestAutomationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EditorTestAutomationData"), sizeof(FT4EditorTestAutomationData), Get_Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EditorTestAutomationData>()
{
	return FT4EditorTestAutomationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorTestAutomationData(FT4EditorTestAutomationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EditorTestAutomationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EditorTestAutomationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EditorTestAutomationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorTestAutomationData")),new UScriptStruct::TCppStructOps<FT4EditorTestAutomationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EditorTestAutomationData;
	struct Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bookmarks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorTestAutomationData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorTestAutomationData, Bookmarks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks_Inner = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EditorBookmarkData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::NewProp_Bookmarks_Inner,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EditorTestAutomationData",
		sizeof(FT4EditorTestAutomationData),
		alignof(FT4EditorTestAutomationData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorTestAutomationData"), sizeof(FT4EditorTestAutomationData), Get_Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorTestAutomationData_Hash() { return 369366234U; }
class UScriptStruct* FT4EditorBookmarkData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorBookmarkData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorBookmarkData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EditorBookmarkData"), sizeof(FT4EditorBookmarkData), Get_Z_Construct_UScriptStruct_FT4EditorBookmarkData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EditorBookmarkData>()
{
	return FT4EditorBookmarkData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorBookmarkData(FT4EditorBookmarkData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EditorBookmarkData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EditorBookmarkData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EditorBookmarkData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorBookmarkData")),new UScriptStruct::TCppStructOps<FT4EditorBookmarkData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EditorBookmarkData;
	struct Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeHour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeHour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapEntityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapEntityName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #100\n */" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
		{ "ToolTip", "#100" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorBookmarkData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorBookmarkData, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorBookmarkData, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_WorldTimeHour_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_WorldTimeHour = { "WorldTimeHour", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorBookmarkData, WorldTimeHour), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_WorldTimeHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_WorldTimeHour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_MapEntityName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #103\n" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
		{ "ToolTip", "#103" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_MapEntityName = { "MapEntityName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorBookmarkData, MapEntityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_MapEntityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_MapEntityName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Common/T4CommonAssetStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorBookmarkData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_WorldTimeHour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_MapEntityName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::NewProp_Name,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EditorBookmarkData",
		sizeof(FT4EditorBookmarkData),
		alignof(FT4EditorBookmarkData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorBookmarkData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorBookmarkData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorBookmarkData"), sizeof(FT4EditorBookmarkData), Get_Z_Construct_UScriptStruct_FT4EditorBookmarkData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorBookmarkData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorBookmarkData_Hash() { return 3532966858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
