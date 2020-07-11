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
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnActorData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnEntityData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4NPCDBKey();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameEnemyType();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentSpawnAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4GAMEDATA_API UClass* Z_Construct_UClass_UT4ContentBuildAsset_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnTestSettings, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PostureName_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Statics::NewProp_PostureName,
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
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnTestSettings_Hash() { return 572495853U; }
class UScriptStruct* FT4ContentSpawnActorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentSpawnActorData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentSpawnActorData"), sizeof(FT4ContentSpawnActorData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentSpawnActorData>()
{
	return FT4ContentSpawnActorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentSpawnActorData(FT4ContentSpawnActorData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentSpawnActorData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnActorData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnActorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentSpawnActorData")),new UScriptStruct::TCppStructOps<FT4ContentSpawnActorData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnActorData;
	struct Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnEntityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnEntityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentSpawnActorData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #122\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#122" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_SpawnEntityID_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_SpawnEntityID = { "SpawnEntityID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, SpawnEntityID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_SpawnEntityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_SpawnEntityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4ContentSpawnActorDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "FT4ContentSpawnActorDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnActorData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_SpawnEntityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentSpawnActorData",
		sizeof(FT4ContentSpawnActorData),
		alignof(FT4ContentSpawnActorData),
		Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnActorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentSpawnActorData"), sizeof(FT4ContentSpawnActorData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnActorData_Hash() { return 3540195995U; }
class UScriptStruct* FT4ContentSpawnEntityData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentSpawnEntityData"), sizeof(FT4ContentSpawnEntityData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentSpawnEntityData>()
{
	return FT4ContentSpawnEntityData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentSpawnEntityData(FT4ContentSpawnEntityData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentSpawnEntityData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnEntityData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnEntityData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentSpawnEntityData")),new UScriptStruct::TCppStructOps<FT4ContentSpawnEntityData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentSpawnEntityData;
	struct Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBehaviorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideBehaviorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NPCDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentSpawnEntityData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Hide" },
		{ "Comment", "// #122\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#122" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnEntityData, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnEntityData, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnEntityData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_OverrideBehaviorData_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_OverrideBehaviorData = { "OverrideBehaviorData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnEntityData, OverrideBehaviorData), Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_OverrideBehaviorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_OverrideBehaviorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_NPCDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_NPCDBKey = { "NPCDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnEntityData, NPCDBKey), Z_Construct_UScriptStruct_FT4NPCDBKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_NPCDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_NPCDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4ContentSpawnEntityDetails::CustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "FT4ContentSpawnEntityDetails::CustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentSpawnEntityData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_OverrideBehaviorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_NPCDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentSpawnEntityData",
		sizeof(FT4ContentSpawnEntityData),
		alignof(FT4ContentSpawnEntityData),
		Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentSpawnEntityData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentSpawnEntityData"), sizeof(FT4ContentSpawnEntityData), Get_Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentSpawnEntityData_Hash() { return 4040918288U; }
class UScriptStruct* FT4ContentOverrideBehaviorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEDATA_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData, Z_Construct_UPackage__Script_T4GameData(), TEXT("T4ContentOverrideBehaviorData"), sizeof(FT4ContentOverrideBehaviorData), Get_Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Hash());
	}
	return Singleton;
}
template<> T4GAMEDATA_API UScriptStruct* StaticStruct<FT4ContentOverrideBehaviorData>()
{
	return FT4ContentOverrideBehaviorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentOverrideBehaviorData(FT4ContentOverrideBehaviorData::StaticStruct, TEXT("/Script/T4GameData"), TEXT("T4ContentOverrideBehaviorData"), false, nullptr, nullptr);
static struct FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentOverrideBehaviorData
{
	FScriptStruct_T4GameData_StaticRegisterNativesFT4ContentOverrideBehaviorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentOverrideBehaviorData")),new UScriptStruct::TCppStructOps<FT4ContentOverrideBehaviorData>);
	}
} ScriptStruct_T4GameData_StaticRegisterNativesFT4ContentOverrideBehaviorData;
	struct Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleWaitTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleWaitTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RomaingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RomaingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensoryRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensoryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOrKeepAggroTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveOrKeepAggroTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAggressive_MetaData[];
#endif
		static void NewProp_bAggressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAggressive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_IdleWaitTimeSec_MetaData[];
#endif
		static void NewProp_bOverride_IdleWaitTimeSec_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_IdleWaitTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_JumpRate_MetaData[];
#endif
		static void NewProp_bOverride_JumpRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_JumpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RoamingRate_MetaData[];
#endif
		static void NewProp_bOverride_RoamingRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RoamingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RomaingRange_MetaData[];
#endif
		static void NewProp_bOverride_RomaingRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RomaingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SensoryRange_MetaData[];
#endif
		static void NewProp_bOverride_SensoryRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SensoryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AgentRadius_MetaData[];
#endif
		static void NewProp_bOverride_AgentRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData[];
#endif
		static void NewProp_bOverride_ActiveOrKeepAggroTimeSec_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ActiveOrKeepAggroTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Aggressive_MetaData[];
#endif
		static void NewProp_bOverride_Aggressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Aggressive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnemyType_MetaData[];
#endif
		static void NewProp_bOverride_EnemyType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnemyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #114\n// #114\n" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#114\n#114" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentOverrideBehaviorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #140\n" },
		{ "editcondition", "bOverride_JumpRate" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec = { "IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, IdleWaitTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_JumpRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_JumpRate" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_JumpRate = { "JumpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, JumpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RoamingRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_RoamingRate" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RoamingRate = { "RoamingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, RoamingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RomaingRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "editcondition", "bOverride_RomaingRange" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RomaingRange = { "RomaingRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, RomaingRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RomaingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RomaingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_SensoryRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : Agent \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\x8f Attack/Stop Distance \xec\x97\x90\xec\x84\x9c \xea\xb2\xb9\xec\xb9\x98\xec\xa7\x80 \xec\x95\x8a\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9 (WorldActor = BoundRadius)\n" },
		{ "editcondition", "bOverride_SensoryRange" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#114 : Agent \xed\x81\xac\xea\xb8\xb0 \xeb\xb0\x8f Attack/Stop Distance \xec\x97\x90\xec\x84\x9c \xea\xb2\xb9\xec\xb9\x98\xec\xa7\x80 \xec\x95\x8a\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9 (WorldActor = BoundRadius)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_SensoryRange = { "SensoryRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, SensoryRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "editcondition", "bOverride_AgentRadius" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, AgentRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "editcondition", "bOverride_ActiveOrKeepAggroTimeSec" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec = { "ActiveOrKeepAggroTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, ActiveOrKeepAggroTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #104\n" },
		{ "editcondition", "bOverride_Aggressive" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "#104" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bAggressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive = { "bAggressive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// Properties\n" },
		{ "editcondition", "bOverride_EnemyType" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentOverrideBehaviorData, EnemyType), Z_Construct_UEnum_T4GameData_ET4GameEnemyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #140\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "#140" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_IdleWaitTimeSec = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec = { "bOverride_IdleWaitTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_JumpRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate = { "bOverride_JumpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_RoamingRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate = { "bOverride_RoamingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_RomaingRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange = { "bOverride_RomaingRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_SensoryRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange = { "bOverride_SensoryRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_AgentRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius = { "bOverride_AgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_ActiveOrKeepAggroTimeSec = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec = { "bOverride_ActiveOrKeepAggroTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_Aggressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive = { "bOverride_Aggressive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// Override\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Override" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_SetBit(void* Obj)
	{
		((FT4ContentOverrideBehaviorData*)Obj)->bOverride_EnemyType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType = { "bOverride_EnemyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ContentOverrideBehaviorData), &Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_RomaingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_ActiveOrKeepAggroTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bAggressive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_EnemyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_IdleWaitTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_JumpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RoamingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_RomaingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_SensoryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_AgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_ActiveOrKeepAggroTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_Aggressive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::NewProp_bOverride_EnemyType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4GameData,
		nullptr,
		&NewStructOps,
		"T4ContentOverrideBehaviorData",
		sizeof(FT4ContentOverrideBehaviorData),
		alignof(FT4ContentOverrideBehaviorData),
		Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4GameData();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentOverrideBehaviorData"), sizeof(FT4ContentOverrideBehaviorData), Get_Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentOverrideBehaviorData_Hash() { return 4173567412U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnActorArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnEntityArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnEntityArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnEntityArray_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray = { "SpawnActorArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, SpawnActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray_Inner = { "SpawnActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ContentSpawnActorData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentSpawnAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray = { "SpawnEntityArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContentSpawnAsset, SpawnEntityArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray_Inner = { "SpawnEntityArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ContentSpawnEntityData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ContentSpawnAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_TestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_ContentBuildAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContentSpawnAsset_Statics::NewProp_SpawnEntityArray_Inner,
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
	IMPLEMENT_CLASS(UT4ContentSpawnAsset, 2715009381);
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
