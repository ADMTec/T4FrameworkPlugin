// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetBasicLocomotionStateTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetBasicLocomotionStateConstantData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionStateConstantData"), sizeof(FT4AnimSetBasicLocomotionStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionStateConstantData>()
{
	return FT4AnimSetBasicLocomotionStateConstantData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData(FT4AnimSetBasicLocomotionStateConstantData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionStateConstantData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateConstantData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateConstantData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionStateConstantData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateConstantData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateConstantData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateConstantData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionStateConstantData",
		sizeof(FT4AnimSetBasicLocomotionStateConstantData),
		alignof(FT4AnimSetBasicLocomotionStateConstantData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionStateConstantData"), sizeof(FT4AnimSetBasicLocomotionStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData_Hash() { return 2306662958U; }
class UScriptStruct* FT4AnimSetBasicLocomotionStateParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionStateParameterData"), sizeof(FT4AnimSetBasicLocomotionStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionStateParameterData>()
{
	return FT4AnimSetBasicLocomotionStateParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData(FT4AnimSetBasicLocomotionStateParameterData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionStateParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateParameterData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionStateParameterData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateParameterData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateParameterData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightRunStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightRunParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRunStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRunParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BwdRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BwdRunStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BwdRunParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FwdRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FwdRunStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FwdRunParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStopParameter = { "RightRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, RightRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStartParameter = { "RightRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, RightRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunParameter = { "RightRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, RightRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStopParameter = { "LeftRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, LeftRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStartParameter = { "LeftRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, LeftRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunParameter = { "LeftRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, LeftRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStopParameter = { "BwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, BwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStartParameter = { "BwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, BwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunParameter = { "BwdRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, BwdRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStopParameter = { "FwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, FwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStartParameter = { "FwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, FwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo\n" },
		{ "DisplayName", "Fwd Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunParameter = { "FwdRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateParameterData, FwdRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_RightRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_LeftRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_BwdRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::NewProp_FwdRunParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionStateParameterData",
		sizeof(FT4AnimSetBasicLocomotionStateParameterData),
		alignof(FT4AnimSetBasicLocomotionStateParameterData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionStateParameterData"), sizeof(FT4AnimSetBasicLocomotionStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData_Hash() { return 1616604644U; }
class UScriptStruct* FT4AnimSetBasicLocomotionStateAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionStateAimData"), sizeof(FT4AnimSetBasicLocomotionStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionStateAimData>()
{
	return FT4AnimSetBasicLocomotionStateAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData(FT4AnimSetBasicLocomotionStateAimData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionStateAimData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateAimData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionStateAimData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateAimData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateAimData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AimBlendSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::NewProp_AimBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::NewProp_AimBlendSpace = { "AimBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateAimData, AimBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::NewProp_AimBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::NewProp_AimBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::NewProp_AimBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionStateAimData",
		sizeof(FT4AnimSetBasicLocomotionStateAimData),
		alignof(FT4AnimSetBasicLocomotionStateAimData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionStateAimData"), sizeof(FT4AnimSetBasicLocomotionStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData_Hash() { return 2050521713U; }
class UScriptStruct* FT4AnimSetBasicLocomotionStateMovementAdvancedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionStateMovementAdvancedData"), sizeof(FT4AnimSetBasicLocomotionStateMovementAdvancedData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionStateMovementAdvancedData>()
{
	return FT4AnimSetBasicLocomotionStateMovementAdvancedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData(FT4AnimSetBasicLocomotionStateMovementAdvancedData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionStateMovementAdvancedData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateMovementAdvancedData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateMovementAdvancedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionStateMovementAdvancedData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateMovementAdvancedData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateMovementAdvancedData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRun45RightAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRun45RightAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRun45LeftAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRun45LeftAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRun45RightAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRun45RightAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRun45LeftAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRun45LeftAnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateMovementAdvancedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStopAnimSequence = { "RightRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, RightRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStartAnimSequence = { "RightRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, RightRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStopAnimSequence = { "LeftRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, LeftRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStartAnimSequence = { "LeftRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, LeftRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStopAnimSequence = { "BwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, BwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStartAnimSequence = { "BwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, BwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStopAnimSequence = { "FwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, FwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStartAnimSequence = { "FwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, FwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45RightAnimSequence = { "BwdRun45RightAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, BwdRun45RightAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45LeftAnimSequence = { "BwdRun45LeftAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, BwdRun45LeftAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45RightAnimSequence = { "FwdRun45RightAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, FwdRun45RightAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45LeftAnimSequence = { "FwdRun45LeftAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementAdvancedData, FwdRun45LeftAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_RightRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_LeftRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45RightAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_BwdRun45LeftAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45RightAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::NewProp_FwdRun45LeftAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionStateMovementAdvancedData",
		sizeof(FT4AnimSetBasicLocomotionStateMovementAdvancedData),
		alignof(FT4AnimSetBasicLocomotionStateMovementAdvancedData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionStateMovementAdvancedData"), sizeof(FT4AnimSetBasicLocomotionStateMovementAdvancedData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData_Hash() { return 3721468684U; }
class UScriptStruct* FT4AnimSetBasicLocomotionStateMovementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionStateMovementData"), sizeof(FT4AnimSetBasicLocomotionStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionStateMovementData>()
{
	return FT4AnimSetBasicLocomotionStateMovementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData(FT4AnimSetBasicLocomotionStateMovementData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionStateMovementData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateMovementData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateMovementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionStateMovementData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateMovementData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateMovementData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightRunAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunAnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateMovementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_RightRunAnimSequence = { "RightRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementData, RightRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_LeftRunAnimSequence = { "LeftRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementData, LeftRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_BwdRunAnimSequence = { "BwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementData, BwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_FwdRunAnimSequence = { "FwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateMovementData, FwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_RightRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_LeftRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_BwdRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::NewProp_FwdRunAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionStateMovementData",
		sizeof(FT4AnimSetBasicLocomotionStateMovementData),
		alignof(FT4AnimSetBasicLocomotionStateMovementData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionStateMovementData"), sizeof(FT4AnimSetBasicLocomotionStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData_Hash() { return 3158208502U; }
class UScriptStruct* FT4AnimSetBasicLocomotionStateIdleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicLocomotionStateIdleData"), sizeof(FT4AnimSetBasicLocomotionStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicLocomotionStateIdleData>()
{
	return FT4AnimSetBasicLocomotionStateIdleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData(FT4AnimSetBasicLocomotionStateIdleData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicLocomotionStateIdleData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateIdleData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateIdleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicLocomotionStateIdleData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateIdleData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicLocomotionStateIdleData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IdleAnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicLocomotionStateIdleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicLocomotionStateIdleData, IdleAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::NewProp_IdleAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicLocomotionStateIdleData",
		sizeof(FT4AnimSetBasicLocomotionStateIdleData),
		alignof(FT4AnimSetBasicLocomotionStateIdleData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicLocomotionStateIdleData"), sizeof(FT4AnimSetBasicLocomotionStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData_Hash() { return 2847494946U; }
	void UT4AnimSetBasicLocomotionStateTemplate::StaticRegisterNativesUT4AnimSetBasicLocomotionStateTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_NoRegister()
	{
		return UT4AnimSetBasicLocomotionStateTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAdvancedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementAdvancedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ConstantData_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ConstantData = { "ConstantData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionStateTemplate, ConstantData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateConstantData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ConstantData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ConstantData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionStateTemplate, ParameterData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateParameterData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ParameterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionStateTemplate, AimData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateAimData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementAdvancedData_MetaData[] = {
		{ "Category", "MovementAdvanced" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementAdvancedData = { "MovementAdvancedData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionStateTemplate, MovementAdvancedData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementAdvancedData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementAdvancedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementAdvancedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionStateTemplate, MovementData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateMovementData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_IdleData_MetaData[] = {
		{ "Category", "Idle" },
		{ "Comment", "// bool UT4AnimSetBasicLocomotionStateTemplate::CopyFrom\n// bool UT4AnimSetBasicLocomotionStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Locomotion/T4AnimSetBasicLocomotionStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicLocomotionStateTemplate::CopyFrom\nbool UT4AnimSetBasicLocomotionStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_IdleData = { "IdleData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicLocomotionStateTemplate, IdleData), Z_Construct_UScriptStruct_FT4AnimSetBasicLocomotionStateIdleData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_IdleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_IdleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ConstantData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementAdvancedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_MovementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::NewProp_IdleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetBasicLocomotionStateTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::ClassParams = {
		&UT4AnimSetBasicLocomotionStateTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetBasicLocomotionStateTemplate, 3330720748);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetBasicLocomotionStateTemplate>()
	{
		return UT4AnimSetBasicLocomotionStateTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetBasicLocomotionStateTemplate(Z_Construct_UClass_UT4AnimSetBasicLocomotionStateTemplate, &UT4AnimSetBasicLocomotionStateTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetBasicLocomotionStateTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetBasicLocomotionStateTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
