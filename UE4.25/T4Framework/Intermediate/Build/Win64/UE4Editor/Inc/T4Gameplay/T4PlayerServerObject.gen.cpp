// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/Object/T4PlayerServerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerServerObject() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4PlayerServerObject_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4PlayerServerObject();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ServerObjectBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4PlayerServerObject::StaticRegisterNativesUT4PlayerServerObject()
	{
	}
	UClass* Z_Construct_UClass_UT4PlayerServerObject_NoRegister()
	{
		return UT4PlayerServerObject::StaticClass();
	}
	struct Z_Construct_UClass_UT4PlayerServerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PlayerServerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ServerObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PlayerServerObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// #161\n" },
		{ "IncludePath", "MainFrame/Server/Object/T4PlayerServerObject.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Server/Object/T4PlayerServerObject.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PlayerServerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PlayerServerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PlayerServerObject_Statics::ClassParams = {
		&UT4PlayerServerObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PlayerServerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PlayerServerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PlayerServerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PlayerServerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PlayerServerObject, 1998579646);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4PlayerServerObject>()
	{
		return UT4PlayerServerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PlayerServerObject(Z_Construct_UClass_UT4PlayerServerObject, &UT4PlayerServerObject::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4PlayerServerObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PlayerServerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
