// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4EntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPakAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityAnimationData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayAnimationData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialSlotData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPhysicalData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityBoundType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData();
// End Cross Module References
class UScriptStruct* FT4EntityPlayTagData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPlayTagData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPlayTagData"), sizeof(FT4EntityPlayTagData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPlayTagData>()
{
	return FT4EntityPlayTagData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPlayTagData(FT4EntityPlayTagData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPlayTagData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPlayTagData")),new UScriptStruct::TCppStructOps<FT4EntityPlayTagData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagData;
	struct Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachmentTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialTags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #74\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#74" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPlayTagData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags = { "ActionTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagData, ActionTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags_Inner = { "ActionTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityPlayTagActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags = { "AttachmentTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagData, AttachmentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags_Inner = { "AttachmentTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags = { "MaterialTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagData, MaterialTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags_Inner = { "MaterialTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_ActionTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_AttachmentTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::NewProp_MaterialTags_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPlayTagData",
		sizeof(FT4EntityPlayTagData),
		alignof(FT4EntityPlayTagData),
		Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPlayTagData"), sizeof(FT4EntityPlayTagData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPlayTagData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagData_Hash() { return 2356102695U; }
class UScriptStruct* FT4EntityPlayTagMaterialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPlayTagMaterialData"), sizeof(FT4EntityPlayTagMaterialData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPlayTagMaterialData>()
{
	return FT4EntityPlayTagMaterialData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPlayTagMaterialData(FT4EntityPlayTagMaterialData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPlayTagMaterialData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagMaterialData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagMaterialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPlayTagMaterialData")),new UScriptStruct::TCppStructOps<FT4EntityPlayTagMaterialData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagMaterialData;
	struct Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMaterialData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPlayTagMaterialData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_OverrideMaterialData_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_OverrideMaterialData = { "OverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagMaterialData, OverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_OverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_OverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_PlayTag_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_PlayTag = { "PlayTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagMaterialData, PlayTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_PlayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_PlayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_OverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::NewProp_PlayTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPlayTagMaterialData",
		sizeof(FT4EntityPlayTagMaterialData),
		alignof(FT4EntityPlayTagMaterialData),
		Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPlayTagMaterialData"), sizeof(FT4EntityPlayTagMaterialData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagMaterialData_Hash() { return 2616400920U; }
class UScriptStruct* FT4EntityPlayTagActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPlayTagActionData"), sizeof(FT4EntityPlayTagActionData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPlayTagActionData>()
{
	return FT4EntityPlayTagActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPlayTagActionData(FT4EntityPlayTagActionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPlayTagActionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagActionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPlayTagActionData")),new UScriptStruct::TCppStructOps<FT4EntityPlayTagActionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagActionData;
	struct Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPakAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActionPakAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPlayTagActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_ActionPakAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_ActionPakAsset = { "ActionPakAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagActionData, ActionPakAsset), Z_Construct_UClass_UT4ActionPakAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_ActionPakAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_ActionPakAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_PlayTag_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_PlayTag = { "PlayTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagActionData, PlayTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_PlayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_PlayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_ActionPakAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::NewProp_PlayTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPlayTagActionData",
		sizeof(FT4EntityPlayTagActionData),
		alignof(FT4EntityPlayTagActionData),
		Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPlayTagActionData"), sizeof(FT4EntityPlayTagActionData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagActionData_Hash() { return 1519817877U; }
class UScriptStruct* FT4EntityPlayTagAttachmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPlayTagAttachmentData"), sizeof(FT4EntityPlayTagAttachmentData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPlayTagAttachmentData>()
{
	return FT4EntityPlayTagAttachmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPlayTagAttachmentData(FT4EntityPlayTagAttachmentData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPlayTagAttachmentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagAttachmentData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagAttachmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPlayTagAttachmentData")),new UScriptStruct::TCppStructOps<FT4EntityPlayTagAttachmentData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayTagAttachmentData;
	struct Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponEntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPlayTagAttachmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_WeaponEntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_WeaponEntityAsset = { "WeaponEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagAttachmentData, WeaponEntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_WeaponEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_WeaponEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_EquipPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_EquipPoint = { "EquipPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagAttachmentData, EquipPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_EquipPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_EquipPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_PlayTag_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_PlayTag = { "PlayTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayTagAttachmentData, PlayTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_PlayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_PlayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_WeaponEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_EquipPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::NewProp_PlayTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPlayTagAttachmentData",
		sizeof(FT4EntityPlayTagAttachmentData),
		alignof(FT4EntityPlayTagAttachmentData),
		Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPlayTagAttachmentData"), sizeof(FT4EntityPlayTagAttachmentData), Get_Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayTagAttachmentData_Hash() { return 4245072211U; }
class UScriptStruct* FT4EntityAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityAnimationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityAnimationData"), sizeof(FT4EntityAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityAnimationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityAnimationData>()
{
	return FT4EntityAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityAnimationData(FT4EntityAnimationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityAnimationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityAnimationData")),new UScriptStruct::TCppStructOps<FT4EntityAnimationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityAnimationData;
	struct Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontageAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimMontageAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimMontageAutoGen_MetaData[];
#endif
		static void NewProp_bAnimMontageAutoGen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimMontageAutoGen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimSequenceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdleAnimSequenceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimBlueprintAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletonAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnimation_MetaData[];
#endif
		static void NewProp_bUseAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityAnimationData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "DisplayName", "Anim Montage Asset" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimMontageAsset = { "AnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityAnimationData, AnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #142 : BS \xec\x97\x90\xec\x84\x9c AnimSequence \xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd\n" },
		{ "DisplayName", "bAutoGen" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#142 : BS \xec\x97\x90\xec\x84\x9c AnimSequence \xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen_SetBit(void* Obj)
	{
		((FT4EntityAnimationData*)Obj)->bAnimMontageAutoGen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen = { "bAnimMontageAutoGen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityAnimationData), &Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_IdleAnimSequenceData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_IdleAnimSequenceData = { "IdleAnimSequenceData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityAnimationData, IdleAnimSequenceData), Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_IdleAnimSequenceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_IdleAnimSequenceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimBlueprintAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimBlueprintAsset = { "AnimBlueprintAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityAnimationData, AnimBlueprintAsset), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimBlueprintAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimBlueprintAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_SkeletonAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_SkeletonAsset = { "SkeletonAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityAnimationData, SkeletonAsset), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_SkeletonAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_SkeletonAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "DisplayName", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation_SetBit(void* Obj)
	{
		((FT4EntityAnimationData*)Obj)->bUseAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation = { "bUseAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityAnimationData), &Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimMontageAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bAnimMontageAutoGen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_IdleAnimSequenceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_AnimBlueprintAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_SkeletonAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::NewProp_bUseAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityAnimationData",
		sizeof(FT4EntityAnimationData),
		alignof(FT4EntityAnimationData),
		Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityAnimationData"), sizeof(FT4EntityAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityAnimationData_Hash() { return 1347105530U; }
class UScriptStruct* FT4EntityIdleAnimSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityIdleAnimSequenceData"), sizeof(FT4EntityIdleAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityIdleAnimSequenceData>()
{
	return FT4EntityIdleAnimSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityIdleAnimSequenceData(FT4EntityIdleAnimSequenceData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityIdleAnimSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityIdleAnimSequenceData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityIdleAnimSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityIdleAnimSequenceData")),new UScriptStruct::TCppStructOps<FT4EntityIdleAnimSequenceData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityIdleAnimSequenceData;
	struct Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchIdleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CrouchIdleAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatIdleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CombatIdleAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIdleAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultIdleAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityIdleAnimSequenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CrouchIdleAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CrouchIdleAsset = { "CrouchIdleAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityIdleAnimSequenceData, CrouchIdleAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CrouchIdleAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CrouchIdleAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CombatIdleAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #142 : BS \xec\x97\x90\xec\x84\x9c AnimSequence \xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd\n" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#142 : BS \xec\x97\x90\xec\x84\x9c AnimSequence \xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CombatIdleAsset = { "CombatIdleAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityIdleAnimSequenceData, CombatIdleAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CombatIdleAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CombatIdleAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_DefaultIdleAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_DefaultIdleAsset = { "DefaultIdleAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityIdleAnimSequenceData, DefaultIdleAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_DefaultIdleAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_DefaultIdleAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CrouchIdleAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_CombatIdleAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::NewProp_DefaultIdleAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityIdleAnimSequenceData",
		sizeof(FT4EntityIdleAnimSequenceData),
		alignof(FT4EntityIdleAnimSequenceData),
		Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityIdleAnimSequenceData"), sizeof(FT4EntityIdleAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityIdleAnimSequenceData_Hash() { return 3598291170U; }
class UScriptStruct* FT4EntityPlayAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPlayAnimationData"), sizeof(FT4EntityPlayAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPlayAnimationData>()
{
	return FT4EntityPlayAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPlayAnimationData(FT4EntityPlayAnimationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPlayAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayAnimationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPlayAnimationData")),new UScriptStruct::TCppStructOps<FT4EntityPlayAnimationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPlayAnimationData;
	struct Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n// #131\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#131\n#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPlayAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayAnimationData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// only System layer\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "only System layer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayAnimationData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPlayAnimationData, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPlayAnimationData",
		sizeof(FT4EntityPlayAnimationData),
		alignof(FT4EntityPlayAnimationData),
		Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPlayAnimationData"), sizeof(FT4EntityPlayAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPlayAnimationData_Hash() { return 3138648301U; }
class UScriptStruct* FT4EntityMaterialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityMaterialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityMaterialData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityMaterialData"), sizeof(FT4EntityMaterialData), Get_Z_Construct_UScriptStruct_FT4EntityMaterialData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityMaterialData>()
{
	return FT4EntityMaterialData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityMaterialData(FT4EntityMaterialData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityMaterialData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMaterialData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMaterialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityMaterialData")),new UScriptStruct::TCppStructOps<FT4EntityMaterialData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMaterialData;
	struct Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSlotDatas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #124\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#124" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityMaterialData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas = { "MaterialSlotDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMaterialData, MaterialSlotDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas_Inner = { "MaterialSlotDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityMaterialSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::NewProp_MaterialSlotDatas_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityMaterialData",
		sizeof(FT4EntityMaterialData),
		alignof(FT4EntityMaterialData),
		Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityMaterialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityMaterialData"), sizeof(FT4EntityMaterialData), Get_Z_Construct_UScriptStruct_FT4EntityMaterialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityMaterialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityMaterialData_Hash() { return 2542143844U; }
class UScriptStruct* FT4EntityMaterialSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityMaterialSlotData"), sizeof(FT4EntityMaterialSlotData), Get_Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityMaterialSlotData>()
{
	return FT4EntityMaterialSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityMaterialSlotData(FT4EntityMaterialSlotData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityMaterialSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMaterialSlotData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMaterialSlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityMaterialSlotData")),new UScriptStruct::TCppStructOps<FT4EntityMaterialSlotData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityMaterialSlotData;
	struct Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterialAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OriginalMaterialAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #124\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#124" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityMaterialSlotData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_OriginalMaterialAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_OriginalMaterialAsset = { "OriginalMaterialAsset", nullptr, (EPropertyFlags)0x0014000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMaterialSlotData, OriginalMaterialAsset), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_OriginalMaterialAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_OriginalMaterialAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_MaterialAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_MaterialAsset = { "MaterialAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMaterialSlotData, MaterialAsset), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_MaterialAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_MaterialAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityMaterialSlotData, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_OriginalMaterialAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_MaterialAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::NewProp_SlotName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityMaterialSlotData",
		sizeof(FT4EntityMaterialSlotData),
		alignof(FT4EntityMaterialSlotData),
		Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityMaterialSlotData"), sizeof(FT4EntityMaterialSlotData), Get_Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityMaterialSlotData_Hash() { return 1978436035U; }
class UScriptStruct* FT4EntityRenderingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityRenderingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityRenderingData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityRenderingData"), sizeof(FT4EntityRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityRenderingData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityRenderingData>()
{
	return FT4EntityRenderingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityRenderingData(FT4EntityRenderingData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityRenderingData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityRenderingData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityRenderingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityRenderingData")),new UScriptStruct::TCppStructOps<FT4EntityRenderingData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityRenderingData;
	struct Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImportRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityRenderingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FT4EntityRenderingData*)Obj)->bReceivesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityRenderingData), &Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_ImportRotationYaw_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "-360.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_ImportRotationYaw = { "ImportRotationYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityRenderingData, ImportRotationYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_ImportRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_ImportRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// CustomizeCharacterEntityDetails\n// CustomizePropEntityDetails\n// CustomizeItemCommonEntityDetails\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "CustomizeCharacterEntityDetails\nCustomizePropEntityDetails\nCustomizeItemCommonEntityDetails" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityRenderingData, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_bReceivesDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_ImportRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityRenderingData",
		sizeof(FT4EntityRenderingData),
		alignof(FT4EntityRenderingData),
		Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityRenderingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityRenderingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityRenderingData"), sizeof(FT4EntityRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityRenderingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityRenderingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityRenderingData_Hash() { return 412794587U; }
class UScriptStruct* FT4EntityPhysicalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPhysicalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPhysicalData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityPhysicalData"), sizeof(FT4EntityPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityPhysicalData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityPhysicalData>()
{
	return FT4EntityPhysicalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPhysicalData(FT4EntityPhysicalData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityPhysicalData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPhysicalData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPhysicalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPhysicalData")),new UScriptStruct::TCppStructOps<FT4EntityPhysicalData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityPhysicalData;
	struct Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollisionDisabled_MetaData[];
#endif
		static void NewProp_bCollisionDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollisionDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPhysicalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundRadius_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "500" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundRadius = { "BoundRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPhysicalData, BoundRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #126\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#126" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundHeight = { "BoundHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPhysicalData, BoundHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #118\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#118" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType = { "BoundType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPhysicalData, BoundType), Z_Construct_UEnum_T4Asset_ET4EntityBoundType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// CustomizeCharacterEntityDetails\n// CustomizePropEntityDetails\n// CustomizeItemCommonEntityDetails\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "CustomizeCharacterEntityDetails\nCustomizePropEntityDetails\nCustomizeItemCommonEntityDetails" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled_SetBit(void* Obj)
	{
		((FT4EntityPhysicalData*)Obj)->bCollisionDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled = { "bCollisionDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityPhysicalData), &Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_BoundType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::NewProp_bCollisionDisabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityPhysicalData",
		sizeof(FT4EntityPhysicalData),
		alignof(FT4EntityPhysicalData),
		Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPhysicalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPhysicalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPhysicalData"), sizeof(FT4EntityPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityPhysicalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPhysicalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPhysicalData_Hash() { return 4244596350U; }
class UScriptStruct* FT4EntityEditorThumbnailData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityEditorThumbnailData"), sizeof(FT4EntityEditorThumbnailData), Get_Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityEditorThumbnailData>()
{
	return FT4EntityEditorThumbnailData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityEditorThumbnailData(FT4EntityEditorThumbnailData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityEditorThumbnailData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityEditorThumbnailData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityEditorThumbnailData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityEditorThumbnailData")),new UScriptStruct::TCppStructOps<FT4EntityEditorThumbnailData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityEditorThumbnailData;
	struct Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #35\n */" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#35" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityEditorThumbnailData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityEditorThumbnailData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityEditorThumbnailData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::NewProp_Rotation,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityEditorThumbnailData",
		sizeof(FT4EntityEditorThumbnailData),
		alignof(FT4EntityEditorThumbnailData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityEditorThumbnailData"), sizeof(FT4EntityEditorThumbnailData), Get_Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData_Hash() { return 2766613254U; }
	void UT4EntityAsset::StaticRegisterNativesUT4EntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister()
	{
		return UT4EntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4EntityAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAutomation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAutomation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayTagData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "Comment", "// #81\n" },
		{ "IncludePath", "Entity/T4EntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#81" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EntityAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailData_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #100, #103\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
		{ "ToolTip", "#100, #103" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailData = { "ThumbnailData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EntityAsset, ThumbnailData), Z_Construct_UScriptStruct_FT4EntityEditorThumbnailData, METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_TestAutomation_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_TestAutomation = { "TestAutomation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EntityAsset, TestAutomation), Z_Construct_UScriptStruct_FT4EditorTestAutomationData, METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_TestAutomation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_TestAutomation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_PlayTagData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_PlayTagData = { "PlayTagData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EntityAsset, PlayTagData), Z_Construct_UScriptStruct_FT4EntityPlayTagData, METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_PlayTagData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_PlayTagData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EntityAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_ThumbnailData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_TestAutomation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EntityAsset_Statics::NewProp_PlayTagData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EntityAsset_Statics::ClassParams = {
		&UT4EntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4EntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EntityAsset, 4107000653);
	template<> T4ASSET_API UClass* StaticClass<UT4EntityAsset>()
	{
		return UT4EntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EntityAsset(Z_Construct_UClass_UT4EntityAsset, &UT4EntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4EntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4EntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
