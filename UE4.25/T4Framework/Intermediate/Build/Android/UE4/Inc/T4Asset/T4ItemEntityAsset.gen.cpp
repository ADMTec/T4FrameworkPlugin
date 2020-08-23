// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4ItemEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestItemData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemDropMeshData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityMeshType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemPhysicalData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPhysicalData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ItemEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset();
// End Cross Module References
class UScriptStruct* FT4EditorTestItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorTestItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorTestItemData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EditorTestItemData"), sizeof(FT4EditorTestItemData), Get_Z_Construct_UScriptStruct_FT4EditorTestItemData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EditorTestItemData>()
{
	return FT4EditorTestItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorTestItemData(FT4EditorTestItemData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EditorTestItemData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EditorTestItemData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EditorTestItemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorTestItemData")),new UScriptStruct::TCppStructOps<FT4EditorTestItemData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EditorTestItemData;
	struct Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentStanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentStanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentAnimSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParentEntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSpawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemSpawnType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemSpawnType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #107\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
		{ "ToolTip", "#107" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorTestItemData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentStanceName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentStanceName = { "ParentStanceName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorTestItemData, ParentStanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentStanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentStanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentAnimSetName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentAnimSetName = { "ParentAnimSetName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorTestItemData, ParentAnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentAnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentAnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentEntityAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentEntityAsset = { "ParentEntityAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorTestItemData, ParentEntityAsset), Z_Construct_UClass_UT4EntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType = { "ItemSpawnType", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorTestItemData, ItemSpawnType), Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentStanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentAnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ParentEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::NewProp_ItemSpawnType_Underlying,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EditorTestItemData",
		sizeof(FT4EditorTestItemData),
		alignof(FT4EditorTestItemData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorTestItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorTestItemData"), sizeof(FT4EditorTestItemData), Get_Z_Construct_UScriptStruct_FT4EditorTestItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorTestItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorTestItemData_Hash() { return 2605648043U; }
class UScriptStruct* FT4EntityItemDropMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityItemDropMeshData"), sizeof(FT4EntityItemDropMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityItemDropMeshData>()
{
	return FT4EntityItemDropMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemDropMeshData(FT4EntityItemDropMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityItemDropMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemDropMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemDropMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemDropMeshData")),new UScriptStruct::TCppStructOps<FT4EntityItemDropMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemDropMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleSystemAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshOverrideMaterialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshOverrideMaterialData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshOverrideMaterialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshOverrideMaterialData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemDropMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, ParticleSystemAsset), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_ParticleSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_ParticleSystemAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Override Material Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData = { "SkeletalMeshOverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, SkeletalMeshOverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Override Material Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData = { "StaticMeshOverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, StaticMeshOverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, StaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, MeshType), Z_Construct_UEnum_T4Asset_ET4EntityMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_ParticleSystemAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityItemDropMeshData",
		sizeof(FT4EntityItemDropMeshData),
		alignof(FT4EntityItemDropMeshData),
		Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemDropMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemDropMeshData"), sizeof(FT4EntityItemDropMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash() { return 2106029440U; }
class UScriptStruct* FT4EntityItemRenderingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemRenderingData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityItemRenderingData"), sizeof(FT4EntityItemRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityItemRenderingData>()
{
	return FT4EntityItemRenderingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemRenderingData(FT4EntityItemRenderingData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityItemRenderingData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemRenderingData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemRenderingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemRenderingData")),new UScriptStruct::TCppStructOps<FT4EntityItemRenderingData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemRenderingData;
	struct Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemRenderingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityRenderingData,
		&NewStructOps,
		"T4EntityItemRenderingData",
		sizeof(FT4EntityItemRenderingData),
		alignof(FT4EntityItemRenderingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemRenderingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemRenderingData"), sizeof(FT4EntityItemRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingData_Hash() { return 3499995373U; }
class UScriptStruct* FT4EntityItemPhysicalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemPhysicalData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityItemPhysicalData"), sizeof(FT4EntityItemPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityItemPhysicalData>()
{
	return FT4EntityItemPhysicalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemPhysicalData(FT4EntityItemPhysicalData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityItemPhysicalData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemPhysicalData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemPhysicalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemPhysicalData")),new UScriptStruct::TCppStructOps<FT4EntityItemPhysicalData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemPhysicalData;
	struct Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemPhysicalData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityPhysicalData,
		&NewStructOps,
		"T4EntityItemPhysicalData",
		sizeof(FT4EntityItemPhysicalData),
		alignof(FT4EntityItemPhysicalData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemPhysicalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemPhysicalData"), sizeof(FT4EntityItemPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalData_Hash() { return 839462621U; }
	void UT4ItemEntityAsset::StaticRegisterNativesUT4ItemEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ItemEntityAsset_NoRegister()
	{
		return UT4ItemEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ItemEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorTestItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorTestItemData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropMeshRendering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropMeshRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropMeshPhysical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropMeshPhysical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropMeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ItemEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4ItemEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_EditorTestItemData_MetaData[] = {
		{ "Category", "Editor" },
		{ "DisplayName", "Test" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_EditorTestItemData = { "EditorTestItemData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, EditorTestItemData), Z_Construct_UScriptStruct_FT4EditorTestItemData, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_EditorTestItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_EditorTestItemData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Rendering" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering = { "DropMeshRendering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, DropMeshRendering), Z_Construct_UScriptStruct_FT4EntityItemRenderingData, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Physical" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical = { "DropMeshPhysical", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, DropMeshPhysical), Z_Construct_UScriptStruct_FT4EntityItemPhysicalData, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Mesh Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData = { "DropMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, DropMeshData), Z_Construct_UScriptStruct_FT4EntityItemDropMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ItemEntityAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_EditorTestItemData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ItemEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ItemEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::ClassParams = {
		&UT4ItemEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ItemEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ItemEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ItemEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ItemEntityAsset, 938980303);
	template<> T4ASSET_API UClass* StaticClass<UT4ItemEntityAsset>()
	{
		return UT4ItemEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ItemEntityAsset(Z_Construct_UClass_UT4ItemEntityAsset, &UT4ItemEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4ItemEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ItemEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ItemEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
