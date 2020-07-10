// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetBasicStateTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicStateTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicStateTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetBasicStateConstantData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicStateConstantData"), sizeof(FT4AnimSetBasicStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicStateConstantData>()
{
	return FT4AnimSetBasicStateConstantData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicStateConstantData(FT4AnimSetBasicStateConstantData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicStateConstantData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateConstantData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateConstantData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicStateConstantData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateConstantData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateConstantData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateConstantData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicStateConstantData",
		sizeof(FT4AnimSetBasicStateConstantData),
		alignof(FT4AnimSetBasicStateConstantData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicStateConstantData"), sizeof(FT4AnimSetBasicStateConstantData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData_Hash() { return 1904426749U; }
class UScriptStruct* FT4AnimSetBasicStateParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicStateParameterData"), sizeof(FT4AnimSetBasicStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicStateParameterData>()
{
	return FT4AnimSetBasicStateParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicStateParameterData(FT4AnimSetBasicStateParameterData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicStateParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateParameterData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicStateParameterData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateParameterData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateParameterData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStopParameter = { "RightRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, RightRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStartParameter = { "RightRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, RightRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Right Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunParameter = { "RightRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, RightRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter = { "LeftRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, LeftRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter = { "LeftRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, LeftRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Left Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunParameter = { "LeftRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, LeftRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter = { "BwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, BwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter = { "BwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, BwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bwd Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunParameter = { "BwdRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, BwdRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStop StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter = { "FwdRunStopParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, FwdRunStopParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Fwd RunStart StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter = { "FwdRunStartParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, FwdRunStartParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimSetBasicStateTemplate::CopyTo\n" },
		{ "DisplayName", "Fwd Run StartPos" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunParameter = { "FwdRunParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateParameterData, FwdRunParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_RightRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_LeftRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_BwdRunParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStopParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunStartParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::NewProp_FwdRunParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicStateParameterData",
		sizeof(FT4AnimSetBasicStateParameterData),
		alignof(FT4AnimSetBasicStateParameterData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicStateParameterData"), sizeof(FT4AnimSetBasicStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData_Hash() { return 1251341481U; }
class UScriptStruct* FT4AnimSetBasicStateAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicStateAimData"), sizeof(FT4AnimSetBasicStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicStateAimData>()
{
	return FT4AnimSetBasicStateAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicStateAimData(FT4AnimSetBasicStateAimData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicStateAimData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateAimData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicStateAimData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateAimData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateAimData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::NewProp_AimBlendSpace_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::NewProp_AimBlendSpace = { "AimBlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateAimData, AimBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::NewProp_AimBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::NewProp_AimBlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::NewProp_AimBlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicStateAimData",
		sizeof(FT4AnimSetBasicStateAimData),
		alignof(FT4AnimSetBasicStateAimData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicStateAimData"), sizeof(FT4AnimSetBasicStateAimData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData_Hash() { return 712368013U; }
class UScriptStruct* FT4AnimSetBasicStateMovementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicStateMovementData"), sizeof(FT4AnimSetBasicStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicStateMovementData>()
{
	return FT4AnimSetBasicStateMovementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicStateMovementData(FT4AnimSetBasicStateMovementData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicStateMovementData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateMovementData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateMovementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicStateMovementData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateMovementData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateMovementData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateMovementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence = { "RightRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, RightRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence = { "RightRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, RightRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence = { "RightRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, RightRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence = { "LeftRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, LeftRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence = { "LeftRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, LeftRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence = { "LeftRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, LeftRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence = { "BwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, BwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence = { "BwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, BwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence = { "BwdRun45RightAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, BwdRun45RightAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence = { "BwdRun45LeftAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, BwdRun45LeftAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence = { "BwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, BwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence = { "FwdRunStopAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, FwdRunStopAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence = { "FwdRunStartAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, FwdRunStartAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence = { "FwdRun45RightAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, FwdRun45RightAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence = { "FwdRun45LeftAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, FwdRun45LeftAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence = { "FwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateMovementData, FwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_RightRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_LeftRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45RightAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRun45LeftAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_BwdRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStopAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunStartAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45RightAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRun45LeftAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::NewProp_FwdRunAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicStateMovementData",
		sizeof(FT4AnimSetBasicStateMovementData),
		alignof(FT4AnimSetBasicStateMovementData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicStateMovementData"), sizeof(FT4AnimSetBasicStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData_Hash() { return 367300136U; }
class UScriptStruct* FT4AnimSetBasicStateIdleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicStateIdleData"), sizeof(FT4AnimSetBasicStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicStateIdleData>()
{
	return FT4AnimSetBasicStateIdleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicStateIdleData(FT4AnimSetBasicStateIdleData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicStateIdleData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateIdleData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateIdleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicStateIdleData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateIdleData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicStateIdleData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicStateIdleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicStateIdleData, IdleAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::NewProp_IdleAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicStateIdleData",
		sizeof(FT4AnimSetBasicStateIdleData),
		alignof(FT4AnimSetBasicStateIdleData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicStateIdleData"), sizeof(FT4AnimSetBasicStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData_Hash() { return 4111411730U; }
	void UT4AnimSetBasicStateTemplate::StaticRegisterNativesUT4AnimSetBasicStateTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetBasicStateTemplate_NoRegister()
	{
		return UT4AnimSetBasicStateTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics
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
	UObject* (*const Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ConstantData_MetaData[] = {
		{ "Category", "Constant" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ConstantData = { "ConstantData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicStateTemplate, ConstantData), Z_Construct_UScriptStruct_FT4AnimSetBasicStateConstantData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ConstantData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ConstantData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicStateTemplate, ParameterData), Z_Construct_UScriptStruct_FT4AnimSetBasicStateParameterData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ParameterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicStateTemplate, AimData), Z_Construct_UScriptStruct_FT4AnimSetBasicStateAimData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicStateTemplate, MovementData), Z_Construct_UScriptStruct_FT4AnimSetBasicStateMovementData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_MovementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_MovementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_IdleData_MetaData[] = {
		{ "Category", "Idle" },
		{ "Comment", "// bool UT4AnimSetBasicStateTemplate::CopyFrom\n// bool UT4AnimSetBasicStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic/T4AnimSetBasicStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicStateTemplate::CopyFrom\nbool UT4AnimSetBasicStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_IdleData = { "IdleData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicStateTemplate, IdleData), Z_Construct_UScriptStruct_FT4AnimSetBasicStateIdleData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_IdleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_IdleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ConstantData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_MovementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::NewProp_IdleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetBasicStateTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::ClassParams = {
		&UT4AnimSetBasicStateTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetBasicStateTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetBasicStateTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetBasicStateTemplate, 962527086);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetBasicStateTemplate>()
	{
		return UT4AnimSetBasicStateTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetBasicStateTemplate(Z_Construct_UClass_UT4AnimSetBasicStateTemplate, &UT4AnimSetBasicStateTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetBasicStateTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetBasicStateTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
