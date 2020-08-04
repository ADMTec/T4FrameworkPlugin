// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/Animation/Human/T4HumanAnimVariables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4HumanAnimVariables() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
class UScriptStruct* FT4HumanStanceAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4HumanStanceAnimVariables"), sizeof(FT4HumanStanceAnimVariables), Get_Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4HumanStanceAnimVariables>()
{
	return FT4HumanStanceAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4HumanStanceAnimVariables(FT4HumanStanceAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4HumanStanceAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4HumanStanceAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4HumanStanceAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4HumanStanceAnimVariables")),new UScriptStruct::TCppStructOps<FT4HumanStanceAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4HumanStanceAnimVariables;
	struct Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AimSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunStopSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RunStopSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunLoopSelected_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RunLoopSelected_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunLoopSelected_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RunLoopSelected_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunLoopBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunLoopBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunStartSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RunStartSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IdleSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "T4Engine" },
		{ "Comment", "/**\n  * #131\n */" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4HumanStanceAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_AimSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_AimSelected = { "AimSelected", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, AimSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_AimSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_AimSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStopSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131, #142\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131, #142" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStopSelected = { "RunStopSelected", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, RunStopSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStopSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStopSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131, #142\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131, #142" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_B = { "RunLoopSelected_B", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, RunLoopSelected_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_A = { "RunLoopSelected_A", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, RunLoopSelected_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopBlendWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopBlendWeight = { "RunLoopBlendWeight", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, RunLoopBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStartSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStartSelected = { "RunStartSelected", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, RunStartSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStartSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStartSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_IdleSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/Human/T4HumanAnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_IdleSelected = { "IdleSelected", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4HumanStanceAnimVariables, IdleSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_IdleSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_IdleSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_AimSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStopSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopSelected_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunLoopBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_RunStartSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::NewProp_IdleSelected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4HumanStanceAnimVariables",
		sizeof(FT4HumanStanceAnimVariables),
		alignof(FT4HumanStanceAnimVariables),
		Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4HumanStanceAnimVariables"), sizeof(FT4HumanStanceAnimVariables), Get_Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4HumanStanceAnimVariables_Hash() { return 310995489U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
