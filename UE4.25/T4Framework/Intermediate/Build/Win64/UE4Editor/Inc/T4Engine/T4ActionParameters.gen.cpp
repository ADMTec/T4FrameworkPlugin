// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionParameters() {}
// Cross Module References
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4AnimationParamBits();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4OverrideParamBits();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4TargetParamBits();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4DefaultParamBits();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EditorActionCommandContext();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionAnimationParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionOverrideParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTargetParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionDefaultParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActorID();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
// End Cross Module References
	static UEnum* ET4AnimationParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4AnimationParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4AnimationParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimationParamBits>()
	{
		return ET4AnimationParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimationParamBits(ET4AnimationParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4AnimationParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4AnimationParamBits_Hash() { return 739275100U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4AnimationParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimationParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4AnimationParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimationParamBits::PlaySkipBit", (int64)ET4AnimationParamBits::PlaySkipBit },
				{ "ET4AnimationParamBits::NoBlendInTimeWithOffsetPlayBit", (int64)ET4AnimationParamBits::NoBlendInTimeWithOffsetPlayBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
				{ "NoBlendInTimeWithOffsetPlayBit.Comment", "// #142 : EffectDirect \xeb\x93\xb1\xea\xb3\xbc \xea\xb0\x99\xec\x9d\xb4 \xec\x9d\xb4\xeb\x8f\x99\xec\xa4\x91\xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 Hit \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 Skip \xec\x9d\x84 \xec\x9c\x84\xed\x95\x9c \xec\xb2\x98\xeb\xa6\xac\n" },
				{ "NoBlendInTimeWithOffsetPlayBit.Name", "ET4AnimationParamBits::NoBlendInTimeWithOffsetPlayBit" },
				{ "NoBlendInTimeWithOffsetPlayBit.ToolTip", "#142 : EffectDirect \xeb\x93\xb1\xea\xb3\xbc \xea\xb0\x99\xec\x9d\xb4 \xec\x9d\xb4\xeb\x8f\x99\xec\xa4\x91\xec\x9d\xbc \xea\xb2\xbd\xec\x9a\xb0 Hit \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 Skip \xec\x9d\x84 \xec\x9c\x84\xed\x95\x9c \xec\xb2\x98\xeb\xa6\xac" },
				{ "PlaySkipBit.Name", "ET4AnimationParamBits::PlaySkipBit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4AnimationParamBits",
				"ET4AnimationParamBits",
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
	static UEnum* ET4OverrideParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4OverrideParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4OverrideParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4OverrideParamBits>()
	{
		return ET4OverrideParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4OverrideParamBits(ET4OverrideParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4OverrideParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4OverrideParamBits_Hash() { return 3645660042U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4OverrideParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4OverrideParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4OverrideParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4OverrideParamBits::DurationBit", (int64)ET4OverrideParamBits::DurationBit },
				{ "ET4OverrideParamBits::OffsetTimeBit", (int64)ET4OverrideParamBits::OffsetTimeBit },
				{ "ET4OverrideParamBits::MovementMaxHeightBit", (int64)ET4OverrideParamBits::MovementMaxHeightBit },
				{ "ET4OverrideParamBits::MovementMaxHeightSpeedBit", (int64)ET4OverrideParamBits::MovementMaxHeightSpeedBit },
				{ "ET4OverrideParamBits::MovementCollideLocationBit", (int64)ET4OverrideParamBits::MovementCollideLocationBit },
				{ "ET4OverrideParamBits::MovementCollideTimeSecBit", (int64)ET4OverrideParamBits::MovementCollideTimeSecBit },
				{ "ET4OverrideParamBits::MovementReverseAngleBit", (int64)ET4OverrideParamBits::MovementReverseAngleBit },
				{ "ET4OverrideParamBits::ProjectileSpeedBit", (int64)ET4OverrideParamBits::ProjectileSpeedBit },
				{ "ET4OverrideParamBits::ProjectileHitTargetBit", (int64)ET4OverrideParamBits::ProjectileHitTargetBit },
				{ "ET4OverrideParamBits::ProjectileDurationBit", (int64)ET4OverrideParamBits::ProjectileDurationBit },
				{ "ET4OverrideParamBits::MaxPlayTimeBit", (int64)ET4OverrideParamBits::MaxPlayTimeBit },
				{ "ET4OverrideParamBits::TargetBoneBit", (int64)ET4OverrideParamBits::TargetBoneBit },
				{ "ET4OverrideParamBits::ActionPointBit", (int64)ET4OverrideParamBits::ActionPointBit },
				{ "ET4OverrideParamBits::ProjectileAttachTransformRuleBit", (int64)ET4OverrideParamBits::ProjectileAttachTransformRuleBit },
				{ "ET4OverrideParamBits::LocalOrWorldLocationBit", (int64)ET4OverrideParamBits::LocalOrWorldLocationBit },
				{ "ET4OverrideParamBits::LocalOrWorldRotationBit", (int64)ET4OverrideParamBits::LocalOrWorldRotationBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionPointBit.Comment", "// #112 : TargetActor \xea\xb0\x80 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0 Attacker \xea\xb0\x80 \xec\x84\xa0\xed\x83\x9d\xed\x95\x9c(\xeb\x98\x90\xeb\x8a\x94 \xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xec\xa7\x80\xec\xa0\x95\xed\x95\x9c) \xec\x97\xb0\xec\xb6\x9c\xec\x9a\xa9 HitBone \xec\x9c\x84\xec\xb9\x98\n" },
				{ "ActionPointBit.Name", "ET4OverrideParamBits::ActionPointBit" },
				{ "ActionPointBit.ToolTip", "#112 : TargetActor \xea\xb0\x80 \xec\x9e\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0 Attacker \xea\xb0\x80 \xec\x84\xa0\xed\x83\x9d\xed\x95\x9c(\xeb\x98\x90\xeb\x8a\x94 \xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xec\xa7\x80\xec\xa0\x95\xed\x95\x9c) \xec\x97\xb0\xec\xb6\x9c\xec\x9a\xa9 HitBone \xec\x9c\x84\xec\xb9\x98" },
				{ "Bitflags", "" },
				{ "Comment", "// #112\n" },
				{ "DurationBit.Name", "ET4OverrideParamBits::DurationBit" },
				{ "LocalOrWorldLocationBit.Comment", "// #112 : Projectile \xec\x9a\xa9 AttachTransformRuleBit \xec\x82\xac\xec\x9a\xa9\n" },
				{ "LocalOrWorldLocationBit.Name", "ET4OverrideParamBits::LocalOrWorldLocationBit" },
				{ "LocalOrWorldLocationBit.ToolTip", "#112 : Projectile \xec\x9a\xa9 AttachTransformRuleBit \xec\x82\xac\xec\x9a\xa9" },
				{ "LocalOrWorldRotationBit.Comment", "// #112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c RelativeRotation \xec\x9d\x84 Override \xed\x95\x9c\xeb\x8b\xa4. (\xec\x95\x84\xec\xa7\x81 Particle Action \xec\x97\x90\xeb\x8a\x94 \xea\xb0\x92\xec\x9d\x80 \xec\x97\x86\xec\x9d\x8c)\n" },
				{ "LocalOrWorldRotationBit.Name", "ET4OverrideParamBits::LocalOrWorldRotationBit" },
				{ "LocalOrWorldRotationBit.ToolTip", "#112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c RelativeRotation \xec\x9d\x84 Override \xed\x95\x9c\xeb\x8b\xa4. (\xec\x95\x84\xec\xa7\x81 Particle Action \xec\x97\x90\xeb\x8a\x94 \xea\xb0\x92\xec\x9d\x80 \xec\x97\x86\xec\x9d\x8c)" },
				{ "MaxPlayTimeBit.Comment", "// #63\n" },
				{ "MaxPlayTimeBit.Name", "ET4OverrideParamBits::MaxPlayTimeBit" },
				{ "MaxPlayTimeBit.ToolTip", "#63" },
				{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
				{ "MovementCollideLocationBit.Comment", "// #140\n" },
				{ "MovementCollideLocationBit.Name", "ET4OverrideParamBits::MovementCollideLocationBit" },
				{ "MovementCollideLocationBit.ToolTip", "#140" },
				{ "MovementCollideTimeSecBit.Comment", "// #140\n" },
				{ "MovementCollideTimeSecBit.Name", "ET4OverrideParamBits::MovementCollideTimeSecBit" },
				{ "MovementCollideTimeSecBit.ToolTip", "#140" },
				{ "MovementMaxHeightBit.Comment", "// #56\n" },
				{ "MovementMaxHeightBit.Name", "ET4OverrideParamBits::MovementMaxHeightBit" },
				{ "MovementMaxHeightBit.ToolTip", "#56" },
				{ "MovementMaxHeightSpeedBit.Comment", "// #135\n" },
				{ "MovementMaxHeightSpeedBit.Name", "ET4OverrideParamBits::MovementMaxHeightSpeedBit" },
				{ "MovementMaxHeightSpeedBit.ToolTip", "#135" },
				{ "MovementReverseAngleBit.Comment", "// #140\n" },
				{ "MovementReverseAngleBit.Name", "ET4OverrideParamBits::MovementReverseAngleBit" },
				{ "MovementReverseAngleBit.ToolTip", "#140" },
				{ "OffsetTimeBit.Name", "ET4OverrideParamBits::OffsetTimeBit" },
				{ "ProjectileAttachTransformRuleBit.Comment", "// #112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c ActionPoint \xeb\xa5\xbc Override \xed\x95\x9c\xeb\x8b\xa4.\n" },
				{ "ProjectileAttachTransformRuleBit.Name", "ET4OverrideParamBits::ProjectileAttachTransformRuleBit" },
				{ "ProjectileAttachTransformRuleBit.ToolTip", "#112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c ActionPoint \xeb\xa5\xbc Override \xed\x95\x9c\xeb\x8b\xa4." },
				{ "ProjectileDurationBit.Comment", "// #127 : \xed\x83\x80\xea\xb2\x9f(Actor or Location)\xec\x97\x90 \xeb\xaa\x85\xec\xa4\x91\xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. DurationBit \xec\x99\x80 \xed\x95\xa8\xea\xbb\x98 \xec\xbc\x9c\xec\xa7\x84\xeb\x8b\xa4.\n" },
				{ "ProjectileDurationBit.Name", "ET4OverrideParamBits::ProjectileDurationBit" },
				{ "ProjectileDurationBit.ToolTip", "#127 : \xed\x83\x80\xea\xb2\x9f(Actor or Location)\xec\x97\x90 \xeb\xaa\x85\xec\xa4\x91\xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. DurationBit \xec\x99\x80 \xed\x95\xa8\xea\xbb\x98 \xec\xbc\x9c\xec\xa7\x84\xeb\x8b\xa4." },
				{ "ProjectileHitTargetBit.Comment", "// #63\n" },
				{ "ProjectileHitTargetBit.Name", "ET4OverrideParamBits::ProjectileHitTargetBit" },
				{ "ProjectileHitTargetBit.ToolTip", "#63" },
				{ "ProjectileSpeedBit.Comment", "// #135\n" },
				{ "ProjectileSpeedBit.Name", "ET4OverrideParamBits::ProjectileSpeedBit" },
				{ "ProjectileSpeedBit.ToolTip", "#135" },
				{ "TargetBoneBit.Comment", "// #58 : \xec\xbd\x94\xeb\x93\x9c \xed\x98\xb8\xec\xb6\x9c \xeb\x98\x90\xeb\x8a\x94 \xed\x88\xb4\xec\x97\x90\xec\x84\x9c \xec\xb5\x9c\xeb\x8c\x80 \xec\x8b\x9c\xea\xb0\x84 \xec\xa0\x9c\xed\x95\x9c\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9\n" },
				{ "TargetBoneBit.Name", "ET4OverrideParamBits::TargetBoneBit" },
				{ "TargetBoneBit.ToolTip", "#58 : \xec\xbd\x94\xeb\x93\x9c \xed\x98\xb8\xec\xb6\x9c \xeb\x98\x90\xeb\x8a\x94 \xed\x88\xb4\xec\x97\x90\xec\x84\x9c \xec\xb5\x9c\xeb\x8c\x80 \xec\x8b\x9c\xea\xb0\x84 \xec\xa0\x9c\xed\x95\x9c\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9" },
				{ "ToolTip", "#112" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4OverrideParamBits",
				"ET4OverrideParamBits",
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
	static UEnum* ET4TargetParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4TargetParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4TargetParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4TargetParamBits>()
	{
		return ET4TargetParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4TargetParamBits(ET4TargetParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4TargetParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4TargetParamBits_Hash() { return 2098419302U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4TargetParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4TargetParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4TargetParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4TargetParamBits::ActorIDBit", (int64)ET4TargetParamBits::ActorIDBit },
				{ "ET4TargetParamBits::LocationBit", (int64)ET4TargetParamBits::LocationBit },
				{ "ET4TargetParamBits::DirectionBit", (int64)ET4TargetParamBits::DirectionBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActorIDBit.Name", "ET4TargetParamBits::ActorIDBit" },
				{ "Bitflags", "" },
				{ "DirectionBit.Name", "ET4TargetParamBits::DirectionBit" },
				{ "LocationBit.Name", "ET4TargetParamBits::LocationBit" },
				{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4TargetParamBits",
				"ET4TargetParamBits",
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
	static UEnum* ET4DefaultParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4DefaultParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4DefaultParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4DefaultParamBits>()
	{
		return ET4DefaultParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4DefaultParamBits(ET4DefaultParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4DefaultParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4DefaultParamBits_Hash() { return 4047818128U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4DefaultParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4DefaultParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4DefaultParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4DefaultParamBits::ActionKeyBit", (int64)ET4DefaultParamBits::ActionKeyBit },
				{ "ET4DefaultParamBits::ContidionNameBit", (int64)ET4DefaultParamBits::ContidionNameBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionKeyBit.Name", "ET4DefaultParamBits::ActionKeyBit" },
				{ "Bitflags", "" },
				{ "ContidionNameBit.Name", "ET4DefaultParamBits::ContidionNameBit" },
				{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4DefaultParamBits",
				"ET4DefaultParamBits",
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
class UScriptStruct* FT4EditorActionCommandContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EditorActionCommandContext, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4EditorActionCommandContext"), sizeof(FT4EditorActionCommandContext), Get_Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4EditorActionCommandContext>()
{
	return FT4EditorActionCommandContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EditorActionCommandContext(FT4EditorActionCommandContext::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4EditorActionCommandContext"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4EditorActionCommandContext
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4EditorActionCommandContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EditorActionCommandContext")),new UScriptStruct::TCppStructOps<FT4EditorActionCommandContext>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4EditorActionCommandContext;
	struct Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsolationActionSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IsolationActionSet;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IsolationActionSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvisibleActionSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_InvisibleActionSet;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InvisibleActionSet_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #56 : Only Editor, Action Editor \xec\x97\x90\xec\x84\x9c Invisible or Isolate \xeb\xa1\x9c \xec\xb6\x9c\xeb\xa0\xa5\xec\x9d\x84 \xec\xa0\x9c\xec\x96\xb4\xed\x95\xa0 \xeb\x95\x8c \xeb\x8d\x94\xeb\xaf\xb8\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9(delay, duration \xeb\x8f\x99\xec\x9e\x91 \xeb\xb3\xb4\xec\x9e\xa5)\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#56 : Only Editor, Action Editor \xec\x97\x90\xec\x84\x9c Invisible or Isolate \xeb\xa1\x9c \xec\xb6\x9c\xeb\xa0\xa5\xec\x9d\x84 \xec\xa0\x9c\xec\x96\xb4\xed\x95\xa0 \xeb\x95\x8c \xeb\x8d\x94\xeb\xaf\xb8\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9(delay, duration \xeb\x8f\x99\xec\x9e\x91 \xeb\xb3\xb4\xec\x9e\xa5)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EditorActionCommandContext>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #56 : Action Editor \xec\x97\x90\xec\x84\x9c Invisible or Isolate \xeb\xa1\x9c \xec\xb6\x9c\xeb\xa0\xa5\xec\x9d\x84 \xec\xa0\x9c\xec\x96\xb4\xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#56 : Action Editor \xec\x97\x90\xec\x84\x9c Invisible or Isolate \xeb\xa1\x9c \xec\xb6\x9c\xeb\xa0\xa5\xec\x9d\x84 \xec\xa0\x9c\xec\x96\xb4\xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet = { "IsolationActionSet", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorActionCommandContext, IsolationActionSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet_ElementProp = { "IsolationActionSet", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet = { "InvisibleActionSet", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EditorActionCommandContext, InvisibleActionSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet_ElementProp = { "InvisibleActionSet", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_IsolationActionSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::NewProp_InvisibleActionSet_ElementProp,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4EditorActionCommandContext",
		sizeof(FT4EditorActionCommandContext),
		alignof(FT4EditorActionCommandContext),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EditorActionCommandContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EditorActionCommandContext"), sizeof(FT4EditorActionCommandContext), Get_Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EditorActionCommandContext_Hash() { return 470954658U; }
class UScriptStruct* FT4ActionParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionParameters"), sizeof(FT4ActionParameters), Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionParameters>()
{
	return FT4ActionParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionParameters(FT4ActionParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionParameters")),new UScriptStruct::TCppStructOps<FT4ActionParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionParameters;
	struct Z_Construct_UScriptStruct_FT4ActionParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_AnimationParams_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #116\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#116" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_AnimationParams = { "AnimationParams", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, AnimationParams), Z_Construct_UScriptStruct_FT4ActionAnimationParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_AnimationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_AnimationParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_OverrideParams_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_OverrideParams = { "OverrideParams", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, OverrideParams), Z_Construct_UScriptStruct_FT4ActionOverrideParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_OverrideParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_OverrideParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams = { "TargetParams", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, TargetParams), Z_Construct_UScriptStruct_FT4ActionTargetParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams = { "DefaultParams", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, DefaultParams), Z_Construct_UScriptStruct_FT4ActionDefaultParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_AnimationParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_OverrideParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionParameters",
		sizeof(FT4ActionParameters),
		alignof(FT4ActionParameters),
		Z_Construct_UScriptStruct_FT4ActionParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionParameters"), sizeof(FT4ActionParameters), Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash() { return 2964400947U; }
class UScriptStruct* FT4ActionAnimationParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionAnimationParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionAnimationParameters"), sizeof(FT4ActionAnimationParameters), Get_Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionAnimationParameters>()
{
	return FT4ActionAnimationParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionAnimationParameters(FT4ActionAnimationParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionAnimationParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionAnimationParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionAnimationParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionAnimationParameters")),new UScriptStruct::TCppStructOps<FT4ActionAnimationParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionAnimationParameters;
	struct Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionAnimationParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4AnimationParamBits" },
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionAnimationParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::NewProp_SetBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionAnimationParameters",
		sizeof(FT4ActionAnimationParameters),
		alignof(FT4ActionAnimationParameters),
		Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionAnimationParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionAnimationParameters"), sizeof(FT4ActionAnimationParameters), Get_Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionAnimationParameters_Hash() { return 2591977982U; }
class UScriptStruct* FT4ActionOverrideParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionOverrideParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionOverrideParameters"), sizeof(FT4ActionOverrideParameters), Get_Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionOverrideParameters>()
{
	return FT4ActionOverrideParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionOverrideParameters(FT4ActionOverrideParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionOverrideParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionOverrideParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionOverrideParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionOverrideParameters")),new UScriptStruct::TCppStructOps<FT4ActionOverrideParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionOverrideParameters;
	struct Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalOrWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalOrWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalOrWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalOrWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectileHitTarget_MetaData[];
#endif
		static void NewProp_bProjectileHitTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectileHitTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollideTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementCollideTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementCollideLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMaxHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementMaxHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurectionSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurectionSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #112\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#112" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionOverrideParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c RelativeRotation \xec\x9d\x84 Override \xed\x95\x9c\xeb\x8b\xa4. (\xec\x95\x84\xec\xa7\x81 Particle Action \xec\x97\x90\xeb\x8a\x94 \xea\xb0\x92\xec\x9d\x80 \xec\x97\x86\xec\x9d\x8c)\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c RelativeRotation \xec\x9d\x84 Override \xed\x95\x9c\xeb\x8b\xa4. (\xec\x95\x84\xec\xa7\x81 Particle Action \xec\x97\x90\xeb\x8a\x94 \xea\xb0\x92\xec\x9d\x80 \xec\x97\x86\xec\x9d\x8c)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldRotation = { "LocalOrWorldRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, LocalOrWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c ActionPoint \xeb\xa5\xbc Override \xed\x95\x9c\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#112 : \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c ActionPoint \xeb\xa5\xbc Override \xed\x95\x9c\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldLocation = { "LocalOrWorldLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, LocalOrWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ActionPoint_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #112 : Attacker \xea\xb0\x80 \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c TargetActor HitBone (\xeb\x98\x90\xeb\x8a\x94 \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xec\xa0\x84\xeb\x8b\xac\xed\x95\xb4\xec\xa4\x80...)\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#112 : Attacker \xea\xb0\x80 \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c TargetActor HitBone (\xeb\x98\x90\xeb\x8a\x94 \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xec\xa0\x84\xeb\x8b\xac\xed\x95\xb4\xec\xa4\x80...)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ActionPoint = { "ActionPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, ActionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ActionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ActionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #58 : \xec\xbd\x94\xeb\x93\x9c \xed\x98\xb8\xec\xb6\x9c \xeb\x98\x90\xeb\x8a\x94 \xed\x88\xb4\xec\x97\x90\xec\x84\x9c \xec\xb5\x9c\xeb\x8c\x80 \xec\x8b\x9c\xea\xb0\x84 \xec\xa0\x9c\xed\x95\x9c\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#58 : \xec\xbd\x94\xeb\x93\x9c \xed\x98\xb8\xec\xb6\x9c \xeb\x98\x90\xeb\x8a\x94 \xed\x88\xb4\xec\x97\x90\xec\x84\x9c \xec\xb5\x9c\xeb\x8c\x80 \xec\x8b\x9c\xea\xb0\x84 \xec\xa0\x9c\xed\x95\x9c\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, TargetBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_TargetBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_TargetBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MaxPlayTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#63" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MaxPlayTimeSec = { "MaxPlayTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, MaxPlayTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MaxPlayTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MaxPlayTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileDurationSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #127 : \xed\x83\x80\xea\xb2\x9f(Actor or Location)\xec\x97\x90 \xeb\xaa\x85\xec\xa4\x91\xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. DurationBit \xec\x99\x80 \xed\x95\xa8\xea\xbb\x98 \xec\xbc\x9c\xec\xa7\x84\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#127 : \xed\x83\x80\xea\xb2\x9f(Actor or Location)\xec\x97\x90 \xeb\xaa\x85\xec\xa4\x91\xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xea\xb2\xbd\xec\x9a\xb0. DurationBit \xec\x99\x80 \xed\x95\xa8\xea\xbb\x98 \xec\xbc\x9c\xec\xa7\x84\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileDurationSec = { "ProjectileDurationSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, ProjectileDurationSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #63\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#63" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget_SetBit(void* Obj)
	{
		((FT4ActionOverrideParameters*)Obj)->bProjectileHitTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget = { "bProjectileHitTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionOverrideParameters), &Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, ProjectileSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #140\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideTimeSec = { "MovementCollideTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, MovementCollideTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#135" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideLocation = { "MovementCollideLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, MovementCollideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeightSpeed_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #135, #140\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#135, #140" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeightSpeed = { "MovementMaxHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, MovementMaxHeightSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeight_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #56\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#56" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeight = { "MovementMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, MovementMaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_OffsetTimeSec_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_OffsetTimeSec = { "OffsetTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, OffsetTimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_OffsetTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_OffsetTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_DurectionSec_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// ET4OverrideParamBits\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "ET4OverrideParamBits" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_DurectionSec = { "DurectionSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, DurectionSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_DurectionSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_DurectionSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4OverrideParamBits" },
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionOverrideParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_SetBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_LocalOrWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ActionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_TargetBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MaxPlayTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_bProjectileHitTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_ProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementCollideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_MovementMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_OffsetTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_DurectionSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionOverrideParameters",
		sizeof(FT4ActionOverrideParameters),
		alignof(FT4ActionOverrideParameters),
		Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionOverrideParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionOverrideParameters"), sizeof(FT4ActionOverrideParameters), Get_Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionOverrideParameters_Hash() { return 1075146608U; }
class UScriptStruct* FT4ActionTargetParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionTargetParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionTargetParameters"), sizeof(FT4ActionTargetParameters), Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionTargetParameters>()
{
	return FT4ActionTargetParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionTargetParameters(FT4ActionTargetParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionTargetParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTargetParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTargetParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionTargetParameters")),new UScriptStruct::TCppStructOps<FT4ActionTargetParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTargetParameters;
	struct Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetActorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionTargetParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetActorID_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// ET4TargetParamBits\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "ET4TargetParamBits" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetActorID = { "TargetActorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, TargetActorID), Z_Construct_UScriptStruct_FT4ActorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetActorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4TargetParamBits" },
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetActorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionTargetParameters",
		sizeof(FT4ActionTargetParameters),
		alignof(FT4ActionTargetParameters),
		Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTargetParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionTargetParameters"), sizeof(FT4ActionTargetParameters), Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash() { return 1534729274U; }
class UScriptStruct* FT4ActionDefaultParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionDefaultParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionDefaultParameters"), sizeof(FT4ActionDefaultParameters), Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionDefaultParameters>()
{
	return FT4ActionDefaultParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionDefaultParameters(FT4ActionDefaultParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionDefaultParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionDefaultParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionDefaultParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionDefaultParameters")),new UScriptStruct::TCppStructOps<FT4ActionDefaultParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionDefaultParameters;
	struct Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveConditionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActiveConditionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionDefaultParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActiveConditionName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// #32\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "#32" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActiveConditionName = { "ActiveConditionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDefaultParameters, ActiveConditionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActiveConditionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActiveConditionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "// ET4DefaultParamBits\n" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
		{ "ToolTip", "ET4DefaultParamBits" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDefaultParameters, ActionKey), Z_Construct_UScriptStruct_FT4ActionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4DefaultParamBits" },
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDefaultParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActiveConditionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionDefaultParameters",
		sizeof(FT4ActionDefaultParameters),
		alignof(FT4ActionDefaultParameters),
		Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionDefaultParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionDefaultParameters"), sizeof(FT4ActionDefaultParameters), Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash() { return 1557980346U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
