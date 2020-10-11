// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Animation/T4AnimNotify_Equipment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimNotify_Equipment() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimNotify_Equipment_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimNotify_Equipment();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4EquipmentType();
// End Cross Module References
	void UT4AnimNotify_Equipment::StaticRegisterNativesUT4AnimNotify_Equipment()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimNotify_Equipment_NoRegister()
	{
		return UT4AnimNotify_Equipment::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimNotify_Equipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipmentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "T4Equipment" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/T4AnimNotify_Equipment.h" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimNotify_Equipment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Classes/Animation/T4AnimNotify_Equipment.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimNotify_Equipment, EquipmentType), Z_Construct_UEnum_T4Engine_ET4EquipmentType, METADATA_PARAMS(Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::NewProp_EquipmentType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimNotify_Equipment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::ClassParams = {
		&UT4AnimNotify_Equipment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimNotify_Equipment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimNotify_Equipment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimNotify_Equipment, 2673583775);
	template<> T4ENGINE_API UClass* StaticClass<UT4AnimNotify_Equipment>()
	{
		return UT4AnimNotify_Equipment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimNotify_Equipment(Z_Construct_UClass_UT4AnimNotify_Equipment, &UT4AnimNotify_Equipment::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4AnimNotify_Equipment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimNotify_Equipment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
