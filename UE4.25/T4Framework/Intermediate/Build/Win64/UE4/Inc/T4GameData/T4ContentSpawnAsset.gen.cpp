// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4GameData/Classes/Content/T4ContentSpawnAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentSpawnAsset() {}
// Cross Module References
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings();
	UPackage* Z_Construct_UPackage__Script_T4GameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentBuildAsset_NoRegister();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnObjectData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnPrefabData();
// End Cross Module References
class UScriptStruct* FT4ContentSpawnTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentSpawnTestSettings"), sizeof(FT4ContentSpawnTestSettings), Get_Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentSpawnTestSettings>()
{
	return FT4ContentSpawnTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentSpawnTestSettings(FT4ContentSpawnTestSettings::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentSpawnTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnTestSettings
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentSpawnTestSettings")),new UScriptStruct::TCppStructOps<FT4ContentSpawnTestSettings>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnTestSettings;
	struct Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentSpawnTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnTestSettings, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnTestSettings, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnTestSettings, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_StanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_WeaponDBKeyName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_WeaponDBKeyName = { "WeaponDBKeyName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnTestSettings, WeaponDBKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_WeaponDBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_WeaponDBKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PlayerDBKeyName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PlayerDBKeyName = { "PlayerDBKeyName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnTestSettings, PlayerDBKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PlayerDBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PlayerDBKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_StanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_WeaponDBKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PlayerDBKeyName,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentSpawnTestSettings",
		sizeof(FT4ContentSpawnTestSettings),
		alignof(FT4ContentSpawnTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentSpawnTestSettings"), sizeof(FT4ContentSpawnTestSettings), Get_Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Hash() { return 511509870U; }
	void UT4ContentSpawnAsset::StaticRegisterNativesUT4ContentSpawnAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister()
	{
		return UT4ContentSpawnAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContentSpawnAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentBuildAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ContentBuildAsset;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContentSpawnAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Content/T4ContentSpawnAsset.h" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, TestSettings), Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_TestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ContentBuildAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ContentBuildAsset = { "ContentBuildAsset", nullptr, (EPropertyFlags)0x0014010800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, ContentBuildAsset), Z_Construct_UClass_UT4ContentBuildAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ContentBuildAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ContentBuildAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray = { "SpawnObjectArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, SpawnObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray_Inner = { "SpawnObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ContentSpawnObjectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray = { "SpawnPrefabArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, SpawnPrefabArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray_Inner = { "SpawnPrefabArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ContentSpawnPrefabData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ContentSpawnAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_TestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ContentBuildAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnPrefabArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContentSpawnAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContentSpawnAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::ClassParams = {
		&UT4ContentSpawnAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ContentSpawnAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContentSpawnAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContentSpawnAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContentSpawnAsset, 1411407407);
	template<> T4GAMEDATA_API UClass* StaticClass<UT4ContentSpawnAsset>()
	{
		return UT4ContentSpawnAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContentSpawnAsset(Z_Construct_UClass_UT4ContentSpawnAsset, &UT4ContentSpawnAsset::StaticClass, TEXT("/Script/T4GameData"), TEXT("UT4ContentSpawnAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContentSpawnAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ContentSpawnAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
