// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetBasicStateTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetBasicStateTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetBasicStateTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimsetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimsetBasicStateConstantData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicStateConstantData"), sizeof(FT4AnimsetBasicStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicStateConstantData>()
{
	return FT4AnimsetBasicStateConstantData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicStateConstantData(FT4AnimsetBasicStateConstantData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicStateConstantData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateConstantData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateConstantData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicStateConstantData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateConstantData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateConstantData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateConstantData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicStateConstantData",
		sizeof(FT4AnimsetBasicStateConstantData),
		alignof(FT4AnimsetBasicStateConstantData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicStateConstantData"), sizeof(FT4AnimsetBasicStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData_Hash() { return 4256782364U; }
class UScriptStruct* FT4AnimsetBasicStateParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicStateParameterData"), sizeof(FT4AnimsetBasicStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicStateParameterData>()
{
	return FT4AnimsetBasicStateParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicStateParameterData(FT4AnimsetBasicStateParameterData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicStateParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateParameterData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicStateParameterData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateParameterData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateParameterData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStopParameter = { "RightRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, RightRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStartParameter = { "RightRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, RightRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunParameter = { "RightRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, RightRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter = { "LeftRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, LeftRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter = { "LeftRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, LeftRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunParameter = { "LeftRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, LeftRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter = { "BwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, BwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter = { "BwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, BwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunParameter = { "BwdRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, BwdRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter = { "FwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, FwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter = { "FwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, FwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimsetBasicStateTemplate::CopyTo\n" },
		{ "DisplayName", "Fwd Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunParameter = { "FwdRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateParameterData, FwdRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_RightRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_LeftRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_BwdRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::NewProp_FwdRunParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicStateParameterData",
		sizeof(FT4AnimsetBasicStateParameterData),
		alignof(FT4AnimsetBasicStateParameterData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicStateParameterData"), sizeof(FT4AnimsetBasicStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData_Hash() { return 170571827U; }
class UScriptStruct* FT4AnimsetBasicStateAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicStateAimData"), sizeof(FT4AnimsetBasicStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicStateAimData>()
{
	return FT4AnimsetBasicStateAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicStateAimData(FT4AnimsetBasicStateAimData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicStateAimData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateAimData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicStateAimData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateAimData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateAimData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::NewProp_AimBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetBasicStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::NewProp_AimBlendSpace = { "AimBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateAimData, AimBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::NewProp_AimBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::NewProp_AimBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::NewProp_AimBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicStateAimData",
		sizeof(FT4AnimsetBasicStateAimData),
		alignof(FT4AnimsetBasicStateAimData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicStateAimData"), sizeof(FT4AnimsetBasicStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData_Hash() { return 2996161574U; }
class UScriptStruct* FT4AnimsetBasicStateMovementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicStateMovementData"), sizeof(FT4AnimsetBasicStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicStateMovementData>()
{
	return FT4AnimsetBasicStateMovementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicStateMovementData(FT4AnimsetBasicStateMovementData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicStateMovementData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateMovementData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateMovementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicStateMovementData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateMovementData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateMovementData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightRunAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRunAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRun45RightAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRun45RightAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRun45LeftAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRun45LeftAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BwdRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BwdRunAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStopAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunStopAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunStartAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunStartAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRun45RightAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRun45RightAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRun45LeftAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRun45LeftAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FwdRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FwdRunAnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateMovementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence = { "RightRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, RightRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence = { "RightRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, RightRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence = { "RightRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, RightRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence = { "LeftRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, LeftRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence = { "LeftRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, LeftRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence = { "LeftRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, LeftRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence = { "BwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, BwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence = { "BwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, BwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence = { "BwdRun45RightAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, BwdRun45RightAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence = { "BwdRun45LeftAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, BwdRun45LeftAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence = { "BwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, BwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence = { "FwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, FwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence = { "FwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, FwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence = { "FwdRun45RightAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, FwdRun45RightAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence = { "FwdRun45LeftAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, FwdRun45LeftAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetBasicStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence = { "FwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateMovementData, FwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicStateMovementData",
		sizeof(FT4AnimsetBasicStateMovementData),
		alignof(FT4AnimsetBasicStateMovementData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicStateMovementData"), sizeof(FT4AnimsetBasicStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData_Hash() { return 692235859U; }
class UScriptStruct* FT4AnimsetBasicStateIdleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimsetBasicStateIdleData"), sizeof(FT4AnimsetBasicStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimsetBasicStateIdleData>()
{
	return FT4AnimsetBasicStateIdleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimsetBasicStateIdleData(FT4AnimsetBasicStateIdleData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimsetBasicStateIdleData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateIdleData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateIdleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimsetBasicStateIdleData")),new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateIdleData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimsetBasicStateIdleData;
	struct Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimsetBasicStateIdleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimsetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimsetBasicStateIdleData, IdleAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::NewProp_IdleAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimsetBasicStateIdleData",
		sizeof(FT4AnimsetBasicStateIdleData),
		alignof(FT4AnimsetBasicStateIdleData),
		Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimsetBasicStateIdleData"), sizeof(FT4AnimsetBasicStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData_Hash() { return 3642255808U; }
	void UT4AnimsetBasicStateTemplate::StaticRegisterNativesUT4AnimsetBasicStateTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimsetBasicStateTemplate_NoRegister()
	{
		return UT4AnimsetBasicStateTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics
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
	UObject* (*const Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimsetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ConstantData_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ConstantData = { "ConstantData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicStateTemplate, ConstantData), Z_Construct_UScriptStruct_FT4AnimsetBasicStateConstantData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ConstantData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ConstantData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicStateTemplate, ParameterData), Z_Construct_UScriptStruct_FT4AnimsetBasicStateParameterData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ParameterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicStateTemplate, AimData), Z_Construct_UScriptStruct_FT4AnimsetBasicStateAimData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicStateTemplate, MovementData), Z_Construct_UScriptStruct_FT4AnimsetBasicStateMovementData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_MovementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_MovementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_IdleData_MetaData[] = {
		{ "Category", "Idle" },
		{ "Comment", "// bool UT4AnimsetBasicStateTemplate::CopyFrom\n// bool UT4AnimsetBasicStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimsetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimsetBasicStateTemplate::CopyFrom\nbool UT4AnimsetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_IdleData = { "IdleData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimsetBasicStateTemplate, IdleData), Z_Construct_UScriptStruct_FT4AnimsetBasicStateIdleData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_IdleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_IdleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ConstantData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_MovementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::NewProp_IdleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimsetBasicStateTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::ClassParams = {
		&UT4AnimsetBasicStateTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimsetBasicStateTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimsetBasicStateTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimsetBasicStateTemplate, 4061649877);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimsetBasicStateTemplate>()
	{
		return UT4AnimsetBasicStateTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimsetBasicStateTemplate(Z_Construct_UClass_UT4AnimsetBasicStateTemplate, &UT4AnimsetBasicStateTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimsetBasicStateTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimsetBasicStateTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
