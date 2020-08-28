// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4PropEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PropEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropCompositeData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityImportSettingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropAnimationData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropMeshData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityAnimationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityMeshType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropPhysicalData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPhysicalData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PropEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PropEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActorEntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityPropCompositeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropCompositeData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPropCompositeData"), sizeof(FT4EntityPropCompositeData), Get_Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPropCompositeData>()
{
	return FT4EntityPropCompositeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropCompositeData(FT4EntityPropCompositeData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPropCompositeData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropCompositeData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropCompositeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropCompositeData")),new UScriptStruct::TCppStructOps<FT4EntityPropCompositeData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropCompositeData;
	struct Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rendering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #162\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "#162" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropCompositeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_ImportSettings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_ImportSettings = { "ImportSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropCompositeData, ImportSettings), Z_Construct_UScriptStruct_FT4EntityImportSettingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_ImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_ImportSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_Rendering_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_Rendering = { "Rendering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropCompositeData, Rendering), Z_Construct_UScriptStruct_FT4EntityPropRenderingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_Rendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_Rendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_AnimationData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropCompositeData, AnimationData), Z_Construct_UScriptStruct_FT4EntityPropAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_AnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_MeshData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropCompositeData, MeshData), Z_Construct_UScriptStruct_FT4EntityPropMeshData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_ImportSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_Rendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::NewProp_MeshData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPropCompositeData",
		sizeof(FT4EntityPropCompositeData),
		alignof(FT4EntityPropCompositeData),
		Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropCompositeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropCompositeData"), sizeof(FT4EntityPropCompositeData), Get_Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropCompositeData_Hash() { return 1558897412U; }
class UScriptStruct* FT4EntityPropAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropAnimationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPropAnimationData"), sizeof(FT4EntityPropAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPropAnimationData>()
{
	return FT4EntityPropAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropAnimationData(FT4EntityPropAnimationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPropAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropAnimationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropAnimationData")),new UScriptStruct::TCppStructOps<FT4EntityPropAnimationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropAnimationData;
	struct Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropAnimationData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityAnimationData,
		&NewStructOps,
		"T4EntityPropAnimationData",
		sizeof(FT4EntityPropAnimationData),
		alignof(FT4EntityPropAnimationData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropAnimationData"), sizeof(FT4EntityPropAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropAnimationData_Hash() { return 1231981778U; }
class UScriptStruct* FT4EntityPropMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPropMeshData"), sizeof(FT4EntityPropMeshData), Get_Z_Construct_UScriptStruct_FT4EntityPropMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPropMeshData>()
{
	return FT4EntityPropMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropMeshData(FT4EntityPropMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPropMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropMeshData")),new UScriptStruct::TCppStructOps<FT4EntityPropMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverlapEvent_MetaData[];
#endif
		static void NewProp_bUseOverlapEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverlapEvent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "#106" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent_SetBit(void* Obj)
	{
		((FT4EntityPropMeshData*)Obj)->bUseOverlapEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent = { "bUseOverlapEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityPropMeshData), &Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, ParticleSystemAsset), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_ParticleSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_ParticleSystemAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Override Material Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData = { "SkeletalMeshOverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, SkeletalMeshOverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Override Material Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData = { "StaticMeshOverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, StaticMeshOverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, StaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropMeshData, MeshType), Z_Construct_UEnum_T4Asset_ET4EntityMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_bUseOverlapEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_ParticleSystemAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshOverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_StaticMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::NewProp_MeshType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPropMeshData",
		sizeof(FT4EntityPropMeshData),
		alignof(FT4EntityPropMeshData),
		Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropMeshData"), sizeof(FT4EntityPropMeshData), Get_Z_Construct_UScriptStruct_FT4EntityPropMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropMeshData_Hash() { return 3177019719U; }
class UScriptStruct* FT4EntityPropRenderingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropRenderingData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPropRenderingData"), sizeof(FT4EntityPropRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPropRenderingData>()
{
	return FT4EntityPropRenderingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropRenderingData(FT4EntityPropRenderingData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPropRenderingData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropRenderingData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropRenderingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropRenderingData")),new UScriptStruct::TCppStructOps<FT4EntityPropRenderingData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropRenderingData;
	struct Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropRenderingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityRenderingData,
		&NewStructOps,
		"T4EntityPropRenderingData",
		sizeof(FT4EntityPropRenderingData),
		alignof(FT4EntityPropRenderingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropRenderingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropRenderingData"), sizeof(FT4EntityPropRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingData_Hash() { return 3627890534U; }
class UScriptStruct* FT4EntityPropPhysicalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropPhysicalData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPropPhysicalData"), sizeof(FT4EntityPropPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPropPhysicalData>()
{
	return FT4EntityPropPhysicalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropPhysicalData(FT4EntityPropPhysicalData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPropPhysicalData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropPhysicalData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropPhysicalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropPhysicalData")),new UScriptStruct::TCppStructOps<FT4EntityPropPhysicalData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPropPhysicalData;
	struct Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverAffectNavigation_MetaData[];
#endif
		static void NewProp_bCanEverAffectNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverAffectNavigation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropPhysicalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "// CustomizePropEntityDetails // #126\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "ToolTip", "CustomizePropEntityDetails  #126" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation_SetBit(void* Obj)
	{
		((FT4EntityPropPhysicalData*)Obj)->bCanEverAffectNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation = { "bCanEverAffectNavigation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityPropPhysicalData), &Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::NewProp_bCanEverAffectNavigation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityPhysicalData,
		&NewStructOps,
		"T4EntityPropPhysicalData",
		sizeof(FT4EntityPropPhysicalData),
		alignof(FT4EntityPropPhysicalData),
		Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropPhysicalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropPhysicalData"), sizeof(FT4EntityPropPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalData_Hash() { return 1878495640U; }
	void UT4PropEntityAsset::StaticRegisterNativesUT4PropEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4PropEntityAsset_NoRegister()
	{
		return UT4PropEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4PropEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Physical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompositeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCompositeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PropEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ActorEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4PropEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical = { "Physical", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PropEntityAsset, Physical), Z_Construct_UScriptStruct_FT4EntityPropPhysicalData, METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_DefaultCompositeData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_DefaultCompositeData = { "DefaultCompositeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PropEntityAsset, DefaultCompositeData), Z_Construct_UScriptStruct_FT4EntityPropCompositeData, METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_DefaultCompositeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_DefaultCompositeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4PropEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_DefaultCompositeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PropEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PropEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PropEntityAsset_Statics::ClassParams = {
		&UT4PropEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4PropEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PropEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PropEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PropEntityAsset, 2698883980);
	template<> T4ASSET_API UClass* StaticClass<UT4PropEntityAsset>()
	{
		return UT4PropEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PropEntityAsset(Z_Construct_UClass_UT4PropEntityAsset, &UT4PropEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4PropEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PropEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4PropEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
