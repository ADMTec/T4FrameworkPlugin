// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/BehaviorFlow/T4BFComposite_T4Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BFComposite_T4Sequence() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BFComposite_T4Sequence_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BFComposite_T4Sequence();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4BFComposite_T4Sequence::StaticRegisterNativesUT4BFComposite_T4Sequence()
	{
	}
	UClass* Z_Construct_UClass_UT4BFComposite_T4Sequence_NoRegister()
	{
		return UT4BFComposite_T4Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTComposite_Sequence,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #167\n */" },
		{ "IncludePath", "BehaviorFlow/T4BFComposite_T4Sequence.h" },
		{ "ModuleRelativePath", "Classes/BehaviorFlow/T4BFComposite_T4Sequence.h" },
		{ "ToolTip", "#167" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BFComposite_T4Sequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::ClassParams = {
		&UT4BFComposite_T4Sequence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BFComposite_T4Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BFComposite_T4Sequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BFComposite_T4Sequence, 2154855945);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BFComposite_T4Sequence>()
	{
		return UT4BFComposite_T4Sequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BFComposite_T4Sequence(Z_Construct_UClass_UT4BFComposite_T4Sequence, &UT4BFComposite_T4Sequence::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BFComposite_T4Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BFComposite_T4Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
