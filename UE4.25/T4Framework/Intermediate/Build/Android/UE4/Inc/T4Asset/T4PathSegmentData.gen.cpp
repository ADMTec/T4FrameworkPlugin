// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Data/T4PathSegmentData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PathSegmentData() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4PathSegment();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PathSegmentData_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PathSegmentData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FT4PathSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4PathSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PathSegment, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4PathSegment"), sizeof(FT4PathSegment), Get_Z_Construct_UScriptStruct_FT4PathSegment_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4PathSegment>()
{
	return FT4PathSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PathSegment(FT4PathSegment::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4PathSegment"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4PathSegment
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4PathSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PathSegment")),new UScriptStruct::TCppStructOps<FT4PathSegment>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4PathSegment;
	struct Z_Construct_UScriptStruct_FT4PathSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PathSegment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Data/T4PathSegmentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PathSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PathSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PathSegment_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Data/T4PathSegmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PathSegment_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PathSegment, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PathSegment_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PathSegment_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PathSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PathSegment_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PathSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4PathSegment",
		sizeof(FT4PathSegment),
		alignof(FT4PathSegment),
		Z_Construct_UScriptStruct_FT4PathSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PathSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PathSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PathSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PathSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PathSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PathSegment"), sizeof(FT4PathSegment), Get_Z_Construct_UScriptStruct_FT4PathSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PathSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PathSegment_Hash() { return 2935490244U; }
	void UT4PathSegmentData::StaticRegisterNativesUT4PathSegmentData()
	{
	}
	UClass* Z_Construct_UClass_UT4PathSegmentData_NoRegister()
	{
		return UT4PathSegmentData::StaticClass();
	}
	struct Z_Construct_UClass_UT4PathSegmentData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSegments_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PathSegmentData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PathSegmentData_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Data/T4PathSegmentData.h" },
		{ "ModuleRelativePath", "Classes/Data/T4PathSegmentData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Data/T4PathSegmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments = { "PathSegments", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PathSegmentData, PathSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments_Inner = { "PathSegments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4PathSegment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4PathSegmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PathSegmentData_Statics::NewProp_PathSegments_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PathSegmentData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PathSegmentData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PathSegmentData_Statics::ClassParams = {
		&UT4PathSegmentData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4PathSegmentData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4PathSegmentData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PathSegmentData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PathSegmentData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PathSegmentData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PathSegmentData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PathSegmentData, 1426167652);
	template<> T4ASSET_API UClass* StaticClass<UT4PathSegmentData>()
	{
		return UT4PathSegmentData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PathSegmentData(Z_Construct_UClass_UT4PathSegmentData, &UT4PathSegmentData::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4PathSegmentData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PathSegmentData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4PathSegmentData)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
