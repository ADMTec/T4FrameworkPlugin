// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Client/Mode/T4ControlModeHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ControlModeHandler() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ControlModeHandler_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ControlModeHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4ControlModeHandler::StaticRegisterNativesUT4ControlModeHandler()
	{
	}
	UClass* Z_Construct_UClass_UT4ControlModeHandler_NoRegister()
	{
		return UT4ControlModeHandler::StaticClass();
	}
	struct Z_Construct_UClass_UT4ControlModeHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ControlModeHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ControlModeHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainFrame/Client/Mode/T4ControlModeHandler.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Mode/T4ControlModeHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ControlModeHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ControlModeHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ControlModeHandler_Statics::ClassParams = {
		&UT4ControlModeHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ControlModeHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ControlModeHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ControlModeHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ControlModeHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ControlModeHandler, 713321085);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4ControlModeHandler>()
	{
		return UT4ControlModeHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ControlModeHandler(Z_Construct_UClass_UT4ControlModeHandler, &UT4ControlModeHandler::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4ControlModeHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ControlModeHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
