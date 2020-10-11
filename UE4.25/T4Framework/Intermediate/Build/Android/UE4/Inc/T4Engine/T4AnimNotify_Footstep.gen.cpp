// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Animation/T4AnimNotify_Footstep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimNotify_Footstep() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimNotify_Footstep_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimNotify_Footstep();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4FootstepType();
// End Cross Module References
	void UT4AnimNotify_Footstep::StaticRegisterNativesUT4AnimNotify_Footstep()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimNotify_Footstep_NoRegister()
	{
		return UT4AnimNotify_Footstep::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimNotify_Footstep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "T4Footstep" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/T4AnimNotify_Footstep.h" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimNotify_Footstep.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimNotify_Footstep.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimNotify_Footstep, FootstepType), Z_Construct_UEnum_T4Engine_ET4FootstepType, METADATA_PARAMS(Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::NewProp_FootstepType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimNotify_Footstep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::ClassParams = {
		&UT4AnimNotify_Footstep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimNotify_Footstep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimNotify_Footstep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimNotify_Footstep, 2014646422);
	template<> T4ENGINE_API UClass* StaticClass<UT4AnimNotify_Footstep>()
	{
		return UT4AnimNotify_Footstep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimNotify_Footstep(Z_Construct_UClass_UT4AnimNotify_Footstep, &UT4AnimNotify_Footstep::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4AnimNotify_Footstep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimNotify_Footstep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
