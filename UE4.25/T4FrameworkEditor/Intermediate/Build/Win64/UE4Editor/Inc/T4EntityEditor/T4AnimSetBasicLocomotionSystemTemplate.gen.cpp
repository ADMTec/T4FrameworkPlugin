// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetBasicLocomotionSystemTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetBasicLocomotionSystemEndLoopData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemEndLoopData"), sizeof(FT4AnimSetBasicLocomotionSystemEndLoopData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemEndLoopData>()
{
	return FT4AnimSetBasicLocomotionSystemEndLoopData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData(FT4AnimSetBasicLocomotionSystemEndLoopData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemEndLoopData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemEndLoopData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemEndLoopData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemEndLoopData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemEndLoopData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemEndLoopData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemEndLoopData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_SetBit(void* Obj)
	{
		((FT4AnimSetBasicLocomotionSystemEndLoopData*)Obj)->bMakeEndLoopDeathB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB = { "bMakeEndLoopDeathB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetBasicLocomotionSystemEndLoopData), &Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_SetBit(void* Obj)
	{
		((FT4AnimSetBasicLocomotionSystemEndLoopData*)Obj)->bMakeEndLoopDeathA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA = { "bMakeEndLoopDeathA", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4AnimSetBasicLocomotionSystemEndLoopData), &Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::NewProp_bMakeEndLoopDeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemEndLoopData",
		sizeof(FT4AnimSetBasicLocomotionSystemEndLoopData),
		alignof(FT4AnimSetBasicLocomotionSystemEndLoopData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemEndLoopData"), sizeof(FT4AnimSetBasicLocomotionSystemEndLoopData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData_Hash() { return 2589772904U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemDeathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemDeathData"), sizeof(FT4AnimSetBasicLocomotionSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemDeathData>()
{
	return FT4AnimSetBasicLocomotionSystemDeathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData(FT4AnimSetBasicLocomotionSystemDeathData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemDeathData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemDeathData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemDeathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemDeathData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemDeathData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemDeathData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemDeathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_Resurrect_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_Resurrect = { "Resurrect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemDeathData, Resurrect), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_Resurrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_Resurrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathB = { "DeathB", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemDeathData, DeathB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathA = { "DeathA", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemDeathData, DeathA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_Resurrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::NewProp_DeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemDeathData",
		sizeof(FT4AnimSetBasicLocomotionSystemDeathData),
		alignof(FT4AnimSetBasicLocomotionSystemDeathData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemDeathData"), sizeof(FT4AnimSetBasicLocomotionSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData_Hash() { return 419800117U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemCrowdControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemCrowdControlData"), sizeof(FT4AnimSetBasicLocomotionSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemCrowdControlData>()
{
	return FT4AnimSetBasicLocomotionSystemCrowdControlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData(FT4AnimSetBasicLocomotionSystemCrowdControlData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemCrowdControlData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemCrowdControlData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemCrowdControlData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemCrowdControlData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemCrowdControlData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemCrowdControlData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemCrowdControlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackBackStart = { "KnockbackBackStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemCrowdControlData, KnockbackBackStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackBackStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart = { "KnockbackFrontStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemCrowdControlData, KnockbackFrontStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_StunStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_StunStart = { "StunStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemCrowdControlData, StunStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_StunStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_StunStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_Bound_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool FT4AnimSetBasicLocomotionSystemCrowdControlData::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ToolTip", "bool FT4AnimSetBasicLocomotionSystemCrowdControlData::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemCrowdControlData, Bound), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_Bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackBackStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_KnockbackFrontStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_StunStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::NewProp_Bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemCrowdControlData",
		sizeof(FT4AnimSetBasicLocomotionSystemCrowdControlData),
		alignof(FT4AnimSetBasicLocomotionSystemCrowdControlData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemCrowdControlData"), sizeof(FT4AnimSetBasicLocomotionSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData_Hash() { return 1136329769U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemHitData"), sizeof(FT4AnimSetBasicLocomotionSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemHitData>()
{
	return FT4AnimSetBasicLocomotionSystemHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData(FT4AnimSetBasicLocomotionSystemHitData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemHitData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemHitData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemHitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemHitData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemHitData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemHitData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactRight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactRight = { "HitReactRight", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemHitData, HitReactRight), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactLeft_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactLeft = { "HitReactLeft", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemHitData, HitReactLeft), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactBack_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactBack = { "HitReactBack", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemHitData, HitReactBack), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactFront_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactFront = { "HitReactFront", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemHitData, HitReactFront), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::NewProp_HitReactFront,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemHitData",
		sizeof(FT4AnimSetBasicLocomotionSystemHitData),
		alignof(FT4AnimSetBasicLocomotionSystemHitData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemHitData"), sizeof(FT4AnimSetBasicLocomotionSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData_Hash() { return 3841330200U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemJumpData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemJumpData"), sizeof(FT4AnimSetBasicLocomotionSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemJumpData>()
{
	return FT4AnimSetBasicLocomotionSystemJumpData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData(FT4AnimSetBasicLocomotionSystemJumpData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemJumpData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemJumpData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemJumpData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemJumpData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemJumpData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemJumpData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemJumpData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpRecovery_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpRecovery = { "JumpRecovery", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemJumpData, JumpRecovery), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpFall_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpFall = { "JumpFall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemJumpData, JumpFall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemJumpData, JumpLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemJumpData, JumpStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::NewProp_JumpStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemJumpData",
		sizeof(FT4AnimSetBasicLocomotionSystemJumpData),
		alignof(FT4AnimSetBasicLocomotionSystemJumpData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemJumpData"), sizeof(FT4AnimSetBasicLocomotionSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData_Hash() { return 2686092616U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemTurnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemTurnData"), sizeof(FT4AnimSetBasicLocomotionSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemTurnData>()
{
	return FT4AnimSetBasicLocomotionSystemTurnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData(FT4AnimSetBasicLocomotionSystemTurnData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemTurnData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemTurnData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemTurnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemTurnData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemTurnData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemTurnData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemTurnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight180 = { "TurnRight180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemTurnData, TurnRight180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight90 = { "TurnRight90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemTurnData, TurnRight90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight90_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft180 = { "TurnLeft180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemTurnData, TurnLeft180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft90 = { "TurnLeft90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemTurnData, TurnLeft90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft90_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnRight90,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::NewProp_TurnLeft90,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemTurnData",
		sizeof(FT4AnimSetBasicLocomotionSystemTurnData),
		alignof(FT4AnimSetBasicLocomotionSystemTurnData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemTurnData"), sizeof(FT4AnimSetBasicLocomotionSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData_Hash() { return 3894614678U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemEquipmentData"), sizeof(FT4AnimSetBasicLocomotionSystemEquipmentData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemEquipmentData>()
{
	return FT4AnimSetBasicLocomotionSystemEquipmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData(FT4AnimSetBasicLocomotionSystemEquipmentData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemEquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemEquipmentData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemEquipmentData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemEquipmentData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemEquipmentData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_UnequipWeapon = { "UnequipWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemEquipmentData, UnequipWeapon), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_UnequipWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_EquipWeapon = { "EquipWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemEquipmentData, EquipWeapon), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_EquipWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_UnequipWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::NewProp_EquipWeapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemEquipmentData",
		sizeof(FT4AnimSetBasicLocomotionSystemEquipmentData),
		alignof(FT4AnimSetBasicLocomotionSystemEquipmentData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemEquipmentData"), sizeof(FT4AnimSetBasicLocomotionSystemEquipmentData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData_Hash() { return 2163569842U; }
class UScriptStruct* FT4AnimSetBasicLocomotionSystemTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionSystemTransitionData"), sizeof(FT4AnimSetBasicLocomotionSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionSystemTransitionData>()
{
	return FT4AnimSetBasicLocomotionSystemTransitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData(FT4AnimSetBasicLocomotionSystemTransitionData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionSystemTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemTransitionData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionSystemTransitionData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemTransitionData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionSystemTransitionData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionSystemTransitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::NewProp_TransitionIdle = { "TransitionIdle", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionSystemTransitionData, TransitionIdle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::NewProp_TransitionIdle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::NewProp_TransitionIdle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionSystemTransitionData",
		sizeof(FT4AnimSetBasicLocomotionSystemTransitionData),
		alignof(FT4AnimSetBasicLocomotionSystemTransitionData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionSystemTransitionData"), sizeof(FT4AnimSetBasicLocomotionSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData_Hash() { return 221455440U; }
	void UT4AnimSetBasicLocomotionSystemTemplate::StaticRegisterNativesUT4AnimSetBasicLocomotionSystemTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_NoRegister()
	{
		return UT4AnimSetBasicLocomotionSystemTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentData;
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
	UObject* (*const Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EndLoopData_MetaData[] = {
		{ "Category", "EndLoop" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EndLoopData = { "EndLoopData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, EndLoopData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEndLoopData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EndLoopData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EndLoopData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_DeathData_MetaData[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_DeathData = { "DeathData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, DeathData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemDeathData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_DeathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_DeathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_CrowdControlData_MetaData[] = {
		{ "Category", "Reaction" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_CrowdControlData = { "CrowdControlData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, CrowdControlData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemCrowdControlData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_CrowdControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_CrowdControlData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, HitData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemHitData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_JumpData_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_JumpData = { "JumpData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, JumpData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemJumpData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_JumpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_JumpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TurnData_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TurnData = { "TurnData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, TurnData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTurnData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TurnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TurnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, EquipmentData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemEquipmentData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms = { "StanceTransforms", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, StanceTransforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_Key_KeyProp = { "StanceTransforms_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_ValueProp = { "StanceTransforms", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TransitionData_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// bool UT4AnimSetBasicLocomotionSystemTemplate::CopyFrom\n// bool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionSystemTemplate::CopyFrom\nbool UT4AnimSetBasicLocomotionSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TransitionData = { "TransitionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionSystemTemplate, TransitionData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionSystemTransitionData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TransitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TransitionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EndLoopData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_DeathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_CrowdControlData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_JumpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TurnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_StanceTransforms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::NewProp_TransitionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetBasicLocomotionSystemTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::ClassParams = {
		&UT4AnimSetBasicLocomotionSystemTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetBasicLocomotionSystemTemplate, 346632537);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetBasicLocomotionSystemTemplate>()
	{
		return UT4AnimSetBasicLocomotionSystemTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetBasicLocomotionSystemTemplate(Z_Construct_UClass_UT4AnimSetBasicLocomotionSystemTemplate, &UT4AnimSetBasicLocomotionSystemTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetBasicLocomotionSystemTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetBasicLocomotionSystemTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
