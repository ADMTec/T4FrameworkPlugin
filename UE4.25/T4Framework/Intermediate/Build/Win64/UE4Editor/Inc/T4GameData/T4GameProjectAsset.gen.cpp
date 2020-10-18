// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4GameProjectAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameProjectAsset() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnLayerData();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4MapEntityAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameSpawnAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameProjectAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameProjectAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData();
// End Cross Module References
class UScriptStruct* FT4SpawnLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SpawnLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SpawnLayerData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SpawnLayerData"), sizeof(FT4SpawnLayerData), Get_Z_Construct_UScriptStruct_FT4SpawnLayerData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SpawnLayerData>()
{
	return FT4SpawnLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SpawnLayerData(FT4SpawnLayerData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SpawnLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnLayerData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SpawnLayerData")),new UScriptStruct::TCppStructOps<FT4SpawnLayerData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnLayerData;
	struct Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MapEntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorldTimeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SpawnAsset;
#endif // WITH_EDITORONLY_DATA
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SpawnLayerData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #122\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
		{ "ToolTip", "#122" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_MapEntityAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_MapEntityAsset = { "MapEntityAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, MapEntityAsset), Z_Construct_UClass_UT4MapEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_MapEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_MapEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_WorldTimeTag_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_WorldTimeTag = { "WorldTimeTag", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, WorldTimeTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_WorldTimeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_WorldTimeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_SpawnAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_SpawnAsset = { "SpawnAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, SpawnAsset), Z_Construct_UClass_UT4GameSpawnAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_SpawnAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_SpawnAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnLayerData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_MapEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_WorldTimeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_SpawnAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SpawnLayerData",
		sizeof(FT4SpawnLayerData),
		alignof(FT4SpawnLayerData),
		Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SpawnLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SpawnLayerData"), sizeof(FT4SpawnLayerData), Get_Z_Construct_UScriptStruct_FT4SpawnLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SpawnLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SpawnLayerData_Hash() { return 395823387U; }
	void UT4GameProjectAsset::StaticRegisterNativesUT4GameProjectAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4GameProjectAsset_NoRegister()
	{
		return UT4GameProjectAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameProjectAsset_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLayerArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProjectGameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameProjectAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameProjectAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Content/T4GameProjectAsset.h" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "// #100, #103\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
		{ "ToolTip", "#100, #103" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameProjectAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_TestAutomation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_TestAutomation = { "TestAutomation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameProjectAsset, TestAutomation), Z_Construct_UScriptStruct_FT4EditorTestAutomationData, METADATA_PARAMS(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_TestAutomation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_TestAutomation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #172 : \xec\x9d\xb4 Project \xea\xb0\x80 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 GameDB\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
		{ "ToolTip", "#172 : \xec\x9d\xb4 Project \xea\xb0\x80 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 GameDB" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray = { "SpawnLayerArray", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameProjectAsset, SpawnLayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray_Inner = { "SpawnLayerArray", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4SpawnLayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ProjectGameName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameProjectAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ProjectGameName = { "ProjectGameName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameProjectAsset, ProjectGameName), METADATA_PARAMS(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ProjectGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ProjectGameName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4GameProjectAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_TestAutomation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_SpawnLayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameProjectAsset_Statics::NewProp_ProjectGameName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameProjectAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameProjectAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameProjectAsset_Statics::ClassParams = {
		&UT4GameProjectAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UT4GameProjectAsset_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAsset_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameProjectAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameProjectAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameProjectAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameProjectAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameProjectAsset, 2298574162);
	template<> T4GAMEDATA_API UClass* StaticClass<UT4GameProjectAsset>()
	{
		return UT4GameProjectAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameProjectAsset(Z_Construct_UClass_UT4GameProjectAsset, &UT4GameProjectAsset::StaticClass, TEXT("/Script/T4GameData"), TEXT("UT4GameProjectAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameProjectAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4GameProjectAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
