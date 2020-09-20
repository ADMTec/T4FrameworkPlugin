// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/Object/T4ItemServerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemServerObject() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ItemServerObject_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ItemServerObject();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ServerObjectBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4ItemServerObject::StaticRegisterNativesUT4ItemServerObject()
	{
	}
	UClass* Z_Construct_UClass_UT4ItemServerObject_NoRegister()
	{
		return UT4ItemServerObject::StaticClass();
	}
	struct Z_Construct_UClass_UT4ItemServerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ItemServerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ServerObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemServerObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainFrame/Server/Object/T4ItemServerObject.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4ItemServerObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ItemServerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ItemServerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ItemServerObject_Statics::ClassParams = {
		&UT4ItemServerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ItemServerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemServerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ItemServerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ItemServerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ItemServerObject, 2602898304);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4ItemServerObject>()
	{
		return UT4ItemServerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ItemServerObject(Z_Construct_UClass_UT4ItemServerObject, &UT4ItemServerObject::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4ItemServerObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ItemServerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
