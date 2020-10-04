// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Client/Object/T4PlayerClientObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerClientObject() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4PlayerClientObject_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4PlayerClientObject();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4GameClientObject();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4PlayerClientObject::StaticRegisterNativesUT4PlayerClientObject()
	{
	}
	UClass* Z_Construct_UClass_UT4PlayerClientObject_NoRegister()
	{
		return UT4PlayerClientObject::StaticClass();
	}
	struct Z_Construct_UClass_UT4PlayerClientObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PlayerClientObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4GameClientObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PlayerClientObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #163\n */" },
		{ "IncludePath", "MainFrame/Client/Object/T4PlayerClientObject.h" },
		{ "ModuleRelativePath", "Private/MainFrame/Client/Object/T4PlayerClientObject.h" },
		{ "ToolTip", "#163" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PlayerClientObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PlayerClientObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PlayerClientObject_Statics::ClassParams = {
		&UT4PlayerClientObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PlayerClientObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PlayerClientObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PlayerClientObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PlayerClientObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PlayerClientObject, 1562425995);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4PlayerClientObject>()
	{
		return UT4PlayerClientObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PlayerClientObject(Z_Construct_UClass_UT4PlayerClientObject, &UT4PlayerClientObject::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4PlayerClientObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PlayerClientObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
