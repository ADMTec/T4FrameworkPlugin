// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Classes/ActionPack/T4ActionPackAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionPackAsset() {}
// Cross Module References
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTestSettings();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCompositeData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EnvironmentActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4PostProcessActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraShakeActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4CameraWorkActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4TimeScaleActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4PlayTagActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ReactionActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ProjectileActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AudioActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4DecalActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4TrailActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ParticleActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MeshActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimationActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4BranchActionData();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionFolderInfo();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionHeaderInfo();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionDataType();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPackAsset_NoRegister();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPackAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ASSET_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorTestAutomationData();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EntityAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FT4ActionTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionTestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionTestSettings, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionTestSettings"), sizeof(FT4ActionTestSettings), Get_Z_Construct_UScriptStruct_FT4ActionTestSettings_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionTestSettings>()
{
	return FT4ActionTestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionTestSettings(FT4ActionTestSettings::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionTestSettings
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionTestSettings")),new UScriptStruct::TCppStructOps<FT4ActionTestSettings>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionTestSettings;
	struct Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DieReactionNameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DieReactionNameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDataNameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDataNameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDataNameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillDataNameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEffectData_MetaData[];
#endif
		static void NewProp_bOverrideEffectData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSkillData_MetaData[];
#endif
		static void NewProp_bOverrideSkillData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSkillData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSandbagOneHitDie_MetaData[];
#endif
		static void NewProp_bSandbagOneHitDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSandbagOneHitDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSandbagRoleAttacker_MetaData[];
#endif
		static void NewProp_bSandbagRoleAttacker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSandbagRoleAttacker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAISystemDisabled_MetaData[];
#endif
		static void NewProp_bAISystemDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAISystemDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SandbagNameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SandbagNameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponNameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponNameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSetSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimSetSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapEntitySelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapEntitySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionTestSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_DieReactionNameID_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_DieReactionNameID = { "DieReactionNameID", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, DieReactionNameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_DieReactionNameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_DieReactionNameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_EffectDataNameID_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_EffectDataNameID = { "EffectDataNameID", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, EffectDataNameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_EffectDataNameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_EffectDataNameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SkillDataNameID_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #68\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#68" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SkillDataNameID = { "SkillDataNameID", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, SkillDataNameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SkillDataNameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SkillDataNameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#63" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData_SetBit(void* Obj)
	{
		((FT4ActionTestSettings*)Obj)->bOverrideEffectData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData = { "bOverrideEffectData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionTestSettings), &Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData_SetBit(void* Obj)
	{
		((FT4ActionTestSettings*)Obj)->bOverrideSkillData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData = { "bOverrideSkillData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionTestSettings), &Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#63" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie_SetBit(void* Obj)
	{
		((FT4ActionTestSettings*)Obj)->bSandbagOneHitDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie = { "bSandbagOneHitDie", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionTestSettings), &Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker_SetBit(void* Obj)
	{
		((FT4ActionTestSettings*)Obj)->bSandbagRoleAttacker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker = { "bSandbagRoleAttacker", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionTestSettings), &Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled_SetBit(void* Obj)
	{
		((FT4ActionTestSettings*)Obj)->bAISystemDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled = { "bAISystemDisabled", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionTestSettings), &Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SandbagNameID_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SandbagNameID = { "SandbagNameID", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, SandbagNameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SandbagNameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SandbagNameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_WeaponNameID_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #106\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#106" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_WeaponNameID = { "WeaponNameID", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, WeaponNameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_WeaponNameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_WeaponNameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_StanceSelected_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #73\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#73" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_StanceSelected = { "StanceSelected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, StanceSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_StanceSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_StanceSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_AnimSetSelected_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #87\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#87" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_AnimSetSelected = { "AnimSetSelected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, AnimSetSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_AnimSetSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_AnimSetSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_MapEntitySelected_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #T4_ADD_EDITOR_PLAY_TAG\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#T4_ADD_EDITOR_PLAY_TAG" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_MapEntitySelected = { "MapEntitySelected", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTestSettings, MapEntitySelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_MapEntitySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_MapEntitySelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_DieReactionNameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_EffectDataNameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SkillDataNameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bOverrideSkillData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagOneHitDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bSandbagRoleAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_bAISystemDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_SandbagNameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_WeaponNameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_StanceSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_AnimSetSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::NewProp_MapEntitySelected,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ActionTestSettings",
		sizeof(FT4ActionTestSettings),
		alignof(FT4ActionTestSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionTestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionTestSettings"), sizeof(FT4ActionTestSettings), Get_Z_Construct_UScriptStruct_FT4ActionTestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionTestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionTestSettings_Hash() { return 3291210195U; }
class UScriptStruct* FT4ActionCompositeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionCompositeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionCompositeData, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionCompositeData"), sizeof(FT4ActionCompositeData), Get_Z_Construct_UScriptStruct_FT4ActionCompositeData_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionCompositeData>()
{
	return FT4ActionCompositeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionCompositeData(FT4ActionCompositeData::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionCompositeData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionCompositeData
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionCompositeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionCompositeData")),new UScriptStruct::TCppStructOps<FT4ActionCompositeData>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionCompositeData;
	struct Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnvironmentActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PostProcessActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraShakeActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraShakeActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraWorkActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraWorkActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraWorkActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScaleActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeScaleActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeScaleActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTagActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayTagActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayTagActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReactionActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactionActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProjectileActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecalActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrailActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MovementActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchActions_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FolderInfoMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderInfoMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderInfoMap_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HeaderInfoMap;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HeaderInfoMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderInfoMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #54\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#54" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionCompositeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #100\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#100" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions = { "EnvironmentActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, EnvironmentActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions_Inner = { "EnvironmentActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4EnvironmentActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #101\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#101" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions = { "PostProcessActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, PostProcessActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions_Inner = { "PostProcessActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4PostProcessActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #58\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#58" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions = { "CameraShakeActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, CameraShakeActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions_Inner = { "CameraShakeActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4CameraShakeActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// ##102\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "##102" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions = { "CameraWorkActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, CameraWorkActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions_Inner = { "CameraWorkActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4CameraWorkActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #81\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#81" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions = { "TimeScaleActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, TimeScaleActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions_Inner = { "TimeScaleActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4TimeScaleActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #76\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#76" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions = { "PlayTagActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, PlayTagActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions_Inner = { "PlayTagActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4PlayTagActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#63" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions = { "ReactionActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, ReactionActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions_Inner = { "ReactionActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ReactionActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #152\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#152" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions = { "ProjectileActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, ProjectileActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions_Inner = { "ProjectileActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ProjectileActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #54\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#54" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions = { "AudioActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, AudioActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions_Inner = { "AudioActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AudioActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #166\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#166" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions = { "DecalActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, DecalActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions_Inner = { "DecalActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4DecalActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions = { "TrailActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, TrailActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions_Inner = { "TrailActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4TrailActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #108\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#108" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions = { "ParticleActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, ParticleActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions_Inner = { "ParticleActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4ParticleActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions = { "MeshActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, MeshActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions_Inner = { "MeshActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MeshActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #132\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#132" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions = { "AnimationActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, AnimationActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions_Inner = { "AnimationActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4AnimationActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #54\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#54" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions = { "MovementActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, MovementActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions_Inner = { "MovementActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4MovementActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #T4_ADD_ACTION_TAG_DATA\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#T4_ADD_ACTION_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions = { "BranchActions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, BranchActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions_Inner = { "BranchActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FT4BranchActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap = { "FolderInfoMap", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, FolderInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_Key_KeyProp = { "FolderInfoMap_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_ValueProp = { "FolderInfoMap", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ActionFolderInfo, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap = { "HeaderInfoMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionCompositeData, HeaderInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_Key_KeyProp = { "HeaderInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_ValueProp = { "HeaderInfoMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4ActionHeaderInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_EnvironmentActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PostProcessActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraShakeActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_CameraWorkActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TimeScaleActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_PlayTagActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ReactionActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ProjectileActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AudioActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_DecalActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_TrailActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_ParticleActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MeshActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_AnimationActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_MovementActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_BranchActions_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_FolderInfoMap_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::NewProp_HeaderInfoMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ActionCompositeData",
		sizeof(FT4ActionCompositeData),
		alignof(FT4ActionCompositeData),
		Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionCompositeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionCompositeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionCompositeData"), sizeof(FT4ActionCompositeData), Get_Z_Construct_UScriptStruct_FT4ActionCompositeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionCompositeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionCompositeData_Hash() { return 1322320871U; }
class UScriptStruct* FT4ActionFolderInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionFolderInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionFolderInfo, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionFolderInfo"), sizeof(FT4ActionFolderInfo), Get_Z_Construct_UScriptStruct_FT4ActionFolderInfo_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionFolderInfo>()
{
	return FT4ActionFolderInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionFolderInfo(FT4ActionFolderInfo::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionFolderInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionFolderInfo
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionFolderInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionFolderInfo")),new UScriptStruct::TCppStructOps<FT4ActionFolderInfo>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionFolderInfo;
	struct Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentFolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #56\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#56" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionFolderInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #56 : lower win\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#56 : lower win" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionFolderInfo, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_ParentFolderName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_ParentFolderName = { "ParentFolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionFolderInfo, ParentFolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_ParentFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_ParentFolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::NewProp_ParentFolderName,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ActionFolderInfo",
		sizeof(FT4ActionFolderInfo),
		alignof(FT4ActionFolderInfo),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionFolderInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionFolderInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionFolderInfo"), sizeof(FT4ActionFolderInfo), Get_Z_Construct_UScriptStruct_FT4ActionFolderInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionFolderInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionFolderInfo_Hash() { return 280908389U; }
class UScriptStruct* FT4ActionHeaderInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ASSET_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionHeaderInfo, Z_Construct_UPackage__Script_T4Asset(), TEXT("T4ActionHeaderInfo"), sizeof(FT4ActionHeaderInfo), Get_Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Hash());
	}
	return Singleton;
}
template<> T4ASSET_API UScriptStruct* StaticStruct<FT4ActionHeaderInfo>()
{
	return FT4ActionHeaderInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionHeaderInfo(FT4ActionHeaderInfo::StaticStruct, TEXT("/Script/T4Asset"), TEXT("T4ActionHeaderInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionHeaderInfo
{
	FScriptStruct_T4Asset_StaticRegisterNativesFT4ActionHeaderInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionHeaderInfo")),new UScriptStruct::TCppStructOps<FT4ActionHeaderInfo>);
	}
} ScriptStruct_T4Asset_StaticRegisterNativesFT4ActionHeaderInfo;
	struct Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionDataType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionDataType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #24\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#24" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionHeaderInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_FolderName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionHeaderInfo, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_FolderName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionArrayIndex_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionArrayIndex = { "ActionArrayIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionHeaderInfo, ActionArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType = { "ActionDataType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionHeaderInfo, ActionDataType), Z_Construct_UEnum_T4Asset_ET4ActionDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_FolderName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::NewProp_ActionDataType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
		nullptr,
		&NewStructOps,
		"T4ActionHeaderInfo",
		sizeof(FT4ActionHeaderInfo),
		alignof(FT4ActionHeaderInfo),
		Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionHeaderInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionHeaderInfo"), sizeof(FT4ActionHeaderInfo), Get_Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionHeaderInfo_Hash() { return 1826401705U; }
	void UT4ActionPackAsset::StaticRegisterNativesUT4ActionPackAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionPackAsset_NoRegister()
	{
		return UT4ActionPackAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionPackAsset_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewEntityAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalPlayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompositeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionPackAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "IncludePath", "ActionPack/T4ActionPackAsset.h" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "// #100\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#100" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionPackAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestAutomation_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// #60\n" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
		{ "ToolTip", "#60" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestAutomation = { "TestAutomation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionPackAsset, TestAutomation), Z_Construct_UScriptStruct_FT4EditorTestAutomationData, METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestAutomation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestAutomation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestSettings_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestSettings = { "TestSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionPackAsset, TestSettings), Z_Construct_UScriptStruct_FT4ActionTestSettings, METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_PreviewEntityAsset_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_PreviewEntityAsset = { "PreviewEntityAsset", nullptr, (EPropertyFlags)0x0014010800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionPackAsset, PreviewEntityAsset), Z_Construct_UClass_UT4EntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_PreviewEntityAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_PreviewEntityAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TotalPlayTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TotalPlayTimeSec = { "TotalPlayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionPackAsset, TotalPlayTimeSec), METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TotalPlayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TotalPlayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_CompositeData_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/ActionPack/T4ActionPackAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_CompositeData = { "CompositeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionPackAsset, CompositeData), Z_Construct_UScriptStruct_FT4ActionCompositeData, METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_CompositeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_CompositeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionPackAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_ThumbnailImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestAutomation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TestSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_PreviewEntityAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_TotalPlayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionPackAsset_Statics::NewProp_CompositeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionPackAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionPackAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionPackAsset_Statics::ClassParams = {
		&UT4ActionPackAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionPackAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionPackAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionPackAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionPackAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionPackAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionPackAsset, 3521387867);
	template<> T4ASSET_API UClass* StaticClass<UT4ActionPackAsset>()
	{
		return UT4ActionPackAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionPackAsset(Z_Construct_UClass_UT4ActionPackAsset, &UT4ActionPackAsset::StaticClass, TEXT("/Script/T4Asset"), TEXT("UT4ActionPackAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionPackAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ActionPackAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
