// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/T4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameModeBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4GameModeBase::StaticRegisterNativesAT4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AT4GameModeBase_NoRegister()
	{
		return AT4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameModeBase.h" },
		{ "ModuleRelativePath", "Classes/T4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameModeBase_Statics::ClassParams = {
		&AT4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameModeBase, 769552341);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4GameModeBase>()
	{
		return AT4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameModeBase(Z_Construct_UClass_AT4GameModeBase, &AT4GameModeBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
