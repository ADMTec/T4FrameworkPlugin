// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetBasicSystemTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetBasicSystemTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimsetBasicSystemDeathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemDeathData"), sizeof(FT4AnimsetBasicSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemDeathData>()
{
	return FT4AnimsetBasicSystemDeathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemDeathData(FT4AnimsetBasicSystemDeathData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemDeathData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemDeathData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemDeathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemDeathData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemDeathData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemDeathData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemDeathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_Resurrect_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_Resurrect = { "Resurrect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemDeathData, Resurrect), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_Resurrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_Resurrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathB = { "DeathB", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemDeathData, DeathB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathA = { "DeathA", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemDeathData, DeathA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_Resurrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::NewProp_DeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemDeathData",
		sizeof(FT4AnimsetBasicSystemDeathData),
		alignof(FT4AnimsetBasicSystemDeathData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemDeathData"), sizeof(FT4AnimsetBasicSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData_Hash() { return 3647022513U; }
class UScriptStruct* FT4AnimsetBasicSystemCrowdControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemCrowdControlData"), sizeof(FT4AnimsetBasicSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemCrowdControlData>()
{
	return FT4AnimsetBasicSystemCrowdControlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData(FT4AnimsetBasicSystemCrowdControlData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemCrowdControlData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemCrowdControlData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemCrowdControlData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemCrowdControlData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemCrowdControlData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemCrowdControlData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemCrowdControlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart = { "KnockbackBackStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemCrowdControlData, KnockbackBackStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart = { "KnockbackFrontStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemCrowdControlData, KnockbackFrontStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_StunStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_StunStart = { "StunStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemCrowdControlData, StunStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_StunStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_StunStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_Bound_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool FT4AnimsetBasicSystemCrowdControlData::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ToolTip", "bool FT4AnimsetBasicSystemCrowdControlData::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemCrowdControlData, Bound), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_Bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackBackStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_StunStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::NewProp_Bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemCrowdControlData",
		sizeof(FT4AnimsetBasicSystemCrowdControlData),
		alignof(FT4AnimsetBasicSystemCrowdControlData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemCrowdControlData"), sizeof(FT4AnimsetBasicSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData_Hash() { return 2714687214U; }
class UScriptStruct* FT4AnimsetBasicSystemHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemHitData"), sizeof(FT4AnimsetBasicSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemHitData>()
{
	return FT4AnimsetBasicSystemHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemHitData(FT4AnimsetBasicSystemHitData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemHitData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemHitData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemHitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemHitData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemHitData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemHitData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactRight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactRight = { "HitReactRight", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemHitData, HitReactRight), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactLeft_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactLeft = { "HitReactLeft", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemHitData, HitReactLeft), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactBack_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactBack = { "HitReactBack", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemHitData, HitReactBack), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactFront_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactFront = { "HitReactFront", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemHitData, HitReactFront), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::NewProp_HitReactFront,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemHitData",
		sizeof(FT4AnimsetBasicSystemHitData),
		alignof(FT4AnimsetBasicSystemHitData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemHitData"), sizeof(FT4AnimsetBasicSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData_Hash() { return 4253948242U; }
class UScriptStruct* FT4AnimsetBasicSystemJumpData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemJumpData"), sizeof(FT4AnimsetBasicSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemJumpData>()
{
	return FT4AnimsetBasicSystemJumpData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemJumpData(FT4AnimsetBasicSystemJumpData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemJumpData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemJumpData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemJumpData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemJumpData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemJumpData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemJumpData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemJumpData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpRecovery_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpRecovery = { "JumpRecovery", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemJumpData, JumpRecovery), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpFall_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpFall = { "JumpFall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemJumpData, JumpFall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemJumpData, JumpLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemJumpData, JumpStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::NewProp_JumpStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemJumpData",
		sizeof(FT4AnimsetBasicSystemJumpData),
		alignof(FT4AnimsetBasicSystemJumpData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemJumpData"), sizeof(FT4AnimsetBasicSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData_Hash() { return 3272927507U; }
class UScriptStruct* FT4AnimsetBasicSystemTurnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemTurnData"), sizeof(FT4AnimsetBasicSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemTurnData>()
{
	return FT4AnimsetBasicSystemTurnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemTurnData(FT4AnimsetBasicSystemTurnData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemTurnData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemTurnData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemTurnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemTurnData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemTurnData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemTurnData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemTurnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight180 = { "TurnRight180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTurnData, TurnRight180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight90 = { "TurnRight90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTurnData, TurnRight90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight90_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft180 = { "TurnLeft180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTurnData, TurnLeft180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft90 = { "TurnLeft90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTurnData, TurnLeft90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft90_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnRight90,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::NewProp_TurnLeft90,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemTurnData",
		sizeof(FT4AnimsetBasicSystemTurnData),
		alignof(FT4AnimsetBasicSystemTurnData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemTurnData"), sizeof(FT4AnimsetBasicSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData_Hash() { return 191798666U; }
class UScriptStruct* FT4AnimsetBasicSystemEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemEquipmentData"), sizeof(FT4AnimsetBasicSystemEquipmentData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemEquipmentData>()
{
	return FT4AnimsetBasicSystemEquipmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData(FT4AnimsetBasicSystemEquipmentData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemEquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemEquipmentData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemEquipmentData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemEquipmentData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemEquipmentData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon = { "UnequipWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemEquipmentData, UnequipWeapon), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon = { "EquipWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemEquipmentData, EquipWeapon), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_UnequipWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::NewProp_EquipWeapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemEquipmentData",
		sizeof(FT4AnimsetBasicSystemEquipmentData),
		alignof(FT4AnimsetBasicSystemEquipmentData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemEquipmentData"), sizeof(FT4AnimsetBasicSystemEquipmentData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData_Hash() { return 657543851U; }
class UScriptStruct* FT4AnimsetBasicSystemTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicSystemTransitionData"), sizeof(FT4AnimsetBasicSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicSystemTransitionData>()
{
	return FT4AnimsetBasicSystemTransitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicSystemTransitionData(FT4AnimsetBasicSystemTransitionData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicSystemTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemTransitionData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicSystemTransitionData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemTransitionData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicSystemTransitionData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicSystemTransitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_CombatToDefault = { "CombatToDefault", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTransitionData, CombatToDefault), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat = { "DefaultToCombat", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTransitionData, DefaultToCombat), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_TransitionIdle = { "TransitionIdle", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicSystemTransitionData, TransitionIdle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_CombatToDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_DefaultToCombat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::NewProp_TransitionIdle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicSystemTransitionData",
		sizeof(FT4AnimsetBasicSystemTransitionData),
		alignof(FT4AnimsetBasicSystemTransitionData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicSystemTransitionData"), sizeof(FT4AnimsetBasicSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData_Hash() { return 4216474671U; }
	void UT4AnimsetBasicSystemTemplate::StaticRegisterNativesUT4AnimsetBasicSystemTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_NoRegister()
	{
		return UT4AnimsetBasicSystemTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics
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
	UObject* (*const Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimsetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_DeathData_MetaData[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_DeathData = { "DeathData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, DeathData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemDeathData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_DeathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_DeathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_CrowdControlData_MetaData[] = {
		{ "Category", "Reaction" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_CrowdControlData = { "CrowdControlData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, CrowdControlData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemCrowdControlData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_CrowdControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_CrowdControlData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, HitData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemHitData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_JumpData_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_JumpData = { "JumpData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, JumpData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemJumpData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_JumpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_JumpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TurnData_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TurnData = { "TurnData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, TurnData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTurnData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TurnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TurnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, EquipmentData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemEquipmentData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TransitionData_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// bool UT4AnimsetBasicSystemTemplate::CopyFrom\n// bool UT4AnimsetBasicSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicSystemTemplate::CopyFrom\nbool UT4AnimsetBasicSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TransitionData = { "TransitionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicSystemTemplate, TransitionData), Z_Construct_UScriptStruct_FT4AnimsetBasicSystemTransitionData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TransitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TransitionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_DeathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_CrowdControlData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_JumpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TurnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::NewProp_TransitionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimsetBasicSystemTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::ClassParams = {
		&UT4AnimsetBasicSystemTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimsetBasicSystemTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimsetBasicSystemTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimsetBasicSystemTemplate, 323480467);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimsetBasicSystemTemplate>()
	{
		return UT4AnimsetBasicSystemTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimsetBasicSystemTemplate(Z_Construct_UClass_UT4AnimsetBasicSystemTemplate, &UT4AnimsetBasicSystemTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimsetBasicSystemTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimsetBasicSystemTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
