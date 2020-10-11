// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Animation/T4AnimInstanceBase.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimInstanceBase() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBase_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UT4AnimInstanceBase::StaticRegisterNativesUT4AnimInstanceBase()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimInstanceBase_NoRegister()
	{
		return UT4AnimInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StateParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimSequences;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimSequences_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequences_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlendSpaces;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlendSpaces_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendSpaces_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimMontages;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimMontages_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontages_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/T4AnimInstanceBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimInstanceBase.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters = { "StateParameters", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, StateParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_Key_KeyProp = { "StateParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_ValueProp = { "StateParameters", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, AnimSequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_Key_KeyProp = { "AnimSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_ValueProp = { "AnimSequences", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, BlendSpaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_Key_KeyProp = { "BlendSpaces_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_ValueProp = { "BlendSpaces", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, AnimMontages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_Key_KeyProp = { "AnimMontages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_ValueProp = { "AnimMontages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimInstanceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::ClassParams = {
		&UT4AnimInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimInstanceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimInstanceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimInstanceBase, 3383427309);
	template<> T4ENGINE_API UClass* StaticClass<UT4AnimInstanceBase>()
	{
		return UT4AnimInstanceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimInstanceBase(Z_Construct_UClass_UT4AnimInstanceBase, &UT4AnimInstanceBase::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4AnimInstanceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimInstanceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
