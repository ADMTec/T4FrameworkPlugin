// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4WeaponEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WeaponEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityAnimationData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityMeshType();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityWeaponAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityWeaponAnimationData"), sizeof(FT4EntityWeaponAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityWeaponAnimationData>()
{
	return FT4EntityWeaponAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityWeaponAnimationData(FT4EntityWeaponAnimationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityWeaponAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityWeaponAnimationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityWeaponAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityWeaponAnimationData")),new UScriptStruct::TCppStructOps<FT4EntityWeaponAnimationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityWeaponAnimationData;
	struct Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #107\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#107" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityWeaponAnimationData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityAnimationData,
		&NewStructOps,
		"T4EntityWeaponAnimationData",
		sizeof(FT4EntityWeaponAnimationData),
		alignof(FT4EntityWeaponAnimationData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityWeaponAnimationData"), sizeof(FT4EntityWeaponAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData_Hash() { return 69612401U; }
class UScriptStruct* FT4EntityItemWeaponMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityItemWeaponMeshData"), sizeof(FT4EntityItemWeaponMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityItemWeaponMeshData>()
{
	return FT4EntityItemWeaponMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemWeaponMeshData(FT4EntityItemWeaponMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityItemWeaponMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemWeaponMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemWeaponMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemWeaponMeshData")),new UScriptStruct::TCppStructOps<FT4EntityItemWeaponMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityItemWeaponMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlapEvent_MetaData[];
#endif
		static void NewProp_bOverlapEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlapEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseAnimSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RelativeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPointName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipPointName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemWeaponMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#106" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent_SetBit(void* Obj)
	{
		((FT4EntityItemWeaponMeshData*)Obj)->bOverlapEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent = { "bOverlapEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityItemWeaponMeshData), &Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_UseAnimSetName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#108" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_UseAnimSetName = { "UseAnimSetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, UseAnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_UseAnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_UseAnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeScale_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#108" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, RelativeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #154\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#154" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#106" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_EquipPointName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_EquipPointName = { "EquipPointName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, EquipPointName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_EquipPointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_EquipPointName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, ParticleSystemAsset), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_ParticleSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_ParticleSystemAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Override Material Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData = { "SkeletalMeshOverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, SkeletalMeshOverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Override Material Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshOverrideMaterialData = { "StaticMeshOverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, StaticMeshOverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshOverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, StaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, MeshType), Z_Construct_UEnum_T4Asset_ET4EntityMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_bOverlapEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_UseAnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_RelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_EquipPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_ParticleSystemAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshOverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshOverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityItemWeaponMeshData",
		sizeof(FT4EntityItemWeaponMeshData),
		alignof(FT4EntityItemWeaponMeshData),
		Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemWeaponMeshData"), sizeof(FT4EntityItemWeaponMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash() { return 4158108965U; }
	void UT4WeaponEntityAsset::StaticRegisterNativesUT4WeaponEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister()
	{
		return UT4WeaponEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4WeaponEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WeaponEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ItemEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4WeaponEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_AnimationData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WeaponEntityAsset, AnimationData), Z_Construct_UScriptStruct_FT4EntityWeaponAnimationData, METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_AnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WeaponEntityAsset, MeshData), Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4WeaponEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WeaponEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WeaponEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WeaponEntityAsset_Statics::ClassParams = {
		&UT4WeaponEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4WeaponEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WeaponEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WeaponEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WeaponEntityAsset, 1840108423);
	template<> T4ASSET_API UClass* StaticClass<UT4WeaponEntityAsset>()
	{
		return UT4WeaponEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WeaponEntityAsset(Z_Construct_UClass_UT4WeaponEntityAsset, &UT4WeaponEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4WeaponEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WeaponEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4WeaponEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
