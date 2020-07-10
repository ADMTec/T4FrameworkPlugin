// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/System/Context/Preview/T4WorldPreviewGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldPreviewGameMode() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldPreviewGameMode_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldPreviewGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void AT4WorldPreviewGameMode::StaticRegisterNativesAT4WorldPreviewGameMode()
	{
	}
	UClass* Z_Construct_UClass_AT4WorldPreviewGameMode_NoRegister()
	{
		return AT4WorldPreviewGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldPreviewGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #79\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "World/System/Context/Preview/T4WorldPreviewGameMode.h" },
		{ "ModuleRelativePath", "Private/World/System/Context/Preview/T4WorldPreviewGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "#79" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldPreviewGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::ClassParams = {
		&AT4WorldPreviewGameMode::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldPreviewGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldPreviewGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldPreviewGameMode, 2543809359);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldPreviewGameMode>()
	{
		return AT4WorldPreviewGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldPreviewGameMode(Z_Construct_UClass_AT4WorldPreviewGameMode, &AT4WorldPreviewGameMode::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldPreviewGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldPreviewGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
