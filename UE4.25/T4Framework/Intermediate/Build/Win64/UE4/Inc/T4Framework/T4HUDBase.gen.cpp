// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/T4HUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4HUDBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4HUDBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4HUDBase();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4HUDBase::StaticRegisterNativesAT4HUDBase()
	{
	}
	UClass* Z_Construct_UClass_AT4HUDBase_NoRegister()
	{
		return AT4HUDBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4HUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4HUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4HUDBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "T4HUDBase.h" },
		{ "ModuleRelativePath", "Classes/T4HUDBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4HUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4HUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4HUDBase_Statics::ClassParams = {
		&AT4HUDBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AT4HUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4HUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4HUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4HUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4HUDBase, 2448688886);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4HUDBase>()
	{
		return AT4HUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4HUDBase(Z_Construct_UClass_AT4HUDBase, &AT4HUDBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4HUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4HUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
