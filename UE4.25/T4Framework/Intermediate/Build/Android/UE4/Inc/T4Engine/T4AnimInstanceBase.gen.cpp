// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/Animation/T4AnimInstanceBase.h"
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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimSetAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UT4AnimInstanceBase::execHandleOnAnimMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_InMontage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnAnimMontageEnded(Z_Param_InMontage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void UT4AnimInstanceBase::StaticRegisterNativesUT4AnimInstanceBase()
	{
		UClass* Class = UT4AnimInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnAnimMontageEnded", &UT4AnimInstanceBase::execHandleOnAnimMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics
	{
		struct T4AnimInstanceBase_eventHandleOnAnimMontageEnded_Parms
		{
			UAnimMontage* InMontage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((T4AnimInstanceBase_eventHandleOnAnimMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4AnimInstanceBase_eventHandleOnAnimMontageEnded_Parms), &Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::NewProp_InMontage = { "InMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AnimInstanceBase_eventHandleOnAnimMontageEnded_Parms, InMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::NewProp_InMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4AnimInstanceBase, nullptr, "HandleOnAnimMontageEnded", nullptr, nullptr, sizeof(T4AnimInstanceBase_eventHandleOnAnimMontageEnded_Parms), Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UT4AnimInstanceBase_NoRegister()
	{
		return UT4AnimInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSetAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4AnimInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4AnimInstanceBase_HandleOnAnimMontageEnded, "HandleOnAnimMontageEnded" }, // 2998729893
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "World/Actor/Animation/T4AnimInstanceBase.h" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_StateParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
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
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, AnimSequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_Key_KeyProp = { "AnimSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSequences_ValueProp = { "AnimSequences", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, BlendSpaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_Key_KeyProp = { "BlendSpaces_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_BlendSpaces_ValueProp = { "BlendSpaces", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Asset" },
		{ "Comment", "// #39\n" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, AnimMontages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_Key_KeyProp = { "AnimMontages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimMontages_ValueProp = { "AnimMontages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/World/Actor/Animation/T4AnimInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSetAsset = { "AnimSetAsset", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBase, AnimSetAsset), Z_Construct_UClass_UT4AnimSetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSetAsset_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBase_Statics::NewProp_AnimSetAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimInstanceBase_Statics::ClassParams = {
		&UT4AnimInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4AnimInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBase_Statics::PropPointers),
		0,
		0x008000A8u,
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
	IMPLEMENT_CLASS(UT4AnimInstanceBase, 645134482);
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
