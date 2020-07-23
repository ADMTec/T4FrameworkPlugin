// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/UI/T4BuiltinHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinHUD() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinHUD_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinHUD();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameHUDBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AT4BuiltinHUD::StaticRegisterNativesAT4BuiltinHUD()
	{
	}
	UClass* Z_Construct_UClass_AT4BuiltinHUD_NoRegister()
	{
		return AT4BuiltinHUD::StaticClass();
	}
	struct Z_Construct_UClass_AT4BuiltinHUD_Statics
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
	UObject* (*const Z_Construct_UClass_AT4BuiltinHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameHUDBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/T4BuiltinHUD.h" },
		{ "ModuleRelativePath", "Classes/UI/T4BuiltinHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Classes/UI/T4BuiltinHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4BuiltinHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4BuiltinHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinHUD_Statics::NewProp_CrosshairTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinHUD_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4BuiltinHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4BuiltinHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4BuiltinHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4BuiltinHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4BuiltinHUD_Statics::ClassParams = {
		&AT4BuiltinHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4BuiltinHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4BuiltinHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4BuiltinHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4BuiltinHUD, 3932294779);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4BuiltinHUD>()
	{
		return AT4BuiltinHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4BuiltinHUD(Z_Construct_UClass_AT4BuiltinHUD, &AT4BuiltinHUD::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4BuiltinHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4BuiltinHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
