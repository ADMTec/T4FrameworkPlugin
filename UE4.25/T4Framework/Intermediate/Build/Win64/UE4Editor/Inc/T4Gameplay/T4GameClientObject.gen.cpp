// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Client/Object/T4GameClientObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameClientObject() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameClientObject_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameClientObject();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameObjectBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4GameClientObject::StaticRegisterNativesUT4GameClientObject()
	{
	}
	UClass* Z_Construct_UClass_UT4GameClientObject_NoRegister()
	{
		return UT4GameClientObject::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameClientObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameClientObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4GameObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameClientObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Client/Object/T4GameClientObject.h" },
		{ "ModuleRelativePath", "Private/Client/Object/T4GameClientObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameClientObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameClientObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameClientObject_Statics::ClassParams = {
		&UT4GameClientObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4GameClientObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameClientObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameClientObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameClientObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameClientObject, 3317808708);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4GameClientObject>()
	{
		return UT4GameClientObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameClientObject(Z_Construct_UClass_UT4GameClientObject, &UT4GameClientObject::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4GameClientObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameClientObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
