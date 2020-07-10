// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/System/Context/Preview/T4WorldPreviewFloorMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldPreviewFloorMeshActor() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4WorldPreviewFloorMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AT4WorldPreviewFloorMeshActor::StaticRegisterNativesAT4WorldPreviewFloorMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_NoRegister()
	{
		return AT4WorldPreviewFloorMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/System/Context/Preview/T4WorldPreviewFloorMeshActor.h" },
		{ "ModuleRelativePath", "Private/World/System/Context/Preview/T4WorldPreviewFloorMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::NewProp_FloorMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/World/System/Context/Preview/T4WorldPreviewFloorMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::NewProp_FloorMeshComponent = { "FloorMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4WorldPreviewFloorMeshActor, FloorMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::NewProp_FloorMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::NewProp_FloorMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::NewProp_FloorMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4WorldPreviewFloorMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::ClassParams = {
		&AT4WorldPreviewFloorMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4WorldPreviewFloorMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4WorldPreviewFloorMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4WorldPreviewFloorMeshActor, 2015217633);
	template<> T4ENGINE_API UClass* StaticClass<AT4WorldPreviewFloorMeshActor>()
	{
		return AT4WorldPreviewFloorMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4WorldPreviewFloorMeshActor(Z_Construct_UClass_AT4WorldPreviewFloorMeshActor, &AT4WorldPreviewFloorMeshActor::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4WorldPreviewFloorMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4WorldPreviewFloorMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
