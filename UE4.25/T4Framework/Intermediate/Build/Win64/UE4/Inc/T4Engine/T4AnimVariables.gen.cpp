// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/WorldActor/Animation/T4AnimVariables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimVariables() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4IKAnimVariables();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StateAnimVariables();
// End Cross Module References
class UScriptStruct* FT4IKAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4IKAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4IKAnimVariables"), sizeof(FT4IKAnimVariables), Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4IKAnimVariables>()
{
	return FT4IKAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4IKAnimVariables(FT4IKAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4IKAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4IKAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4IKAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4IKAnimVariables")),new UScriptStruct::TCppStructOps<FT4IKAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4IKAnimVariables;
	struct Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootJointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootJointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootJointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootJointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedFootIK_MetaData[];
#endif
		static void NewProp_bUsedFootIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedFootIK;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "T4Engine" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4IKAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset = { "COMOffset", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, COMOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget = { "RightFootJointTarget", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, RightFootJointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget = { "LeftFootJointTarget", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, LeftFootJointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset = { "RightFootOffset", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, RightFootOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset = { "LeftFootOffset", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4IKAnimVariables, LeftFootOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_SetBit(void* Obj)
	{
		((FT4IKAnimVariables*)Obj)->bUsedFootIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK = { "bUsedFootIK", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4IKAnimVariables), &Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_COMOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootJointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootJointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_RightFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_LeftFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::NewProp_bUsedFootIK,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4IKAnimVariables",
		sizeof(FT4IKAnimVariables),
		alignof(FT4IKAnimVariables),
		Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4IKAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4IKAnimVariables"), sizeof(FT4IKAnimVariables), Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4IKAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4IKAnimVariables_Hash() { return 2086902402U; }
class UScriptStruct* FT4MovementAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4MovementAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4MovementAnimVariables"), sizeof(FT4MovementAnimVariables), Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4MovementAnimVariables>()
{
	return FT4MovementAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4MovementAnimVariables(FT4MovementAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4MovementAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4MovementAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4MovementAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4MovementAnimVariables")),new UScriptStruct::TCppStructOps<FT4MovementAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4MovementAnimVariables;
	struct Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "T4Engine" },
		{ "Comment", "// #38\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#38" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4MovementAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimPitchAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovementVar" },
		{ "Comment", "// #113 : -45 ~ 45\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#113 : -45 ~ 45" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimPitchAngle = { "AimPitchAngle", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, AimPitchAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimYawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovementVar" },
		{ "Comment", "// #131 : Run \xec\xa0\x84\xec\x9a\xa9, \xec\x83\x81/\xed\x95\x98 \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84 -20 ~ 20 (Paragon \xec\xb0\xb8\xec\xa1\xb0)\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#131 : Run \xec\xa0\x84\xec\x9a\xa9, \xec\x83\x81/\xed\x95\x98 \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84 -20 ~ 20 (Paragon \xec\xb0\xb8\xec\xa1\xb0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimYawAngle = { "AimYawAngle", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, AimYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_SlopeAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovementVar" },
		{ "Comment", "// #131 : Run \xec\xa0\x84\xec\x9a\xa9, \xec\xa2\x8c/\xec\x9a\xb0 \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84 -90 ~ 90 (Paragon \xec\xb0\xb8\xec\xa1\xb0)\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#131 : Run \xec\xa0\x84\xec\x9a\xa9, \xec\xa2\x8c/\xec\x9a\xb0 \xea\xb8\xb0\xec\x9a\xb8\xec\x9e\x84 -90 ~ 90 (Paragon \xec\xb0\xb8\xec\xa1\xb0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_SlopeAngle = { "SlopeAngle", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, SlopeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_SlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_SlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_LeanAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovementVar" },
		{ "Comment", "// #38, #106 : \xec\x9d\xb4\xec\x86\x8d\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#38, #106 : \xec\x9d\xb4\xec\x86\x8d" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_LeanAngle = { "LeanAngle", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, LeanAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_LeanAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_LeanAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovementVar" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_YawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovementVar" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4MovementAnimVariables, YawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_YawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_YawAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_AimYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_SlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_LeanAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::NewProp_YawAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4MovementAnimVariables",
		sizeof(FT4MovementAnimVariables),
		alignof(FT4MovementAnimVariables),
		Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4MovementAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4MovementAnimVariables"), sizeof(FT4MovementAnimVariables), Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4MovementAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4MovementAnimVariables_Hash() { return 1306475585U; }
class UScriptStruct* FT4StateAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4StateAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4StateAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4StateAnimVariables"), sizeof(FT4StateAnimVariables), Get_Z_Construct_UScriptStruct_FT4StateAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4StateAnimVariables>()
{
	return FT4StateAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4StateAnimVariables(FT4StateAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4StateAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4StateAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4StateAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4StateAnimVariables")),new UScriptStruct::TCppStructOps<FT4StateAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4StateAnimVariables;
	struct Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLockOn_MetaData[];
#endif
		static void NewProp_bIsLockOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLockOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurning_MetaData[];
#endif
		static void NewProp_bIsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAimWithBone_MetaData[];
#endif
		static void NewProp_bIsAimWithBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAimWithBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDeceleration_MetaData[];
#endif
		static void NewProp_bIsDeceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAcceleration_MetaData[];
#endif
		static void NewProp_bIsAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "T4Engine" },
		{ "Comment", "/**\n  * https://docs.unrealengine.com/ko-kr/Engine/Animation\n */// #107\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "https://docs.unrealengine.com/ko-kr/Engine/Animation\n // #107" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4StateAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #142 : \xed\x9a\x8c\xec\xa0\x84\xec\xa4\x91\xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xaa\xa8\xec\x85\x98 \xec\xa0\x9c\xec\x96\xb4 (Ex. RunStop)\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#142 : \xed\x9a\x8c\xec\xa0\x84\xec\xa4\x91\xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xaa\xa8\xec\x85\x98 \xec\xa0\x9c\xec\x96\xb4 (Ex. RunStop)" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsLockOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn = { "bIsLockOn", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning = { "bIsTurning", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #154 : \xec\x9d\xb4\xeb\x8f\x99\xec\xa4\x91 Aim \xec\x82\xac\xec\x9a\xa9 \xeb\x98\x90\xeb\x8a\x94 Aim BS \xeb\xaf\xb8\xec\x84\xa4\xec\xa0\x95\xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 BoneTransform \xec\x97\x90 \xec\x9d\x98\xed\x95\x9c Aim \xec\xb2\x98\xeb\xa6\xac \xec\x82\xac\xec\x9a\xa9 \xec\x97\xac\xeb\xb6\x80\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#154 : \xec\x9d\xb4\xeb\x8f\x99\xec\xa4\x91 Aim \xec\x82\xac\xec\x9a\xa9 \xeb\x98\x90\xeb\x8a\x94 Aim BS \xeb\xaf\xb8\xec\x84\xa4\xec\xa0\x95\xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 BoneTransform \xec\x97\x90 \xec\x9d\x98\xed\x95\x9c Aim \xec\xb2\x98\xeb\xa6\xac \xec\x82\xac\xec\x9a\xa9 \xec\x97\xac\xeb\xb6\x80" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #113\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#113" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsAimWithBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone = { "bIsAimWithBone", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #131\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#131" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsDeceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration = { "bIsDeceleration", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "Comment", "// #142 : 0 < MoveSpeed\n" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
		{ "ToolTip", "#142 : 0 < MoveSpeed" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration = { "bIsAcceleration", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "ModuleRelativePath", "Private/WorldActor/Animation/T4AnimVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((FT4StateAnimVariables*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4StateAnimVariables), &Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsLockOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAimWithBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::NewProp_bIsMoving,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4StateAnimVariables",
		sizeof(FT4StateAnimVariables),
		alignof(FT4StateAnimVariables),
		Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4StateAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4StateAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4StateAnimVariables"), sizeof(FT4StateAnimVariables), Get_Z_Construct_UScriptStruct_FT4StateAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4StateAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4StateAnimVariables_Hash() { return 34914897U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
