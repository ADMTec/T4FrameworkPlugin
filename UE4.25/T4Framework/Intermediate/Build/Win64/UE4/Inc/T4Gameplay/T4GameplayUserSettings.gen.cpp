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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameplayUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameplayUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameplayUserSettings_Statics::ClassParams = {
		&UT4GameplayUserSettings::StaticClass,
		"T4Framework",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
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
	IMPLEMENT_CLASS(UT4GameplayUserSettings, 560938447);
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
