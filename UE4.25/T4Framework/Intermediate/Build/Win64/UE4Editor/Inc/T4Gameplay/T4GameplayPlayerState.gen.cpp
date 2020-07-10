// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4GameplayPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayPlayerState() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayPlayerState_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4GameplayPlayerState::StaticRegisterNativesAT4GameplayPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AT4GameplayPlayerState_NoRegister()
	{
		return AT4GameplayPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameplayPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameplayPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameplayPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #144\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameplayPlayerState.h" },
		{ "ModuleRelativePath", "Classes/T4GameplayPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "#144" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameplayPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameplayPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameplayPlayerState_Statics::ClassParams = {
		&AT4GameplayPlayerState::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AT4GameplayPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameplayPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameplayPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameplayPlayerState, 2018163899);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4GameplayPlayerState>()
	{
		return AT4GameplayPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameplayPlayerState(Z_Construct_UClass_AT4GameplayPlayerState, &AT4GameplayPlayerState::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4GameplayPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameplayPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
