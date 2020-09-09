// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4BuiltinGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinGameMode() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinGameMode_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinGameMode();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4BuiltinGameMode::StaticRegisterNativesAT4BuiltinGameMode()
	{
	}
	UClass* Z_Construct_UClass_AT4BuiltinGameMode_NoRegister()
	{
		return AT4BuiltinGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AT4BuiltinGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4BuiltinGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4BuiltinGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4BuiltinGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4BuiltinGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4BuiltinGameMode_Statics::ClassParams = {
		&AT4BuiltinGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4BuiltinGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4BuiltinGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4BuiltinGameMode, 314240426);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4BuiltinGameMode>()
	{
		return AT4BuiltinGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4BuiltinGameMode(Z_Construct_UClass_AT4BuiltinGameMode, &AT4BuiltinGameMode::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4BuiltinGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4BuiltinGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
