// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/T4WorldCharacterActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldCharacterActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldCharacterActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldCharacterActor();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkinnedMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ActorMovementComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister();
// End Cross Module References
	void AT4WorldCharacterActor::StaticRegisterNativesAT4WorldCharacterActor()
	{
	}
	UClass* Z_Construct_UClass_AT4WorldCharacterActor_NoRegister()
	{
		return AT4WorldCharacterActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldCharacterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPoseModularMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MasterPoseModularMeshes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MasterPoseModularMeshes_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterPoseModularMeshes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldCharacterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4WorldActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldCharacterActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "World/Actor/T4WorldCharacterActor.h" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldCharacterActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldCharacterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes = { "MasterPoseModularMeshes", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldCharacterActor, MasterPoseModularMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_Key_KeyProp = { "MasterPoseModularMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_ValueProp = { "MasterPoseModularMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UT4SkinnedMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldCharacterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldCharacterActor, SkeletalMeshComponent), Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_ActorMovementComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldCharacterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_ActorMovementComponent = { "ActorMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldCharacterActor, ActorMovementComponent), Z_Construct_UClass_UT4ActorMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_ActorMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_ActorMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldCharacterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldCharacterActor, CapsuleComponent), Z_Construct_UClass_UT4CapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldCharacterActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_MasterPoseModularMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_ActorMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldCharacterActor_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldCharacterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldCharacterActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldCharacterActor_Statics::ClassParams = {
		&AT4WorldCharacterActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4WorldCharacterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldCharacterActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldCharacterActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldCharacterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldCharacterActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldCharacterActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldCharacterActor, 338239030);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldCharacterActor>()
	{
		return AT4WorldCharacterActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldCharacterActor(Z_Construct_UClass_AT4WorldCharacterActor, &AT4WorldCharacterActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldCharacterActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldCharacterActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
