// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/HUD/T4GameHUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameHUDBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameHUDBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameHUDBase();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4GameHUDBase::StaticRegisterNativesAT4GameHUDBase()
	{
	}
	UClass* Z_Construct_UClass_AT4GameHUDBase_NoRegister()
	{
		return AT4GameHUDBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameHUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameHUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameHUDBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/T4GameHUDBase.h" },
		{ "ModuleRelativePath", "Classes/HUD/T4GameHUDBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameHUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameHUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameHUDBase_Statics::ClassParams = {
		&AT4GameHUDBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4GameHUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameHUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameHUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameHUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameHUDBase, 229117422);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4GameHUDBase>()
	{
		return AT4GameHUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameHUDBase(Z_Construct_UClass_AT4GameHUDBase, &AT4GameHUDBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4GameHUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameHUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
