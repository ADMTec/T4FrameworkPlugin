// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/Animation/T4AnimInstanceBaseImpl.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimInstanceBaseImpl() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBaseImpl_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBaseImpl();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBase();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimsetAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UT4AnimInstanceBaseImpl::execHandleOnAnimMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_InMontage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnAnimMontageEnded(Z_Param_InMontage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void UT4AnimInstanceBaseImpl::StaticRegisterNativesUT4AnimInstanceBaseImpl()
	{
		UClass* Class = UT4AnimInstanceBaseImpl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnAnimMontageEnded", &UT4AnimInstanceBaseImpl::execHandleOnAnimMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics
	{
		struct T4AnimInstanceBaseImpl_eventHandleOnAnimMontageEnded_Parms
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
	void Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((T4AnimInstanceBaseImpl_eventHandleOnAnimMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4AnimInstanceBaseImpl_eventHandleOnAnimMontageEnded_Parms), &Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::NewProp_InMontage = { "InMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AnimInstanceBaseImpl_eventHandleOnAnimMontageEnded_Parms, InMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::NewProp_InMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimInstanceBaseImpl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4AnimInstanceBaseImpl, nullptr, "HandleOnAnimMontageEnded", nullptr, nullptr, sizeof(T4AnimInstanceBaseImpl_eventHandleOnAnimMontageEnded_Parms), Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UT4AnimInstanceBaseImpl_NoRegister()
	{
		return UT4AnimInstanceBaseImpl::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimsetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimsetAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4AnimInstanceBaseImpl_HandleOnAnimMontageEnded, "HandleOnAnimMontageEnded" }, // 515067659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WorldActor/Animation/T4AnimInstanceBaseImpl.h" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimInstanceBaseImpl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::NewProp_AnimsetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimInstanceBaseImpl.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::NewProp_AnimsetAsset = { "AnimsetAsset", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimInstanceBaseImpl, AnimsetAsset), Z_Construct_UClass_UT4AnimsetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::NewProp_AnimsetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::NewProp_AnimsetAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::NewProp_AnimsetAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimInstanceBaseImpl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::ClassParams = {
		&UT4AnimInstanceBaseImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimInstanceBaseImpl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimInstanceBaseImpl, 2608345657);
	template<> T4ENGINE_API UClass* StaticClass<UT4AnimInstanceBaseImpl>()
	{
		return UT4AnimInstanceBaseImpl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimInstanceBaseImpl(Z_Construct_UClass_UT4AnimInstanceBaseImpl, &UT4AnimInstanceBaseImpl::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4AnimInstanceBaseImpl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimInstanceBaseImpl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
