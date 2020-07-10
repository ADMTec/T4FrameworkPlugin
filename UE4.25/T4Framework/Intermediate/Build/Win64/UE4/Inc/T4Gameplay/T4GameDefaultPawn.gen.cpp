// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/Player/T4GameDefaultPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameDefaultPawn() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameDefaultPawn_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameDefaultPawn();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerDefaultPawnBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4GameDefaultPawn::StaticRegisterNativesAT4GameDefaultPawn()
	{
	}
	UClass* Z_Construct_UClass_AT4GameDefaultPawn_NoRegister()
	{
		return AT4GameDefaultPawn::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameDefaultPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameDefaultPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4PlayerDefaultPawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameDefaultPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/T4GameDefaultPawn.h" },
		{ "ModuleRelativePath", "Classes/Player/T4GameDefaultPawn.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameDefaultPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameDefaultPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameDefaultPawn_Statics::ClassParams = {
		&AT4GameDefaultPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameDefaultPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameDefaultPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameDefaultPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameDefaultPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameDefaultPawn, 492054871);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4GameDefaultPawn>()
	{
		return AT4GameDefaultPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameDefaultPawn(Z_Construct_UClass_AT4GameDefaultPawn, &AT4GameDefaultPawn::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4GameDefaultPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameDefaultPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
