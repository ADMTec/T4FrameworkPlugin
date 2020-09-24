// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFComposite_T4Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFComposite_T4Quest() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFComposite_T4Quest_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFComposite_T4Quest();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4QFComposite_T4Quest::StaticRegisterNativesUT4QFComposite_T4Quest()
	{
	}
	UClass* Z_Construct_UClass_UT4QFComposite_T4Quest_NoRegister()
	{
		return UT4QFComposite_T4Quest::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFComposite_T4Quest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTComposite_Sequence,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFComposite_T4Quest.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Quest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFComposite_T4Quest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::ClassParams = {
		&UT4QFComposite_T4Quest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFComposite_T4Quest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFComposite_T4Quest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFComposite_T4Quest, 1997843713);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFComposite_T4Quest>()
	{
		return UT4QFComposite_T4Quest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFComposite_T4Quest(Z_Construct_UClass_UT4QFComposite_T4Quest, &UT4QFComposite_T4Quest::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFComposite_T4Quest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFComposite_T4Quest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
