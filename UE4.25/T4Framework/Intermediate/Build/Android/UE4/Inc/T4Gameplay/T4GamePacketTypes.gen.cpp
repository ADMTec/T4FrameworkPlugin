// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/Protocol/T4GamePacketTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GamePacketTypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GamePacketCS();
// End Cross Module References
	static UEnum* ET4GamePacketSC_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4GamePacketSC"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GamePacketSC>()
	{
		return ET4GamePacketSC_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GamePacketSC(ET4GamePacketSC_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4GamePacketSC"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC_Hash() { return 1577665208U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GamePacketSC"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4GamePacketSC_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GamePacketSC::StartToPlay", (int64)ET4GamePacketSC::StartToPlay },
				{ "ET4GamePacketSC::QuestStart", (int64)ET4GamePacketSC::QuestStart },
				{ "ET4GamePacketSC::QuestFinish", (int64)ET4GamePacketSC::QuestFinish },
				{ "ET4GamePacketSC::MissionStart", (int64)ET4GamePacketSC::MissionStart },
				{ "ET4GamePacketSC::MissionFinish", (int64)ET4GamePacketSC::MissionFinish },
				{ "ET4GamePacketSC::DialogueStart", (int64)ET4GamePacketSC::DialogueStart },
				{ "ET4GamePacketSC::DialogueUpdate", (int64)ET4GamePacketSC::DialogueUpdate },
				{ "ET4GamePacketSC::DialogueFinish", (int64)ET4GamePacketSC::DialogueFinish },
				{ "ET4GamePacketSC::InventoryAdd", (int64)ET4GamePacketSC::InventoryAdd },
				{ "ET4GamePacketSC::WorldTravel", (int64)ET4GamePacketSC::WorldTravel },
				{ "ET4GamePacketSC::WorldTimeSync", (int64)ET4GamePacketSC::WorldTimeSync },
				{ "ET4GamePacketSC::WorldExplore", (int64)ET4GamePacketSC::WorldExplore },
				{ "ET4GamePacketSC::MyPCEnter", (int64)ET4GamePacketSC::MyPCEnter },
				{ "ET4GamePacketSC::MyPCChange", (int64)ET4GamePacketSC::MyPCChange },
				{ "ET4GamePacketSC::PCEnter", (int64)ET4GamePacketSC::PCEnter },
				{ "ET4GamePacketSC::PCLeave", (int64)ET4GamePacketSC::PCLeave },
				{ "ET4GamePacketSC::NPCEnter", (int64)ET4GamePacketSC::NPCEnter },
				{ "ET4GamePacketSC::NPCLeave", (int64)ET4GamePacketSC::NPCLeave },
				{ "ET4GamePacketSC::ItemEnter", (int64)ET4GamePacketSC::ItemEnter },
				{ "ET4GamePacketSC::ItemLeave", (int64)ET4GamePacketSC::ItemLeave },
				{ "ET4GamePacketSC::MoveStart", (int64)ET4GamePacketSC::MoveStart },
				{ "ET4GamePacketSC::MoveStop", (int64)ET4GamePacketSC::MoveStop },
				{ "ET4GamePacketSC::MoveSpeedSync", (int64)ET4GamePacketSC::MoveSpeedSync },
				{ "ET4GamePacketSC::MoveSegments", (int64)ET4GamePacketSC::MoveSegments },
				{ "ET4GamePacketSC::Jump", (int64)ET4GamePacketSC::Jump },
				{ "ET4GamePacketSC::Rotation", (int64)ET4GamePacketSC::Rotation },
				{ "ET4GamePacketSC::Teleport", (int64)ET4GamePacketSC::Teleport },
				{ "ET4GamePacketSC::LockOn", (int64)ET4GamePacketSC::LockOn },
				{ "ET4GamePacketSC::LockOff", (int64)ET4GamePacketSC::LockOff },
				{ "ET4GamePacketSC::AnimSet", (int64)ET4GamePacketSC::AnimSet },
				{ "ET4GamePacketSC::Stance", (int64)ET4GamePacketSC::Stance },
				{ "ET4GamePacketSC::EquipItem", (int64)ET4GamePacketSC::EquipItem },
				{ "ET4GamePacketSC::UnequipItem", (int64)ET4GamePacketSC::UnequipItem },
				{ "ET4GamePacketSC::ExchangeItem", (int64)ET4GamePacketSC::ExchangeItem },
				{ "ET4GamePacketSC::SkillCasting", (int64)ET4GamePacketSC::SkillCasting },
				{ "ET4GamePacketSC::SkillCancel", (int64)ET4GamePacketSC::SkillCancel },
				{ "ET4GamePacketSC::SkillTarget", (int64)ET4GamePacketSC::SkillTarget },
				{ "ET4GamePacketSC::EffectBuff", (int64)ET4GamePacketSC::EffectBuff },
				{ "ET4GamePacketSC::EffectDebuff", (int64)ET4GamePacketSC::EffectDebuff },
				{ "ET4GamePacketSC::EffectHit", (int64)ET4GamePacketSC::EffectHit },
				{ "ET4GamePacketSC::EffectArea", (int64)ET4GamePacketSC::EffectArea },
				{ "ET4GamePacketSC::EffectKnockback", (int64)ET4GamePacketSC::EffectKnockback },
				{ "ET4GamePacketSC::EffectAirborne", (int64)ET4GamePacketSC::EffectAirborne },
				{ "ET4GamePacketSC::EffectStun", (int64)ET4GamePacketSC::EffectStun },
				{ "ET4GamePacketSC::Die", (int64)ET4GamePacketSC::Die },
				{ "ET4GamePacketSC::Resurrect", (int64)ET4GamePacketSC::Resurrect },
				{ "ET4GamePacketSC::DebugAIStatus", (int64)ET4GamePacketSC::DebugAIStatus },
				{ "ET4GamePacketSC::None", (int64)ET4GamePacketSC::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnimSet.Comment", "// #40\n" },
				{ "AnimSet.Name", "ET4GamePacketSC::AnimSet" },
				{ "AnimSet.ToolTip", "#40" },
				{ "Comment", "// #T4_ADD_PACKET_TAG_SC\n" },
				{ "DebugAIStatus.Comment", "// #76\n" },
				{ "DebugAIStatus.Name", "ET4GamePacketSC::DebugAIStatus" },
				{ "DebugAIStatus.ToolTip", "#76" },
				{ "DialogueFinish.Comment", "// #163\n" },
				{ "DialogueFinish.Name", "ET4GamePacketSC::DialogueFinish" },
				{ "DialogueFinish.ToolTip", "#163" },
				{ "DialogueStart.Comment", "// #164\n" },
				{ "DialogueStart.Name", "ET4GamePacketSC::DialogueStart" },
				{ "DialogueStart.ToolTip", "#164" },
				{ "DialogueUpdate.Comment", "// #163\n" },
				{ "DialogueUpdate.Name", "ET4GamePacketSC::DialogueUpdate" },
				{ "DialogueUpdate.ToolTip", "#163" },
				{ "Die.Comment", "// #135\n" },
				{ "Die.Name", "ET4GamePacketSC::Die" },
				{ "Die.ToolTip", "#135" },
				{ "EffectAirborne.Comment", "// #135\n" },
				{ "EffectAirborne.Name", "ET4GamePacketSC::EffectAirborne" },
				{ "EffectAirborne.ToolTip", "#135" },
				{ "EffectArea.Name", "ET4GamePacketSC::EffectArea" },
				{ "EffectBuff.Comment", "// #116\n" },
				{ "EffectBuff.Name", "ET4GamePacketSC::EffectBuff" },
				{ "EffectBuff.ToolTip", "#116" },
				{ "EffectDebuff.Comment", "// #158 : Zone Weather\n" },
				{ "EffectDebuff.Name", "ET4GamePacketSC::EffectDebuff" },
				{ "EffectDebuff.ToolTip", "#158 : Zone Weather" },
				{ "EffectHit.Comment", "// #158 : Zone Weather\n" },
				{ "EffectHit.Name", "ET4GamePacketSC::EffectHit" },
				{ "EffectHit.ToolTip", "#158 : Zone Weather" },
				{ "EffectKnockback.Comment", "// #68\n" },
				{ "EffectKnockback.Name", "ET4GamePacketSC::EffectKnockback" },
				{ "EffectKnockback.ToolTip", "#68" },
				{ "EffectStun.Comment", "// #135\n" },
				{ "EffectStun.Name", "ET4GamePacketSC::EffectStun" },
				{ "EffectStun.ToolTip", "#135" },
				{ "EquipItem.Comment", "// #106\n" },
				{ "EquipItem.Name", "ET4GamePacketSC::EquipItem" },
				{ "EquipItem.ToolTip", "#106" },
				{ "ExchangeItem.Name", "ET4GamePacketSC::ExchangeItem" },
				{ "InventoryAdd.Comment", "// #163\n" },
				{ "InventoryAdd.Name", "ET4GamePacketSC::InventoryAdd" },
				{ "InventoryAdd.ToolTip", "#163" },
				{ "ItemEnter.Comment", "// #31\n" },
				{ "ItemEnter.Name", "ET4GamePacketSC::ItemEnter" },
				{ "ItemEnter.ToolTip", "#31" },
				{ "ItemLeave.Comment", "// #41\n" },
				{ "ItemLeave.Name", "ET4GamePacketSC::ItemLeave" },
				{ "ItemLeave.ToolTip", "#41" },
				{ "Jump.Comment", "// #161\n" },
				{ "Jump.Name", "ET4GamePacketSC::Jump" },
				{ "Jump.ToolTip", "#161" },
				{ "LockOff.Comment", "// #40\n" },
				{ "LockOff.Name", "ET4GamePacketSC::LockOff" },
				{ "LockOff.ToolTip", "#40" },
				{ "LockOn.Name", "ET4GamePacketSC::LockOn" },
				{ "MissionFinish.Comment", "// #164\n" },
				{ "MissionFinish.Name", "ET4GamePacketSC::MissionFinish" },
				{ "MissionFinish.ToolTip", "#164" },
				{ "MissionStart.Comment", "// #164\n" },
				{ "MissionStart.Name", "ET4GamePacketSC::MissionStart" },
				{ "MissionStart.ToolTip", "#164" },
				{ "ModuleRelativePath", "Public/Protocol/T4GamePacketTypes.h" },
				{ "MoveSegments.Comment", "// #52\n" },
				{ "MoveSegments.Name", "ET4GamePacketSC::MoveSegments" },
				{ "MoveSegments.ToolTip", "#52" },
				{ "MoveSpeedSync.Comment", "// #52\n" },
				{ "MoveSpeedSync.Name", "ET4GamePacketSC::MoveSpeedSync" },
				{ "MoveSpeedSync.ToolTip", "#52" },
				{ "MoveStart.Comment", "// #41\n" },
				{ "MoveStart.Name", "ET4GamePacketSC::MoveStart" },
				{ "MoveStart.ToolTip", "#41" },
				{ "MoveStop.Name", "ET4GamePacketSC::MoveStop" },
				{ "MyPCChange.Name", "ET4GamePacketSC::MyPCChange" },
				{ "MyPCEnter.Comment", "// #140 : \xed\x8a\xb9\xec\xa0\x95 \xec\x9c\x84\xec\xb9\x98\xeb\xa1\x9c \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\x9d\xb4\xeb\x8f\x99\n" },
				{ "MyPCEnter.Name", "ET4GamePacketSC::MyPCEnter" },
				{ "MyPCEnter.ToolTip", "#140 : \xed\x8a\xb9\xec\xa0\x95 \xec\x9c\x84\xec\xb9\x98\xeb\xa1\x9c \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\x9d\xb4\xeb\x8f\x99" },
				{ "None.Comment", "// #164\n" },
				{ "None.Name", "ET4GamePacketSC::None" },
				{ "None.ToolTip", "#164" },
				{ "NPCEnter.Name", "ET4GamePacketSC::NPCEnter" },
				{ "NPCLeave.Comment", "// #31\n" },
				{ "NPCLeave.Name", "ET4GamePacketSC::NPCLeave" },
				{ "NPCLeave.ToolTip", "#31" },
				{ "PCEnter.Comment", "// #11, #52\n" },
				{ "PCEnter.Name", "ET4GamePacketSC::PCEnter" },
				{ "PCEnter.ToolTip", "#11, #52" },
				{ "PCLeave.Name", "ET4GamePacketSC::PCLeave" },
				{ "QuestFinish.Comment", "// #164\n" },
				{ "QuestFinish.Name", "ET4GamePacketSC::QuestFinish" },
				{ "QuestFinish.ToolTip", "#164" },
				{ "QuestStart.Comment", "// #164 : \xed\x81\xb4\xeb\x9d\xbc\xec\xb8\xa1 ReadyToPlay \xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x9d\x91\xeb\x8b\xb5. Server/Client Object \xec\x83\x9d\xec\x84\xb1!\n" },
				{ "QuestStart.Name", "ET4GamePacketSC::QuestStart" },
				{ "QuestStart.ToolTip", "#164 : \xed\x81\xb4\xeb\x9d\xbc\xec\xb8\xa1 ReadyToPlay \xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xec\x9d\x91\xeb\x8b\xb5. Server/Client Object \xec\x83\x9d\xec\x84\xb1!" },
				{ "Resurrect.Comment", "// #76\n" },
				{ "Resurrect.Name", "ET4GamePacketSC::Resurrect" },
				{ "Resurrect.ToolTip", "#76" },
				{ "Rotation.Name", "ET4GamePacketSC::Rotation" },
				{ "SkillCancel.Comment", "// #113, #116\n" },
				{ "SkillCancel.Name", "ET4GamePacketSC::SkillCancel" },
				{ "SkillCancel.ToolTip", "#113, #116" },
				{ "SkillCasting.Comment", "// #37\n" },
				{ "SkillCasting.Name", "ET4GamePacketSC::SkillCasting" },
				{ "SkillCasting.ToolTip", "#37" },
				{ "SkillTarget.Comment", "// #113, #116\n" },
				{ "SkillTarget.Name", "ET4GamePacketSC::SkillTarget" },
				{ "SkillTarget.ToolTip", "#113, #116" },
				{ "Stance.Comment", "// #73\n" },
				{ "Stance.Name", "ET4GamePacketSC::Stance" },
				{ "Stance.ToolTip", "#73" },
				{ "StartToPlay.Name", "ET4GamePacketSC::StartToPlay" },
				{ "Teleport.Comment", "// #40\n" },
				{ "Teleport.Name", "ET4GamePacketSC::Teleport" },
				{ "Teleport.ToolTip", "#40" },
				{ "ToolTip", "#T4_ADD_PACKET_TAG_SC" },
				{ "UnequipItem.Name", "ET4GamePacketSC::UnequipItem" },
				{ "WorldExplore.Comment", "// #146\n" },
				{ "WorldExplore.Name", "ET4GamePacketSC::WorldExplore" },
				{ "WorldExplore.ToolTip", "#146" },
				{ "WorldTimeSync.Name", "ET4GamePacketSC::WorldTimeSync" },
				{ "WorldTravel.Comment", "// #168\n" },
				{ "WorldTravel.Name", "ET4GamePacketSC::WorldTravel" },
				{ "WorldTravel.ToolTip", "#168" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4GamePacketSC",
				"ET4GamePacketSC",
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
	static UEnum* ET4GamePacketCS_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4GamePacketCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4GamePacketCS"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GamePacketCS>()
	{
		return ET4GamePacketCS_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GamePacketCS(ET4GamePacketCS_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4GamePacketCS"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4GamePacketCS_Hash() { return 3560362127U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4GamePacketCS()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GamePacketCS"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4GamePacketCS_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GamePacketCS::ReadyToPlay", (int64)ET4GamePacketCS::ReadyToPlay },
				{ "ET4GamePacketCS::Move", (int64)ET4GamePacketCS::Move },
				{ "ET4GamePacketCS::Jump", (int64)ET4GamePacketCS::Jump },
				{ "ET4GamePacketCS::Rotation", (int64)ET4GamePacketCS::Rotation },
				{ "ET4GamePacketCS::LockOn", (int64)ET4GamePacketCS::LockOn },
				{ "ET4GamePacketCS::LockOff", (int64)ET4GamePacketCS::LockOff },
				{ "ET4GamePacketCS::AnimSet", (int64)ET4GamePacketCS::AnimSet },
				{ "ET4GamePacketCS::Stance", (int64)ET4GamePacketCS::Stance },
				{ "ET4GamePacketCS::EquipItem", (int64)ET4GamePacketCS::EquipItem },
				{ "ET4GamePacketCS::UnequipItem", (int64)ET4GamePacketCS::UnequipItem },
				{ "ET4GamePacketCS::ExchangeItem", (int64)ET4GamePacketCS::ExchangeItem },
				{ "ET4GamePacketCS::SkillCasting", (int64)ET4GamePacketCS::SkillCasting },
				{ "ET4GamePacketCS::SkillCancel", (int64)ET4GamePacketCS::SkillCancel },
				{ "ET4GamePacketCS::SkillTarget", (int64)ET4GamePacketCS::SkillTarget },
				{ "ET4GamePacketCS::CmdQuestStart", (int64)ET4GamePacketCS::CmdQuestStart },
				{ "ET4GamePacketCS::CmdQuestFinish", (int64)ET4GamePacketCS::CmdQuestFinish },
				{ "ET4GamePacketCS::CmdWorldTravel", (int64)ET4GamePacketCS::CmdWorldTravel },
				{ "ET4GamePacketCS::CmdWorldTimeSync", (int64)ET4GamePacketCS::CmdWorldTimeSync },
				{ "ET4GamePacketCS::CmdChangePlayer", (int64)ET4GamePacketCS::CmdChangePlayer },
				{ "ET4GamePacketCS::CmdPCEnter", (int64)ET4GamePacketCS::CmdPCEnter },
				{ "ET4GamePacketCS::CmdNPCEnter", (int64)ET4GamePacketCS::CmdNPCEnter },
				{ "ET4GamePacketCS::CmdItemEnter", (int64)ET4GamePacketCS::CmdItemEnter },
				{ "ET4GamePacketCS::CmdRespawn", (int64)ET4GamePacketCS::CmdRespawn },
				{ "ET4GamePacketCS::CmdLeave", (int64)ET4GamePacketCS::CmdLeave },
				{ "ET4GamePacketCS::CmdTeleport", (int64)ET4GamePacketCS::CmdTeleport },
				{ "ET4GamePacketCS::CmdBookmark", (int64)ET4GamePacketCS::CmdBookmark },
				{ "ET4GamePacketCS::None", (int64)ET4GamePacketCS::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnimSet.Comment", "// #40\n" },
				{ "AnimSet.Name", "ET4GamePacketCS::AnimSet" },
				{ "AnimSet.ToolTip", "#40" },
				{ "CmdBookmark.Name", "ET4GamePacketCS::CmdBookmark" },
				{ "CmdChangePlayer.Comment", "// #146\n" },
				{ "CmdChangePlayer.Name", "ET4GamePacketCS::CmdChangePlayer" },
				{ "CmdChangePlayer.ToolTip", "#146" },
				{ "CmdItemEnter.Comment", "// #31\n" },
				{ "CmdItemEnter.Name", "ET4GamePacketCS::CmdItemEnter" },
				{ "CmdItemEnter.ToolTip", "#31" },
				{ "CmdLeave.Comment", "// #140\n" },
				{ "CmdLeave.Name", "ET4GamePacketCS::CmdLeave" },
				{ "CmdLeave.ToolTip", "#140" },
				{ "CmdNPCEnter.Name", "ET4GamePacketCS::CmdNPCEnter" },
				{ "CmdPCEnter.Comment", "// #11, #52\n" },
				{ "CmdPCEnter.Name", "ET4GamePacketCS::CmdPCEnter" },
				{ "CmdPCEnter.ToolTip", "#11, #52" },
				{ "CmdQuestFinish.Comment", "// #146\n" },
				{ "CmdQuestFinish.Name", "ET4GamePacketCS::CmdQuestFinish" },
				{ "CmdQuestFinish.ToolTip", "#146" },
				{ "CmdQuestStart.Comment", "// Test\n" },
				{ "CmdQuestStart.Name", "ET4GamePacketCS::CmdQuestStart" },
				{ "CmdQuestStart.ToolTip", "Test" },
				{ "CmdRespawn.Comment", "// #41\n" },
				{ "CmdRespawn.Name", "ET4GamePacketCS::CmdRespawn" },
				{ "CmdRespawn.ToolTip", "#41" },
				{ "CmdTeleport.Comment", "// #68\n" },
				{ "CmdTeleport.Name", "ET4GamePacketCS::CmdTeleport" },
				{ "CmdTeleport.ToolTip", "#68" },
				{ "CmdWorldTimeSync.Name", "ET4GamePacketCS::CmdWorldTimeSync" },
				{ "CmdWorldTravel.Comment", "// #164\n" },
				{ "CmdWorldTravel.Name", "ET4GamePacketCS::CmdWorldTravel" },
				{ "CmdWorldTravel.ToolTip", "#164" },
				{ "Comment", "/**\n  *\n */// WARN : Packet \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xed\x8c\xa8\xed\x82\xb7\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n// #T4_ADD_PACKET_TAG_CS\n" },
				{ "EquipItem.Comment", "// #106\n" },
				{ "EquipItem.Name", "ET4GamePacketCS::EquipItem" },
				{ "EquipItem.ToolTip", "#106" },
				{ "ExchangeItem.Comment", "// #22\n" },
				{ "ExchangeItem.Name", "ET4GamePacketCS::ExchangeItem" },
				{ "ExchangeItem.ToolTip", "#22" },
				{ "Jump.Name", "ET4GamePacketCS::Jump" },
				{ "LockOff.Comment", "// #40\n" },
				{ "LockOff.Name", "ET4GamePacketCS::LockOff" },
				{ "LockOff.ToolTip", "#40" },
				{ "LockOn.Comment", "// #40\n" },
				{ "LockOn.Name", "ET4GamePacketCS::LockOn" },
				{ "LockOn.ToolTip", "#40" },
				{ "ModuleRelativePath", "Public/Protocol/T4GamePacketTypes.h" },
				{ "Move.Comment", "// #146 : \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 PC::BeginPlay \xec\x8b\x9c \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa0\x91\xec\x86\x8d \xec\x99\x84\xeb\xa3\x8c \xed\x86\xb5\xeb\xb3\xb4!\n" },
				{ "Move.Name", "ET4GamePacketCS::Move" },
				{ "Move.ToolTip", "#146 : \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 PC::BeginPlay \xec\x8b\x9c \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa0\x91\xec\x86\x8d \xec\x99\x84\xeb\xa3\x8c \xed\x86\xb5\xeb\xb3\xb4!" },
				{ "None.Comment", "// #140\n" },
				{ "None.Name", "ET4GamePacketCS::None" },
				{ "None.ToolTip", "#140" },
				{ "ReadyToPlay.Name", "ET4GamePacketCS::ReadyToPlay" },
				{ "Rotation.Name", "ET4GamePacketCS::Rotation" },
				{ "SkillCancel.Comment", "// #113, #116\n" },
				{ "SkillCancel.Name", "ET4GamePacketCS::SkillCancel" },
				{ "SkillCancel.ToolTip", "#113, #116" },
				{ "SkillCasting.Comment", "// #37\n" },
				{ "SkillCasting.Name", "ET4GamePacketCS::SkillCasting" },
				{ "SkillCasting.ToolTip", "#37" },
				{ "SkillTarget.Comment", "// #113, #116\n" },
				{ "SkillTarget.Name", "ET4GamePacketCS::SkillTarget" },
				{ "SkillTarget.ToolTip", "#113, #116" },
				{ "Stance.Comment", "// #73\n" },
				{ "Stance.Name", "ET4GamePacketCS::Stance" },
				{ "Stance.ToolTip", "#73" },
				{ "ToolTip", "// WARN : Packet \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xed\x8c\xa8\xed\x82\xb7\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n// #T4_ADD_PACKET_TAG_CS" },
				{ "UnequipItem.Comment", "// #22\n" },
				{ "UnequipItem.Name", "ET4GamePacketCS::UnequipItem" },
				{ "UnequipItem.ToolTip", "#22" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4GamePacketCS",
				"ET4GamePacketCS",
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
