// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/Player/UI/T4GameplayHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayHUD() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayHUD_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4GameplayHUD();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4HUDBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AT4GameplayHUD::StaticRegisterNativesAT4GameplayHUD()
	{
	}
	UClass* Z_Construct_UClass_AT4GameplayHUD_NoRegister()
	{
		return AT4GameplayHUD::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameplayHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameplayHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4HUDBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameplayHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Player/UI/T4GameplayHUD.h" },
		{ "ModuleRelativePath", "Classes/Player/UI/T4GameplayHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameplayHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Classes/Player/UI/T4GameplayHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4GameplayHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4GameplayHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4GameplayHUD_Statics::NewProp_CrosshairTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayHUD_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4GameplayHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4GameplayHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameplayHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameplayHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameplayHUD_Statics::ClassParams = {
		&AT4GameplayHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4GameplayHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameplayHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameplayHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameplayHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameplayHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameplayHUD, 1676615206);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4GameplayHUD>()
	{
		return AT4GameplayHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameplayHUD(Z_Construct_UClass_AT4GameplayHUD, &AT4GameplayHUD::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4GameplayHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameplayHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
