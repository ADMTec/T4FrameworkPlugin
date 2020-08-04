// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/T4WorldActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4WorldActor::execHandleOnHitOverlapOnlyServer)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InOverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_InOther);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InOtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InOtherBodyIndex);
		P_GET_UBOOL(Z_Param_bInFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InSweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHitOverlapOnlyServer(Z_Param_InOverlappedComp,Z_Param_InOther,Z_Param_InOtherComp,Z_Param_InOtherBodyIndex,Z_Param_bInFromSweep,Z_Param_Out_InSweepResult);
		P_NATIVE_END;
	}
	void AT4WorldActor::StaticRegisterNativesAT4WorldActor()
	{
		UClass* Class = AT4WorldActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnHitOverlapOnlyServer", &AT4WorldActor::execHandleOnHitOverlapOnlyServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics
	{
		struct T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms
		{
			UPrimitiveComponent* InOverlappedComp;
			AActor* InOther;
			UPrimitiveComponent* InOtherComp;
			int32 InOtherBodyIndex;
			bool bInFromSweep;
			FHitResult InSweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSweepResult;
		static void NewProp_bInFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InSweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InSweepResult = { "InSweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms, InSweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InSweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InSweepResult_MetaData)) };
	void Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_bInFromSweep_SetBit(void* Obj)
	{
		((T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms*)Obj)->bInFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_bInFromSweep = { "bInFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms), &Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_bInFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherBodyIndex = { "InOtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms, InOtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherComp = { "InOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms, InOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms, InOther), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOverlappedComp = { "InOverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms, InOverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InSweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_bInFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::NewProp_InOverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// #110\n// ~#68\n" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldActor.h" },
		{ "ToolTip", "#110\n~#68" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4WorldActor, nullptr, "HandleOnHitOverlapOnlyServer", nullptr, nullptr, sizeof(T4WorldActor_eventHandleOnHitOverlapOnlyServer_Parms), Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AT4WorldActor_NoRegister()
	{
		return AT4WorldActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDynamicInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialDynamicInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialDynamicInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4WorldActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4WorldActor_HandleOnHitOverlapOnlyServer, "HandleOnHitOverlapOnlyServer" }, // 1976977888
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WorldActor/T4WorldActor.h" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/WorldActor/T4WorldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances = { "MaterialDynamicInstances", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldActor, MaterialDynamicInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances_Inner = { "MaterialDynamicInstances", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldActor_Statics::NewProp_MaterialDynamicInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldActor_Statics::ClassParams = {
		&AT4WorldActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4WorldActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldActor, 4262660277);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldActor>()
	{
		return AT4WorldActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldActor(Z_Construct_UClass_AT4WorldActor, &AT4WorldActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
