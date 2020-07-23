// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/Player/T4BuiltinPlayerDefaultPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinPlayerDefaultPawn() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerDefaultPawnBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void AT4BuiltinPlayerDefaultPawn::StaticRegisterNativesAT4BuiltinPlayerDefaultPawn()
	{
	}
	UClass* Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_NoRegister()
	{
		return AT4BuiltinPlayerDefaultPawn::StaticClass();
	}
	struct Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4PlayerDefaultPawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/T4BuiltinPlayerDefaultPawn.h" },
		{ "ModuleRelativePath", "Classes/Player/T4BuiltinPlayerDefaultPawn.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4BuiltinPlayerDefaultPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::ClassParams = {
		&AT4BuiltinPlayerDefaultPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4BuiltinPlayerDefaultPawn, 1997318386);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4BuiltinPlayerDefaultPawn>()
	{
		return AT4BuiltinPlayerDefaultPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4BuiltinPlayerDefaultPawn(Z_Construct_UClass_AT4BuiltinPlayerDefaultPawn, &AT4BuiltinPlayerDefaultPawn::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4BuiltinPlayerDefaultPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4BuiltinPlayerDefaultPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
