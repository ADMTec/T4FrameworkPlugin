// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/Animation/Animal/Basic/T4AnimalBasicAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimalBasicAnimInstance() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimalBasicAnimInstance_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimalBasicAnimInstance();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBase();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables();
// End Cross Module References
	void UT4AnimalBasicAnimInstance::StaticRegisterNativesUT4AnimalBasicAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimalBasicAnimInstance_NoRegister()
	{
		return UT4AnimalBasicAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * https://docs.unrealengine.com/ko-kr/Engine/Animation\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "World/Actor/Animation/Animal/Basic/T4AnimalBasicAnimInstance.h" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Animal/Basic/T4AnimalBasicAnimInstance.h" },
		{ "ToolTip", "https://docs.unrealengine.com/ko-kr/Engine/Animation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::NewProp_MovementVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Animal/Basic/T4AnimalBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::NewProp_MovementVariables = { "MovementVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimalBasicAnimInstance, MovementVariables), Z_Construct_UScriptStruct_FT4MovementAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::NewProp_MovementVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::NewProp_MovementVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::NewProp_MovementVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimalBasicAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::ClassParams = {
		&UT4AnimalBasicAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimalBasicAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimalBasicAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimalBasicAnimInstance, 1040538768);
	template<> T4ENGINE_API UClass* StaticClass<UT4AnimalBasicAnimInstance>()
	{
		return UT4AnimalBasicAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimalBasicAnimInstance(Z_Construct_UClass_UT4AnimalBasicAnimInstance, &UT4AnimalBasicAnimInstance::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4AnimalBasicAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimalBasicAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
