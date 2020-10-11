// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EntityEditor/Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetBasicSimpleStateTemplate() {}
// Cross Module References
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData();
	UPackage* Z_Construct_UPackage__Script_T4EntityEditor();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	T4ENTITYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_NoRegister();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate();
	T4ENTITYEDITOR_API UClass* Z_Construct_UClass_UT4AnimSetLayerTemplateBase();
// End Cross Module References
class UScriptStruct* FT4AnimSetBasicSimpleStateParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSimpleStateParameterData"), sizeof(FT4AnimSetBasicSimpleStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSimpleStateParameterData>()
{
	return FT4AnimSetBasicSimpleStateParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData(FT4AnimSetBasicSimpleStateParameterData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSimpleStateParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateParameterData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSimpleStateParameterData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSimpleStateParameterData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateParameterData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastRunUseMoveSpeedParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastRunUseMoveSpeedParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSimpleStateParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::NewProp_FastRunUseMoveSpeedParameter_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "//bool UT4AnimSetBasicSimpleStateTemplate::CopyTo\n" },
		{ "DisplayName", "Fast Run Use MoveSpeed" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSimpleStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::NewProp_FastRunUseMoveSpeedParameter = { "FastRunUseMoveSpeedParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateParameterData, FastRunUseMoveSpeedParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::NewProp_FastRunUseMoveSpeedParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::NewProp_FastRunUseMoveSpeedParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::NewProp_FastRunUseMoveSpeedParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSimpleStateParameterData",
		sizeof(FT4AnimSetBasicSimpleStateParameterData),
		alignof(FT4AnimSetBasicSimpleStateParameterData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSimpleStateParameterData"), sizeof(FT4AnimSetBasicSimpleStateParameterData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData_Hash() { return 1210154519U; }
class UScriptStruct* FT4AnimSetBasicSimpleStateMovementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSimpleStateMovementData"), sizeof(FT4AnimSetBasicSimpleStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSimpleStateMovementData>()
{
	return FT4AnimSetBasicSimpleStateMovementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData(FT4AnimSetBasicSimpleStateMovementData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSimpleStateMovementData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateMovementData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateMovementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSimpleStateMovementData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSimpleStateMovementData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateMovementData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastRunAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FastRunAnimSequence;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSimpleStateMovementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FastRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FastRunAnimSequence = { "FastRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateMovementData, FastRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FastRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FastRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_RightRunAnimSequence = { "RightRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateMovementData, RightRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_RightRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_LeftRunAnimSequence = { "LeftRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateMovementData, LeftRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_LeftRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_BwdRunAnimSequence = { "BwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateMovementData, BwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_BwdRunAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetBasicSimpleStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSimpleStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FwdRunAnimSequence = { "FwdRunAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateMovementData, FwdRunAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FwdRunAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FastRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_RightRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_LeftRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_BwdRunAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::NewProp_FwdRunAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSimpleStateMovementData",
		sizeof(FT4AnimSetBasicSimpleStateMovementData),
		alignof(FT4AnimSetBasicSimpleStateMovementData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSimpleStateMovementData"), sizeof(FT4AnimSetBasicSimpleStateMovementData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData_Hash() { return 2506035533U; }
class UScriptStruct* FT4AnimSetBasicSimpleStateIdleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENTITYEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData, Z_Construct_UPackage__Script_T4EntityEditor(), TEXT("T4AnimSetBasicSimpleStateIdleData"), sizeof(FT4AnimSetBasicSimpleStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Hash());
	}
	return Singleton;
}
template<> T4ENTITYEDITOR_API UScriptStruct* StaticStruct<FT4AnimSetBasicSimpleStateIdleData>()
{
	return FT4AnimSetBasicSimpleStateIdleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData(FT4AnimSetBasicSimpleStateIdleData::StaticStruct, TEXT("/Script/T4EntityEditor"), TEXT("T4AnimSetBasicSimpleStateIdleData"), false, nullptr, nullptr);
static struct FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateIdleData
{
	FScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateIdleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4AnimSetBasicSimpleStateIdleData")),new UScriptStruct::TCppStructOps<FT4AnimSetBasicSimpleStateIdleData>);
	}
} ScriptStruct_T4EntityEditor_StaticRegisterNativesFT4AnimSetBasicSimpleStateIdleData;
	struct Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4AnimSetBasicSimpleStateIdleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "//bool UT4AnimSetParagonStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetParagonStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4AnimSetBasicSimpleStateIdleData, IdleAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::NewProp_IdleAnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::NewProp_IdleAnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
		nullptr,
		&NewStructOps,
		"T4AnimSetBasicSimpleStateIdleData",
		sizeof(FT4AnimSetBasicSimpleStateIdleData),
		alignof(FT4AnimSetBasicSimpleStateIdleData),
		Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4EntityEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4AnimSetBasicSimpleStateIdleData"), sizeof(FT4AnimSetBasicSimpleStateIdleData), Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData_Hash() { return 52730114U; }
	void UT4AnimSetBasicSimpleStateTemplate::StaticRegisterNativesUT4AnimSetBasicSimpleStateTemplate()
	{
	}
	UClass* Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_NoRegister()
	{
		return UT4AnimSetBasicSimpleStateTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterData;
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
	UObject* (*const Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimSetLayerTemplateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EntityEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSimpleStateTemplate, ParameterData), Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateParameterData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_ParameterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSimpleStateTemplate, MovementData), Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateMovementData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_MovementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_MovementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_IdleData_MetaData[] = {
		{ "Category", "Idle" },
		{ "Comment", "// bool UT4AnimSetBasicSimpleStateTemplate::CopyFrom\n// bool UT4AnimSetBasicSimpleStateTemplate::CopyTo\n" },
		{ "ModuleRelativePath", "Private/AnimTemplate/Basic_Simple/T4AnimSetBasicSimpleStateTemplate.h" },
		{ "ToolTip", "bool UT4AnimSetBasicSimpleStateTemplate::CopyFrom\nbool UT4AnimSetBasicSimpleStateTemplate::CopyTo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_IdleData = { "IdleData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4AnimSetBasicSimpleStateTemplate, IdleData), Z_Construct_UScriptStruct_FT4AnimSetBasicSimpleStateIdleData, METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_IdleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_IdleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_ParameterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_MovementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::NewProp_IdleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4AnimSetBasicSimpleStateTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::ClassParams = {
		&UT4AnimSetBasicSimpleStateTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4AnimSetBasicSimpleStateTemplate, 630360346);
	template<> T4ENTITYEDITOR_API UClass* StaticClass<UT4AnimSetBasicSimpleStateTemplate>()
	{
		return UT4AnimSetBasicSimpleStateTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4AnimSetBasicSimpleStateTemplate(Z_Construct_UClass_UT4AnimSetBasicSimpleStateTemplate, &UT4AnimSetBasicSimpleStateTemplate::StaticClass, TEXT("/Script/T4EntityEditor"), TEXT("UT4AnimSetBasicSimpleStateTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4AnimSetBasicSimpleStateTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
