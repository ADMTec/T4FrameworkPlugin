// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4GoodsEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GoodsEntityAsset() {}
// Cross Module References
	T4ASSET_API UClass* Z_Construct_UClass_UT4GoodsEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4GoodsEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
// End Cross Module References
	void UT4GoodsEntityAsset::StaticRegisterNativesUT4GoodsEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4GoodsEntityAsset_NoRegister()
	{
		return UT4GoodsEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4GoodsEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4GoodsEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ItemEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4GoodsEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4GoodsEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4GoodsEntityAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4GoodsEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4GoodsEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4GoodsEntityAsset_Statics::ClassParams = {
		&UT4GoodsEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4GoodsEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4GoodsEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4GoodsEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4GoodsEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4GoodsEntityAsset, 3558268120);
	template<> T4ASSET_API UClass* StaticClass<UT4GoodsEntityAsset>()
	{
		return UT4GoodsEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4GoodsEntityAsset(Z_Construct_UClass_UT4GoodsEntityAsset, &UT4GoodsEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4GoodsEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4GoodsEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4GoodsEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
