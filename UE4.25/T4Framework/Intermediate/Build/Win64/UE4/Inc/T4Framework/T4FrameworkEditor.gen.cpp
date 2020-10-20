// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/T4FrameworkEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4FrameworkEditor() {}
// Cross Module References
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4EditorFindTarget();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4EditorPlayRole();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorEffectDataInfo();
	T4ASSET_API UClass* Z_Construct_UClass_UT4ActionPackAsset_NoRegister();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorSkillDataInfo();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorNPCDataInfo();
// End Cross Module References
	static UEnum* ET4EditorFindTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4EditorFindTarget, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4EditorFindTarget"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4EditorFindTarget>()
	{
		return ET4EditorFindTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EditorFindTarget(ET4EditorFindTarget_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4EditorFindTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4EditorFindTarget_Hash() { return 2479956176U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4EditorFindTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EditorFindTarget"), 0, Get_Z_Construct_UEnum_T4Framework_ET4EditorFindTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EditorFindTarget::All", (int64)ET4EditorFindTarget::All },
				{ "ET4EditorFindTarget::Static", (int64)ET4EditorFindTarget::Static },
				{ "ET4EditorFindTarget::Dynamic", (int64)ET4EditorFindTarget::Dynamic },
				{ "ET4EditorFindTarget::None", (int64)ET4EditorFindTarget::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ET4EditorFindTarget::All" },
				{ "Comment", "// #117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)\n" },
				{ "Dynamic.Name", "ET4EditorFindTarget::Dynamic" },
				{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EditorFindTarget::None" },
				{ "Static.Name", "ET4EditorFindTarget::Static" },
				{ "ToolTip", "#117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4EditorFindTarget",
				"ET4EditorFindTarget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4EditorPlayRole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4EditorPlayRole, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4EditorPlayRole"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4EditorPlayRole>()
	{
		return ET4EditorPlayRole_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EditorPlayRole(ET4EditorPlayRole_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4EditorPlayRole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4EditorPlayRole_Hash() { return 3751321558U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4EditorPlayRole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EditorPlayRole"), 0, Get_Z_Construct_UEnum_T4Framework_ET4EditorPlayRole_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EditorPlayRole::Attacker", (int64)ET4EditorPlayRole::Attacker },
				{ "ET4EditorPlayRole::Defender", (int64)ET4EditorPlayRole::Defender },
				{ "ET4EditorPlayRole::None", (int64)ET4EditorPlayRole::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attacker.Name", "ET4EditorPlayRole::Attacker" },
				{ "Comment", "/**\n  * #60 : Only Editor\n */" },
				{ "Defender.Name", "ET4EditorPlayRole::Defender" },
				{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EditorPlayRole::None" },
				{ "ToolTip", "#60 : Only Editor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4EditorPlayRole",
				"ET4EditorPlayRole",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FT4EditorEffectDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4EditorEffectDataInfo"), sizeof(FT4EditorEffectDataInfo), Get_Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4EditorEffectDataInfo>()
{
	return FT4EditorEffectDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorEffectDataInfo(FT4EditorEffectDataInfo::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4EditorEffectDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4EditorEffectDataInfo
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4EditorEffectDataInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorEffectDataInfo")),new UScriptStruct::TCppStructOps<FT4EditorEffectDataInfo>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4EditorEffectDataInfo;
	struct Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainEffectDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChainEffectDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAngleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAngleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAngleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMovement_MetaData[];
#endif
		static void NewProp_bUseMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEffectRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEffectRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinEffectRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinEffectRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorEffectDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_OverrideActionPackAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_OverrideActionPackAsset = { "OverrideActionPackAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, OverrideActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_OverrideActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_OverrideActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_ChainEffectDBKey_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#140 : \xeb\x86\x92\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84 (\xec\x9d\xb4 \xec\x86\x8d\xeb\x8f\x84\xeb\xa1\x9c \xec\xb5\x9c\xeb\x8c\x80 \xeb\x86\x92\xec\x9d\xb4\xea\xb9\x8c\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb5\xac\xed\x95\xb4\xec\x84\x9c \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0 \xea\xb3\xb5\xec\x8b\x9d \xec\xb2\x98\xeb\xa6\xac)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_ChainEffectDBKey = { "ChainEffectDBKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, ChainEffectDBKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_ChainEffectDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_ChainEffectDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeightSpeed_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #135 : ET4GameAttackType Air\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#135 : ET4GameAttackType Air" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeightSpeed = { "MoveMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, MoveMaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeight_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#140 : \xec\xb5\x9c\xeb\x8c\x80\xea\xb1\xb0\xeb\xa6\xac / \xec\x8b\x9c\xea\xb0\x84\xec\x9c\xbc\xeb\xa1\x9c MovementSpeed \xeb\xa5\xbc \xea\xb5\xac\xed\x95\x9c\xeb\x8b\xa4. XY" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeight = { "MoveMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, MoveMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxDistance_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #135\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxDistance = { "MoveMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, MoveMaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #158\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#158" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType = { "MoveAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, MoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #114 : ET4GameEffectType::Area\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#114 : ET4GameEffectType::Area" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement_SetBit(void* Obj)
	{
		((FT4EditorEffectDataInfo*)Obj)->bUseMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement = { "bUseMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorEffectDataInfo), &Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MaxEffectRange_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #114 : ET4GameEffectType::Area\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#114 : ET4GameEffectType::Area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MaxEffectRange = { "MaxEffectRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, MaxEffectRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MaxEffectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MaxEffectRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MinEffectRange_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MinEffectRange = { "MinEffectRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, MinEffectRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MinEffectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MinEffectRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_HitDelayTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_HitDelayTimeSec = { "HitDelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, HitDelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_HitDelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_HitDelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, EffectType), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_EffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// #T4_ADD_EFFECT_TAG_DATA\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#T4_ADD_EFFECT_TAG_DATA" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorEffectDataInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_OverrideActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_ChainEffectDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MoveAngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_bUseMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MaxEffectRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_MinEffectRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_HitDelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		nullptr,
		&NewStructOps,
		"T4EditorEffectDataInfo",
		sizeof(FT4EditorEffectDataInfo),
		alignof(FT4EditorEffectDataInfo),
		Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorEffectDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorEffectDataInfo"), sizeof(FT4EditorEffectDataInfo), Get_Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Hash() { return 3485635197U; }
class UScriptStruct* FT4EditorSkillDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4EditorSkillDataInfo"), sizeof(FT4EditorSkillDataInfo), Get_Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4EditorSkillDataInfo>()
{
	return FT4EditorSkillDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorSkillDataInfo(FT4EditorSkillDataInfo::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4EditorSkillDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4EditorSkillDataInfo
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4EditorSkillDataInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorSkillDataInfo")),new UScriptStruct::TCppStructOps<FT4EditorSkillDataInfo>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4EditorSkillDataInfo;
	struct Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicateActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IndicateActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CancelActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CastingActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingActionPackAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_UsingActionPackAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAngleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAngleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAngleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMovement_MetaData[];
#endif
		static void NewProp_bUseMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FindTargetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FindTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverlapEvents_MetaData[];
#endif
		static void NewProp_bUseOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApproach_MetaData[];
#endif
		static void NewProp_bApproach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApproach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCasting_MetaData[];
#endif
		static void NewProp_bCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCasting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockOn_MetaData[];
#endif
		static void NewProp_bLockOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveable_MetaData[];
#endif
		static void NewProp_bMoveable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttackType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorSkillDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_IndicateActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_IndicateActionPackAsset = { "IndicateActionPackAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, IndicateActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_IndicateActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_IndicateActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CancelActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CancelActionPackAsset = { "CancelActionPackAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, CancelActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CancelActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CancelActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CastingActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CastingActionPackAsset = { "CastingActionPackAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, CastingActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CastingActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CastingActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_UsingActionPackAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #127\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#127" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_UsingActionPackAsset = { "UsingActionPackAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, UsingActionPackAsset), Z_Construct_UClass_UT4ActionPackAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_UsingActionPackAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_UsingActionPackAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AimingPitchAngle_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "-45.0" },
		{ "Comment", "// #112, #113 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * Speed (1 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xea\xb8\xb0\xeb\xb3\xb8\xea\xb0\x92 \xec\x82\xac\xec\x9a\xa9)\n" },
		{ "EditCondition", "bCasting" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#112, #113 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 InPlaceRotationRate * Speed (1 \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 \xea\xb8\xb0\xeb\xb3\xb8\xea\xb0\x92 \xec\x82\xac\xec\x9a\xa9)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AimingPitchAngle = { "AimingPitchAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, AimingPitchAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AimingPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AimingPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_RotationRateSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_RotationRateSpeed = { "RotationRateSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, RotationRateSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_RotationRateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_RotationRateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeightSpeed = { "MoveMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, MoveMaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeight = { "MoveMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, MoveMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxDistance_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxDistance = { "MoveMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, MoveMaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #158\n" },
		{ "EditCondition", "bUseMovement" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#158" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType = { "MoveAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, MoveAngleType), Z_Construct_UEnum_T4Asset_ET4MoveAngleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#63" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement_SetBit(void* Obj)
	{
		((FT4EditorSkillDataInfo*)Obj)->bUseMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement = { "bUseMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorSkillDataInfo), &Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#117 : \xea\xb3\xb5\xea\xb0\x9d \xeb\x8c\x80\xec\x83\x81\xec\x9d\x84 \xec\xb0\xbe\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x98\xb5\xec\x85\x98 (TODO : Tribe or Enemy)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, ProjectileSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_ProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_ProjectileSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType = { "FindTargetType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, FindTargetType), Z_Construct_UEnum_T4Framework_ET4EditorFindTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CoolTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CoolTimeSec = { "CoolTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, CoolTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CoolTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CoolTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, DurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DelayTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135 : Overlap Event \xec\x97\x90 \xec\x9d\x98\xed\x95\x9c \xed\x8c\x90\xec\xa0\x95 \xec\x82\xac\xec\x9a\xa9. ActionPack \xec\x97\x90 Overlap Event Action \xec\x9d\xb4 \xec\x84\xa4\xec\xb9\x98\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8. false \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 HitTime \xea\xb8\xb0\xeb\xb0\x98 \xeb\x9e\x9c\xeb\x8d\xa4 \xec\xb2\x98\xeb\xa6\xac\n" },
		{ "EditCondition", "!bUseOverlapEvents" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#135 : Overlap Event \xec\x97\x90 \xec\x9d\x98\xed\x95\x9c \xed\x8c\x90\xec\xa0\x95 \xec\x82\xac\xec\x9a\xa9. ActionPack \xec\x97\x90 Overlap Event Action \xec\x9d\xb4 \xec\x84\xa4\xec\xb9\x98\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8. false \xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 HitTime \xea\xb8\xb0\xeb\xb0\x98 \xeb\x9e\x9c\xeb\x8d\xa4 \xec\xb2\x98\xeb\xa6\xac" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DelayTimeSec = { "DelayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, DelayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DelayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DelayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #170\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#170" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents_SetBit(void* Obj)
	{
		((FT4EditorSkillDataInfo*)Obj)->bUseOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents = { "bUseOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorSkillDataInfo), &Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #113, #135\n" },
		{ "EditCondition", "!bCasting" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#113, #135" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach_SetBit(void* Obj)
	{
		((FT4EditorSkillDataInfo*)Obj)->bApproach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach = { "bApproach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorSkillDataInfo), &Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #113\n" },
		{ "EditCondition", "!bApproach" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#113" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting_SetBit(void* Obj)
	{
		((FT4EditorSkillDataInfo*)Obj)->bCasting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting = { "bCasting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorSkillDataInfo), &Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn_SetBit(void* Obj)
	{
		((FT4EditorSkillDataInfo*)Obj)->bLockOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn = { "bLockOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorSkillDataInfo), &Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#63" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable_SetBit(void* Obj)
	{
		((FT4EditorSkillDataInfo*)Obj)->bMoveable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable = { "bMoveable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4EditorSkillDataInfo), &Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AttackType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, AttackType), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AttackType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #T4_ADD_SKILL_CONTENT_TAG \n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#T4_ADD_SKILL_CONTENT_TAG" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorSkillDataInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_IndicateActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CancelActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CastingActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_UsingActionPackAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AimingPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_RotationRateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_MoveAngleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_ProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_FindTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_CoolTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_DelayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bUseOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bApproach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bCasting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bLockOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_bMoveable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		nullptr,
		&NewStructOps,
		"T4EditorSkillDataInfo",
		sizeof(FT4EditorSkillDataInfo),
		alignof(FT4EditorSkillDataInfo),
		Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorSkillDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorSkillDataInfo"), sizeof(FT4EditorSkillDataInfo), Get_Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Hash() { return 1151717225U; }
class UScriptStruct* FT4EditorNPCDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4EditorNPCDataInfo"), sizeof(FT4EditorNPCDataInfo), Get_Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4EditorNPCDataInfo>()
{
	return FT4EditorNPCDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorNPCDataInfo(FT4EditorNPCDataInfo::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4EditorNPCDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4EditorNPCDataInfo
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4EditorNPCDataInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorNPCDataInfo")),new UScriptStruct::TCppStructOps<FT4EditorNPCDataInfo>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4EditorNPCDataInfo;
	struct Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeStanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitializeStanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeAnimSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitializeAnimSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullbodySkinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FullbodySkinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #158 : \xec\x95\x84\xeb\x9e\x98 Struct \xeb\x93\xa4\xec\x9d\x80 T4EditorGameplayController \xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 UI \xeb\xa1\x9c \xec\xa0\x9c\xea\xb3\xb5\xeb\x90\x98\xec\x96\xb4 USTRUCT \xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xea\xb2\x83...\n// #135\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#158 : \xec\x95\x84\xeb\x9e\x98 Struct \xeb\x93\xa4\xec\x9d\x80 T4EditorGameplayController \xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 UI \xeb\xa1\x9c \xec\xa0\x9c\xea\xb3\xb5\xeb\x90\x98\xec\x96\xb4 USTRUCT \xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xea\xb2\x83...\n#135" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorNPCDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeStanceName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #142\n" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
		{ "ToolTip", "#142" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeStanceName = { "InitializeStanceName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorNPCDataInfo, InitializeStanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeStanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeStanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeAnimSetName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeAnimSetName = { "InitializeAnimSetName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorNPCDataInfo, InitializeAnimSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeAnimSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeAnimSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_FullbodySkinName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4FrameworkEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_FullbodySkinName = { "FullbodySkinName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorNPCDataInfo, FullbodySkinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_FullbodySkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_FullbodySkinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeStanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_InitializeAnimSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::NewProp_FullbodySkinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		nullptr,
		&NewStructOps,
		"T4EditorNPCDataInfo",
		sizeof(FT4EditorNPCDataInfo),
		alignof(FT4EditorNPCDataInfo),
		Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorNPCDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorNPCDataInfo"), sizeof(FT4EditorNPCDataInfo), Get_Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Hash() { return 3258830071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
