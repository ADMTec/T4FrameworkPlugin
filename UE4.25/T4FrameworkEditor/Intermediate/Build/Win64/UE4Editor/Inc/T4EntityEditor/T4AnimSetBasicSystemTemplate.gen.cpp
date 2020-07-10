// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetBasicSystemTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicSystemTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetBasicSystemDeathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemDeathData"), sizeof(FT4AnimSetBasicSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemDeathData>()
{
	return FT4AnimSetBasicSystemDeathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemDeathData(FT4AnimSetBasicSystemDeathData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemDeathData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemDeathData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemDeathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemDeathData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemDeathData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemDeathData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resurrect_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Resurrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathB_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DeathB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathA_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DeathA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemDeathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_Resurrect_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_Resurrect = { "Resurrect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemDeathData, Resurrect), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_Resurrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_Resurrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathB = { "DeathB", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemDeathData, DeathB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathA = { "DeathA", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemDeathData, DeathA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_Resurrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::NewProp_DeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemDeathData",
		sizeof(FT4AnimSetBasicSystemDeathData),
		alignof(FT4AnimSetBasicSystemDeathData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemDeathData"), sizeof(FT4AnimSetBasicSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData_Hash() { return 3533454509U; }
class UScriptStruct* FT4AnimSetBasicSystemCrowdControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemCrowdControlData"), sizeof(FT4AnimSetBasicSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemCrowdControlData>()
{
	return FT4AnimSetBasicSystemCrowdControlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData(FT4AnimSetBasicSystemCrowdControlData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemCrowdControlData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemCrowdControlData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemCrowdControlData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemCrowdControlData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemCrowdControlData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemCrowdControlData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackBackStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KnockbackBackStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackFrontStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KnockbackFrontStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StunStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bound_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Bound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemCrowdControlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart = { "KnockbackBackStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemCrowdControlData, KnockbackBackStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart = { "KnockbackFrontStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemCrowdControlData, KnockbackFrontStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_StunStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_StunStart = { "StunStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemCrowdControlData, StunStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_StunStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_StunStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_Bound_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool FT4AnimSetBasicSystemCrowdControlData::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ToolTip", "bool FT4AnimSetBasicSystemCrowdControlData::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemCrowdControlData, Bound), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_Bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_StunStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::NewProp_Bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemCrowdControlData",
		sizeof(FT4AnimSetBasicSystemCrowdControlData),
		alignof(FT4AnimSetBasicSystemCrowdControlData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemCrowdControlData"), sizeof(FT4AnimSetBasicSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData_Hash() { return 2779214849U; }
class UScriptStruct* FT4AnimSetBasicSystemHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemHitData"), sizeof(FT4AnimSetBasicSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemHitData>()
{
	return FT4AnimSetBasicSystemHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemHitData(FT4AnimSetBasicSystemHitData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemHitData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemHitData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemHitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemHitData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemHitData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemHitData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitReactRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitReactRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitReactLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitReactLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitReactBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitReactBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitReactFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitReactFront;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactRight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactRight = { "HitReactRight", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemHitData, HitReactRight), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactLeft_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactLeft = { "HitReactLeft", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemHitData, HitReactLeft), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactBack_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactBack = { "HitReactBack", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemHitData, HitReactBack), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactFront_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactFront = { "HitReactFront", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemHitData, HitReactFront), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::NewProp_HitReactFront,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemHitData",
		sizeof(FT4AnimSetBasicSystemHitData),
		alignof(FT4AnimSetBasicSystemHitData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemHitData"), sizeof(FT4AnimSetBasicSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData_Hash() { return 2133233092U; }
class UScriptStruct* FT4AnimSetBasicSystemJumpData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemJumpData"), sizeof(FT4AnimSetBasicSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemJumpData>()
{
	return FT4AnimSetBasicSystemJumpData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemJumpData(FT4AnimSetBasicSystemJumpData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemJumpData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemJumpData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemJumpData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemJumpData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemJumpData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemJumpData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRecovery_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JumpRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpFall_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JumpFall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JumpLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JumpStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemJumpData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpRecovery_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpRecovery = { "JumpRecovery", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemJumpData, JumpRecovery), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpFall_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpFall = { "JumpFall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemJumpData, JumpFall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemJumpData, JumpLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemJumpData, JumpStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::NewProp_JumpStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemJumpData",
		sizeof(FT4AnimSetBasicSystemJumpData),
		alignof(FT4AnimSetBasicSystemJumpData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemJumpData"), sizeof(FT4AnimSetBasicSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData_Hash() { return 1439146544U; }
class UScriptStruct* FT4AnimSetBasicSystemTurnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemTurnData"), sizeof(FT4AnimSetBasicSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemTurnData>()
{
	return FT4AnimSetBasicSystemTurnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemTurnData(FT4AnimSetBasicSystemTurnData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemTurnData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemTurnData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemTurnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemTurnData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemTurnData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemTurnData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRight180_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TurnRight180;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRight90_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TurnRight90;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeft180_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TurnLeft180;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeft90_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TurnLeft90;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemTurnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight180 = { "TurnRight180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTurnData, TurnRight180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight90 = { "TurnRight90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTurnData, TurnRight90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight90_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft180 = { "TurnLeft180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTurnData, TurnLeft180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft90 = { "TurnLeft90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTurnData, TurnLeft90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft90_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnRight90,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::NewProp_TurnLeft90,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemTurnData",
		sizeof(FT4AnimSetBasicSystemTurnData),
		alignof(FT4AnimSetBasicSystemTurnData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemTurnData"), sizeof(FT4AnimSetBasicSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData_Hash() { return 1539395729U; }
class UScriptStruct* FT4AnimSetBasicSystemEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemEquipmentData"), sizeof(FT4AnimSetBasicSystemEquipmentData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemEquipmentData>()
{
	return FT4AnimSetBasicSystemEquipmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData(FT4AnimSetBasicSystemEquipmentData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemEquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemEquipmentData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemEquipmentData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemEquipmentData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemEquipmentData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequipWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_UnequipWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EquipWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon = { "UnequipWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemEquipmentData, UnequipWeapon), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon = { "EquipWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemEquipmentData, EquipWeapon), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemEquipmentData",
		sizeof(FT4AnimSetBasicSystemEquipmentData),
		alignof(FT4AnimSetBasicSystemEquipmentData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemEquipmentData"), sizeof(FT4AnimSetBasicSystemEquipmentData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData_Hash() { return 3175950908U; }
class UScriptStruct* FT4AnimSetBasicSystemTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSystemTransitionData"), sizeof(FT4AnimSetBasicSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSystemTransitionData>()
{
	return FT4AnimSetBasicSystemTransitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSystemTransitionData(FT4AnimSetBasicSystemTransitionData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSystemTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemTransitionData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSystemTransitionData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemTransitionData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSystemTransitionData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatToDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CombatToDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultToCombat_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultToCombat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TransitionIdle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSystemTransitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_CombatToDefault = { "CombatToDefault", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTransitionData, CombatToDefault), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat = { "DefaultToCombat", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTransitionData, DefaultToCombat), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_TransitionIdle = { "TransitionIdle", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSystemTransitionData, TransitionIdle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_CombatToDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::NewProp_TransitionIdle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSystemTransitionData",
		sizeof(FT4AnimSetBasicSystemTransitionData),
		alignof(FT4AnimSetBasicSystemTransitionData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSystemTransitionData"), sizeof(FT4AnimSetBasicSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData_Hash() { return 1995610043U; }
	void UT4AnimSetBasicSystemTemplate::StaticRegisterNativesUT4AnimSetBasicSystemTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_NoRegister()
	{
		return UT4AnimSetBasicSystemTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeathData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdControlData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrowdControlData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurnData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_DeathData_MetaData[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_DeathData = { "DeathData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, DeathData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemDeathData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_DeathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_DeathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_CrowdControlData_MetaData[] = {
		{ "Category", "Reaction" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_CrowdControlData = { "CrowdControlData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, CrowdControlData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemCrowdControlData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_CrowdControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_CrowdControlData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, HitData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemHitData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_JumpData_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_JumpData = { "JumpData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, JumpData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemJumpData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_JumpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_JumpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TurnData_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TurnData = { "TurnData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, TurnData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTurnData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TurnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TurnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, EquipmentData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemEquipmentData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TransitionData_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// bool UT4AnimSetBasicSystemTemplate::CopyFrom\n// bool UT4AnimSetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSystemTemplate::CopyFrom\nbool UT4AnimSetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TransitionData = { "TransitionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSystemTemplate, TransitionData), Z_Construct_UScriptStruct_FT4AnimSetBasicSystemTransitionData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TransitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TransitionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_DeathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_CrowdControlData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_JumpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TurnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::NewProp_TransitionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetBasicSystemTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::ClassParams = {
		&UT4AnimSetBasicSystemTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetBasicSystemTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetBasicSystemTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetBasicSystemTemplate, 4249947201);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetBasicSystemTemplate>()
	{
		return UT4AnimSetBasicSystemTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetBasicSystemTemplate(Z_Construct_UClass_UT4AnimSetBasicSystemTemplate, &UT4AnimSetBasicSystemTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetBasicSystemTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetBasicSystemTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
