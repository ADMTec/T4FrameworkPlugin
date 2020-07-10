// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetParagonStateTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetParagonStateTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetParagonStateTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetParagonStateConstantData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetParagonStateConstantData"), sizeof(FT4AnimSetParagonStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetParagonStateConstantData>()
{
	return FT4AnimSetParagonStateConstantData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetParagonStateConstantData(FT4AnimSetParagonStateConstantData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetParagonStateConstantData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateConstantData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateConstantData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetParagonStateConstantData")),new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateConstantData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateConstantData;
	struct Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlaceTurnRate180Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaceTurnRate180Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlaceTurnRate90Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaceTurnRate90Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardAngleRangeMaxParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardAngleRangeMaxParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardAngleRangeMinParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardAngleRangeMinParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAngleRangeMaxParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardAngleRangeMaxParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAngleRangeMinParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardAngleRangeMinParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanRateScaleParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanRateScaleParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateConstantData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "10" },
		{ "DisplayName", "InPlace TurnRate 180" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter = { "InPlaceTurnRate180Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, InPlaceTurnRate180Parameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "10" },
		{ "DisplayName", "InPlace TurnRate 90" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter = { "InPlaceTurnRate90Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, InPlaceTurnRate90Parameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "150" },
		{ "ClampMin", "130" },
		{ "DisplayName", "Backward Angle Range-Max" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter = { "BackwardAngleRangeMaxParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, BackwardAngleRangeMaxParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "-130" },
		{ "ClampMin", "-150" },
		{ "DisplayName", "Backward Angle Range-Min" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter = { "BackwardAngleRangeMinParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, BackwardAngleRangeMinParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "50" },
		{ "ClampMin", "30" },
		{ "DisplayName", "Forward Angle Range-Max" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter = { "ForwardAngleRangeMaxParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, ForwardAngleRangeMaxParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "-30" },
		{ "ClampMin", "-50" },
		{ "DisplayName", "Forward Angle Range-Min" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter = { "ForwardAngleRangeMinParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, ForwardAngleRangeMinParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "DisplayName", "Lean AngleRate Scale" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter = { "LeanRateScaleParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateConstantData, LeanRateScaleParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetParagonStateConstantData",
		sizeof(FT4AnimSetParagonStateConstantData),
		alignof(FT4AnimSetParagonStateConstantData),
		Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetParagonStateConstantData"), sizeof(FT4AnimSetParagonStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData_Hash() { return 1530995445U; }
class UScriptStruct* FT4AnimSetParagonStateParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetParagonStateParameterData"), sizeof(FT4AnimSetParagonStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetParagonStateParameterData>()
{
	return FT4AnimSetParagonStateParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetParagonStateParameterData(FT4AnimSetParagonStateParameterData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetParagonStateParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateParameterData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetParagonStateParameterData")),new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateParameterData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateParameterData;
	struct Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftRunStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BwdRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BwdRunStartParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStopParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FwdRunStopParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStartParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FwdRunStartParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStopParameter = { "RightRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, RightRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStartParameter = { "RightRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, RightRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter = { "LeftRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, LeftRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter = { "LeftRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, LeftRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter = { "BwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, BwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter = { "BwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, BwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter = { "FwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, FwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "DisplayName", "Fwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter = { "FwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateParameterData, FwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_RightRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetParagonStateParameterData",
		sizeof(FT4AnimSetParagonStateParameterData),
		alignof(FT4AnimSetParagonStateParameterData),
		Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetParagonStateParameterData"), sizeof(FT4AnimSetParagonStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData_Hash() { return 2983172317U; }
class UScriptStruct* FT4AnimSetParagonStateAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetParagonStateAimData"), sizeof(FT4AnimSetParagonStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetParagonStateAimData>()
{
	return FT4AnimSetParagonStateAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetParagonStateAimData(FT4AnimSetParagonStateAimData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetParagonStateAimData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateAimData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetParagonStateAimData")),new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateAimData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateAimData;
	struct Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::NewProp_AimBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::NewProp_AimBlendSpace = { "AimBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateAimData, AimBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::NewProp_AimBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::NewProp_AimBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::NewProp_AimBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetParagonStateAimData",
		sizeof(FT4AnimSetParagonStateAimData),
		alignof(FT4AnimSetParagonStateAimData),
		Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetParagonStateAimData"), sizeof(FT4AnimSetParagonStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData_Hash() { return 3678437266U; }
class UScriptStruct* FT4AnimSetParagonStateMovementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetParagonStateMovementData"), sizeof(FT4AnimSetParagonStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetParagonStateMovementData>()
{
	return FT4AnimSetParagonStateMovementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetParagonStateMovementData(FT4AnimSetParagonStateMovementData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetParagonStateMovementData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateMovementData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateMovementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetParagonStateMovementData")),new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateMovementData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateMovementData;
	struct Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightRunBlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunBlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunBlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunBlendSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateMovementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence = { "RightRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, RightRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence = { "RightRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, RightRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace = { "RightRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, RightRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence = { "LeftRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, LeftRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence = { "LeftRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, LeftRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace = { "LeftRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, LeftRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence = { "BwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, BwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence = { "BwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, BwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace = { "BwdRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, BwdRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence = { "FwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, FwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence = { "FwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, FwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace = { "FwdRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateMovementData, FwdRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetParagonStateMovementData",
		sizeof(FT4AnimSetParagonStateMovementData),
		alignof(FT4AnimSetParagonStateMovementData),
		Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetParagonStateMovementData"), sizeof(FT4AnimSetParagonStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData_Hash() { return 3855714101U; }
class UScriptStruct* FT4AnimSetParagonStateIdleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetParagonStateIdleData"), sizeof(FT4AnimSetParagonStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetParagonStateIdleData>()
{
	return FT4AnimSetParagonStateIdleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetParagonStateIdleData(FT4AnimSetParagonStateIdleData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetParagonStateIdleData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateIdleData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateIdleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetParagonStateIdleData")),new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateIdleData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetParagonStateIdleData;
	struct Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetParagonStateIdleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetParagonStateIdleData, IdleAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::NewProp_IdleAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetParagonStateIdleData",
		sizeof(FT4AnimSetParagonStateIdleData),
		alignof(FT4AnimSetParagonStateIdleData),
		Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetParagonStateIdleData"), sizeof(FT4AnimSetParagonStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData_Hash() { return 2202327205U; }
	void UT4AnimSetParagonStateTemplate::StaticRegisterNativesUT4AnimSetParagonStateTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetParagonStateTemplate_NoRegister()
	{
		return UT4AnimSetParagonStateTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics
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
	UObject* (*const Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ConstantData_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ConstantData = { "ConstantData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetParagonStateTemplate, ConstantData), Z_Construct_UScriptStruct_FT4AnimSetParagonStateConstantData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ConstantData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ConstantData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetParagonStateTemplate, ParameterData), Z_Construct_UScriptStruct_FT4AnimSetParagonStateParameterData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ParameterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetParagonStateTemplate, AimData), Z_Construct_UScriptStruct_FT4AnimSetParagonStateAimData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetParagonStateTemplate, MovementData), Z_Construct_UScriptStruct_FT4AnimSetParagonStateMovementData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_MovementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_MovementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_IdleData_MetaData[] = {
		{ "Category", "Idle" },
		{ "Comment", "// T4_ADD_PARAGON_STATE_LAYER_ANIMATION_TAG_DATA\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimSetParagonStateTemplate.h" },
		{ "ToolTip", "T4_ADD_PARAGON_STATE_LAYER_ANIMATION_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_IdleData = { "IdleData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetParagonStateTemplate, IdleData), Z_Construct_UScriptStruct_FT4AnimSetParagonStateIdleData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_IdleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_IdleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ConstantData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_MovementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::NewProp_IdleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetParagonStateTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::ClassParams = {
		&UT4AnimSetParagonStateTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetParagonStateTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetParagonStateTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetParagonStateTemplate, 2413115742);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetParagonStateTemplate>()
	{
		return UT4AnimSetParagonStateTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetParagonStateTemplate(Z_Construct_UClass_UT4AnimSetParagonStateTemplate, &UT4AnimSetParagonStateTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetParagonStateTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetParagonStateTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
