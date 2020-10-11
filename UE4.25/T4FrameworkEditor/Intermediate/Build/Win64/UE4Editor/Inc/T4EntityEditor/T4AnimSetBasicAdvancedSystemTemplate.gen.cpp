// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetBasicAdvancedSystemTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetBasicAdvancedSystemEndLoopData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemEndLoopData"), sizeof(FT4AnimSetBasicAdvancedSystemEndLoopData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemEndLoopData>()
{
	return FT4AnimSetBasicAdvancedSystemEndLoopData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData(FT4AnimSetBasicAdvancedSystemEndLoopData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemEndLoopData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemEndLoopData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemEndLoopData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemEndLoopData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemEndLoopData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemEndLoopData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMakeEndLoopDeathB_MetaData[];
#endif
		static void NewProp_bMakeEndLoopDeathB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMakeEndLoopDeathB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMakeEndLoopDeathA_MetaData[];
#endif
		static void NewProp_bMakeEndLoopDeathA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMakeEndLoopDeathA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemEndLoopData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_SetBit(void* Obj)
	{
		((FT4AnimSetBasicAdvancedSystemEndLoopData*)Obj)->bMakeEndLoopDeathB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB = { "bMakeEndLoopDeathB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetBasicAdvancedSystemEndLoopData), &Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_SetBit(void* Obj)
	{
		((FT4AnimSetBasicAdvancedSystemEndLoopData*)Obj)->bMakeEndLoopDeathA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA = { "bMakeEndLoopDeathA", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetBasicAdvancedSystemEndLoopData), &Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemEndLoopData",
		sizeof(FT4AnimSetBasicAdvancedSystemEndLoopData),
		alignof(FT4AnimSetBasicAdvancedSystemEndLoopData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemEndLoopData"), sizeof(FT4AnimSetBasicAdvancedSystemEndLoopData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData_Hash() { return 2726657739U; }
class UScriptStruct* FT4AnimSetBasicAdvancedSystemDeathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemDeathData"), sizeof(FT4AnimSetBasicAdvancedSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemDeathData>()
{
	return FT4AnimSetBasicAdvancedSystemDeathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData(FT4AnimSetBasicAdvancedSystemDeathData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemDeathData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemDeathData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemDeathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemDeathData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemDeathData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemDeathData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemDeathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_Resurrect_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_Resurrect = { "Resurrect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemDeathData, Resurrect), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_Resurrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_Resurrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathB = { "DeathB", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemDeathData, DeathB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathA = { "DeathA", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemDeathData, DeathA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_Resurrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::NewProp_DeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemDeathData",
		sizeof(FT4AnimSetBasicAdvancedSystemDeathData),
		alignof(FT4AnimSetBasicAdvancedSystemDeathData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemDeathData"), sizeof(FT4AnimSetBasicAdvancedSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData_Hash() { return 2293181299U; }
class UScriptStruct* FT4AnimSetBasicAdvancedSystemCrowdControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemCrowdControlData"), sizeof(FT4AnimSetBasicAdvancedSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemCrowdControlData>()
{
	return FT4AnimSetBasicAdvancedSystemCrowdControlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData(FT4AnimSetBasicAdvancedSystemCrowdControlData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemCrowdControlData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemCrowdControlData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemCrowdControlData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemCrowdControlData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemCrowdControlData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemCrowdControlData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemCrowdControlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackBackStart = { "KnockbackBackStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemCrowdControlData, KnockbackBackStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart = { "KnockbackFrontStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemCrowdControlData, KnockbackFrontStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_StunStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_StunStart = { "StunStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemCrowdControlData, StunStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_StunStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_StunStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_Bound_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool FT4AnimSetBasicAdvancedSystemCrowdControlData::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
		{ "ToolTip", "bool FT4AnimSetBasicAdvancedSystemCrowdControlData::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemCrowdControlData, Bound), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_Bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackBackStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_StunStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::NewProp_Bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemCrowdControlData",
		sizeof(FT4AnimSetBasicAdvancedSystemCrowdControlData),
		alignof(FT4AnimSetBasicAdvancedSystemCrowdControlData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemCrowdControlData"), sizeof(FT4AnimSetBasicAdvancedSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData_Hash() { return 316974528U; }
class UScriptStruct* FT4AnimSetBasicAdvancedSystemHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemHitData"), sizeof(FT4AnimSetBasicAdvancedSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemHitData>()
{
	return FT4AnimSetBasicAdvancedSystemHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData(FT4AnimSetBasicAdvancedSystemHitData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemHitData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemHitData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemHitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemHitData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemHitData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemHitData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactRight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactRight = { "HitReactRight", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemHitData, HitReactRight), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactLeft_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactLeft = { "HitReactLeft", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemHitData, HitReactLeft), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactBack_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactBack = { "HitReactBack", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemHitData, HitReactBack), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactFront_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactFront = { "HitReactFront", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemHitData, HitReactFront), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::NewProp_HitReactFront,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemHitData",
		sizeof(FT4AnimSetBasicAdvancedSystemHitData),
		alignof(FT4AnimSetBasicAdvancedSystemHitData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemHitData"), sizeof(FT4AnimSetBasicAdvancedSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData_Hash() { return 2302457239U; }
class UScriptStruct* FT4AnimSetBasicAdvancedSystemJumpData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemJumpData"), sizeof(FT4AnimSetBasicAdvancedSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemJumpData>()
{
	return FT4AnimSetBasicAdvancedSystemJumpData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData(FT4AnimSetBasicAdvancedSystemJumpData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemJumpData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemJumpData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemJumpData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemJumpData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemJumpData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemJumpData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemJumpData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpRecovery_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpRecovery = { "JumpRecovery", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemJumpData, JumpRecovery), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpFall_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpFall = { "JumpFall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemJumpData, JumpFall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemJumpData, JumpLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemJumpData, JumpStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::NewProp_JumpStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemJumpData",
		sizeof(FT4AnimSetBasicAdvancedSystemJumpData),
		alignof(FT4AnimSetBasicAdvancedSystemJumpData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemJumpData"), sizeof(FT4AnimSetBasicAdvancedSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData_Hash() { return 1948279633U; }
class UScriptStruct* FT4AnimSetBasicAdvancedSystemTurnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemTurnData"), sizeof(FT4AnimSetBasicAdvancedSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemTurnData>()
{
	return FT4AnimSetBasicAdvancedSystemTurnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData(FT4AnimSetBasicAdvancedSystemTurnData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemTurnData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemTurnData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemTurnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemTurnData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemTurnData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemTurnData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRight90_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TurnRight90;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeft90_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TurnLeft90;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemTurnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnRight90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnRight90 = { "TurnRight90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemTurnData, TurnRight90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnRight90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnRight90_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnLeft90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnLeft90 = { "TurnLeft90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemTurnData, TurnLeft90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnLeft90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnLeft90_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnRight90,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::NewProp_TurnLeft90,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemTurnData",
		sizeof(FT4AnimSetBasicAdvancedSystemTurnData),
		alignof(FT4AnimSetBasicAdvancedSystemTurnData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemTurnData"), sizeof(FT4AnimSetBasicAdvancedSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData_Hash() { return 1641441933U; }
class UScriptStruct* FT4AnimSetBasicAdvancedSystemTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicAdvancedSystemTransitionData"), sizeof(FT4AnimSetBasicAdvancedSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicAdvancedSystemTransitionData>()
{
	return FT4AnimSetBasicAdvancedSystemTransitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData(FT4AnimSetBasicAdvancedSystemTransitionData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicAdvancedSystemTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemTransitionData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicAdvancedSystemTransitionData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemTransitionData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicAdvancedSystemTransitionData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TransitionIdle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicAdvancedSystemTransitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::NewProp_TransitionIdle = { "TransitionIdle", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicAdvancedSystemTransitionData, TransitionIdle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::NewProp_TransitionIdle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicAdvancedSystemTransitionData",
		sizeof(FT4AnimSetBasicAdvancedSystemTransitionData),
		alignof(FT4AnimSetBasicAdvancedSystemTransitionData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicAdvancedSystemTransitionData"), sizeof(FT4AnimSetBasicAdvancedSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData_Hash() { return 106393472U; }
	void UT4AnimSetBasicAdvancedSystemTemplate::StaticRegisterNativesUT4AnimSetBasicAdvancedSystemTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_NoRegister()
	{
		return UT4AnimSetBasicAdvancedSystemTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLoopData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLoopData;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StanceTransforms;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StanceTransforms_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StanceTransforms_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_EndLoopData_MetaData[] = {
		{ "Category", "EndLoop" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_EndLoopData = { "EndLoopData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, EndLoopData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemEndLoopData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_EndLoopData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_EndLoopData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_DeathData_MetaData[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_DeathData = { "DeathData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, DeathData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemDeathData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_DeathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_DeathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_CrowdControlData_MetaData[] = {
		{ "Category", "Reaction" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_CrowdControlData = { "CrowdControlData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, CrowdControlData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemCrowdControlData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_CrowdControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_CrowdControlData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, HitData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemHitData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_JumpData_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_JumpData = { "JumpData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, JumpData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemJumpData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_JumpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_JumpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TurnData_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TurnData = { "TurnData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, TurnData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTurnData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TurnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TurnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms = { "StanceTransforms", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, StanceTransforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_Key_KeyProp = { "StanceTransforms_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_ValueProp = { "StanceTransforms", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TransitionData_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// bool UT4AnimSetBasicAdvancedSystemTemplate::CopyFrom\n// bool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Advanced/T4AnimSetBasicAdvancedSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicAdvancedSystemTemplate::CopyFrom\nbool UT4AnimSetBasicAdvancedSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TransitionData = { "TransitionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicAdvancedSystemTemplate, TransitionData), Z_Construct_UScriptStruct_FT4AnimSetBasicAdvancedSystemTransitionData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TransitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TransitionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_EndLoopData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_DeathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_CrowdControlData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_JumpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TurnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_StanceTransforms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::NewProp_TransitionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetBasicAdvancedSystemTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::ClassParams = {
		&UT4AnimSetBasicAdvancedSystemTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetBasicAdvancedSystemTemplate, 748663472);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetBasicAdvancedSystemTemplate>()
	{
		return UT4AnimSetBasicAdvancedSystemTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetBasicAdvancedSystemTemplate(Z_Construct_UClass_UT4AnimSetBasicAdvancedSystemTemplate, &UT4AnimSetBasicAdvancedSystemTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetBasicAdvancedSystemTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetBasicAdvancedSystemTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
