// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Entity/T4CharacterEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CharacterEntityAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityReactionType();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPlayAnimationData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimsetAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityMaterialData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterTestingData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4MapEntityAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityRenderingData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPhysicalData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CharacterEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4CharacterEntityAsset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActorEntityAsset();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FT4EntityCharacterReactionSetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterReactionSetData"), sizeof(FT4EntityCharacterReactionSetData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterReactionSetData>()
{
	return FT4EntityCharacterReactionSetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterReactionSetData(FT4EntityCharacterReactionSetData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterReactionSetData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionSetData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionSetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterReactionSetData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionSetData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionSetData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReactionDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactionDatas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionSetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas = { "ReactionDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionSetData, ReactionDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas_Inner = { "ReactionDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityCharacterReactionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::NewProp_ReactionDatas_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterReactionSetData",
		sizeof(FT4EntityCharacterReactionSetData),
		alignof(FT4EntityCharacterReactionSetData),
		Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterReactionSetData"), sizeof(FT4EntityCharacterReactionSetData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData_Hash() { return 2005242066U; }
class UScriptStruct* FT4EntityCharacterReactionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterReactionData"), sizeof(FT4EntityCharacterReactionData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterReactionData>()
{
	return FT4EntityCharacterReactionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterReactionData(FT4EntityCharacterReactionData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterReactionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterReactionData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestShootDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestShootDirection;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsStopData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsStopData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsStartData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsStartData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_TestShootDirection_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_TestShootDirection = { "TestShootDirection", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, TestShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_TestShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_TestShootDirection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStopData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStopData = { "PhysicsStopData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, PhysicsStopData), Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStopData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStopData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStartData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStartData = { "PhysicsStartData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, PhysicsStartData), Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStartData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStartData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_AnimationData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, AnimationData), Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_AnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_MaxPlayTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_MaxPlayTimeSec = { "MaxPlayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, MaxPlayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_MaxPlayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_MaxPlayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionName = { "ReactionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, ReactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionData, ReactionType), Z_Construct_UEnum_T4Asset_ET4EntityReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_TestShootDirection,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStopData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_PhysicsStartData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_MaxPlayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::NewProp_ReactionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterReactionData",
		sizeof(FT4EntityCharacterReactionData),
		alignof(FT4EntityCharacterReactionData),
		Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterReactionData"), sizeof(FT4EntityCharacterReactionData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionData_Hash() { return 1485622769U; }
class UScriptStruct* FT4EntityCharacterReactionAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterReactionAnimationData"), sizeof(FT4EntityCharacterReactionAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterReactionAnimationData>()
{
	return FT4EntityCharacterReactionAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterReactionAnimationData(FT4EntityCharacterReactionAnimationData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterReactionAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionAnimationData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterReactionAnimationData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionAnimationData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionAnimationData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoopAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdditive_MetaData[];
#endif
		static void NewProp_bUseAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnimation_MetaData[];
#endif
		static void NewProp_bUseAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_EndAnimationData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_EndAnimationData = { "EndAnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionAnimationData, EndAnimationData), Z_Construct_UScriptStruct_FT4EntityPlayAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_EndAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_EndAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_LoopAnimationData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_LoopAnimationData = { "LoopAnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionAnimationData, LoopAnimationData), Z_Construct_UScriptStruct_FT4EntityPlayAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_LoopAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_LoopAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_StartAnimationData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #138\n" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#138" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_StartAnimationData = { "StartAnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionAnimationData, StartAnimationData), Z_Construct_UScriptStruct_FT4EntityPlayAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_StartAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_StartAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive_SetBit(void* Obj)
	{
		((FT4EntityCharacterReactionAnimationData*)Obj)->bUseAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive = { "bUseAdditive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityCharacterReactionAnimationData), &Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_DelayTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUseAnimation" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_DelayTimeSec = { "DelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionAnimationData, DelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_DelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_DelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation_SetBit(void* Obj)
	{
		((FT4EntityCharacterReactionAnimationData*)Obj)->bUseAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation = { "bUseAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityCharacterReactionAnimationData), &Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_EndAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_LoopAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_StartAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_DelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::NewProp_bUseAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterReactionAnimationData",
		sizeof(FT4EntityCharacterReactionAnimationData),
		alignof(FT4EntityCharacterReactionAnimationData),
		Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterReactionAnimationData"), sizeof(FT4EntityCharacterReactionAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionAnimationData_Hash() { return 652993230U; }
class UScriptStruct* FT4EntityCharacterReactionPhysicsStopData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterReactionPhysicsStopData"), sizeof(FT4EntityCharacterReactionPhysicsStopData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterReactionPhysicsStopData>()
{
	return FT4EntityCharacterReactionPhysicsStopData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData(FT4EntityCharacterReactionPhysicsStopData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterReactionPhysicsStopData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsStopData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsStopData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterReactionPhysicsStopData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionPhysicsStopData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsStopData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsStop_MetaData[];
#endif
		static void NewProp_bUsePhysicsStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionPhysicsStopData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_DelayTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStop" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_DelayTimeSec = { "DelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStopData, DelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_DelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_DelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop_SetBit(void* Obj)
	{
		((FT4EntityCharacterReactionPhysicsStopData*)Obj)->bUsePhysicsStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop = { "bUsePhysicsStop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityCharacterReactionPhysicsStopData), &Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_DelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::NewProp_bUsePhysicsStop,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterReactionPhysicsStopData",
		sizeof(FT4EntityCharacterReactionPhysicsStopData),
		alignof(FT4EntityCharacterReactionPhysicsStopData),
		Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterReactionPhysicsStopData"), sizeof(FT4EntityCharacterReactionPhysicsStopData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStopData_Hash() { return 2096403701U; }
class UScriptStruct* FT4EntityCharacterReactionPhysicsStartData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterReactionPhysicsStartData"), sizeof(FT4EntityCharacterReactionPhysicsStartData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterReactionPhysicsStartData>()
{
	return FT4EntityCharacterReactionPhysicsStartData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData(FT4EntityCharacterReactionPhysicsStartData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterReactionPhysicsStartData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsStartData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsStartData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterReactionPhysicsStartData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionPhysicsStartData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsStartData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateBodiesBelow_MetaData[];
#endif
		static void NewProp_bSimulateBodiesBelow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateBodiesBelow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassOverrideInKg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassOverrideInKg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterOfMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterOfMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulsePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulsePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseSubActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImpulseSubActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseMainActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImpulseMainActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsStart_MetaData[];
#endif
		static void NewProp_bUsePhysicsStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionPhysicsStartData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_BlendData_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_BlendData = { "BlendData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, BlendData), Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_BlendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_BlendData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow_SetBit(void* Obj)
	{
		((FT4EntityCharacterReactionPhysicsStartData*)Obj)->bSimulateBodiesBelow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow = { "bSimulateBodiesBelow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityCharacterReactionPhysicsStartData), &Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_MassOverrideInKg_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_MassOverrideInKg = { "MassOverrideInKg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, MassOverrideInKg), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_MassOverrideInKg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_MassOverrideInKg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_CenterOfMass_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_CenterOfMass = { "CenterOfMass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, CenterOfMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_CenterOfMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_CenterOfMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulsePower_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulsePower = { "ImpulsePower", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, ImpulsePower), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulsePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulsePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseSubActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseSubActionPoint = { "ImpulseSubActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, ImpulseSubActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseSubActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseSubActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseMainActionPoint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseMainActionPoint = { "ImpulseMainActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, ImpulseMainActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseMainActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseMainActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_DelayTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bUsePhysicsStart" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_DelayTimeSec = { "DelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsStartData, DelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_DelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_DelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart_SetBit(void* Obj)
	{
		((FT4EntityCharacterReactionPhysicsStartData*)Obj)->bUsePhysicsStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart = { "bUsePhysicsStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EntityCharacterReactionPhysicsStartData), &Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_BlendData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bSimulateBodiesBelow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_MassOverrideInKg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_CenterOfMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulsePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseSubActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_ImpulseMainActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_DelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::NewProp_bUsePhysicsStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterReactionPhysicsStartData",
		sizeof(FT4EntityCharacterReactionPhysicsStartData),
		alignof(FT4EntityCharacterReactionPhysicsStartData),
		Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterReactionPhysicsStartData"), sizeof(FT4EntityCharacterReactionPhysicsStartData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsStartData_Hash() { return 4248821U; }
class UScriptStruct* FT4EntityCharacterReactionPhysicsBlendData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterReactionPhysicsBlendData"), sizeof(FT4EntityCharacterReactionPhysicsBlendData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterReactionPhysicsBlendData>()
{
	return FT4EntityCharacterReactionPhysicsBlendData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData(FT4EntityCharacterReactionPhysicsBlendData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterReactionPhysicsBlendData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsBlendData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsBlendData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterReactionPhysicsBlendData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionPhysicsBlendData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterReactionPhysicsBlendData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterReactionPhysicsBlendData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsBlendData, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsBlendData, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_TargetWeight_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_TargetWeight = { "TargetWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterReactionPhysicsBlendData, TargetWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_TargetWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_TargetWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::NewProp_TargetWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterReactionPhysicsBlendData",
		sizeof(FT4EntityCharacterReactionPhysicsBlendData),
		alignof(FT4EntityCharacterReactionPhysicsBlendData),
		Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterReactionPhysicsBlendData"), sizeof(FT4EntityCharacterReactionPhysicsBlendData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterReactionPhysicsBlendData_Hash() { return 4210472142U; }
class UScriptStruct* FT4EntityCharacterAnimSetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterAnimSetData"), sizeof(FT4EntityCharacterAnimSetData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterAnimSetData>()
{
	return FT4EntityCharacterAnimSetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterAnimSetData(FT4EntityCharacterAnimSetData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterAnimSetData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterAnimSetData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterAnimSetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterAnimSetData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterAnimSetData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterAnimSetData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePlayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivePlayTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimsetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimsetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#73" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterAnimSetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_ActivePlayTag_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #39\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_ActivePlayTag = { "ActivePlayTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterAnimSetData, ActivePlayTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_ActivePlayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_ActivePlayTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimsetAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimsetAsset = { "AnimsetAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterAnimSetData, AnimsetAsset), Z_Construct_UClass_UT4AnimsetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimsetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimsetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimSetName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimSetName = { "AnimSetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterAnimSetData, AnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimSetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_ActivePlayTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimsetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::NewProp_AnimSetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterAnimSetData",
		sizeof(FT4EntityCharacterAnimSetData),
		alignof(FT4EntityCharacterAnimSetData),
		Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterAnimSetData"), sizeof(FT4EntityCharacterAnimSetData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData_Hash() { return 1878843855U; }
class UScriptStruct* FT4EntityCharacterCompositeMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterCompositeMeshData"), sizeof(FT4EntityCharacterCompositeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterCompositeMeshData>()
{
	return FT4EntityCharacterCompositeMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterCompositeMeshData(FT4EntityCharacterCompositeMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterCompositeMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterCompositeMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterCompositeMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterCompositeMeshData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterCompositeMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterCompositeMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPartsDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultPartsDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultPartsDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModularType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModularType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #37\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterCompositeMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #72\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#72" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas = { "DefaultPartsDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterCompositeMeshData, DefaultPartsDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas_Inner = { "DefaultPartsDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType = { "ModularType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterCompositeMeshData, ModularType), Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_DefaultPartsDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::NewProp_ModularType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterCompositeMeshData",
		sizeof(FT4EntityCharacterCompositeMeshData),
		alignof(FT4EntityCharacterCompositeMeshData),
		Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterCompositeMeshData"), sizeof(FT4EntityCharacterCompositeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData_Hash() { return 1381802447U; }
class UScriptStruct* FT4EntityCharacterCompositePartMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterCompositePartMeshData"), sizeof(FT4EntityCharacterCompositePartMeshData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterCompositePartMeshData>()
{
	return FT4EntityCharacterCompositePartMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterCompositePartMeshData(FT4EntityCharacterCompositePartMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterCompositePartMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterCompositePartMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterCompositePartMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterCompositePartMeshData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterCompositePartMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterCompositePartMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CostumeEntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PartName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #37\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterCompositePartMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_CostumeEntityAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_CostumeEntityAsset = { "CostumeEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterCompositePartMeshData, CostumeEntityAsset), Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_CostumeEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_CostumeEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_PartName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterCompositePartMeshData, PartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_PartName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_CostumeEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::NewProp_PartName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterCompositePartMeshData",
		sizeof(FT4EntityCharacterCompositePartMeshData),
		alignof(FT4EntityCharacterCompositePartMeshData),
		Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterCompositePartMeshData"), sizeof(FT4EntityCharacterCompositePartMeshData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterCompositePartMeshData_Hash() { return 75961162U; }
class UScriptStruct* FT4EntityCharacterFullBodyMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterFullBodyMeshData"), sizeof(FT4EntityCharacterFullBodyMeshData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterFullBodyMeshData>()
{
	return FT4EntityCharacterFullBodyMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterFullBodyMeshData(FT4EntityCharacterFullBodyMeshData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterFullBodyMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterFullBodyMeshData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterFullBodyMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterFullBodyMeshData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterFullBodyMeshData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterFullBodyMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkinDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSkinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultSkinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #130\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#130" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterFullBodyMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #130\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#130" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas = { "SkinDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterFullBodyMeshData, SkinDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas_Inner = { "SkinDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_DefaultSkinName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_DefaultSkinName = { "DefaultSkinName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterFullBodyMeshData, DefaultSkinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_DefaultSkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_DefaultSkinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_SkinDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::NewProp_DefaultSkinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterFullBodyMeshData",
		sizeof(FT4EntityCharacterFullBodyMeshData),
		alignof(FT4EntityCharacterFullBodyMeshData),
		Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterFullBodyMeshData"), sizeof(FT4EntityCharacterFullBodyMeshData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData_Hash() { return 3713878791U; }
class UScriptStruct* FT4EntityCharacterFullBodySkinData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterFullBodySkinData"), sizeof(FT4EntityCharacterFullBodySkinData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterFullBodySkinData>()
{
	return FT4EntityCharacterFullBodySkinData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterFullBodySkinData(FT4EntityCharacterFullBodySkinData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterFullBodySkinData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterFullBodySkinData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterFullBodySkinData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterFullBodySkinData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterFullBodySkinData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterFullBodySkinData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverridePhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMaterialData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterFullBodySkinData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #80\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#80" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterFullBodySkinData, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverridePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverridePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverrideMaterialData_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverrideMaterialData = { "OverrideMaterialData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterFullBodySkinData, OverrideMaterialData), Z_Construct_UScriptStruct_FT4EntityMaterialData, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverrideMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverrideMaterialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterFullBodySkinData, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkinName_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkinName = { "SkinName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterFullBodySkinData, SkinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverridePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_OverrideMaterialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::NewProp_SkinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterFullBodySkinData",
		sizeof(FT4EntityCharacterFullBodySkinData),
		alignof(FT4EntityCharacterFullBodySkinData),
		Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterFullBodySkinData"), sizeof(FT4EntityCharacterFullBodySkinData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterFullBodySkinData_Hash() { return 2589790924U; }
class UScriptStruct* FT4EntityCharacterTestingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterTestingData"), sizeof(FT4EntityCharacterTestingData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterTestingData>()
{
	return FT4EntityCharacterTestingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterTestingData(FT4EntityCharacterTestingData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterTestingData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterTestingData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterTestingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterTestingData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterTestingData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterTestingData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestJumpHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestJumpHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestJumpMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestJumpMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestStanceMoveSpeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TestStanceMoveSpeeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TestStanceMoveSpeeds_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestStanceMoveSpeeds_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestDefaultSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestDefaultSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMapEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TestMapEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterTestingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpHeightSpeed_MetaData[] = {
		{ "Category", "Testing" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "50" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpHeightSpeed = { "TestJumpHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterTestingData, TestJumpHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpMaxHeight_MetaData[] = {
		{ "Category", "Testing" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "50.0" },
		{ "Comment", "// #154 : FName = StanceName\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#154 : FName = StanceName" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpMaxHeight = { "TestJumpMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterTestingData, TestJumpMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_MetaData[] = {
		{ "Category", "Testing" },
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#108" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds = { "TestStanceMoveSpeeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterTestingData, TestStanceMoveSpeeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_Key_KeyProp = { "TestStanceMoveSpeeds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_ValueProp = { "TestStanceMoveSpeeds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestDefaultSpeed_MetaData[] = {
		{ "Category", "Testing" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestDefaultSpeed = { "TestDefaultSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterTestingData, TestDefaultSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestDefaultSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestDefaultSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestMapEntityAsset_MetaData[] = {
		{ "Category", "Testing" },
		{ "Comment", "// FT4CharacterEntityDetails::SubCustomizeDetails\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "FT4CharacterEntityDetails::SubCustomizeDetails" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestMapEntityAsset = { "TestMapEntityAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterTestingData, TestMapEntityAsset), Z_Construct_UClass_UT4MapEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestMapEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestMapEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestJumpMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestStanceMoveSpeeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestDefaultSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::NewProp_TestMapEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4EntityCharacterTestingData",
		sizeof(FT4EntityCharacterTestingData),
		alignof(FT4EntityCharacterTestingData),
		Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterTestingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterTestingData"), sizeof(FT4EntityCharacterTestingData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterTestingData_Hash() { return 2623769045U; }
class UScriptStruct* FT4EntityCharacterRenderingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterRenderingData"), sizeof(FT4EntityCharacterRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterRenderingData>()
{
	return FT4EntityCharacterRenderingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterRenderingData(FT4EntityCharacterRenderingData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterRenderingData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterRenderingData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterRenderingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterRenderingData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterRenderingData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterRenderingData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterRenderingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityRenderingData,
		&NewStructOps,
		"T4EntityCharacterRenderingData",
		sizeof(FT4EntityCharacterRenderingData),
		alignof(FT4EntityCharacterRenderingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterRenderingData"), sizeof(FT4EntityCharacterRenderingData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData_Hash() { return 962609642U; }
class UScriptStruct* FT4EntityCharacterPhysicalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4EntityCharacterPhysicalData"), sizeof(FT4EntityCharacterPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4EntityCharacterPhysicalData>()
{
	return FT4EntityCharacterPhysicalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityCharacterPhysicalData(FT4EntityCharacterPhysicalData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4EntityCharacterPhysicalData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterPhysicalData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterPhysicalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityCharacterPhysicalData")),new UScriptStruct::TCppStructOps<FT4EntityCharacterPhysicalData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4EntityCharacterPhysicalData;
	struct Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRotationRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRotationRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlaceRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaceRotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityCharacterPhysicalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_MoveRotationRateScale_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_MoveRotationRateScale = { "MoveRotationRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterPhysicalData, MoveRotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_MoveRotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_MoveRotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_InPlaceRotationRate_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "1500" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// CustomizeCharacterEntityDetails\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "CustomizeCharacterEntityDetails" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_InPlaceRotationRate = { "InPlaceRotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityCharacterPhysicalData, InPlaceRotationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_InPlaceRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_InPlaceRotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_MoveRotationRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::NewProp_InPlaceRotationRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		Z_Construct_UScriptStruct_FT4EntityPhysicalData,
		&NewStructOps,
		"T4EntityCharacterPhysicalData",
		sizeof(FT4EntityCharacterPhysicalData),
		alignof(FT4EntityCharacterPhysicalData),
		Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityCharacterPhysicalData"), sizeof(FT4EntityCharacterPhysicalData), Get_Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData_Hash() { return 1961230135U; }
	void UT4CharacterEntityAsset::StaticRegisterNativesUT4CharacterEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4CharacterEntityAsset_NoRegister()
	{
		return UT4CharacterEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4CharacterEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Testing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Testing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rendering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Physical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionSetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactionSetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSetDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSetDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopmpositeMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopmpositeMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullBodyMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullBodyMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimBlueprintAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletonAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CharacterEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ActorEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Entity/T4CharacterEntityAsset.h" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Testing_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Testing = { "Testing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, Testing), Z_Construct_UScriptStruct_FT4EntityCharacterTestingData, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Testing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Testing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Rendering_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Rendering = { "Rendering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, Rendering), Z_Construct_UScriptStruct_FT4EntityCharacterRenderingData, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Rendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Rendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Physical_MetaData[] = {
		{ "Category", "Physical" },
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Physical = { "Physical", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, Physical), Z_Construct_UScriptStruct_FT4EntityCharacterPhysicalData, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Physical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Physical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_ReactionSetData_MetaData[] = {
		{ "Category", "Reaction" },
		{ "Comment", "// #39, #73, #124;\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#39, #73, #124;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_ReactionSetData = { "ReactionSetData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, ReactionSetData), Z_Construct_UScriptStruct_FT4EntityCharacterReactionSetData, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_ReactionSetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_ReactionSetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "// #37\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas = { "AnimSetDatas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, AnimSetDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas_Inner = { "AnimSetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EntityCharacterAnimSetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_CopmpositeMeshData_MetaData[] = {
		{ "Category", "CompositeMesh" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_CopmpositeMeshData = { "CopmpositeMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, CopmpositeMeshData), Z_Construct_UScriptStruct_FT4EntityCharacterCompositeMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_CopmpositeMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_CopmpositeMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_FullBodyMeshData_MetaData[] = {
		{ "Category", "FullbodyMesh" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_FullBodyMeshData = { "FullBodyMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, FullBodyMeshData), Z_Construct_UScriptStruct_FT4EntityCharacterFullBodyMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_FullBodyMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_FullBodyMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, MeshType), Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimBlueprintAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #39\n" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
		{ "ToolTip", "#39" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimBlueprintAsset = { "AnimBlueprintAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, AnimBlueprintAsset), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimBlueprintAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimBlueprintAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_SkeletonAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Entity/T4CharacterEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_SkeletonAsset = { "SkeletonAsset", nullptr, (EPropertyFlags)0x0014010000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CharacterEntityAsset, SkeletonAsset), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_SkeletonAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_SkeletonAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4CharacterEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Testing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Rendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_Physical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_ReactionSetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimSetDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_CopmpositeMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_FullBodyMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_MeshType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_AnimBlueprintAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CharacterEntityAsset_Statics::NewProp_SkeletonAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CharacterEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CharacterEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CharacterEntityAsset_Statics::ClassParams = {
		&UT4CharacterEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4CharacterEntityAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CharacterEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CharacterEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CharacterEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CharacterEntityAsset, 599649189);
	template<> T4ASSET_API UClass* StaticClass<UT4CharacterEntityAsset>()
	{
		return UT4CharacterEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CharacterEntityAsset(Z_Construct_UClass_UT4CharacterEntityAsset, &UT4CharacterEntityAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4CharacterEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CharacterEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4CharacterEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
