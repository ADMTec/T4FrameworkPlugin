// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Object/T4GameObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameObjectBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameObjectBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4GameObjectBase::StaticRegisterNativesUT4GameObjectBase()
	{
	}
	UClass* Z_Construct_UClass_UT4GameObjectBase_NoRegister()
	{
		return UT4GameObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4GameObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GameObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GameObjectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object/T4GameObjectBase.h" },
		{ "ModuleRelativePath", "Classes/Object/T4GameObjectBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GameObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GameObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GameObjectBase_Statics::ClassParams = {
		&UT4GameObjectBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4GameObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GameObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GameObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GameObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GameObjectBase, 3886442921);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4GameObjectBase>()
	{
		return UT4GameObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GameObjectBase(Z_Construct_UClass_UT4GameObjectBase, &UT4GameObjectBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4GameObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GameObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
