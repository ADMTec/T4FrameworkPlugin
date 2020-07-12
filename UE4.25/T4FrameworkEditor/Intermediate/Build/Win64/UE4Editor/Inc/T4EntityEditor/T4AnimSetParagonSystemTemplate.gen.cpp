// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetParagonSystemTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetParagonSystemTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimsetParagonSystemDeathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonSystemDeathData"), sizeof(FT4AnimsetParagonSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonSystemDeathData>()
{
	return FT4AnimsetParagonSystemDeathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonSystemDeathData(FT4AnimsetParagonSystemDeathData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonSystemDeathData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemDeathData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemDeathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonSystemDeathData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemDeathData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemDeathData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemDeathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_Resurrect_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_Resurrect = { "Resurrect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemDeathData, Resurrect), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_Resurrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_Resurrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathB_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathB = { "DeathB", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemDeathData, DeathB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathA_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathA = { "DeathA", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemDeathData, DeathA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_Resurrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::NewProp_DeathA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonSystemDeathData",
		sizeof(FT4AnimsetParagonSystemDeathData),
		alignof(FT4AnimsetParagonSystemDeathData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonSystemDeathData"), sizeof(FT4AnimsetParagonSystemDeathData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData_Hash() { return 1375855312U; }
class UScriptStruct* FT4AnimsetParagonSystemCrowdControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonSystemCrowdControlData"), sizeof(FT4AnimsetParagonSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonSystemCrowdControlData>()
{
	return FT4AnimsetParagonSystemCrowdControlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData(FT4AnimsetParagonSystemCrowdControlData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonSystemCrowdControlData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemCrowdControlData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemCrowdControlData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonSystemCrowdControlData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemCrowdControlData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemCrowdControlData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackUpLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KnockbackUpLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackBackLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KnockbackBackLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackFrontLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KnockbackFrontLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StunEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StunLoop;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemCrowdControlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackUpLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackUpLoop = { "KnockbackUpLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, KnockbackUpLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackUpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackUpLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackBackLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackBackLoop = { "KnockbackBackLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, KnockbackBackLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackBackLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackBackLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackFrontLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackFrontLoop = { "KnockbackFrontLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, KnockbackFrontLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackFrontLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackFrontLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunEnd_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunEnd = { "StunEnd", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, StunEnd), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunLoop = { "StunLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, StunLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunStart = { "StunStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, StunStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_Bound_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemCrowdControlData, Bound), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_Bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackUpLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackBackLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_KnockbackFrontLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_StunStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::NewProp_Bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonSystemCrowdControlData",
		sizeof(FT4AnimsetParagonSystemCrowdControlData),
		alignof(FT4AnimsetParagonSystemCrowdControlData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonSystemCrowdControlData"), sizeof(FT4AnimsetParagonSystemCrowdControlData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData_Hash() { return 797732553U; }
class UScriptStruct* FT4AnimsetParagonSystemHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonSystemHitData"), sizeof(FT4AnimsetParagonSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonSystemHitData>()
{
	return FT4AnimsetParagonSystemHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonSystemHitData(FT4AnimsetParagonSystemHitData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonSystemHitData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemHitData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemHitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonSystemHitData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemHitData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemHitData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactRight_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactRight = { "HitReactRight", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemHitData, HitReactRight), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactLeft_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactLeft = { "HitReactLeft", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemHitData, HitReactLeft), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactBack_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactBack = { "HitReactBack", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemHitData, HitReactBack), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactFront_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactFront = { "HitReactFront", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemHitData, HitReactFront), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::NewProp_HitReactFront,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonSystemHitData",
		sizeof(FT4AnimsetParagonSystemHitData),
		alignof(FT4AnimsetParagonSystemHitData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonSystemHitData"), sizeof(FT4AnimsetParagonSystemHitData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData_Hash() { return 1154731278U; }
class UScriptStruct* FT4AnimsetParagonSystemJumpData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonSystemJumpData"), sizeof(FT4AnimsetParagonSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonSystemJumpData>()
{
	return FT4AnimsetParagonSystemJumpData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonSystemJumpData(FT4AnimsetParagonSystemJumpData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonSystemJumpData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemJumpData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemJumpData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonSystemJumpData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemJumpData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemJumpData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpLand_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JumpLand;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemJumpData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpRecovery_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpRecovery = { "JumpRecovery", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemJumpData, JumpRecovery), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLand_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLand = { "JumpLand", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemJumpData, JumpLand), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpFall_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpFall = { "JumpFall", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemJumpData, JumpFall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemJumpData, JumpLoop), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpStart_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemJumpData, JumpStart), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::NewProp_JumpStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonSystemJumpData",
		sizeof(FT4AnimsetParagonSystemJumpData),
		alignof(FT4AnimsetParagonSystemJumpData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonSystemJumpData"), sizeof(FT4AnimsetParagonSystemJumpData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData_Hash() { return 2121928928U; }
class UScriptStruct* FT4AnimsetParagonSystemTurnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonSystemTurnData"), sizeof(FT4AnimsetParagonSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonSystemTurnData>()
{
	return FT4AnimsetParagonSystemTurnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonSystemTurnData(FT4AnimsetParagonSystemTurnData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonSystemTurnData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemTurnData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemTurnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonSystemTurnData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemTurnData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemTurnData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemTurnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight180 = { "TurnRight180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTurnData, TurnRight180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight90 = { "TurnRight90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTurnData, TurnRight90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight90_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft180_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft180 = { "TurnLeft180", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTurnData, TurnLeft180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft90_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft90 = { "TurnLeft90", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTurnData, TurnLeft90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft90_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft90_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnRight90,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::NewProp_TurnLeft90,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonSystemTurnData",
		sizeof(FT4AnimsetParagonSystemTurnData),
		alignof(FT4AnimsetParagonSystemTurnData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonSystemTurnData"), sizeof(FT4AnimsetParagonSystemTurnData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData_Hash() { return 2413296607U; }
class UScriptStruct* FT4AnimsetParagonSystemTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonSystemTransitionData"), sizeof(FT4AnimsetParagonSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonSystemTransitionData>()
{
	return FT4AnimsetParagonSystemTransitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonSystemTransitionData(FT4AnimsetParagonSystemTransitionData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonSystemTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemTransitionData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonSystemTransitionData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemTransitionData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonSystemTransitionData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintToDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SprintToDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultToSprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultToSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatToDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CombatToDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultToCombat_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultToCombat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonSystemTransitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_SprintToDefault_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_SprintToDefault = { "SprintToDefault", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTransitionData, SprintToDefault), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_SprintToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_SprintToDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToSprint_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToSprint = { "DefaultToSprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTransitionData, DefaultToSprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_CombatToDefault = { "CombatToDefault", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTransitionData, CombatToDefault), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_CombatToDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToCombat = { "DefaultToCombat", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonSystemTransitionData, DefaultToCombat), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToCombat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_SprintToDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_CombatToDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::NewProp_DefaultToCombat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonSystemTransitionData",
		sizeof(FT4AnimsetParagonSystemTransitionData),
		alignof(FT4AnimsetParagonSystemTransitionData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonSystemTransitionData"), sizeof(FT4AnimsetParagonSystemTransitionData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData_Hash() { return 844429663U; }
	void UT4AnimsetParagonSystemTemplate::StaticRegisterNativesUT4AnimsetParagonSystemTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_NoRegister()
	{
		return UT4AnimsetParagonSystemTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimsetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_DeathData_MetaData[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_DeathData = { "DeathData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonSystemTemplate, DeathData), Z_Construct_UScriptStruct_FT4AnimsetParagonSystemDeathData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_DeathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_DeathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_CrowdControlData_MetaData[] = {
		{ "Category", "CrowdControl" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_CrowdControlData = { "CrowdControlData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonSystemTemplate, CrowdControlData), Z_Construct_UScriptStruct_FT4AnimsetParagonSystemCrowdControlData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_CrowdControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_CrowdControlData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_HitData_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonSystemTemplate, HitData), Z_Construct_UScriptStruct_FT4AnimsetParagonSystemHitData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_HitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_HitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_JumpData_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_JumpData = { "JumpData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonSystemTemplate, JumpData), Z_Construct_UScriptStruct_FT4AnimsetParagonSystemJumpData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_JumpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_JumpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TurnData_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TurnData = { "TurnData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonSystemTemplate, TurnData), Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTurnData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TurnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TurnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TransitionData_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// bool UT4AnimsetParagonSystemTemplate::CopyFrom\n// bool UT4AnimsetParagonSystemTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonSystemTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetParagonSystemTemplate::CopyFrom\nbool UT4AnimsetParagonSystemTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TransitionData = { "TransitionData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonSystemTemplate, TransitionData), Z_Construct_UScriptStruct_FT4AnimsetParagonSystemTransitionData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TransitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TransitionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_DeathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_CrowdControlData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_JumpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TurnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::NewProp_TransitionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimsetParagonSystemTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::ClassParams = {
		&UT4AnimsetParagonSystemTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimsetParagonSystemTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimsetParagonSystemTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimsetParagonSystemTemplate, 3748807754);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimsetParagonSystemTemplate>()
	{
		return UT4AnimsetParagonSystemTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimsetParagonSystemTemplate(Z_Construct_UClass_UT4AnimsetParagonSystemTemplate, &UT4AnimsetParagonSystemTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimsetParagonSystemTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimsetParagonSystemTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
