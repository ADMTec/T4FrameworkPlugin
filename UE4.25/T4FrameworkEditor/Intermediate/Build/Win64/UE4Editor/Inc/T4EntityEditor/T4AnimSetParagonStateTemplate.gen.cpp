// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetParagonStateTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetParagonStateTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetParagonStateTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimsetParagonStateConstantData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonStateConstantData"), sizeof(FT4AnimsetParagonStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonStateConstantData>()
{
	return FT4AnimsetParagonStateConstantData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonStateConstantData(FT4AnimsetParagonStateConstantData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonStateConstantData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateConstantData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateConstantData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonStateConstantData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateConstantData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateConstantData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateConstantData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "10" },
		{ "DisplayName", "InPlace TurnRate 180" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter = { "InPlaceTurnRate180Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, InPlaceTurnRate180Parameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "10" },
		{ "DisplayName", "InPlace TurnRate 90" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter = { "InPlaceTurnRate90Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, InPlaceTurnRate90Parameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "150" },
		{ "ClampMin", "130" },
		{ "DisplayName", "Backward Angle Range-Max" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter = { "BackwardAngleRangeMaxParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, BackwardAngleRangeMaxParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "-130" },
		{ "ClampMin", "-150" },
		{ "DisplayName", "Backward Angle Range-Min" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter = { "BackwardAngleRangeMinParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, BackwardAngleRangeMinParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "50" },
		{ "ClampMin", "30" },
		{ "DisplayName", "Forward Angle Range-Max" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter = { "ForwardAngleRangeMaxParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, ForwardAngleRangeMaxParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "-30" },
		{ "ClampMin", "-50" },
		{ "DisplayName", "Forward Angle Range-Min" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter = { "ForwardAngleRangeMinParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, ForwardAngleRangeMinParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimsetParagonStateTemplate::CopyTo\n" },
		{ "DisplayName", "Lean AngleRate Scale" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter = { "LeanRateScaleParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateConstantData, LeanRateScaleParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate180Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_InPlaceTurnRate90Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMaxParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_BackwardAngleRangeMinParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMaxParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_ForwardAngleRangeMinParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::NewProp_LeanRateScaleParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonStateConstantData",
		sizeof(FT4AnimsetParagonStateConstantData),
		alignof(FT4AnimsetParagonStateConstantData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonStateConstantData"), sizeof(FT4AnimsetParagonStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData_Hash() { return 1292914121U; }
class UScriptStruct* FT4AnimsetParagonStateParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonStateParameterData"), sizeof(FT4AnimsetParagonStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonStateParameterData>()
{
	return FT4AnimsetParagonStateParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonStateParameterData(FT4AnimsetParagonStateParameterData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonStateParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateParameterData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonStateParameterData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateParameterData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateParameterData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStopParameter = { "RightRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, RightRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStartParameter = { "RightRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, RightRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter = { "LeftRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, LeftRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter = { "LeftRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, LeftRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter = { "BwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, BwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter = { "BwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, BwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter = { "FwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, FwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimsetParagonStateTemplate::CopyTo\n" },
		{ "DisplayName", "Fwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter = { "FwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateParameterData, FwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_RightRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_LeftRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_BwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::NewProp_FwdRunStartParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonStateParameterData",
		sizeof(FT4AnimsetParagonStateParameterData),
		alignof(FT4AnimsetParagonStateParameterData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonStateParameterData"), sizeof(FT4AnimsetParagonStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData_Hash() { return 3402658526U; }
class UScriptStruct* FT4AnimsetParagonStateAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonStateAimData"), sizeof(FT4AnimsetParagonStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonStateAimData>()
{
	return FT4AnimsetParagonStateAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonStateAimData(FT4AnimsetParagonStateAimData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonStateAimData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateAimData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonStateAimData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateAimData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateAimData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::NewProp_AimBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::NewProp_AimBlendSpace = { "AimBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateAimData, AimBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::NewProp_AimBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::NewProp_AimBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::NewProp_AimBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonStateAimData",
		sizeof(FT4AnimsetParagonStateAimData),
		alignof(FT4AnimsetParagonStateAimData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonStateAimData"), sizeof(FT4AnimsetParagonStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData_Hash() { return 1790176883U; }
class UScriptStruct* FT4AnimsetParagonStateMovementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonStateMovementData"), sizeof(FT4AnimsetParagonStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonStateMovementData>()
{
	return FT4AnimsetParagonStateMovementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonStateMovementData(FT4AnimsetParagonStateMovementData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonStateMovementData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateMovementData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateMovementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonStateMovementData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateMovementData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateMovementData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateMovementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence = { "RightRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, RightRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence = { "RightRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, RightRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace = { "RightRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, RightRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence = { "LeftRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, LeftRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence = { "LeftRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, LeftRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace = { "LeftRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, LeftRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence = { "BwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, BwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence = { "BwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, BwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace = { "BwdRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, BwdRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence = { "FwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, FwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence = { "FwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, FwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace = { "FwdRunBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateMovementData, FwdRunBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_RightRunBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_LeftRunBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_BwdRunBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::NewProp_FwdRunBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonStateMovementData",
		sizeof(FT4AnimsetParagonStateMovementData),
		alignof(FT4AnimsetParagonStateMovementData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonStateMovementData"), sizeof(FT4AnimsetParagonStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData_Hash() { return 1161213827U; }
class UScriptStruct* FT4AnimsetParagonStateIdleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetParagonStateIdleData"), sizeof(FT4AnimsetParagonStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetParagonStateIdleData>()
{
	return FT4AnimsetParagonStateIdleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetParagonStateIdleData(FT4AnimsetParagonStateIdleData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetParagonStateIdleData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateIdleData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateIdleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetParagonStateIdleData")),new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateIdleData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetParagonStateIdleData;
	struct Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetParagonStateIdleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetParagonStateIdleData, IdleAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::NewProp_IdleAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetParagonStateIdleData",
		sizeof(FT4AnimsetParagonStateIdleData),
		alignof(FT4AnimsetParagonStateIdleData),
		Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetParagonStateIdleData"), sizeof(FT4AnimsetParagonStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData_Hash() { return 3213616882U; }
	void UT4AnimsetParagonStateTemplate::StaticRegisterNativesUT4AnimsetParagonStateTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimsetParagonStateTemplate_NoRegister()
	{
		return UT4AnimsetParagonStateTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics
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
	UObject* (*const Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimsetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ConstantData_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ConstantData = { "ConstantData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonStateTemplate, ConstantData), Z_Construct_UScriptStruct_FT4AnimsetParagonStateConstantData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ConstantData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ConstantData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonStateTemplate, ParameterData), Z_Construct_UScriptStruct_FT4AnimsetParagonStateParameterData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ParameterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonStateTemplate, AimData), Z_Construct_UScriptStruct_FT4AnimsetParagonStateAimData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonStateTemplate, MovementData), Z_Construct_UScriptStruct_FT4AnimsetParagonStateMovementData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_MovementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_MovementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_IdleData_MetaData[] = {
		{ "Category", "Idle" },
		{ "Comment", "// T4_ADD_PARAGON_STATE_LAYER_ANIMATION_TAG_DATA\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Paragon/T4AnimsetParagonStateTemplate.h" },
		{ "ToolTip", "T4_ADD_PARAGON_STATE_LAYER_ANIMATION_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_IdleData = { "IdleData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetParagonStateTemplate, IdleData), Z_Construct_UScriptStruct_FT4AnimsetParagonStateIdleData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_IdleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_IdleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ConstantData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_MovementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::NewProp_IdleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimsetParagonStateTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::ClassParams = {
		&UT4AnimsetParagonStateTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimsetParagonStateTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimsetParagonStateTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimsetParagonStateTemplate, 3488057154);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimsetParagonStateTemplate>()
	{
		return UT4AnimsetParagonStateTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimsetParagonStateTemplate(Z_Construct_UClass_UT4AnimsetParagonStateTemplate, &UT4AnimsetParagonStateTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimsetParagonStateTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimsetParagonStateTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
