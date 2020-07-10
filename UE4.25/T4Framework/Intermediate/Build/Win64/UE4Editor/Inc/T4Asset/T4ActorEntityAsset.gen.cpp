// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4ActorEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActorEntityAsset() {}
// Cross Module References
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActorEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
// End Cross Module References
	void UT4ActorEntityAsset::StaticRegisterNativesUT4ActorEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister()
	{
		return UT4ActorEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActorEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActorEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "Comment", "/**\n  * #118\n */" },
		{ "IncludePath", "Entity/T4ActorEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
		{ "ToolTip", "#118" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActorEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActorEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::ClassParams = {
		&UT4ActorEntityAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActorEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActorEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActorEntityAsset, 964514770);
	template<> T4ASSET_API UClass* StaticClass<UT4ActorEntityAsset>()
	{
		return UT4ActorEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActorEntityAsset(Z_Construct_UClass_UT4ActorEntityAsset, &UT4ActorEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4ActorEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActorEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ActorEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
