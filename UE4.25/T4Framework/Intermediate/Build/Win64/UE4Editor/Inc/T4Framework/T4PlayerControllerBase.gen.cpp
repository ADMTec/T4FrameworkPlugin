// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Controller/Player/T4PlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerControllerBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerControllerBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CameraComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SpringArmComponent_NoRegister();
// End Cross Module References
	void AT4PlayerControllerBase::StaticRegisterNativesAT4PlayerControllerBase()
	{
	}
	UClass* Z_Construct_UClass_AT4PlayerControllerBase_NoRegister()
	{
		return AT4PlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4PlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArmComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Controller/Player/T4PlayerControllerBase.h" },
		{ "ModuleRelativePath", "Classes/Controller/Player/T4PlayerControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Controller/Player/T4PlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PlayerControllerBase, CameraComponent), Z_Construct_UClass_UT4CameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraSpringArmComponent_MetaData[] = {
		{ "Comment", "// #114\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Controller/Player/T4PlayerControllerBase.h" },
		{ "ToolTip", "#114" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraSpringArmComponent = { "CameraSpringArmComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PlayerControllerBase, CameraSpringArmComponent), Z_Construct_UClass_UT4SpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraSpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraSpringArmComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4PlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PlayerControllerBase_Statics::NewProp_CameraSpringArmComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4PlayerControllerBase_Statics::ClassParams = {
		&AT4PlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4PlayerControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4PlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4PlayerControllerBase, 793577026);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4PlayerControllerBase>()
	{
		return AT4PlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4PlayerControllerBase(Z_Construct_UClass_AT4PlayerControllerBase, &AT4PlayerControllerBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4PlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
