// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/World/T4EnvironmentAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EnvironmentAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvTimeTagSetData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvTimeTagData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvPostProcessData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvBPSkySphereData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvSkyLightData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvDirectionalLightData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvDirectionalData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4BuiltInEasing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExponentialHeightFogData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WorldExploreAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FT4EnvTimeTagSetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvTimeTagSetData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvTimeTagSetData"), sizeof(FT4EnvTimeTagSetData), Get_Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvTimeTagSetData>()
{
	return FT4EnvTimeTagSetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvTimeTagSetData(FT4EnvTimeTagSetData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvTimeTagSetData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvTimeTagSetData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvTimeTagSetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvTimeTagSetData")),new UScriptStruct::TCppStructOps<FT4EnvTimeTagSetData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvTimeTagSetData;
	struct Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTagDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeTagDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeTagDatas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvTimeTagSetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas = { "TimeTagDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagSetData, TimeTagDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas_Inner = { "TimeTagDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EnvTimeTagData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::NewProp_TimeTagDatas_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvTimeTagSetData",
		sizeof(FT4EnvTimeTagSetData),
		alignof(FT4EnvTimeTagSetData),
		Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvTimeTagSetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvTimeTagSetData"), sizeof(FT4EnvTimeTagSetData), Get_Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvTimeTagSetData_Hash() { return 540621121U; }
class UScriptStruct* FT4EnvTimeTagData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvTimeTagData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvTimeTagData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvTimeTagData"), sizeof(FT4EnvTimeTagData), Get_Z_Construct_UScriptStruct_FT4EnvTimeTagData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvTimeTagData>()
{
	return FT4EnvTimeTagData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvTimeTagData(FT4EnvTimeTagData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvTimeTagData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvTimeTagData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvTimeTagData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvTimeTagData")),new UScriptStruct::TCppStructOps<FT4EnvTimeTagData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvTimeTagData;
	struct Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExponentialHeightFogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtmosphericFogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPSkySphereData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BPSkySphereData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkyLightData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalLightData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimeBlendCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimeBlendCurve_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvTimeTagData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_PostProcessData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_PostProcessData = { "PostProcessData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, PostProcessData), Z_Construct_UScriptStruct_FT4EnvPostProcessData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_PostProcessData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_PostProcessData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_ExponentialHeightFogData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_ExponentialHeightFogData = { "ExponentialHeightFogData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, ExponentialHeightFogData), Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_ExponentialHeightFogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_ExponentialHeightFogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_AtmosphericFogData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #97\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#97" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_AtmosphericFogData = { "AtmosphericFogData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, AtmosphericFogData), Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_AtmosphericFogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_AtmosphericFogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_BPSkySphereData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_BPSkySphereData = { "BPSkySphereData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, BPSkySphereData), Z_Construct_UScriptStruct_FT4EnvBPSkySphereData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_BPSkySphereData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_BPSkySphereData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_SkyLightData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_SkyLightData = { "SkyLightData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, SkyLightData), Z_Construct_UScriptStruct_FT4EnvSkyLightData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_SkyLightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_SkyLightData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalLightData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #93\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#93" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalLightData = { "DirectionalLightData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, DirectionalLightData), Z_Construct_UScriptStruct_FT4EnvDirectionalLightData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalLightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalLightData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #123\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#123" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalData = { "DirectionalData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, DirectionalData), Z_Construct_UScriptStruct_FT4EnvDirectionalData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve = { "TimeBlendCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, TimeBlendCurve), Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvTimeTagData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_PostProcessData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_ExponentialHeightFogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_AtmosphericFogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_BPSkySphereData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_SkyLightData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalLightData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_DirectionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_TimeBlendCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvTimeTagData",
		sizeof(FT4EnvTimeTagData),
		alignof(FT4EnvTimeTagData),
		Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvTimeTagData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvTimeTagData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvTimeTagData"), sizeof(FT4EnvTimeTagData), Get_Z_Construct_UScriptStruct_FT4EnvTimeTagData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvTimeTagData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvTimeTagData_Hash() { return 4253024317U; }
class UScriptStruct* FT4EnvPostProcessData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvPostProcessData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvPostProcessData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvPostProcessData"), sizeof(FT4EnvPostProcessData), Get_Z_Construct_UScriptStruct_FT4EnvPostProcessData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvPostProcessData>()
{
	return FT4EnvPostProcessData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvPostProcessData(FT4EnvPostProcessData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvPostProcessData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvPostProcessData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvPostProcessData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvPostProcessData")),new UScriptStruct::TCppStructOps<FT4EnvPostProcessData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvPostProcessData;
	struct Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #98\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvPostProcessData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendPostProcess \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendPostProcess \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvPostProcessData, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvPostProcessData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvPostProcessData), &Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvPostProcessData",
		sizeof(FT4EnvPostProcessData),
		alignof(FT4EnvPostProcessData),
		Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvPostProcessData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvPostProcessData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvPostProcessData"), sizeof(FT4EnvPostProcessData), Get_Z_Construct_UScriptStruct_FT4EnvPostProcessData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvPostProcessData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvPostProcessData_Hash() { return 72776062U; }
class UScriptStruct* FT4EnvExponentialHeightFogData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvExponentialHeightFogData"), sizeof(FT4EnvExponentialHeightFogData), Get_Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvExponentialHeightFogData>()
{
	return FT4EnvExponentialHeightFogData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvExponentialHeightFogData(FT4EnvExponentialHeightFogData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvExponentialHeightFogData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvExponentialHeightFogData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvExponentialHeightFogData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvExponentialHeightFogData")),new UScriptStruct::TCppStructOps<FT4EnvExponentialHeightFogData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvExponentialHeightFogData;
	struct Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondFogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondFogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvExponentialHeightFogData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvExponentialHeightFogData, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_SecondFogData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_SecondFogData = { "SecondFogData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvExponentialHeightFogData, SecondFogData), Z_Construct_UScriptStruct_FExponentialHeightFogData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_SecondFogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_SecondFogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvExponentialHeightFogData, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendExponentialHeightFog \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendExponentialHeightFog \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvExponentialHeightFogData, FogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvExponentialHeightFogData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvExponentialHeightFogData), &Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_SecondFogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_FogDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvExponentialHeightFogData",
		sizeof(FT4EnvExponentialHeightFogData),
		alignof(FT4EnvExponentialHeightFogData),
		Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvExponentialHeightFogData"), sizeof(FT4EnvExponentialHeightFogData), Get_Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvExponentialHeightFogData_Hash() { return 970476919U; }
class UScriptStruct* FT4EnvAtmosphericFogData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvAtmosphericFogData"), sizeof(FT4EnvAtmosphericFogData), Get_Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvAtmosphericFogData>()
{
	return FT4EnvAtmosphericFogData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvAtmosphericFogData(FT4EnvAtmosphericFogData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvAtmosphericFogData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvAtmosphericFogData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvAtmosphericFogData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvAtmosphericFogData")),new UScriptStruct::TCppStructOps<FT4EnvAtmosphericFogData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvAtmosphericFogData;
	struct Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n// https://docs.unrealengine.com/ko/Engine/Actors/FogEffects/AtmosphericFog/index.html\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#90\nhttps:docs.unrealengine.com/ko/Engine/Actors/FogEffects/AtmosphericFog/index.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvAtmosphericFogData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityOffset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityOffset = { "DensityOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvAtmosphericFogData, DensityOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityMultiplier_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvAtmosphericFogData, DensityMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_FogMultiplier_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_FogMultiplier = { "FogMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvAtmosphericFogData, FogMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_FogMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_FogMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_SunMultiplier_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendAtmosphericFog \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendAtmosphericFog \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_SunMultiplier = { "SunMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvAtmosphericFogData, SunMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_SunMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_SunMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvAtmosphericFogData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvAtmosphericFogData), &Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_DensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_FogMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_SunMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvAtmosphericFogData",
		sizeof(FT4EnvAtmosphericFogData),
		alignof(FT4EnvAtmosphericFogData),
		Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvAtmosphericFogData"), sizeof(FT4EnvAtmosphericFogData), Get_Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvAtmosphericFogData_Hash() { return 70568750U; }
class UScriptStruct* FT4EnvSkyLightData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvSkyLightData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvSkyLightData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvSkyLightData"), sizeof(FT4EnvSkyLightData), Get_Z_Construct_UScriptStruct_FT4EnvSkyLightData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvSkyLightData>()
{
	return FT4EnvSkyLightData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvSkyLightData(FT4EnvSkyLightData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvSkyLightData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvSkyLightData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvSkyLightData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvSkyLightData")),new UScriptStruct::TCppStructOps<FT4EnvSkyLightData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvSkyLightData;
	struct Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubemapPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CubemapPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvSkyLightData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvSkyLightData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvSkyLightData, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapResolution_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvSkyLightData, CubemapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapPtr_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #97\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#97" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapPtr = { "CubemapPtr", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvSkyLightData, CubemapPtr), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendSkyLight \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendSkyLight \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvSkyLightData, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_SourceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvSkyLightData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvSkyLightData), &Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_LightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_CubemapPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_SourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvSkyLightData",
		sizeof(FT4EnvSkyLightData),
		alignof(FT4EnvSkyLightData),
		Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvSkyLightData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvSkyLightData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvSkyLightData"), sizeof(FT4EnvSkyLightData), Get_Z_Construct_UScriptStruct_FT4EnvSkyLightData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvSkyLightData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvSkyLightData_Hash() { return 596247742U; }
class UScriptStruct* FT4EnvBPSkySphereData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvBPSkySphereData"), sizeof(FT4EnvBPSkySphereData), Get_Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvBPSkySphereData>()
{
	return FT4EnvBPSkySphereData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvBPSkySphereData(FT4EnvBPSkySphereData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvBPSkySphereData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvBPSkySphereData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvBPSkySphereData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvBPSkySphereData")),new UScriptStruct::TCppStructOps<FT4EnvBPSkySphereData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvBPSkySphereData;
	struct Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverallColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverallColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CloudColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizonColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizonColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZenithColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZenithColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColorsDeterminedBySunPosition_MetaData[];
#endif
		static void NewProp_bColorsDeterminedBySunPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColorsDeterminedBySunPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarsBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StarsBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloudOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloudSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #97\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#97" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvBPSkySphereData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_OverallColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_OverallColor = { "OverallColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, OverallColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_OverallColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_OverallColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudColor = { "CloudColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, CloudColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_HorizonColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_HorizonColor = { "HorizonColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, HorizonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_HorizonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_HorizonColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_ZenithColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_ZenithColor = { "ZenithColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, ZenithColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_ZenithColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_ZenithColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition_SetBit(void* Obj)
	{
		((FT4EnvBPSkySphereData*)Obj)->bColorsDeterminedBySunPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition = { "bColorsDeterminedBySunPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvBPSkySphereData), &Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_StarsBrightness_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_StarsBrightness = { "StarsBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, StarsBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_StarsBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_StarsBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudOpacity_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudOpacity = { "CloudOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, CloudOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudSpeed_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #98\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudSpeed = { "CloudSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, CloudSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_SunBrightness_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendBPSkySphere \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendBPSkySphere \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_SunBrightness = { "SunBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvBPSkySphereData, SunBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_SunBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_SunBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvBPSkySphereData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvBPSkySphereData), &Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_OverallColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_HorizonColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_ZenithColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bColorsDeterminedBySunPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_StarsBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_CloudSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_SunBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvBPSkySphereData",
		sizeof(FT4EnvBPSkySphereData),
		alignof(FT4EnvBPSkySphereData),
		Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvBPSkySphereData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvBPSkySphereData"), sizeof(FT4EnvBPSkySphereData), Get_Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvBPSkySphereData_Hash() { return 1815957622U; }
class UScriptStruct* FT4EnvDirectionalLightData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvDirectionalLightData"), sizeof(FT4EnvDirectionalLightData), Get_Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvDirectionalLightData>()
{
	return FT4EnvDirectionalLightData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvDirectionalLightData(FT4EnvDirectionalLightData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvDirectionalLightData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvDirectionalLightData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvDirectionalLightData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvDirectionalLightData")),new UScriptStruct::TCppStructOps<FT4EnvDirectionalLightData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvDirectionalLightData;
	struct Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #90\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvDirectionalLightData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvDirectionalLightData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendDirectionalLight \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendDirectionalLight \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvDirectionalLightData, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvDirectionalLightData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvDirectionalLightData), &Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_LightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvDirectionalLightData",
		sizeof(FT4EnvDirectionalLightData),
		alignof(FT4EnvDirectionalLightData),
		Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvDirectionalLightData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvDirectionalLightData"), sizeof(FT4EnvDirectionalLightData), Get_Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvDirectionalLightData_Hash() { return 761277760U; }
class UScriptStruct* FT4EnvDirectionalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EnvDirectionalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EnvDirectionalData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EnvDirectionalData"), sizeof(FT4EnvDirectionalData), Get_Z_Construct_UScriptStruct_FT4EnvDirectionalData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EnvDirectionalData>()
{
	return FT4EnvDirectionalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EnvDirectionalData(FT4EnvDirectionalData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EnvDirectionalData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvDirectionalData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EnvDirectionalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EnvDirectionalData")),new UScriptStruct::TCppStructOps<FT4EnvDirectionalData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EnvDirectionalData;
	struct Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #93\n" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EnvDirectionalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendDirectional \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
		{ "ToolTip", "#92 : \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 \xec\xb6\x94\xea\xb0\x80\xec\x8b\x9c FT4WorldEnvironmentControl::BlendDirectional \xea\xb5\xac\xed\x98\x84 \xed\x95\x84\xec\x9a\x94!!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EnvDirectionalData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FT4EnvDirectionalData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EnvDirectionalData), &Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EnvDirectionalData",
		sizeof(FT4EnvDirectionalData),
		alignof(FT4EnvDirectionalData),
		Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EnvDirectionalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EnvDirectionalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EnvDirectionalData"), sizeof(FT4EnvDirectionalData), Get_Z_Construct_UScriptStruct_FT4EnvDirectionalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EnvDirectionalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EnvDirectionalData_Hash() { return 2059157954U; }
	void UT4EnvironmentAsset::StaticRegisterNativesUT4EnvironmentAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister()
	{
		return UT4EnvironmentAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4EnvironmentAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWorldAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewWorldAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTagSetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeTagSetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EnvironmentAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EnvironmentAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "World/T4EnvironmentAsset.h" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_PreviewWorldAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_PreviewWorldAsset = { "PreviewWorldAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EnvironmentAsset, PreviewWorldAsset), Z_Construct_UClass_UT4WorldExploreAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_PreviewWorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_PreviewWorldAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_TimeTagSetData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "Time of Day" },
		{ "ModuleRelativePath", "Classes/World/T4EnvironmentAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_TimeTagSetData = { "TimeTagSetData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EnvironmentAsset, TimeTagSetData), Z_Construct_UScriptStruct_FT4EnvTimeTagSetData, METADATA_PARAMS(Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_TimeTagSetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_TimeTagSetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EnvironmentAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_PreviewWorldAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EnvironmentAsset_Statics::NewProp_TimeTagSetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EnvironmentAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EnvironmentAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EnvironmentAsset_Statics::ClassParams = {
		&UT4EnvironmentAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4EnvironmentAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4EnvironmentAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EnvironmentAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EnvironmentAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EnvironmentAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EnvironmentAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EnvironmentAsset, 2038381708);
	template<> T4ASSET_API UClass* StaticClass<UT4EnvironmentAsset>()
	{
		return UT4EnvironmentAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EnvironmentAsset(Z_Construct_UClass_UT4EnvironmentAsset, &UT4EnvironmentAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4EnvironmentAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EnvironmentAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4EnvironmentAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
