// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/World/T4WorldExploreAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldExploreAsset() {}
// Cross Module References
	T4ASSET_API UClass* Z_Construct_UClass_UT4WorldExploreAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WorldExploreAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4MapEntityAsset_NoRegister();
// End Cross Module References
	void UT4WorldExploreAsset::StaticRegisterNativesUT4WorldExploreAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldExploreAsset_NoRegister()
	{
		return UT4WorldExploreAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldExploreAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAutomation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAutomation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MapEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldExploreAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldExploreAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "World/T4WorldExploreAsset.h" },
		{ "ModuleRelativePath", "Classes/World/T4WorldExploreAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "// #100, #103\n" },
		{ "ModuleRelativePath", "Classes/World/T4WorldExploreAsset.h" },
		{ "ToolTip", "#100, #103" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldExploreAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_TestAutomation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/World/T4WorldExploreAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_TestAutomation = { "TestAutomation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldExploreAsset, TestAutomation), Z_Construct_UScriptStruct_FT4EditorTestAutomationData, METADATA_PARAMS(Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_TestAutomation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_TestAutomation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_MapEntityAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "DisplayName", "Map Entity Asset" },
		{ "ModuleRelativePath", "Classes/World/T4WorldExploreAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_MapEntityAsset = { "MapEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldExploreAsset, MapEntityAsset), Z_Construct_UClass_UT4MapEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_MapEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_MapEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4WorldExploreAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_TestAutomation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldExploreAsset_Statics::NewProp_MapEntityAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldExploreAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldExploreAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldExploreAsset_Statics::ClassParams = {
		&UT4WorldExploreAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4WorldExploreAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldExploreAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldExploreAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldExploreAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldExploreAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldExploreAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldExploreAsset, 4049989960);
	template<> T4ASSET_API UClass* StaticClass<UT4WorldExploreAsset>()
	{
		return UT4WorldExploreAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldExploreAsset(Z_Construct_UClass_UT4WorldExploreAsset, &UT4WorldExploreAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4WorldExploreAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldExploreAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4WorldExploreAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
