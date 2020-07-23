// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4BuiltinGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinGameMode() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinGameMode_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinGameMode();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AT4BuiltinGameMode::StaticRegisterNativesAT4BuiltinGameMode()
	{
	}
	UClass* Z_Construct_UClass_AT4BuiltinGameMode_NoRegister()
	{
		return AT4BuiltinGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AT4BuiltinGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidgetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidgetInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4BuiltinGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4BuiltinGameMode.h" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinGameMode_Statics::NewProp_UserWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4BuiltinGameMode_Statics::NewProp_UserWidgetInstance = { "UserWidgetInstance", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4BuiltinGameMode, UserWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinGameMode_Statics::NewProp_UserWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinGameMode_Statics::NewProp_UserWidgetInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4BuiltinGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4BuiltinGameMode_Statics::NewProp_UserWidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4BuiltinGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4BuiltinGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4BuiltinGameMode_Statics::ClassParams = {
		&AT4BuiltinGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4BuiltinGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4BuiltinGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4BuiltinGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4BuiltinGameMode, 144962067);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4BuiltinGameMode>()
	{
		return AT4BuiltinGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4BuiltinGameMode(Z_Construct_UClass_AT4BuiltinGameMode, &AT4BuiltinGameMode::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4BuiltinGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4BuiltinGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
