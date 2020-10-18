// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4GameSpawnAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameSpawnAsset() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnTestSettings();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnDefaultSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameSpawnAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameSpawnAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4GameProjectAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnObjectData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnPrefabData();
// End Cross Module References
class UScriptStruct* FT4SpawnTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SpawnTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SpawnTestSettings, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SpawnTestSettings"), sizeof(FT4SpawnTestSettings), Get_Z_Construct_UScriptStruct_FT4SpawnTestSettings_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SpawnTestSettings>()
{
	return FT4SpawnTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SpawnTestSettings(FT4SpawnTestSettings::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SpawnTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnTestSettings
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SpawnTestSettings")),new UScriptStruct::TCppStructOps<FT4SpawnTestSettings>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnTestSettings;
	struct Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDBKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponDBKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDBKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerDBKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SpawnTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnTestSettings, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_WeaponDBKeyName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_WeaponDBKeyName = { "WeaponDBKeyName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnTestSettings, WeaponDBKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_WeaponDBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_WeaponDBKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_PlayerDBKeyName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_PlayerDBKeyName = { "PlayerDBKeyName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnTestSettings, PlayerDBKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_PlayerDBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_PlayerDBKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_WeaponDBKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::NewProp_PlayerDBKeyName,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SpawnTestSettings",
		sizeof(FT4SpawnTestSettings),
		alignof(FT4SpawnTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SpawnTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SpawnTestSettings"), sizeof(FT4SpawnTestSettings), Get_Z_Construct_UScriptStruct_FT4SpawnTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SpawnTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SpawnTestSettings_Hash() { return 143710185U; }
class UScriptStruct* FT4SpawnDefaultSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4SpawnDefaultSettings"), sizeof(FT4SpawnDefaultSettings), Get_Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4SpawnDefaultSettings>()
{
	return FT4SpawnDefaultSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4SpawnDefaultSettings(FT4SpawnDefaultSettings::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4SpawnDefaultSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnDefaultSettings
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnDefaultSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4SpawnDefaultSettings")),new UScriptStruct::TCppStructOps<FT4SpawnDefaultSettings>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4SpawnDefaultSettings;
	struct Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartSpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartSpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
		{ "ToolTip", "#163" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4SpawnDefaultSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnRotation_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnRotation = { "StartSpawnRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnDefaultSettings, StartSpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnLocation_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnLocation = { "StartSpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4SpawnDefaultSettings, StartSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::NewProp_StartSpawnLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4SpawnDefaultSettings",
		sizeof(FT4SpawnDefaultSettings),
		alignof(FT4SpawnDefaultSettings),
		Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4SpawnDefaultSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4SpawnDefaultSettings"), sizeof(FT4SpawnDefaultSettings), Get_Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4SpawnDefaultSettings_Hash() { return 2550963761U; }
	void UT4GameSpawnAsset::StaticRegisterNativesUT4GameSpawnAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4GameSpawnAsset_NoRegister()
	{
		return UT4GameSpawnAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameSpawnAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameProjectAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GameProjectAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnObjectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnObjectArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnObjectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPrefabArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPrefabArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPrefabArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameSpawnAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Content/T4GameSpawnAsset.h" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameSpawnAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameSpawnAsset, TestSettings), Z_Construct_UScriptStruct_FT4SpawnTestSettings, METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_TestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_GameProjectAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_GameProjectAsset = { "GameProjectAsset", nullptr, (EPropertyFlags)0x0014010800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameSpawnAsset, GameProjectAsset), Z_Construct_UClass_UT4GameProjectAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_GameProjectAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_GameProjectAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray = { "SpawnObjectArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameSpawnAsset, SpawnObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray_Inner = { "SpawnObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4SpawnObjectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
		{ "ToolTip", "#163" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray = { "SpawnPrefabArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameSpawnAsset, SpawnPrefabArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray_Inner = { "SpawnPrefabArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4SpawnPrefabData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_DefaultSettings_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4GameSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_DefaultSettings = { "DefaultSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameSpawnAsset, DefaultSettings), Z_Construct_UScriptStruct_FT4SpawnDefaultSettings, METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_DefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_DefaultSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4GameSpawnAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_TestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_GameProjectAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_SpawnPrefabArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameSpawnAsset_Statics::NewProp_DefaultSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameSpawnAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameSpawnAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameSpawnAsset_Statics::ClassParams = {
		&UT4GameSpawnAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4GameSpawnAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameSpawnAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameSpawnAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameSpawnAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameSpawnAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameSpawnAsset, 3038567095);
	template<> T4GAMEDATA_API UClass* StaticClass<UT4GameSpawnAsset>()
	{
		return UT4GameSpawnAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameSpawnAsset(Z_Construct_UClass_UT4GameSpawnAsset, &UT4GameSpawnAsset::StaticClass, TEXT("/Script/T4GameData"), TEXT("UT4GameSpawnAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameSpawnAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4GameSpawnAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
