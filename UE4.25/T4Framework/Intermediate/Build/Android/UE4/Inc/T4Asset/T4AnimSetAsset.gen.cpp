// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/AnimSet/T4AnimSetAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetTestSettings();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetStateLayerData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetAnimStateData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimSetAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4AnimSetAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FT4AnimSetTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetTestSettings, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetTestSettings"), sizeof(FT4AnimSetTestSettings), Get_Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetTestSettings>()
{
	return FT4AnimSetTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetTestSettings(FT4AnimSetTestSettings::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetTestSettings
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetTestSettings")),new UScriptStruct::TCppStructOps<FT4AnimSetTestSettings>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetTestSettings;
	struct Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting_MetaData[] = {
		{ "Category", "Testing" },
		{ "Comment", "// #111\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#111" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting_SetBit(void* Obj)
	{
		((FT4AnimSetTestSettings*)Obj)->bAutoMounting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting = { "bAutoMounting", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetTestSettings), &Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_EquipWeaponEntityAsset_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_EquipWeaponEntityAsset = { "EquipWeaponEntityAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetTestSettings, EquipWeaponEntityAsset), Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_EquipWeaponEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_EquipWeaponEntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_PreviewEntityAsset_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_PreviewEntityAsset = { "PreviewEntityAsset", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetTestSettings, PreviewEntityAsset), Z_Construct_UClass_UT4EntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_PreviewEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_PreviewEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_bAutoMounting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_EquipWeaponEntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::NewProp_PreviewEntityAsset,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetTestSettings",
		sizeof(FT4AnimSetTestSettings),
		alignof(FT4AnimSetTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetTestSettings"), sizeof(FT4AnimSetTestSettings), Get_Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetTestSettings_Hash() { return 2460319615U; }
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
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
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
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray = { "AnimStateDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetStateLayerData, AnimStateDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Statics::NewProp_AnimStateDataArray_Inner = { "AnimStateDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetAnimStateData, METADATA_PARAMS(nullptr, 0) };
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
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetStateLayerData_Hash() { return 183568976U; }
class UScriptStruct* FT4AnimSetAnimStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetAnimStateData"), sizeof(FT4AnimSetAnimStateData), Get_Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetAnimStateData>()
{
	return FT4AnimSetAnimStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetAnimStateData(FT4AnimSetAnimStateData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetAnimStateData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimStateData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetAnimStateData")),new UScriptStruct::TCppStructOps<FT4AnimSetAnimStateData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimStateData;
	struct Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetAnimStateData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_SetBit(void* Obj)
	{
		((FT4AnimSetAnimStateData*)Obj)->bEditorShowNotSetProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty = { "bEditorShowNotSetProperty", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetAnimStateData), &Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap = { "StateParameterMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimStateData, StateParameterMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_Key_KeyProp = { "StateParameterMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_ValueProp = { "StateParameterMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray = { "BlendSpaceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimStateData, BlendSpaceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray_Inner = { "BlendSpaceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimStateData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// FT4StanceDataLoader::ProcessPre() // #111\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "FT4StanceDataLoader::ProcessPre()  #111" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimStateData, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_PostureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_bEditorShowNotSetProperty,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_StateParameterMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_BlendSpaceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::NewProp_PostureName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetAnimStateData",
		sizeof(FT4AnimSetAnimStateData),
		alignof(FT4AnimSetAnimStateData),
		Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetAnimStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetAnimStateData"), sizeof(FT4AnimSetAnimStateData), Get_Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimStateData_Hash() { return 2072738505U; }
class UScriptStruct* FT4AnimSetSystemLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetSystemLayerData"), sizeof(FT4AnimSetSystemLayerData), Get_Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetSystemLayerData>()
{
	return FT4AnimSetSystemLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetSystemLayerData(FT4AnimSetSystemLayerData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetSystemLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetSystemLayerData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetSystemLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetSystemLayerData")),new UScriptStruct::TCppStructOps<FT4AnimSetSystemLayerData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetSystemLayerData;
	struct Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetSystemLayerData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray = { "AnimSystemDataArray", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetSystemLayerData, AnimSystemDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray_Inner = { "AnimSystemDataArray", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset = { "AdditiveAnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetSystemLayerData, AdditiveAnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset = { "SystemAnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetSystemLayerData, SystemAnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AnimSystemDataArray_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_AdditiveAnimMontageAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::NewProp_SystemAnimMontageAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetSystemLayerData",
		sizeof(FT4AnimSetSystemLayerData),
		alignof(FT4AnimSetSystemLayerData),
		Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetSystemLayerData"), sizeof(FT4AnimSetSystemLayerData), Get_Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData_Hash() { return 969981316U; }
class UScriptStruct* FT4AnimSetAnimSystemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetAnimSystemData"), sizeof(FT4AnimSetAnimSystemData), Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetAnimSystemData>()
{
	return FT4AnimSetAnimSystemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetAnimSystemData(FT4AnimSetAnimSystemData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetAnimSystemData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimSystemData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimSystemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetAnimSystemData")),new UScriptStruct::TCppStructOps<FT4AnimSetAnimSystemData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimSystemData;
	struct Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PostureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetAnimSystemData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_MetaData[] = {
		{ "Category", "Hide" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_SetBit(void* Obj)
	{
		((FT4AnimSetAnimSystemData*)Obj)->bEditorShowNotSetProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty = { "bEditorShowNotSetProperty", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetAnimSystemData), &Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimSystemData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_PostureName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// FT4StanceDataLoader::ProcessPre() // #111\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "FT4StanceDataLoader::ProcessPre()  #111" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_PostureName = { "PostureName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimSystemData, PostureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_PostureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_PostureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_bEditorShowNotSetProperty,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::NewProp_PostureName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetAnimSystemData",
		sizeof(FT4AnimSetAnimSystemData),
		alignof(FT4AnimSetAnimSystemData),
		Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetAnimSystemData"), sizeof(FT4AnimSetAnimSystemData), Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSystemData_Hash() { return 758459647U; }
class UScriptStruct* FT4AnimSetSkillLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetSkillLayerData"), sizeof(FT4AnimSetSkillLayerData), Get_Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetSkillLayerData>()
{
	return FT4AnimSetSkillLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetSkillLayerData(FT4AnimSetSkillLayerData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetSkillLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetSkillLayerData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetSkillLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetSkillLayerData")),new UScriptStruct::TCppStructOps<FT4AnimSetSkillLayerData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetSkillLayerData;
	struct Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetSkillLayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetSkillLayerData, AnimSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray_Inner = { "AnimSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimMontageAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #69\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#69" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimMontageAsset = { "AnimMontageAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetSkillLayerData, AnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_SetBit(void* Obj)
	{
		((FT4AnimSetSkillLayerData*)Obj)->bAnimMontageAutoGen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen = { "bAnimMontageAutoGen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetSkillLayerData), &Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_AnimMontageAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::NewProp_bAnimMontageAutoGen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetSkillLayerData",
		sizeof(FT4AnimSetSkillLayerData),
		alignof(FT4AnimSetSkillLayerData),
		Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetSkillLayerData"), sizeof(FT4AnimSetSkillLayerData), Get_Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData_Hash() { return 2026045356U; }
class UScriptStruct* FT4AnimSetBlendSpaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetBlendSpaceData"), sizeof(FT4AnimSetBlendSpaceData), Get_Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetBlendSpaceData>()
{
	return FT4AnimSetBlendSpaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBlendSpaceData(FT4AnimSetBlendSpaceData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetBlendSpaceData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetBlendSpaceData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetBlendSpaceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBlendSpaceData")),new UScriptStruct::TCppStructOps<FT4AnimSetBlendSpaceData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetBlendSpaceData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBlendSpaceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_BlendSpaceAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_BlendSpaceAsset = { "BlendSpaceAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBlendSpaceData, BlendSpaceAsset), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_BlendSpaceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_BlendSpaceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBlendSpaceData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_BlendSpaceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetBlendSpaceData",
		sizeof(FT4AnimSetBlendSpaceData),
		alignof(FT4AnimSetBlendSpaceData),
		Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBlendSpaceData"), sizeof(FT4AnimSetBlendSpaceData), Get_Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBlendSpaceData_Hash() { return 1991306792U; }
class UScriptStruct* FT4AnimSetAnimSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4AnimSetAnimSequenceData"), sizeof(FT4AnimSetAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4AnimSetAnimSequenceData>()
{
	return FT4AnimSetAnimSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetAnimSequenceData(FT4AnimSetAnimSequenceData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4AnimSetAnimSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimSequenceData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetAnimSequenceData")),new UScriptStruct::TCppStructOps<FT4AnimSetAnimSequenceData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4AnimSetAnimSequenceData;
	struct Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetAnimSequenceData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop_SetBit(void* Obj)
	{
		((FT4AnimSetAnimSequenceData*)Obj)->bUseEndLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop = { "bUseEndLoop", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetAnimSequenceData), &Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_AnimSequenceAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_AnimSequenceAsset = { "AnimSequenceAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimSequenceData, AnimSequenceAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_AnimSequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_AnimSequenceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #138 : Local Space Base\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "#138 : Local Space Base" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimSequenceData, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_SetBit(void* Obj)
	{
		((FT4AnimSetAnimSequenceData*)Obj)->bAdditiveAnimType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType = { "bAdditiveAnimType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetAnimSequenceData), &Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetAnimSequenceData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bUseEndLoop,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_AnimSequenceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_bAdditiveAnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4AnimSetAnimSequenceData",
		sizeof(FT4AnimSetAnimSequenceData),
		alignof(FT4AnimSetAnimSequenceData),
		Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetAnimSequenceData"), sizeof(FT4AnimSetAnimSequenceData), Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetAnimSequenceData_Hash() { return 2121577290U; }
	void UT4AnimSetAsset::StaticRegisterNativesUT4AnimSetAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetAsset_NoRegister()
	{
		return UT4AnimSetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimSetTemplate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimSetTemplate_Underlying;
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
	UObject* (*const Z_Construct_UClass_UT4AnimSetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "AnimSet/T4AnimSetAsset.h" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Internal: The thumbnail image\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "Internal: The thumbnail image" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, TestSettings), Z_Construct_UScriptStruct_FT4AnimSetTestSettings, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_TestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_StateLayerData_MetaData[] = {
		{ "Category", "StateLayer" },
		{ "Comment", "// CustomizeStateLayerDetails\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "CustomizeStateLayerDetails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_StateLayerData = { "StateLayerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, StateLayerData), Z_Construct_UScriptStruct_FT4AnimSetStateLayerData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_StateLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_StateLayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SystemLayerData_MetaData[] = {
		{ "Category", "StateLayer" },
		{ "Comment", "// CustomizeSystemLayerDetails\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "CustomizeSystemLayerDetails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SystemLayerData = { "SystemLayerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, SystemLayerData), Z_Construct_UScriptStruct_FT4AnimSetSystemLayerData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SystemLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SystemLayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkillLayerData_MetaData[] = {
		{ "Category", "SkillLayer" },
		{ "Comment", "// CustomizeSkillLayerDetails\n" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
		{ "ToolTip", "CustomizeSkillLayerDetails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkillLayerData = { "SkillLayerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, SkillLayerData), Z_Construct_UScriptStruct_FT4AnimSetSkillLayerData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkillLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkillLayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate = { "AnimSetTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, AnimSetTemplate), Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkeletonAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/AnimSet/T4AnimSetAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkeletonAsset = { "SkeletonAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetAsset, SkeletonAsset), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkeletonAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkeletonAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_TestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_StateLayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SystemLayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkillLayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_AnimSetTemplate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetAsset_Statics::NewProp_SkeletonAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetAsset_Statics::ClassParams = {
		&UT4AnimSetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetAsset, 2253490157);
	template<> T4ASSET_API UClass* StaticClass<UT4AnimSetAsset>()
	{
		return UT4AnimSetAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetAsset(Z_Construct_UClass_UT4AnimSetAsset, &UT4AnimSetAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4AnimSetAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4AnimSetAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
