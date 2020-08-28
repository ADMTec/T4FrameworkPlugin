// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4CostumeEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CostumeEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityItemCostumeMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityItemCostumeMeshData"), sizeof(FT4EntityItemCostumeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityItemCostumeMeshData>()
{
	return FT4EntityItemCostumeMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemCostumeMeshData(FT4EntityItemCostumeMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityItemCostumeMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemCostumeMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemCostumeMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemCostumeMeshData")),new UScriptStruct::TCppStructOps<FT4EntityItemCostumeMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemCostumeMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMaterialData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositePartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CompositePartName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletonAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemCostumeMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_OverrideMaterialData_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #72\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
		{ "ToolTip", "#72" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_OverrideMaterialData = { "OverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemCostumeMeshData, OverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_OverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_OverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_CompositePartName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #37\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_CompositePartName = { "CompositePartName", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemCostumeMeshData, CompositePartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_CompositePartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_CompositePartName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #39\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemCostumeMeshData, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletonAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletonAsset = { "SkeletonAsset", nullptr, (EPropertyFlags)0x0014010000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemCostumeMeshData, SkeletonAsset), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletonAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletonAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_OverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_CompositePartName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletonAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityItemCostumeMeshData",
		sizeof(FT4EntityItemCostumeMeshData),
		alignof(FT4EntityItemCostumeMeshData),
		Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemCostumeMeshData"), sizeof(FT4EntityItemCostumeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash() { return 1491310790U; }
	void UT4CostumeEntityAsset::StaticRegisterNativesUT4CostumeEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister()
	{
		return UT4CostumeEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4CostumeEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CostumeEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ItemEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4CostumeEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CostumeEntityAsset, MeshData), Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4CostumeEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CostumeEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CostumeEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CostumeEntityAsset_Statics::ClassParams = {
		&UT4CostumeEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4CostumeEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CostumeEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CostumeEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CostumeEntityAsset, 139724478);
	template<> T4ASSET_API UClass* StaticClass<UT4CostumeEntityAsset>()
	{
		return UT4CostumeEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CostumeEntityAsset(Z_Construct_UClass_UT4CostumeEntityAsset, &UT4CostumeEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4CostumeEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CostumeEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4CostumeEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
