// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4HumanBasicAnimInstance() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4HumanBasicAnimInstance_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4HumanBasicAnimInstance();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBase();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4IKAnimVariables();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StateAnimVariables();
// End Cross Module References
	void UT4HumanBasicAnimInstance::StaticRegisterNativesUT4HumanBasicAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UT4HumanBasicAnimInstance_NoRegister()
	{
		return UT4HumanBasicAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StanceVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * https://docs.unrealengine.com/ko-kr/Engine/Animation\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h" },
		{ "ToolTip", "https://docs.unrealengine.com/ko-kr/Engine/Animation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StanceVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StanceVariables = { "StanceVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanBasicAnimInstance, StanceVariables), Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StanceVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StanceVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_IKVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_IKVariables = { "IKVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanBasicAnimInstance, IKVariables), Z_Construct_UScriptStruct_FT4IKAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_IKVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_IKVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_MovementVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_MovementVariables = { "MovementVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanBasicAnimInstance, MovementVariables), Z_Construct_UScriptStruct_FT4MovementAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_MovementVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_MovementVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StateVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/Basic/T4HumanBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StateVariables = { "StateVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4HumanBasicAnimInstance, StateVariables), Z_Construct_UScriptStruct_FT4StateAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StateVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StateVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StanceVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_IKVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_MovementVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::NewProp_StateVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4HumanBasicAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::ClassParams = {
		&UT4HumanBasicAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4HumanBasicAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4HumanBasicAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4HumanBasicAnimInstance, 1123133935);
	template<> T4ENGINE_API UClass* StaticClass<UT4HumanBasicAnimInstance>()
	{
		return UT4HumanBasicAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4HumanBasicAnimInstance(Z_Construct_UClass_UT4HumanBasicAnimInstance, &UT4HumanBasicAnimInstance::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4HumanBasicAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4HumanBasicAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
