// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/T4GameplayStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayStructs() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo();
// End Cross Module References
class UScriptStruct* FT4GameplayEffectSetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GameplayEffectSetInfo"), sizeof(FT4GameplayEffectSetInfo), Get_Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GameplayEffectSetInfo>()
{
	return FT4GameplayEffectSetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameplayEffectSetInfo(FT4GameplayEffectSetInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GameplayEffectSetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameplayEffectSetInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameplayEffectSetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameplayEffectSetInfo")),new UScriptStruct::TCppStructOps<FT4GameplayEffectSetInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameplayEffectSetInfo;
	struct Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MisDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MisDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MisDBKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirborneDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AirborneDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AirborneDBKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StunDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StunDBKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KnockbackDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KnockbackDBKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitDBKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameplayEffectSetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys = { "MisDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplayEffectSetInfo, MisDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys_Inner = { "MisDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys = { "AirborneDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplayEffectSetInfo, AirborneDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys_Inner = { "AirborneDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys = { "StunDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplayEffectSetInfo, StunDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys_Inner = { "StunDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys = { "KnockbackDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplayEffectSetInfo, KnockbackDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys_Inner = { "KnockbackDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys = { "HitDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplayEffectSetInfo, HitDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys_Inner = { "HitDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_MisDBKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_AirborneDBKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_StunDBKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_KnockbackDBKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::NewProp_HitDBKeys_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4GameplayEffectSetInfo",
		sizeof(FT4GameplayEffectSetInfo),
		alignof(FT4GameplayEffectSetInfo),
		Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameplayEffectSetInfo"), sizeof(FT4GameplayEffectSetInfo), Get_Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameplayEffectSetInfo_Hash() { return 1448087298U; }
class UScriptStruct* FT4GameplaySkillSetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4GameplaySkillSetInfo"), sizeof(FT4GameplaySkillSetInfo), Get_Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4GameplaySkillSetInfo>()
{
	return FT4GameplaySkillSetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4GameplaySkillSetInfo(FT4GameplaySkillSetInfo::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4GameplaySkillSetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameplaySkillSetInfo
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameplaySkillSetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4GameplaySkillSetInfo")),new UScriptStruct::TCppStructOps<FT4GameplaySkillSetInfo>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4GameplaySkillSetInfo;
	struct Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttackDBKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecialDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecialDBKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityDBKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityDBKeys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AbilityDBKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * #154\n */" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
		{ "ToolTip", "#154" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4GameplaySkillSetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys = { "AttackDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplaySkillSetInfo, AttackDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys_Inner = { "AttackDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys = { "SpecialDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplaySkillSetInfo, SpecialDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys_Inner = { "SpecialDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4GameplayStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys = { "AbilityDBKeys", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4GameplaySkillSetInfo, AbilityDBKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys_Inner = { "AbilityDBKeys", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AttackDBKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_SpecialDBKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::NewProp_AbilityDBKeys_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4GameplaySkillSetInfo",
		sizeof(FT4GameplaySkillSetInfo),
		alignof(FT4GameplaySkillSetInfo),
		Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4GameplaySkillSetInfo"), sizeof(FT4GameplaySkillSetInfo), Get_Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4GameplaySkillSetInfo_Hash() { return 3454008360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
