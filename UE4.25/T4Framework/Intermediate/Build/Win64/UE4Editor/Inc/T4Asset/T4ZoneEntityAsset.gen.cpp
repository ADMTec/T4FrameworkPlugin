// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4ZoneEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ZoneEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityZoneData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityZoneDebugData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ZoneEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ZoneEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityZoneEnvironmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityZoneEnvironmentData"), sizeof(FT4EntityZoneEnvironmentData), Get_Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityZoneEnvironmentData>()
{
	return FT4EntityZoneEnvironmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityZoneEnvironmentData(FT4EntityZoneEnvironmentData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityZoneEnvironmentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneEnvironmentData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneEnvironmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityZoneEnvironmentData")),new UScriptStruct::TCppStructOps<FT4EntityZoneEnvironmentData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneEnvironmentData;
	struct Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityZoneEnvironmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::NewProp_EnvironmentAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::NewProp_EnvironmentAsset = { "EnvironmentAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneEnvironmentData, EnvironmentAsset), Z_Construct_UClass_UT4EnvironmentAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::NewProp_EnvironmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::NewProp_EnvironmentAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::NewProp_EnvironmentAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityZoneEnvironmentData",
		sizeof(FT4EntityZoneEnvironmentData),
		alignof(FT4EntityZoneEnvironmentData),
		Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityZoneEnvironmentData"), sizeof(FT4EntityZoneEnvironmentData), Get_Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData_Hash() { return 1080908657U; }
class UScriptStruct* FT4EntityZoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityZoneData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityZoneData"), sizeof(FT4EntityZoneData), Get_Z_Construct_UScriptStruct_FT4EntityZoneData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityZoneData>()
{
	return FT4EntityZoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityZoneData(FT4EntityZoneData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityZoneData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityZoneData")),new UScriptStruct::TCppStructOps<FT4EntityZoneData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneData;
	struct Z_Construct_UScriptStruct_FT4EntityZoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BrushType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BrushType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityZoneData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_DebugData_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_DebugData = { "DebugData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, DebugData), Z_Construct_UScriptStruct_FT4EntityZoneDebugData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_DebugData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_DebugData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "UIMax", "100000.0" },
		{ "UIMin", "1000.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "UIMax", "100000.0" },
		{ "UIMin", "1000.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, HalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_HalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "ToolTip", "#92" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType = { "BrushType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, BrushType), Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92, #93, #94 : Map \xec\x9d\x80 0~5 \xea\xb9\x8c\xec\xa7\x80, Dynamic \xec\x9d\x80 6 \xec\x9d\xb4\xec\x83\x81\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "ToolTip", "#92, #93, #94 : Map \xec\x9d\x80 0~5 \xea\xb9\x8c\xec\xa7\x80, Dynamic \xec\x9d\x80 6 \xec\x9d\xb4\xec\x83\x81" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendPriority_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "6" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "UIMax", "10" },
		{ "UIMin", "6" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendPriority = { "BlendPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneData, BlendPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_DebugData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BrushType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::NewProp_BlendPriority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityZoneData",
		sizeof(FT4EntityZoneData),
		alignof(FT4EntityZoneData),
		Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityZoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityZoneData"), sizeof(FT4EntityZoneData), Get_Z_Construct_UScriptStruct_FT4EntityZoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityZoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneData_Hash() { return 2134962976U; }
class UScriptStruct* FT4EntityZoneDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityZoneDebugData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityZoneDebugData"), sizeof(FT4EntityZoneDebugData), Get_Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityZoneDebugData>()
{
	return FT4EntityZoneDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityZoneDebugData(FT4EntityZoneDebugData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityZoneDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneDebugData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityZoneDebugData")),new UScriptStruct::TCppStructOps<FT4EntityZoneDebugData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityZoneDebugData;
	struct Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityZoneDebugData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugSegments_MetaData[] = {
		{ "Category", "Editor" },
		{ "ClampMin", "8" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "128" },
		{ "UIMin", "8" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugSegments = { "DebugSegments", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneDebugData, DebugSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityZoneDebugData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::NewProp_DebugColor,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityZoneDebugData",
		sizeof(FT4EntityZoneDebugData),
		alignof(FT4EntityZoneDebugData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityZoneDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityZoneDebugData"), sizeof(FT4EntityZoneDebugData), Get_Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityZoneDebugData_Hash() { return 1879151434U; }
	void UT4ZoneEntityAsset::StaticRegisterNativesUT4ZoneEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ZoneEntityAsset_NoRegister()
	{
		return UT4ZoneEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ZoneEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneEnvironmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoneEnvironmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoneData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ZoneEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ZoneEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4ZoneEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneEnvironmentData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneEnvironmentData = { "ZoneEnvironmentData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ZoneEntityAsset, ZoneEnvironmentData), Z_Construct_UScriptStruct_FT4EntityZoneEnvironmentData, METADATA_PARAMS(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneEnvironmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneEnvironmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4ZoneEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneData = { "ZoneData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ZoneEntityAsset, ZoneData), Z_Construct_UScriptStruct_FT4EntityZoneData, METADATA_PARAMS(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ZoneEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneEnvironmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ZoneEntityAsset_Statics::NewProp_ZoneData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ZoneEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ZoneEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ZoneEntityAsset_Statics::ClassParams = {
		&UT4ZoneEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ZoneEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ZoneEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ZoneEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ZoneEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ZoneEntityAsset, 2549913193);
	template<> T4ASSET_API UClass* StaticClass<UT4ZoneEntityAsset>()
	{
		return UT4ZoneEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ZoneEntityAsset(Z_Construct_UClass_UT4ZoneEntityAsset, &UT4ZoneEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4ZoneEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ZoneEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ZoneEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
