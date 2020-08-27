// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Settings/T4GameplayUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayUserSettings() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameplayUserSettings_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameplayUserSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4GameplayUserSettings::StaticRegisterNativesUT4GameplayUserSettings()
	{
	}
	UClass* Z_Construct_UClass_UT4GameplayUserSettings_NoRegister()
	{
		return UT4GameplayUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameplayUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCSpawnUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NPCSpawnUIDs;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NPCSpawnUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCSpawnUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PCSpawnUIDs;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PCSpawnUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTravelUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldTravelUIDs;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WorldTravelUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayContentUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayContentUIDs;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlayContentUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDBKeyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponDBKeyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponDBKeyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCDBKeyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NPCDBKeyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NPCDBKeyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDBKeyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerDBKeyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerDBKeyNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameplayUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/T4GameplayUserSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs_MetaData[] = {
		{ "Category", "HUD NPC Spawn UID" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs = { "NPCSpawnUIDs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, NPCSpawnUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs_Inner = { "NPCSpawnUIDs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs_MetaData[] = {
		{ "Category", "HUD PC Spawn UID" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs = { "PCSpawnUIDs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, PCSpawnUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs_Inner = { "PCSpawnUIDs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs_MetaData[] = {
		{ "Category", "HUD WorldTravel UID" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs = { "WorldTravelUIDs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, WorldTravelUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs_Inner = { "WorldTravelUIDs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs_MetaData[] = {
		{ "Category", "HUD PlayContent UID" },
		{ "Comment", "// #45\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
		{ "ToolTip", "#45" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs = { "PlayContentUIDs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, PlayContentUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs_Inner = { "PlayContentUIDs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames_MetaData[] = {
		{ "Category", "Equip Weapon (KEY 1 ~ 9)" },
		{ "Comment", "// #50\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
		{ "ToolTip", "#50" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames = { "WeaponDBKeyNames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, WeaponDBKeyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames_Inner = { "WeaponDBKeyNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames_MetaData[] = {
		{ "Category", "NPC QuickSpawn (CTRL + 1 ~ 9)" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames = { "NPCDBKeyNames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, NPCDBKeyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames_Inner = { "NPCDBKeyNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames_MetaData[] = {
		{ "Category", "Player QuickSpawn (ALT + 1 ~ 9)" },
		{ "Comment", "// Plugins/T4Framework/Config/DefaultT4Framework.ini\n" },
		{ "ModuleRelativePath", "Public/Settings/T4GameplayUserSettings.h" },
		{ "ToolTip", "Plugins/T4Framework/Config/DefaultT4Framework.ini" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames = { "PlayerDBKeyNames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4GameplayUserSettings, PlayerDBKeyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames_Inner = { "PlayerDBKeyNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4GameplayUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCSpawnUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PCSpawnUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WorldTravelUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayContentUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_WeaponDBKeyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_NPCDBKeyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4GameplayUserSettings_Statics::NewProp_PlayerDBKeyNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameplayUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameplayUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::ClassParams = {
		&UT4GameplayUserSettings::StaticClass,
		"T4Framework",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4GameplayUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameplayUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameplayUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameplayUserSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameplayUserSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameplayUserSettings, 2839284396);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4GameplayUserSettings>()
	{
		return UT4GameplayUserSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameplayUserSettings(Z_Construct_UClass_UT4GameplayUserSettings, &UT4GameplayUserSettings::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4GameplayUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameplayUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
