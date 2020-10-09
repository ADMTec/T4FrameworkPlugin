// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFComposite_T4Dialogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFComposite_T4Dialogue() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFComposite_T4Dialogue_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFComposite_T4Dialogue();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4TitleTextDBKey();
// End Cross Module References
	void UT4QFComposite_T4Dialogue::StaticRegisterNativesUT4QFComposite_T4Dialogue()
	{
	}
	UClass* Z_Construct_UClass_UT4QFComposite_T4Dialogue_NoRegister()
	{
		return UT4QFComposite_T4Dialogue::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TitleTextDBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTComposite_Sequence,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFComposite_T4Dialogue.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Dialogue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::NewProp_TitleTextDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFComposite_T4Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::NewProp_TitleTextDBKey = { "TitleTextDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFComposite_T4Dialogue, TitleTextDBKey), Z_Construct_UScriptStruct_FT4TitleTextDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::NewProp_TitleTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::NewProp_TitleTextDBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::NewProp_TitleTextDBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFComposite_T4Dialogue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::ClassParams = {
		&UT4QFComposite_T4Dialogue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFComposite_T4Dialogue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFComposite_T4Dialogue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFComposite_T4Dialogue, 1032210311);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFComposite_T4Dialogue>()
	{
		return UT4QFComposite_T4Dialogue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFComposite_T4Dialogue(Z_Construct_UClass_UT4QFComposite_T4Dialogue, &UT4QFComposite_T4Dialogue::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFComposite_T4Dialogue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFComposite_T4Dialogue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
