// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4WorldExplorer/Private/ViewModel/T4MapZoneTransientData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MapZoneTransientData() {}
// Cross Module References
	T4WORLDEXPLORER_API UScriptStruct* Z_Construct_UScriptStruct_FT4MapZoneTransientData();
	UPackage* Z_Construct_UPackage__Script_T4WorldExplorer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FT4MapZoneTransientData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4WORLDEXPLORER_API uint32 Get_Z_Construct_UScriptStruct_FT4MapZoneTransientData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MapZoneTransientData, Z_Construct_UPackage__Script_T4WorldExplorer(), TEXT("T4MapZoneTransientData"), sizeof(FT4MapZoneTransientData), Get_Z_Construct_UScriptStruct_FT4MapZoneTransientData_Hash());
	}
	return Singleton;
}
template<> T4WORLDEXPLORER_API UScriptStruct* StaticStruct<FT4MapZoneTransientData>()
{
	return FT4MapZoneTransientData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MapZoneTransientData(FT4MapZoneTransientData::StaticStruct, TEXT("/Script/T4WorldExplorer"), TEXT("T4MapZoneTransientData"), false, nullptr, nullptr);
static struct FScriptStruct_T4WorldExplorer_StaticRegisterNativesFT4MapZoneTransientData
{
	FScriptStruct_T4WorldExplorer_StaticRegisterNativesFT4MapZoneTransientData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MapZoneTransientData")),new UScriptStruct::TCppStructOps<FT4MapZoneTransientData>);
	}
} ScriptStruct_T4WorldExplorer_StaticRegisterNativesFT4MapZoneTransientData;
	struct Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
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
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MapZoneTransientData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "Comment", "// #90\n" },
		{ "DisplayName", "DebugColor" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
		{ "ToolTip", "#90" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_EnvironmentAsset_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "Comment", "// #92\n" },
		{ "DisplayName", "Environment Asset" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
		{ "ToolTip", "#92" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_EnvironmentAsset = { "EnvironmentAsset", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, EnvironmentAsset), Z_Construct_UClass_UT4EnvironmentAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_EnvironmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_EnvironmentAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "DisplayName", "Blend Out TimeSec" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "DisplayName", "Blend In TimeSec" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendPriority_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "ClampMin", "0" },
		{ "Comment", "// #92\n" },
		{ "DisplayName", "Blend Priority" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendPriority = { "BlendPriority", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, BlendPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "Comment", "// #92\n" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
		{ "ToolTip", "#92" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_ZoneName_MetaData[] = {
		{ "Category", "MapZoneData" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Private/ViewModel/T4MapZoneTransientData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MapZoneTransientData, ZoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_ZoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_ZoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_EnvironmentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_BlendPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::NewProp_ZoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
		nullptr,
		&NewStructOps,
		"T4MapZoneTransientData",
		sizeof(FT4MapZoneTransientData),
		alignof(FT4MapZoneTransientData),
		Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MapZoneTransientData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MapZoneTransientData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4WorldExplorer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MapZoneTransientData"), sizeof(FT4MapZoneTransientData), Get_Z_Construct_UScriptStruct_FT4MapZoneTransientData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MapZoneTransientData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MapZoneTransientData_Hash() { return 4017141044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
