// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/Player/T4GameLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameLocalPlayer() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameLocalPlayer_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameLocalPlayer();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4LocalPlayerBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4GameLocalPlayer::StaticRegisterNativesUT4GameLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_UT4GameLocalPlayer_NoRegister()
	{
		return UT4GameLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4LocalPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html\n */" },
		{ "IncludePath", "Player/T4GameLocalPlayer.h" },
		{ "ModuleRelativePath", "Classes/Player/T4GameLocalPlayer.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameLocalPlayer_Statics::ClassParams = {
		&UT4GameLocalPlayer::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UT4GameLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameLocalPlayer, 2559761168);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4GameLocalPlayer>()
	{
		return UT4GameLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameLocalPlayer(Z_Construct_UClass_UT4GameLocalPlayer, &UT4GameLocalPlayer::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4GameLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
