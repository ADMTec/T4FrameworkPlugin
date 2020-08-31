// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4MapEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MapEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMapData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMapZoneData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MapThumbnailData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4MapEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4MapEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityMapData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityMapData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityMapData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityMapData"), sizeof(FT4EntityMapData), Get_Z_Construct_UScriptStruct_FT4EntityMapData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityMapData>()
{
	return FT4EntityMapData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityMapData(FT4EntityMapData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityMapData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMapData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMapData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityMapData")),new UScriptStruct::TCppStructOps<FT4EntityMapData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMapData;
	struct Z_Construct_UScriptStruct_FT4EntityMapData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeCameraRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeCameraRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityMapData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #150 : MapEntity \xec\x97\x90\xec\x84\x9c Save Camera Info \xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x84\xa4\xec\xa0\x95\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "#150 : MapEntity \xec\x97\x90\xec\x84\x9c Save Camera Info \xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x84\xa4\xec\xa0\x95" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraRotation = { "InitializeCameraRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapData, InitializeCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraLocation = { "InitializeCameraLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapData, InitializeCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_LevelAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_LevelAsset = { "LevelAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapData, LevelAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_LevelAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_LevelAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_InitializeCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapData_Statics::NewProp_LevelAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityMapData",
		sizeof(FT4EntityMapData),
		alignof(FT4EntityMapData),
		Z_Construct_UScriptStruct_FT4EntityMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMapData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityMapData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityMapData"), sizeof(FT4EntityMapData), Get_Z_Construct_UScriptStruct_FT4EntityMapData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityMapData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityMapData_Hash() { return 31333974U; }
class UScriptStruct* FT4EntityMapZoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityMapZoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityMapZoneData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityMapZoneData"), sizeof(FT4EntityMapZoneData), Get_Z_Construct_UScriptStruct_FT4EntityMapZoneData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityMapZoneData>()
{
	return FT4EntityMapZoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityMapZoneData(FT4EntityMapZoneData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityMapZoneData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMapZoneData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMapZoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityMapZoneData")),new UScriptStruct::TCppStructOps<FT4EntityMapZoneData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMapZoneData;
	struct Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentAsset;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ZoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityMapZoneData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_DebugColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_EnvironmentAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "#92" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_EnvironmentAsset = { "EnvironmentAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, EnvironmentAsset), Z_Construct_UClass_UT4EnvironmentAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_EnvironmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_EnvironmentAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendPriority_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendPriority = { "BlendPriority", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, BlendPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_ZoneName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMapZoneData, ZoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_ZoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_ZoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_DebugColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_EnvironmentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_BlendPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::NewProp_ZoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityMapZoneData",
		sizeof(FT4EntityMapZoneData),
		alignof(FT4EntityMapZoneData),
		Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMapZoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityMapZoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityMapZoneData"), sizeof(FT4EntityMapZoneData), Get_Z_Construct_UScriptStruct_FT4EntityMapZoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityMapZoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityMapZoneData_Hash() { return 4000648166U; }
class UScriptStruct* FT4MapThumbnailData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4MapThumbnailData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MapThumbnailData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4MapThumbnailData"), sizeof(FT4MapThumbnailData), Get_Z_Construct_UScriptStruct_FT4MapThumbnailData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4MapThumbnailData>()
{
	return FT4MapThumbnailData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MapThumbnailData(FT4MapThumbnailData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4MapThumbnailData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4MapThumbnailData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4MapThumbnailData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MapThumbnailData")),new UScriptStruct::TCppStructOps<FT4MapThumbnailData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4MapThumbnailData;
	struct Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RawImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RawImageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompressedImageData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedImageData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImageHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImageWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #118\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "#118" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MapThumbnailData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData_MetaData[] = {
		{ "Comment", "/** Image data bytes */" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "Image data bytes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData = { "RawImageData", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapThumbnailData, RawImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData_Inner = { "RawImageData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Compressed image data (serialized) */" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "Compressed image data (serialized)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData = { "CompressedImageData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapThumbnailData, CompressedImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData_Inner = { "CompressedImageData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageHeight_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Thumbnail height (serialized) */" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "Thumbnail height (serialized)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapThumbnailData, ImageHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageWidth_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Thumbnail width (serialized) */" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
		{ "ToolTip", "Thumbnail width (serialized)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageWidth = { "ImageWidth", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapThumbnailData, ImageWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_RawImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_CompressedImageData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::NewProp_ImageWidth,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4MapThumbnailData",
		sizeof(FT4MapThumbnailData),
		alignof(FT4MapThumbnailData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MapThumbnailData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MapThumbnailData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MapThumbnailData"), sizeof(FT4MapThumbnailData), Get_Z_Construct_UScriptStruct_FT4MapThumbnailData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MapThumbnailData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MapThumbnailData_Hash() { return 2478550247U; }
	void UT4MapEntityAsset::StaticRegisterNativesUT4MapEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4MapEntityAsset_NoRegister()
	{
		return UT4MapEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4MapEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapThumbnailDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapThumbnailDatas;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapThumbnailDatas_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapThumbnailDatas_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapZoneDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapZoneDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapZoneDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MapEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MapEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4MapEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas = { "MapThumbnailDatas", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MapEntityAsset, MapThumbnailDatas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_Key_KeyProp = { "MapThumbnailDatas_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_ValueProp = { "MapThumbnailDatas", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4MapThumbnailData, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas = { "MapZoneDatas", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MapEntityAsset, MapZoneDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas_Inner = { "MapZoneDatas", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityMapZoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4MapEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapData = { "MapData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MapEntityAsset, MapData), Z_Construct_UScriptStruct_FT4EntityMapData, METADATA_PARAMS(Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4MapEntityAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapThumbnailDatas_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapZoneDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MapEntityAsset_Statics::NewProp_MapData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MapEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MapEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4MapEntityAsset_Statics::ClassParams = {
		&UT4MapEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4MapEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4MapEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4MapEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MapEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MapEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4MapEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4MapEntityAsset, 3722389149);
	template<> T4ASSET_API UClass* StaticClass<UT4MapEntityAsset>()
	{
		return UT4MapEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4MapEntityAsset(Z_Construct_UClass_UT4MapEntityAsset, &UT4MapEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4MapEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MapEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4MapEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
