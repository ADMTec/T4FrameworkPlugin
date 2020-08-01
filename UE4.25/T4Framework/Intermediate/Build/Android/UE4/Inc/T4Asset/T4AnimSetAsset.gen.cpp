// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/Animset/T4AnimsetAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetTestSettings();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetStateLayerData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimStateData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimsetAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimsetAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FT4AnimsetTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetTestSettings, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetTestSettings"), sizeof(FT4AnimsetTestSettings), Get_Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetTestSettings>()
{
	return FT4AnimsetTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetTestSettings(FT4AnimsetTestSettings::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetTestSettings
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetTestSettings")),new UScriptStruct::TCppStructOps<FT4AnimsetTestSettings>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetTestSettings;
	struct Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoMounting_MetaData[];
#endif
		static void NewProp_bAutoMounting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoMounting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipWeaponEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EquipWeaponEntityAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting_MetaData[] = {
		{ "Category", "Testing" },
		{ "Comment", "// #111\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#111" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting_SetBit(void* Obj)
	{
		((FT4AnimsetTestSettings*)Obj)->bAutoMounting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting = { "bAutoMounting", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimsetTestSettings), &Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_EquipWeaponEntityAsset_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_EquipWeaponEntityAsset = { "EquipWeaponEntityAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetTestSettings, EquipWeaponEntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_EquipWeaponEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_EquipWeaponEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_PreviewEntityAsset_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_PreviewEntityAsset = { "PreviewEntityAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetTestSettings, PreviewEntityAsset), Z_Construct_UClass_UT4EntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_PreviewEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_PreviewEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_bAutoMounting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_EquipWeaponEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::NewProp_PreviewEntityAsset,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetTestSettings",
		sizeof(FT4AnimsetTestSettings),
		alignof(FT4AnimsetTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetTestSettings"), sizeof(FT4AnimsetTestSettings), Get_Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetTestSettings_Hash() { return 1012944317U; }
class UScriptStruct* FT4AnimSetStateLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetStateLayerData"), sizeof(FT4AnimSetStateLayerData), Get_Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetStateLayerData>()
{
	return FT4AnimSetStateLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetStateLayerData(FT4AnimSetStateLayerData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetStateLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetStateLayerData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetStateLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetStateLayerData")),new UScriptStruct::TCppStructOps<FT4AnimSetStateLayerData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetStateLayerData;
	struct Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStateDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimStateDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimStateDataArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetStateLayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray = { "AnimStateDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetStateLayerData, AnimStateDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_Inner = { "AnimStateDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetAnimStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetStateLayerData",
		sizeof(FT4AnimSetStateLayerData),
		alignof(FT4AnimSetStateLayerData),
		Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetStateLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetStateLayerData"), sizeof(FT4AnimSetStateLayerData), Get_Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Hash() { return 2200940130U; }
class UScriptStruct* FT4AnimsetAnimStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetAnimStateData"), sizeof(FT4AnimsetAnimStateData), Get_Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetAnimStateData>()
{
	return FT4AnimsetAnimStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetAnimStateData(FT4AnimsetAnimStateData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetAnimStateData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimStateData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetAnimStateData")),new UScriptStruct::TCppStructOps<FT4AnimsetAnimStateData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimStateData;
	struct Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorShowNotSetProperty_MetaData[];
#endif
		static void NewProp_bEditorShowNotSetProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorShowNotSetProperty;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateParameterMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StateParameterMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateParameterMap_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateParameterMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendSpaceArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendSpaceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetAnimStateData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_SetBit(void* Obj)
	{
		((FT4AnimsetAnimStateData*)Obj)->bEditorShowNotSetProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty = { "bEditorShowNotSetProperty", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimsetAnimStateData), &Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap = { "StateParameterMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimStateData, StateParameterMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_Key_KeyProp = { "StateParameterMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_ValueProp = { "StateParameterMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray = { "BlendSpaceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimStateData, BlendSpaceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray_Inner = { "BlendSpaceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimStateData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// FT4AnimSetDataLoader::ProcessPre() // #111\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "FT4AnimSetDataLoader::ProcessPre()  #111" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimStateData, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StateParameterMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_BlendSpaceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::NewProp_StanceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetAnimStateData",
		sizeof(FT4AnimsetAnimStateData),
		alignof(FT4AnimsetAnimStateData),
		Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetAnimStateData"), sizeof(FT4AnimsetAnimStateData), Get_Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimStateData_Hash() { return 3969314660U; }
class UScriptStruct* FT4AnimsetSystemLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetSystemLayerData"), sizeof(FT4AnimsetSystemLayerData), Get_Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetSystemLayerData>()
{
	return FT4AnimsetSystemLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetSystemLayerData(FT4AnimsetSystemLayerData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetSystemLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetSystemLayerData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetSystemLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetSystemLayerData")),new UScriptStruct::TCppStructOps<FT4AnimsetSystemLayerData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetSystemLayerData;
	struct Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSystemDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSystemDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSystemDataArray_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimMontageAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AdditiveAnimMontageAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemAnimMontageAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SystemAnimMontageAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetSystemLayerData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray = { "AnimSystemDataArray", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetSystemLayerData, AnimSystemDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray_Inner = { "AnimSystemDataArray", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset = { "AdditiveAnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetSystemLayerData, AdditiveAnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset = { "SystemAnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetSystemLayerData, SystemAnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AnimSystemDataArray_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetSystemLayerData",
		sizeof(FT4AnimsetSystemLayerData),
		alignof(FT4AnimsetSystemLayerData),
		Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetSystemLayerData"), sizeof(FT4AnimsetSystemLayerData), Get_Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData_Hash() { return 145427033U; }
class UScriptStruct* FT4AnimsetAnimSystemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetAnimSystemData"), sizeof(FT4AnimsetAnimSystemData), Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetAnimSystemData>()
{
	return FT4AnimsetAnimSystemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetAnimSystemData(FT4AnimsetAnimSystemData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetAnimSystemData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimSystemData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimSystemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetAnimSystemData")),new UScriptStruct::TCppStructOps<FT4AnimsetAnimSystemData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimSystemData;
	struct Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorShowNotSetProperty_MetaData[];
#endif
		static void NewProp_bEditorShowNotSetProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorShowNotSetProperty;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetAnimSystemData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_SetBit(void* Obj)
	{
		((FT4AnimsetAnimSystemData*)Obj)->bEditorShowNotSetProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty = { "bEditorShowNotSetProperty", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimsetAnimSystemData), &Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimSystemData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_StanceName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4AnimSetDataLoader::ProcessPre() // #111\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "FT4AnimSetDataLoader::ProcessPre()  #111" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_StanceName = { "StanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimSystemData, StanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_StanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_StanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::NewProp_StanceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetAnimSystemData",
		sizeof(FT4AnimsetAnimSystemData),
		alignof(FT4AnimsetAnimSystemData),
		Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetAnimSystemData"), sizeof(FT4AnimsetAnimSystemData), Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSystemData_Hash() { return 519948837U; }
class UScriptStruct* FT4AnimsetSkillLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetSkillLayerData"), sizeof(FT4AnimsetSkillLayerData), Get_Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetSkillLayerData>()
{
	return FT4AnimsetSkillLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetSkillLayerData(FT4AnimsetSkillLayerData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetSkillLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetSkillLayerData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetSkillLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetSkillLayerData")),new UScriptStruct::TCppStructOps<FT4AnimsetSkillLayerData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetSkillLayerData;
	struct Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetSkillLayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetSkillLayerData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimMontageAsset = { "AnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetSkillLayerData, AnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_SetBit(void* Obj)
	{
		((FT4AnimsetSkillLayerData*)Obj)->bAnimMontageAutoGen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen = { "bAnimMontageAutoGen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimsetSkillLayerData), &Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_AnimMontageAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetSkillLayerData",
		sizeof(FT4AnimsetSkillLayerData),
		alignof(FT4AnimsetSkillLayerData),
		Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetSkillLayerData"), sizeof(FT4AnimsetSkillLayerData), Get_Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData_Hash() { return 1898232188U; }
class UScriptStruct* FT4AnimsetBlendSpaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetBlendSpaceData"), sizeof(FT4AnimsetBlendSpaceData), Get_Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetBlendSpaceData>()
{
	return FT4AnimsetBlendSpaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBlendSpaceData(FT4AnimsetBlendSpaceData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetBlendSpaceData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetBlendSpaceData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetBlendSpaceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBlendSpaceData")),new UScriptStruct::TCppStructOps<FT4AnimsetBlendSpaceData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetBlendSpaceData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BlendSpaceAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBlendSpaceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_BlendSpaceAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_BlendSpaceAsset = { "BlendSpaceAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBlendSpaceData, BlendSpaceAsset), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_BlendSpaceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_BlendSpaceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBlendSpaceData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_BlendSpaceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetBlendSpaceData",
		sizeof(FT4AnimsetBlendSpaceData),
		alignof(FT4AnimsetBlendSpaceData),
		Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBlendSpaceData"), sizeof(FT4AnimsetBlendSpaceData), Get_Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBlendSpaceData_Hash() { return 2840816241U; }
class UScriptStruct* FT4AnimsetAnimSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimsetAnimSequenceData"), sizeof(FT4AnimsetAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimsetAnimSequenceData>()
{
	return FT4AnimsetAnimSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetAnimSequenceData(FT4AnimsetAnimSequenceData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimsetAnimSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimSequenceData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetAnimSequenceData")),new UScriptStruct::TCppStructOps<FT4AnimsetAnimSequenceData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimsetAnimSequenceData;
	struct Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEndLoop_MetaData[];
#endif
		static void NewProp_bUseEndLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEndLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimSequenceAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditiveAnimType_MetaData[];
#endif
		static void NewProp_bAdditiveAnimType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditiveAnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetAnimSequenceData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #154 : \xec\x83\x89\xec\x9d\xb8\xec\x9d\x84 \xec\x9c\x84\xed\x95\x9c \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 (SystemLayer \xec\x9d\x98 StanceToStance Transform \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa8)\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#154 : \xec\x83\x89\xec\x9d\xb8\xec\x9d\x84 \xec\x9c\x84\xed\x95\x9c \xed\x94\x84\xeb\xa1\x9c\xed\x8d\xbc\xed\x8b\xb0 (SystemLayer \xec\x9d\x98 StanceToStance Transform \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa8)" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop_SetBit(void* Obj)
	{
		((FT4AnimsetAnimSequenceData*)Obj)->bUseEndLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop = { "bUseEndLoop", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimsetAnimSequenceData), &Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_TagName_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimSequenceData, TagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_TagName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_AnimSequenceAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_AnimSequenceAsset = { "AnimSequenceAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimSequenceData, AnimSequenceAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_AnimSequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_AnimSequenceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #138 : Local Space Base\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "#138 : Local Space Base" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimSequenceData, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_SetBit(void* Obj)
	{
		((FT4AnimsetAnimSequenceData*)Obj)->bAdditiveAnimType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType = { "bAdditiveAnimType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimsetAnimSequenceData), &Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetAnimSequenceData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bUseEndLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_TagName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_AnimSequenceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_bAdditiveAnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimsetAnimSequenceData",
		sizeof(FT4AnimsetAnimSequenceData),
		alignof(FT4AnimsetAnimSequenceData),
		Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetAnimSequenceData"), sizeof(FT4AnimsetAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetAnimSequenceData_Hash() { return 1749666127U; }
	void UT4AnimsetAsset::StaticRegisterNativesUT4AnimsetAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimsetAsset_NoRegister()
	{
		return UT4AnimsetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimsetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateLayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateLayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemLayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemLayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillLayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimsetTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimsetTemplate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimsetTemplate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletonAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimsetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "Animset/T4AnimsetAsset.h" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Internal: The thumbnail image\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "Internal: The thumbnail image" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, TestSettings), Z_Construct_UScriptStruct_FT4AnimsetTestSettings, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_TestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_StateLayerData_MetaData[] = {
		{ "Category", "StateLayer" },
		{ "Comment", "// CustomizeStateLayerDetails\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "CustomizeStateLayerDetails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_StateLayerData = { "StateLayerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, StateLayerData), Z_Construct_UScriptStruct_FT4AnimSetStateLayerData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_StateLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_StateLayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SystemLayerData_MetaData[] = {
		{ "Category", "StateLayer" },
		{ "Comment", "// CustomizeSystemLayerDetails\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "CustomizeSystemLayerDetails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SystemLayerData = { "SystemLayerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, SystemLayerData), Z_Construct_UScriptStruct_FT4AnimsetSystemLayerData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SystemLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SystemLayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkillLayerData_MetaData[] = {
		{ "Category", "SkillLayer" },
		{ "Comment", "// CustomizeSkillLayerDetails\n" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
		{ "ToolTip", "CustomizeSkillLayerDetails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkillLayerData = { "SkillLayerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, SkillLayerData), Z_Construct_UScriptStruct_FT4AnimsetSkillLayerData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkillLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkillLayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate = { "AnimsetTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, AnimsetTemplate), Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkeletonAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/Animset/T4AnimsetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkeletonAsset = { "SkeletonAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetAsset, SkeletonAsset), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkeletonAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkeletonAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimsetAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_TestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_StateLayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SystemLayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkillLayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_AnimsetTemplate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetAsset_Statics::NewProp_SkeletonAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimsetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimsetAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimsetAsset_Statics::ClassParams = {
		&UT4AnimsetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimsetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimsetAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimsetAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimsetAsset, 3583017056);
	template<> T4ASSET_API UClass* StaticClass<UT4AnimsetAsset>()
	{
		return UT4AnimsetAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimsetAsset(Z_Construct_UClass_UT4AnimsetAsset, &UT4AnimsetAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4AnimsetAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimsetAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4AnimsetAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
