// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Data/T4PostProcessAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PostProcessAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4PostProcessData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PostProcessAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4PostProcessAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FT4PostProcessData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4PostProcessData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PostProcessData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4PostProcessData"), sizeof(FT4PostProcessData), Get_Z_Construct_UScriptStruct_FT4PostProcessData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4PostProcessData>()
{
	return FT4PostProcessData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PostProcessData(FT4PostProcessData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4PostProcessData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4PostProcessData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4PostProcessData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PostProcessData")),new UScriptStruct::TCppStructOps<FT4PostProcessData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4PostProcessData;
	struct Z_Construct_UScriptStruct_FT4PostProcessData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #98\n" },
		{ "ModuleRelativePath", "Classes/Data/T4PostProcessAsset.h" },
		{ "ToolTip", "#98" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PostProcessData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PostProcessData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PostProcessData_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Data/T4PostProcessAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PostProcessData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PostProcessData, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessData_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessData_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PostProcessData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PostProcessData_Statics::NewProp_Settings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PostProcessData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4PostProcessData",
		sizeof(FT4PostProcessData),
		alignof(FT4PostProcessData),
		Z_Construct_UScriptStruct_FT4PostProcessData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PostProcessData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PostProcessData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PostProcessData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PostProcessData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PostProcessData"), sizeof(FT4PostProcessData), Get_Z_Construct_UScriptStruct_FT4PostProcessData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PostProcessData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PostProcessData_Hash() { return 3357336857U; }
	void UT4PostProcessAsset::StaticRegisterNativesUT4PostProcessAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4PostProcessAsset_NoRegister()
	{
		return UT4PostProcessAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4PostProcessAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PostProcessAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PostProcessAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Data/T4PostProcessAsset.h" },
		{ "ModuleRelativePath", "Classes/Data/T4PostProcessAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PostProcessAsset_Statics::NewProp_PostProcessData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Data/T4PostProcessAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PostProcessAsset_Statics::NewProp_PostProcessData = { "PostProcessData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PostProcessAsset, PostProcessData), Z_Construct_UScriptStruct_FT4PostProcessData, METADATA_PARAMS(Z_Construct_UClass_UT4PostProcessAsset_Statics::NewProp_PostProcessData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PostProcessAsset_Statics::NewProp_PostProcessData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4PostProcessAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PostProcessAsset_Statics::NewProp_PostProcessData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PostProcessAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PostProcessAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PostProcessAsset_Statics::ClassParams = {
		&UT4PostProcessAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4PostProcessAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4PostProcessAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PostProcessAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PostProcessAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PostProcessAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PostProcessAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PostProcessAsset, 1735797828);
	template<> T4ASSET_API UClass* StaticClass<UT4PostProcessAsset>()
	{
		return UT4PostProcessAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PostProcessAsset(Z_Construct_UClass_UT4PostProcessAsset, &UT4PostProcessAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4PostProcessAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PostProcessAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4PostProcessAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
