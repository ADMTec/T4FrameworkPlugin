// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4ContentBuildAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentBuildAsset() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnLayerData();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentBuildAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentBuildAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4WorldDBKey();
// End Cross Module References
class UScriptStruct* FT4ContentSpawnLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentSpawnLayerData"), sizeof(FT4ContentSpawnLayerData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentSpawnLayerData>()
{
	return FT4ContentSpawnLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentSpawnLayerData(FT4ContentSpawnLayerData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentSpawnLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnLayerData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentSpawnLayerData")),new UScriptStruct::TCppStructOps<FT4ContentSpawnLayerData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnLayerData;
	struct Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentSpawnAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ContentSpawnAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorldTimeTag;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentSpawnLayerData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #122\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
		{ "ToolTip", "#122" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ContentSpawnAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ContentSpawnAsset = { "ContentSpawnAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, ContentSpawnAsset), Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ContentSpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ContentSpawnAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_WorldTimeTag_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_WorldTimeTag = { "WorldTimeTag", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, WorldTimeTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_WorldTimeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_WorldTimeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnLayerData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ContentSpawnAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_WorldTimeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentSpawnLayerData",
		sizeof(FT4ContentSpawnLayerData),
		alignof(FT4ContentSpawnLayerData),
		Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentSpawnLayerData"), sizeof(FT4ContentSpawnLayerData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnLayerData_Hash() { return 2860518965U; }
	void UT4ContentBuildAsset::StaticRegisterNativesUT4ContentBuildAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentBuildAsset_NoRegister()
	{
		return UT4ContentBuildAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentBuildAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAutomation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAutomation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLayerArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentBuildAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Content/T4ContentBuildAsset.h" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "// #100, #103\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
		{ "ToolTip", "#100, #103" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentBuildAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_TestAutomation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_TestAutomation = { "TestAutomation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentBuildAsset, TestAutomation), Z_Construct_UScriptStruct_FT4EditorTestAutomationData, METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_TestAutomation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_TestAutomation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray = { "SpawnLayerArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentBuildAsset, SpawnLayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray_Inner = { "SpawnLayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ContentSpawnLayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_WorldDBKey_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentBuildAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_WorldDBKey = { "WorldDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentBuildAsset, WorldDBKey), Z_Construct_UScriptStruct_FT4WorldDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_WorldDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_WorldDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ContentBuildAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_TestAutomation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_SpawnLayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentBuildAsset_Statics::NewProp_WorldDBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentBuildAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentBuildAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentBuildAsset_Statics::ClassParams = {
		&UT4ContentBuildAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ContentBuildAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentBuildAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentBuildAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentBuildAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentBuildAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentBuildAsset, 3123499228);
	template<> T4GAMEDATA_API UClass* StaticClass<UT4ContentBuildAsset>()
	{
		return UT4ContentBuildAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentBuildAsset(Z_Construct_UClass_UT4ContentBuildAsset, &UT4ContentBuildAsset::StaticClass, TEXT("/Script/T4GameData"), TEXT("UT4ContentBuildAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentBuildAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ContentBuildAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif