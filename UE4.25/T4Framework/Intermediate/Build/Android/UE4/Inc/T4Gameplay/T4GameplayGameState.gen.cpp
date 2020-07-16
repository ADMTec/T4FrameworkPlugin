// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4GameplayGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayGameState() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayGameState_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4GameplayGameState::StaticRegisterNativesAT4GameplayGameState()
	{
	}
	UClass* Z_Construct_UClass_AT4GameplayGameState_NoRegister()
	{
		return AT4GameplayGameState::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameplayGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameplayGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameplayGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #144\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameplayGameState.h" },
		{ "ModuleRelativePath", "Classes/T4GameplayGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "#144" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameplayGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameplayGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameplayGameState_Statics::ClassParams = {
		&AT4GameplayGameState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4GameplayGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameplayGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameplayGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameplayGameState, 3164922661);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4GameplayGameState>()
	{
		return AT4GameplayGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameplayGameState(Z_Construct_UClass_AT4GameplayGameState, &AT4GameplayGameState::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4GameplayGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameplayGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
