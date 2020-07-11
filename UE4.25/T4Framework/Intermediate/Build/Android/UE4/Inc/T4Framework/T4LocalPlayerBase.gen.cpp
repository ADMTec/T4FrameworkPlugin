// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Controller/Player/T4LocalPlayerBase.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4LocalPlayerBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4LocalPlayerBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4LocalPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4LocalPlayerBase::StaticRegisterNativesUT4LocalPlayerBase()
	{
	}
	UClass* Z_Construct_UClass_UT4LocalPlayerBase_NoRegister()
	{
		return UT4LocalPlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4LocalPlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4LocalPlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4LocalPlayerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #30\n */" },
		{ "IncludePath", "Controller/Player/T4LocalPlayerBase.h" },
		{ "ModuleRelativePath", "Classes/Controller/Player/T4LocalPlayerBase.h" },
		{ "ToolTip", "#30" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4LocalPlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4LocalPlayerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4LocalPlayerBase_Statics::ClassParams = {
		&UT4LocalPlayerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UT4LocalPlayerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4LocalPlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4LocalPlayerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4LocalPlayerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4LocalPlayerBase, 748535512);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4LocalPlayerBase>()
	{
		return UT4LocalPlayerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4LocalPlayerBase(Z_Construct_UClass_UT4LocalPlayerBase, &UT4LocalPlayerBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4LocalPlayerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4LocalPlayerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
