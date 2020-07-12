// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/Action/T4ActionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionTypes() {}
// Cross Module References
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionCommandType();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	static UEnum* ET4ActionCommandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4ActionCommandType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4ActionCommandType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4ActionCommandType>()
	{
		return ET4ActionCommandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ActionCommandType(ET4ActionCommandType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4ActionCommandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4ActionCommandType_Hash() { return 2040019349U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4ActionCommandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ActionCommandType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4ActionCommandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ActionCommandType::WorldTravel", (int64)ET4ActionCommandType::WorldTravel },
				{ "ET4ActionCommandType::WorldTimeSync", (int64)ET4ActionCommandType::WorldTimeSync },
				{ "ET4ActionCommandType::WorldSpawn", (int64)ET4ActionCommandType::WorldSpawn },
				{ "ET4ActionCommandType::WorldDespawn", (int64)ET4ActionCommandType::WorldDespawn },
				{ "ET4ActionCommandType::MoveAsync", (int64)ET4ActionCommandType::MoveAsync },
				{ "ET4ActionCommandType::MoveSync", (int64)ET4ActionCommandType::MoveSync },
				{ "ET4ActionCommandType::Jump", (int64)ET4ActionCommandType::Jump },
				{ "ET4ActionCommandType::Teleport", (int64)ET4ActionCommandType::Teleport },
				{ "ET4ActionCommandType::Rotation", (int64)ET4ActionCommandType::Rotation },
				{ "ET4ActionCommandType::Turn", (int64)ET4ActionCommandType::Turn },
				{ "ET4ActionCommandType::MoveStop", (int64)ET4ActionCommandType::MoveStop },
				{ "ET4ActionCommandType::MoveSpeedSync", (int64)ET4ActionCommandType::MoveSpeedSync },
				{ "ET4ActionCommandType::Launch", (int64)ET4ActionCommandType::Launch },
				{ "ET4ActionCommandType::Aim", (int64)ET4ActionCommandType::Aim },
				{ "ET4ActionCommandType::LockOn", (int64)ET4ActionCommandType::LockOn },
				{ "ET4ActionCommandType::AnimSet", (int64)ET4ActionCommandType::AnimSet },
				{ "ET4ActionCommandType::Stance", (int64)ET4ActionCommandType::Stance },
				{ "ET4ActionCommandType::EquipWeapon", (int64)ET4ActionCommandType::EquipWeapon },
				{ "ET4ActionCommandType::UnequipWeapon", (int64)ET4ActionCommandType::UnequipWeapon },
				{ "ET4ActionCommandType::Costume", (int64)ET4ActionCommandType::Costume },
				{ "ET4ActionCommandType::Skin", (int64)ET4ActionCommandType::Skin },
				{ "ET4ActionCommandType::Hit", (int64)ET4ActionCommandType::Hit },
				{ "ET4ActionCommandType::CrowdControl", (int64)ET4ActionCommandType::CrowdControl },
				{ "ET4ActionCommandType::Die", (int64)ET4ActionCommandType::Die },
				{ "ET4ActionCommandType::Resurrect", (int64)ET4ActionCommandType::Resurrect },
				{ "ET4ActionCommandType::ReactionStop", (int64)ET4ActionCommandType::ReactionStop },
				{ "ET4ActionCommandType::ActionPak", (int64)ET4ActionCommandType::ActionPak },
				{ "ET4ActionCommandType::Stop", (int64)ET4ActionCommandType::Stop },
				{ "ET4ActionCommandType::Editor", (int64)ET4ActionCommandType::Editor },
				{ "ET4ActionCommandType::None", (int64)ET4ActionCommandType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionPak.Comment", "// #132\n" },
				{ "ActionPak.Name", "ET4ActionCommandType::ActionPak" },
				{ "ActionPak.ToolTip", "#132" },
				{ "Aim.Comment", "// #63 : Only Projectile\n" },
				{ "Aim.Name", "ET4ActionCommandType::Aim" },
				{ "Aim.ToolTip", "#63 : Only Projectile" },
				{ "AnimSet.Name", "ET4ActionCommandType::AnimSet" },
				{ "Comment", "/**\n  * #134\n */" },
				{ "Costume.Comment", "// #48\n" },
				{ "Costume.Name", "ET4ActionCommandType::Costume" },
				{ "Costume.ToolTip", "#48" },
				{ "CrowdControl.Comment", "// #76\n" },
				{ "CrowdControl.Name", "ET4ActionCommandType::CrowdControl" },
				{ "CrowdControl.ToolTip", "#76" },
				{ "Die.Comment", "// #131\n" },
				{ "Die.Name", "ET4ActionCommandType::Die" },
				{ "Die.ToolTip", "#131" },
				{ "Editor.Comment", "// begin Editor\n" },
				{ "Editor.Name", "ET4ActionCommandType::Editor" },
				{ "Editor.ToolTip", "begin Editor" },
				{ "EquipWeapon.Comment", "// #106\n" },
				{ "EquipWeapon.Name", "ET4ActionCommandType::EquipWeapon" },
				{ "EquipWeapon.ToolTip", "#106" },
				{ "Hit.Comment", "// #130 : Fullbody Skin\n" },
				{ "Hit.Name", "ET4ActionCommandType::Hit" },
				{ "Hit.ToolTip", "#130 : Fullbody Skin" },
				{ "Jump.Comment", "// #40\n" },
				{ "Jump.Name", "ET4ActionCommandType::Jump" },
				{ "Jump.ToolTip", "#40" },
				{ "Launch.Comment", "// #52\n" },
				{ "Launch.Name", "ET4ActionCommandType::Launch" },
				{ "Launch.ToolTip", "#52" },
				{ "LockOn.Comment", "// #113\n" },
				{ "LockOn.Name", "ET4ActionCommandType::LockOn" },
				{ "LockOn.ToolTip", "#113" },
				{ "ModuleRelativePath", "Public/Action/T4ActionTypes.h" },
				{ "MoveAsync.Comment", "// begin Object / #68 : #T4_ADD_ACTION_TAG_CMD\n" },
				{ "MoveAsync.Name", "ET4ActionCommandType::MoveAsync" },
				{ "MoveAsync.ToolTip", "begin Object / #68 : #T4_ADD_ACTION_TAG_CMD" },
				{ "MoveSpeedSync.Comment", "// #52\n" },
				{ "MoveSpeedSync.Name", "ET4ActionCommandType::MoveSpeedSync" },
				{ "MoveSpeedSync.ToolTip", "#52" },
				{ "MoveStop.Comment", "// #131 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xed\x9a\x8c\xec\xa0\x84 \xec\x97\xb0\xec\xb6\x9c(\xec\x95\xa0\xeb\x8b\x88) \xec\xb2\x98\xeb\xa6\xac\n" },
				{ "MoveStop.Name", "ET4ActionCommandType::MoveStop" },
				{ "MoveStop.ToolTip", "#131 : \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xed\x9a\x8c\xec\xa0\x84 \xec\x97\xb0\xec\xb6\x9c(\xec\x95\xa0\xeb\x8b\x88) \xec\xb2\x98\xeb\xa6\xac" },
				{ "MoveSync.Comment", "// #40\n" },
				{ "MoveSync.Name", "ET4ActionCommandType::MoveSync" },
				{ "MoveSync.ToolTip", "#40" },
				{ "None.Comment", "// #62 : End Code Format\n" },
				{ "None.Name", "ET4ActionCommandType::None" },
				{ "None.ToolTip", "#62 : End Code Format" },
				{ "ReactionStop.Comment", "// #76\n" },
				{ "ReactionStop.Name", "ET4ActionCommandType::ReactionStop" },
				{ "ReactionStop.ToolTip", "#76" },
				{ "Resurrect.Comment", "// #76\n" },
				{ "Resurrect.Name", "ET4ActionCommandType::Resurrect" },
				{ "Resurrect.ToolTip", "#76" },
				{ "Rotation.Name", "ET4ActionCommandType::Rotation" },
				{ "Skin.Comment", "// #37\n" },
				{ "Skin.Name", "ET4ActionCommandType::Skin" },
				{ "Skin.ToolTip", "#37" },
				{ "Stance.Comment", "// #73\n" },
				{ "Stance.Name", "ET4ActionCommandType::Stance" },
				{ "Stance.ToolTip", "#73" },
				{ "Stop.Comment", "// #24, #127 : ActionPakAsset\n" },
				{ "Stop.Name", "ET4ActionCommandType::Stop" },
				{ "Stop.ToolTip", "#24, #127 : ActionPakAsset" },
				{ "Teleport.Name", "ET4ActionCommandType::Teleport" },
				{ "ToolTip", "#134" },
				{ "Turn.Comment", "// #137 : WorldActor \xed\x9a\x8c\xec\xa0\x84 (C/S \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94!)\n" },
				{ "Turn.Name", "ET4ActionCommandType::Turn" },
				{ "Turn.ToolTip", "#137 : WorldActor \xed\x9a\x8c\xec\xa0\x84 (C/S \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94!)" },
				{ "UnequipWeapon.Comment", "// #22\n" },
				{ "UnequipWeapon.Name", "ET4ActionCommandType::UnequipWeapon" },
				{ "UnequipWeapon.ToolTip", "#22" },
				{ "WorldDespawn.Name", "ET4ActionCommandType::WorldDespawn" },
				{ "WorldSpawn.Comment", "// #146\n" },
				{ "WorldSpawn.Name", "ET4ActionCommandType::WorldSpawn" },
				{ "WorldSpawn.ToolTip", "#146" },
				{ "WorldTimeSync.Name", "ET4ActionCommandType::WorldTimeSync" },
				{ "WorldTravel.Comment", "// begin World\n" },
				{ "WorldTravel.Name", "ET4ActionCommandType::WorldTravel" },
				{ "WorldTravel.ToolTip", "begin World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4ActionCommandType",
				"ET4ActionCommandType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
