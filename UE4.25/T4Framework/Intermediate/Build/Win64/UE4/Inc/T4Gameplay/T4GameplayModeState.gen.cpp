// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4GameplayModeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayModeState() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayModeState_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayModeState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4GameplayModeState::StaticRegisterNativesAT4GameplayModeState()
	{
	}
	UClass* Z_Construct_UClass_AT4GameplayModeState_NoRegister()
	{
		return AT4GameplayModeState::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameplayModeState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameplayModeState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameplayModeState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #144\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameplayModeState.h" },
		{ "ModuleRelativePath", "Classes/T4GameplayModeState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "#144" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameplayModeState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameplayModeState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameplayModeState_Statics::ClassParams = {
		&AT4GameplayModeState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameplayModeState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayModeState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameplayModeState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameplayModeState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameplayModeState, 380566021);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4GameplayModeState>()
	{
		return AT4GameplayModeState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameplayModeState(Z_Construct_UClass_AT4GameplayModeState, &AT4GameplayModeState::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4GameplayModeState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameplayModeState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
