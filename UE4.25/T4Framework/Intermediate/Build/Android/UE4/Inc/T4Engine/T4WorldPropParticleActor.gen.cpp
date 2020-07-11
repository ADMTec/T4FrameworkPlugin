// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/T4WorldPropParticleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldPropParticleActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldPropParticleActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldPropParticleActor();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ParticleSystemComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4WorldPropParticleActor::execOnParticleSystemFinished)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_FinishedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParticleSystemFinished(Z_Param_FinishedComponent);
		P_NATIVE_END;
	}
	void AT4WorldPropParticleActor::StaticRegisterNativesAT4WorldPropParticleActor()
	{
		UClass* Class = AT4WorldPropParticleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnParticleSystemFinished", &AT4WorldPropParticleActor::execOnParticleSystemFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics
	{
		struct T4WorldPropParticleActor_eventOnParticleSystemFinished_Parms
		{
			UParticleSystemComponent* FinishedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::NewProp_FinishedComponent = { "FinishedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4WorldPropParticleActor_eventOnParticleSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::NewProp_FinishedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldPropParticleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4WorldPropParticleActor, nullptr, "OnParticleSystemFinished", nullptr, nullptr, sizeof(T4WorldPropParticleActor_eventOnParticleSystemFinished_Parms), Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AT4WorldPropParticleActor_NoRegister()
	{
		return AT4WorldPropParticleActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldPropParticleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnSystemFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostUpdateTickGroup_MetaData[];
#endif
		static void NewProp_bPostUpdateTickGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostUpdateTickGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldPropParticleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4WorldActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4WorldPropParticleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4WorldPropParticleActor_OnParticleSystemFinished, "OnParticleSystemFinished" }, // 2799714257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPropParticleActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "World/Actor/T4WorldPropParticleActor.h" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldPropParticleActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData[] = {
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldPropParticleActor.h" },
	};
#endif
	void Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((AT4WorldPropParticleActor*)Obj)->bDestroyOnSystemFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish = { "bDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AT4WorldPropParticleActor), &Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup_MetaData[] = {
		{ "Category", "Prop" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldPropParticleActor.h" },
	};
#endif
	void Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup_SetBit(void* Obj)
	{
		((AT4WorldPropParticleActor*)Obj)->bPostUpdateTickGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup = { "bPostUpdateTickGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AT4WorldPropParticleActor), &Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "Prop" },
		{ "Comment", "// #126 : \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4\xec\x9d\x80 Coll \xec\x9d\xb4 \xec\x97\x86\xec\x96\xb4 Capsule \xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldPropParticleActor.h" },
		{ "ToolTip", "#126 : \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4\xec\x9d\x80 Coll \xec\x9d\xb4 \xec\x97\x86\xec\x96\xb4 Capsule \xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\xb4\xec\xa4\x80\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldPropParticleActor, ParticleSystemComponent), Z_Construct_UClass_UT4ParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Prop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/Actor/T4WorldPropParticleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldPropParticleActor, CapsuleComponent), Z_Construct_UClass_UT4CapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldPropParticleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bDestroyOnSystemFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_bPostUpdateTickGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_ParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldPropParticleActor_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldPropParticleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldPropParticleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldPropParticleActor_Statics::ClassParams = {
		&AT4WorldPropParticleActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4WorldPropParticleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPropParticleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldPropParticleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldPropParticleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldPropParticleActor, 4232025480);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldPropParticleActor>()
	{
		return AT4WorldPropParticleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldPropParticleActor(Z_Construct_UClass_AT4WorldPropParticleActor, &AT4WorldPropParticleActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldPropParticleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldPropParticleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
