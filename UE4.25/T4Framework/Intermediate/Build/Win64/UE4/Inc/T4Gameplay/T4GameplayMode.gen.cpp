// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4GameplayMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayMode() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayMode_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayMode();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4GameplayMode::StaticRegisterNativesAT4GameplayMode()
	{
	}
	UClass* Z_Construct_UClass_AT4GameplayMode_NoRegister()
	{
		return AT4GameplayMode::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameplayMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameplayMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameplayMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameplayMode.h" },
		{ "ModuleRelativePath", "Classes/T4GameplayMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameplayMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameplayMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameplayMode_Statics::ClassParams = {
		&AT4GameplayMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameplayMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameplayMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameplayMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameplayMode, 770674218);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4GameplayMode>()
	{
		return AT4GameplayMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameplayMode(Z_Construct_UClass_AT4GameplayMode, &AT4GameplayMode::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4GameplayMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameplayMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
