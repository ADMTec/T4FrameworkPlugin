// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FT4GamePacketSC_DebugAIStatus;
struct FT4GamePacketSC_Resurrect;
struct FT4GamePacketSC_Die;
struct FT4GamePacketSC_EffectStun;
struct FT4GamePacketSC_EffectAirborne;
struct FT4GamePacketSC_EffectKnockback;
struct FT4GamePacketSC_EffectArea;
struct FT4GamePacketSC_EffectHit;
struct FT4GamePacketSC_EffectDebuff;
struct FT4GamePacketSC_EffectBuff;
struct FT4GamePacketSC_SkillTarget;
struct FT4GamePacketSC_SkillCancel;
struct FT4GamePacketSC_SkillCasting;
struct FT4GamePacketSC_ExchangeItem;
struct FT4GamePacketSC_UnequipItem;
struct FT4GamePacketSC_EquipItem;
struct FT4GamePacketSC_Stance;
struct FT4GamePacketSC_AnimSet;
struct FT4GamePacketSC_LockOff;
struct FT4GamePacketSC_LockOn;
struct FT4GamePacketSC_MoveSpeedSync;
struct FT4GamePacketSC_MoveStop;
struct FT4GamePacketSC_MoveSegments;
struct FT4GamePacketSC_Teleport;
struct FT4GamePacketSC_Rotation;
struct FT4GamePacketSC_Jump;
struct FT4GamePacketSC_MoveStart;
struct FT4GamePacketSC_ItemLeave;
struct FT4GamePacketSC_ItemEnter;
struct FT4GamePacketSC_NPCLeave;
struct FT4GamePacketSC_NPCEnter;
struct FT4GamePacketSC_PCLeave;
struct FT4GamePacketSC_PCEnter;
struct FT4GamePacketSC_MyPCChange;
struct FT4GamePacketSC_MyPCEnter;
struct FT4GamePacketSC_WorldExplore;
struct FT4GamePacketSC_WorldTimeSync;
struct FT4GamePacketSC_WorldTravel;
struct FT4GamePacketSC_InventoryAdd;
struct FT4GamePacketSC_DialogueFinish;
struct FT4GamePacketSC_DialogueUpdate;
struct FT4GamePacketSC_DialogueStart;
struct FT4GamePacketSC_MissionFinish;
struct FT4GamePacketSC_MissionStart;
struct FT4GamePacketSC_QuestFinish;
struct FT4GamePacketSC_QuestStart;
struct FT4GamePacketSC_StartToPlay;
struct FT4GamePacketCS_CmdBookmark;
struct FT4GamePacketCS_CmdTeleport;
struct FT4GamePacketCS_CmdLeave;
struct FT4GamePacketCS_CmdRespawn;
struct FT4GamePacketCS_CmdItemEnter;
struct FT4GamePacketCS_CmdNPCEnter;
struct FT4GamePacketCS_CmdPCEnter;
struct FT4GamePacketCS_CmdChangePlayer;
struct FT4GamePacketCS_CmdWorldTimeSync;
struct FT4GamePacketCS_CmdWorldTravel;
struct FT4GamePacketCS_CmdQuestFinish;
struct FT4GamePacketCS_CmdQuestStart;
struct FT4GamePacketCS_CmdGameStart;
struct FT4GamePacketCS_DialogueAnswer;
struct FT4GamePacketCS_SkillTarget;
struct FT4GamePacketCS_SkillCancel;
struct FT4GamePacketCS_SkillCasting;
struct FT4GamePacketCS_ExchangeItem;
struct FT4GamePacketCS_UnequipItem;
struct FT4GamePacketCS_EquipItem;
struct FT4GamePacketCS_Stance;
struct FT4GamePacketCS_AnimSet;
struct FT4GamePacketCS_LockOff;
struct FT4GamePacketCS_LockOn;
struct FT4GamePacketCS_Rotation;
struct FT4GamePacketCS_Jump;
struct FT4GamePacketCS_Move;
struct FT4GamePacketCS_ReadyToPlay;
#ifdef T4GAMEPLAY_T4BuiltinPlayerController_generated_h
#error "T4BuiltinPlayerController.generated.h already included, missing '#pragma once' in T4BuiltinPlayerController.h"
#endif
#define T4GAMEPLAY_T4BuiltinPlayerController_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_SPARSE_DATA
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_RPC_WRAPPERS \
	virtual void SC_RecvPacket_DebugAIStatus_Implementation(FT4GamePacketSC_DebugAIStatus const& InPacket); \
	virtual void SC_RecvPacket_Resurrect_Implementation(FT4GamePacketSC_Resurrect const& InPacket); \
	virtual void SC_RecvPacket_Die_Implementation(FT4GamePacketSC_Die const& InPacket); \
	virtual void SC_RecvPacket_EffectStun_Implementation(FT4GamePacketSC_EffectStun const& InPacket); \
	virtual void SC_RecvPacket_EffectAirborne_Implementation(FT4GamePacketSC_EffectAirborne const& InPacket); \
	virtual void SC_RecvPacket_EffectKnockback_Implementation(FT4GamePacketSC_EffectKnockback const& InPacket); \
	virtual void SC_RecvPacket_EffectArea_Implementation(FT4GamePacketSC_EffectArea const& InPacket); \
	virtual void SC_RecvPacket_EffectHit_Implementation(FT4GamePacketSC_EffectHit const& InPacket); \
	virtual void SC_RecvPacket_EffectDebuff_Implementation(FT4GamePacketSC_EffectDebuff const& InPacket); \
	virtual void SC_RecvPacket_EffectBuff_Implementation(FT4GamePacketSC_EffectBuff const& InPacket); \
	virtual void SC_RecvPacket_SkillTarget_Implementation(FT4GamePacketSC_SkillTarget const& InPacket); \
	virtual void SC_RecvPacket_SkillCancel_Implementation(FT4GamePacketSC_SkillCancel const& InPacket); \
	virtual void SC_RecvPacket_SkillCasting_Implementation(FT4GamePacketSC_SkillCasting const& InPacket); \
	virtual void SC_RecvPacket_ExchangeItem_Implementation(FT4GamePacketSC_ExchangeItem const& InPacket); \
	virtual void SC_RecvPacket_UnequipItem_Implementation(FT4GamePacketSC_UnequipItem const& InPacket); \
	virtual void SC_RecvPacket_EquipItem_Implementation(FT4GamePacketSC_EquipItem const& InPacket); \
	virtual void SC_RecvPacket_Stance_Implementation(FT4GamePacketSC_Stance const& InPacket); \
	virtual void SC_RecvPacket_AnimSet_Implementation(FT4GamePacketSC_AnimSet const& InPacket); \
	virtual void SC_RecvPacket_LockOff_Implementation(FT4GamePacketSC_LockOff const& InPacket); \
	virtual void SC_RecvPacket_LockOn_Implementation(FT4GamePacketSC_LockOn const& InPacket); \
	virtual void SC_RecvPacket_MoveSpeedSync_Implementation(FT4GamePacketSC_MoveSpeedSync const& InPacket); \
	virtual void SC_RecvPacket_MoveStop_Implementation(FT4GamePacketSC_MoveStop const& InPacket); \
	virtual void SC_RecvPacket_MoveSegments_Implementation(FT4GamePacketSC_MoveSegments const& InPacket); \
	virtual void SC_RecvPacket_Teleport_Implementation(FT4GamePacketSC_Teleport const& InPacket); \
	virtual void SC_RecvPacket_Rotation_Implementation(FT4GamePacketSC_Rotation const& InPacket); \
	virtual void SC_RecvPacket_Jump_Implementation(FT4GamePacketSC_Jump const& InPacket); \
	virtual void SC_RecvPacket_MoveStart_Implementation(FT4GamePacketSC_MoveStart const& InPacket); \
	virtual void SC_RecvPacket_ItemLeave_Implementation(FT4GamePacketSC_ItemLeave const& InPacket); \
	virtual void SC_RecvPacket_ItemEnter_Implementation(FT4GamePacketSC_ItemEnter const& InPacket); \
	virtual void SC_RecvPacket_NPCLeave_Implementation(FT4GamePacketSC_NPCLeave const& InPacket); \
	virtual void SC_RecvPacket_NPCEnter_Implementation(FT4GamePacketSC_NPCEnter const& InPacket); \
	virtual void SC_RecvPacket_PCLeave_Implementation(FT4GamePacketSC_PCLeave const& InPacket); \
	virtual void SC_RecvPacket_PCEnter_Implementation(FT4GamePacketSC_PCEnter const& InPacket); \
	virtual void SC_RecvPacket_MyPCChange_Implementation(FT4GamePacketSC_MyPCChange const& InPacket); \
	virtual void SC_RecvPacket_MyPCEnter_Implementation(FT4GamePacketSC_MyPCEnter const& InPacket); \
	virtual void SC_RecvPacket_WorldExplore_Implementation(FT4GamePacketSC_WorldExplore const& InPacket); \
	virtual void SC_RecvPacket_WorldTimeSync_Implementation(FT4GamePacketSC_WorldTimeSync const& InPacket); \
	virtual void SC_RecvPacket_WorldTravel_Implementation(FT4GamePacketSC_WorldTravel const& InPacket); \
	virtual void SC_RecvPacket_InventoryAdd_Implementation(FT4GamePacketSC_InventoryAdd const& InPacket); \
	virtual void SC_RecvPacket_DialogueFinish_Implementation(FT4GamePacketSC_DialogueFinish const& InPacket); \
	virtual void SC_RecvPacket_DialogueUpdate_Implementation(FT4GamePacketSC_DialogueUpdate const& InPacket); \
	virtual void SC_RecvPacket_DialogueStart_Implementation(FT4GamePacketSC_DialogueStart const& InPacket); \
	virtual void SC_RecvPacket_MissionFinish_Implementation(FT4GamePacketSC_MissionFinish const& InPacket); \
	virtual void SC_RecvPacket_MissionStart_Implementation(FT4GamePacketSC_MissionStart const& InPacket); \
	virtual void SC_RecvPacket_QuestFinish_Implementation(FT4GamePacketSC_QuestFinish const& InPacket); \
	virtual void SC_RecvPacket_QuestStart_Implementation(FT4GamePacketSC_QuestStart const& InPacket); \
	virtual void SC_RecvPacket_StartToPlay_Implementation(FT4GamePacketSC_StartToPlay const& InPacket); \
	virtual bool CS_RecvPacket_CmdBookmark_Validate(FT4GamePacketCS_CmdBookmark const& ); \
	virtual void CS_RecvPacket_CmdBookmark_Implementation(FT4GamePacketCS_CmdBookmark const& InPacket); \
	virtual bool CS_RecvPacket_CmdTeleport_Validate(FT4GamePacketCS_CmdTeleport const& ); \
	virtual void CS_RecvPacket_CmdTeleport_Implementation(FT4GamePacketCS_CmdTeleport const& InPacket); \
	virtual bool CS_RecvPacket_CmdLeave_Validate(FT4GamePacketCS_CmdLeave const& ); \
	virtual void CS_RecvPacket_CmdLeave_Implementation(FT4GamePacketCS_CmdLeave const& InPacket); \
	virtual bool CS_RecvPacket_CmdRespawn_Validate(FT4GamePacketCS_CmdRespawn const& ); \
	virtual void CS_RecvPacket_CmdRespawn_Implementation(FT4GamePacketCS_CmdRespawn const& InPacket); \
	virtual bool CS_RecvPacket_CmdItemEnter_Validate(FT4GamePacketCS_CmdItemEnter const& ); \
	virtual void CS_RecvPacket_CmdItemEnter_Implementation(FT4GamePacketCS_CmdItemEnter const& InPacket); \
	virtual bool CS_RecvPacket_CmdNPCEnter_Validate(FT4GamePacketCS_CmdNPCEnter const& ); \
	virtual void CS_RecvPacket_CmdNPCEnter_Implementation(FT4GamePacketCS_CmdNPCEnter const& InPacket); \
	virtual bool CS_RecvPacket_CmdPCEnter_Validate(FT4GamePacketCS_CmdPCEnter const& ); \
	virtual void CS_RecvPacket_CmdPCEnter_Implementation(FT4GamePacketCS_CmdPCEnter const& InPacket); \
	virtual bool CS_RecvPacket_CmdChangePlayer_Validate(FT4GamePacketCS_CmdChangePlayer const& ); \
	virtual void CS_RecvPacket_CmdChangePlayer_Implementation(FT4GamePacketCS_CmdChangePlayer const& InPacket); \
	virtual bool CS_RecvPacket_CmdWorldTimeSync_Validate(FT4GamePacketCS_CmdWorldTimeSync const& ); \
	virtual void CS_RecvPacket_CmdWorldTimeSync_Implementation(FT4GamePacketCS_CmdWorldTimeSync const& InPacket); \
	virtual bool CS_RecvPacket_CmdWorldTravel_Validate(FT4GamePacketCS_CmdWorldTravel const& ); \
	virtual void CS_RecvPacket_CmdWorldTravel_Implementation(FT4GamePacketCS_CmdWorldTravel const& InPacket); \
	virtual bool CS_RecvPacket_CmdQuestFinish_Validate(FT4GamePacketCS_CmdQuestFinish const& ); \
	virtual void CS_RecvPacket_CmdQuestFinish_Implementation(FT4GamePacketCS_CmdQuestFinish const& InPacket); \
	virtual bool CS_RecvPacket_CmdQuestStart_Validate(FT4GamePacketCS_CmdQuestStart const& ); \
	virtual void CS_RecvPacket_CmdQuestStart_Implementation(FT4GamePacketCS_CmdQuestStart const& InPacket); \
	virtual bool CS_RecvPacket_CmdGameStart_Validate(FT4GamePacketCS_CmdGameStart const& ); \
	virtual void CS_RecvPacket_CmdGameStart_Implementation(FT4GamePacketCS_CmdGameStart const& InPacket); \
	virtual bool CS_RecvPacket_DialogueAnswer_Validate(FT4GamePacketCS_DialogueAnswer const& ); \
	virtual void CS_RecvPacket_DialogueAnswer_Implementation(FT4GamePacketCS_DialogueAnswer const& InPacket); \
	virtual bool CS_RecvPacket_SkillTarget_Validate(FT4GamePacketCS_SkillTarget const& ); \
	virtual void CS_RecvPacket_SkillTarget_Implementation(FT4GamePacketCS_SkillTarget const& InPacket); \
	virtual bool CS_RecvPacket_SkillCancel_Validate(FT4GamePacketCS_SkillCancel const& ); \
	virtual void CS_RecvPacket_SkillCancel_Implementation(FT4GamePacketCS_SkillCancel const& InPacket); \
	virtual bool CS_RecvPacket_SkillCasting_Validate(FT4GamePacketCS_SkillCasting const& ); \
	virtual void CS_RecvPacket_SkillCasting_Implementation(FT4GamePacketCS_SkillCasting const& InPacket); \
	virtual bool CS_RecvPacket_ExchangeItem_Validate(FT4GamePacketCS_ExchangeItem const& ); \
	virtual void CS_RecvPacket_ExchangeItem_Implementation(FT4GamePacketCS_ExchangeItem const& InPacket); \
	virtual bool CS_RecvPacket_UnequipItem_Validate(FT4GamePacketCS_UnequipItem const& ); \
	virtual void CS_RecvPacket_UnequipItem_Implementation(FT4GamePacketCS_UnequipItem const& InPacket); \
	virtual bool CS_RecvPacket_EquipItem_Validate(FT4GamePacketCS_EquipItem const& ); \
	virtual void CS_RecvPacket_EquipItem_Implementation(FT4GamePacketCS_EquipItem const& InPacket); \
	virtual bool CS_RecvPacket_Stance_Validate(FT4GamePacketCS_Stance const& ); \
	virtual void CS_RecvPacket_Stance_Implementation(FT4GamePacketCS_Stance const& InPacket); \
	virtual bool CS_RecvPacket_AnimSet_Validate(FT4GamePacketCS_AnimSet const& ); \
	virtual void CS_RecvPacket_AnimSet_Implementation(FT4GamePacketCS_AnimSet const& InPacket); \
	virtual bool CS_RecvPacket_LockOff_Validate(FT4GamePacketCS_LockOff const& ); \
	virtual void CS_RecvPacket_LockOff_Implementation(FT4GamePacketCS_LockOff const& InPacket); \
	virtual bool CS_RecvPacket_LockOn_Validate(FT4GamePacketCS_LockOn const& ); \
	virtual void CS_RecvPacket_LockOn_Implementation(FT4GamePacketCS_LockOn const& InPacket); \
	virtual bool CS_RecvPacket_Rotation_Validate(FT4GamePacketCS_Rotation const& ); \
	virtual void CS_RecvPacket_Rotation_Implementation(FT4GamePacketCS_Rotation const& InPacket); \
	virtual bool CS_RecvPacket_Jump_Validate(FT4GamePacketCS_Jump const& ); \
	virtual void CS_RecvPacket_Jump_Implementation(FT4GamePacketCS_Jump const& InPacket); \
	virtual bool CS_RecvPacket_Move_Validate(FT4GamePacketCS_Move const& ); \
	virtual void CS_RecvPacket_Move_Implementation(FT4GamePacketCS_Move const& InPacket); \
	virtual bool CS_RecvPacket_ReadyToPlay_Validate(FT4GamePacketCS_ReadyToPlay const& ); \
	virtual void CS_RecvPacket_ReadyToPlay_Implementation(FT4GamePacketCS_ReadyToPlay const& InPacket); \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_DebugAIStatus); \
	DECLARE_FUNCTION(execSC_RecvPacket_Resurrect); \
	DECLARE_FUNCTION(execSC_RecvPacket_Die); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectStun); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectAirborne); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectKnockback); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectArea); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectHit); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectDebuff); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectBuff); \
	DECLARE_FUNCTION(execSC_RecvPacket_SkillTarget); \
	DECLARE_FUNCTION(execSC_RecvPacket_SkillCancel); \
	DECLARE_FUNCTION(execSC_RecvPacket_SkillCasting); \
	DECLARE_FUNCTION(execSC_RecvPacket_ExchangeItem); \
	DECLARE_FUNCTION(execSC_RecvPacket_UnequipItem); \
	DECLARE_FUNCTION(execSC_RecvPacket_EquipItem); \
	DECLARE_FUNCTION(execSC_RecvPacket_Stance); \
	DECLARE_FUNCTION(execSC_RecvPacket_AnimSet); \
	DECLARE_FUNCTION(execSC_RecvPacket_LockOff); \
	DECLARE_FUNCTION(execSC_RecvPacket_LockOn); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveSpeedSync); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveStop); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveSegments); \
	DECLARE_FUNCTION(execSC_RecvPacket_Teleport); \
	DECLARE_FUNCTION(execSC_RecvPacket_Rotation); \
	DECLARE_FUNCTION(execSC_RecvPacket_Jump); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemLeave); \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCLeave); \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_PCLeave); \
	DECLARE_FUNCTION(execSC_RecvPacket_PCEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_MyPCChange); \
	DECLARE_FUNCTION(execSC_RecvPacket_MyPCEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_WorldExplore); \
	DECLARE_FUNCTION(execSC_RecvPacket_WorldTimeSync); \
	DECLARE_FUNCTION(execSC_RecvPacket_WorldTravel); \
	DECLARE_FUNCTION(execSC_RecvPacket_InventoryAdd); \
	DECLARE_FUNCTION(execSC_RecvPacket_DialogueFinish); \
	DECLARE_FUNCTION(execSC_RecvPacket_DialogueUpdate); \
	DECLARE_FUNCTION(execSC_RecvPacket_DialogueStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_MissionFinish); \
	DECLARE_FUNCTION(execSC_RecvPacket_MissionStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_QuestFinish); \
	DECLARE_FUNCTION(execSC_RecvPacket_QuestStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_StartToPlay); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdBookmark); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdTeleport); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdLeave); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdRespawn); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdItemEnter); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdNPCEnter); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdPCEnter); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdChangePlayer); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdWorldTimeSync); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdWorldTravel); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdQuestFinish); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdQuestStart); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdGameStart); \
	DECLARE_FUNCTION(execCS_RecvPacket_DialogueAnswer); \
	DECLARE_FUNCTION(execCS_RecvPacket_SkillTarget); \
	DECLARE_FUNCTION(execCS_RecvPacket_SkillCancel); \
	DECLARE_FUNCTION(execCS_RecvPacket_SkillCasting); \
	DECLARE_FUNCTION(execCS_RecvPacket_ExchangeItem); \
	DECLARE_FUNCTION(execCS_RecvPacket_UnequipItem); \
	DECLARE_FUNCTION(execCS_RecvPacket_EquipItem); \
	DECLARE_FUNCTION(execCS_RecvPacket_Stance); \
	DECLARE_FUNCTION(execCS_RecvPacket_AnimSet); \
	DECLARE_FUNCTION(execCS_RecvPacket_LockOff); \
	DECLARE_FUNCTION(execCS_RecvPacket_LockOn); \
	DECLARE_FUNCTION(execCS_RecvPacket_Rotation); \
	DECLARE_FUNCTION(execCS_RecvPacket_Jump); \
	DECLARE_FUNCTION(execCS_RecvPacket_Move); \
	DECLARE_FUNCTION(execCS_RecvPacket_ReadyToPlay);


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SC_RecvPacket_DebugAIStatus_Implementation(FT4GamePacketSC_DebugAIStatus const& InPacket); \
	virtual void SC_RecvPacket_Resurrect_Implementation(FT4GamePacketSC_Resurrect const& InPacket); \
	virtual void SC_RecvPacket_Die_Implementation(FT4GamePacketSC_Die const& InPacket); \
	virtual void SC_RecvPacket_EffectStun_Implementation(FT4GamePacketSC_EffectStun const& InPacket); \
	virtual void SC_RecvPacket_EffectAirborne_Implementation(FT4GamePacketSC_EffectAirborne const& InPacket); \
	virtual void SC_RecvPacket_EffectKnockback_Implementation(FT4GamePacketSC_EffectKnockback const& InPacket); \
	virtual void SC_RecvPacket_EffectArea_Implementation(FT4GamePacketSC_EffectArea const& InPacket); \
	virtual void SC_RecvPacket_EffectHit_Implementation(FT4GamePacketSC_EffectHit const& InPacket); \
	virtual void SC_RecvPacket_EffectDebuff_Implementation(FT4GamePacketSC_EffectDebuff const& InPacket); \
	virtual void SC_RecvPacket_EffectBuff_Implementation(FT4GamePacketSC_EffectBuff const& InPacket); \
	virtual void SC_RecvPacket_SkillTarget_Implementation(FT4GamePacketSC_SkillTarget const& InPacket); \
	virtual void SC_RecvPacket_SkillCancel_Implementation(FT4GamePacketSC_SkillCancel const& InPacket); \
	virtual void SC_RecvPacket_SkillCasting_Implementation(FT4GamePacketSC_SkillCasting const& InPacket); \
	virtual void SC_RecvPacket_ExchangeItem_Implementation(FT4GamePacketSC_ExchangeItem const& InPacket); \
	virtual void SC_RecvPacket_UnequipItem_Implementation(FT4GamePacketSC_UnequipItem const& InPacket); \
	virtual void SC_RecvPacket_EquipItem_Implementation(FT4GamePacketSC_EquipItem const& InPacket); \
	virtual void SC_RecvPacket_Stance_Implementation(FT4GamePacketSC_Stance const& InPacket); \
	virtual void SC_RecvPacket_AnimSet_Implementation(FT4GamePacketSC_AnimSet const& InPacket); \
	virtual void SC_RecvPacket_LockOff_Implementation(FT4GamePacketSC_LockOff const& InPacket); \
	virtual void SC_RecvPacket_LockOn_Implementation(FT4GamePacketSC_LockOn const& InPacket); \
	virtual void SC_RecvPacket_MoveSpeedSync_Implementation(FT4GamePacketSC_MoveSpeedSync const& InPacket); \
	virtual void SC_RecvPacket_MoveStop_Implementation(FT4GamePacketSC_MoveStop const& InPacket); \
	virtual void SC_RecvPacket_MoveSegments_Implementation(FT4GamePacketSC_MoveSegments const& InPacket); \
	virtual void SC_RecvPacket_Teleport_Implementation(FT4GamePacketSC_Teleport const& InPacket); \
	virtual void SC_RecvPacket_Rotation_Implementation(FT4GamePacketSC_Rotation const& InPacket); \
	virtual void SC_RecvPacket_Jump_Implementation(FT4GamePacketSC_Jump const& InPacket); \
	virtual void SC_RecvPacket_MoveStart_Implementation(FT4GamePacketSC_MoveStart const& InPacket); \
	virtual void SC_RecvPacket_ItemLeave_Implementation(FT4GamePacketSC_ItemLeave const& InPacket); \
	virtual void SC_RecvPacket_ItemEnter_Implementation(FT4GamePacketSC_ItemEnter const& InPacket); \
	virtual void SC_RecvPacket_NPCLeave_Implementation(FT4GamePacketSC_NPCLeave const& InPacket); \
	virtual void SC_RecvPacket_NPCEnter_Implementation(FT4GamePacketSC_NPCEnter const& InPacket); \
	virtual void SC_RecvPacket_PCLeave_Implementation(FT4GamePacketSC_PCLeave const& InPacket); \
	virtual void SC_RecvPacket_PCEnter_Implementation(FT4GamePacketSC_PCEnter const& InPacket); \
	virtual void SC_RecvPacket_MyPCChange_Implementation(FT4GamePacketSC_MyPCChange const& InPacket); \
	virtual void SC_RecvPacket_MyPCEnter_Implementation(FT4GamePacketSC_MyPCEnter const& InPacket); \
	virtual void SC_RecvPacket_WorldExplore_Implementation(FT4GamePacketSC_WorldExplore const& InPacket); \
	virtual void SC_RecvPacket_WorldTimeSync_Implementation(FT4GamePacketSC_WorldTimeSync const& InPacket); \
	virtual void SC_RecvPacket_WorldTravel_Implementation(FT4GamePacketSC_WorldTravel const& InPacket); \
	virtual void SC_RecvPacket_InventoryAdd_Implementation(FT4GamePacketSC_InventoryAdd const& InPacket); \
	virtual void SC_RecvPacket_DialogueFinish_Implementation(FT4GamePacketSC_DialogueFinish const& InPacket); \
	virtual void SC_RecvPacket_DialogueUpdate_Implementation(FT4GamePacketSC_DialogueUpdate const& InPacket); \
	virtual void SC_RecvPacket_DialogueStart_Implementation(FT4GamePacketSC_DialogueStart const& InPacket); \
	virtual void SC_RecvPacket_MissionFinish_Implementation(FT4GamePacketSC_MissionFinish const& InPacket); \
	virtual void SC_RecvPacket_MissionStart_Implementation(FT4GamePacketSC_MissionStart const& InPacket); \
	virtual void SC_RecvPacket_QuestFinish_Implementation(FT4GamePacketSC_QuestFinish const& InPacket); \
	virtual void SC_RecvPacket_QuestStart_Implementation(FT4GamePacketSC_QuestStart const& InPacket); \
	virtual void SC_RecvPacket_StartToPlay_Implementation(FT4GamePacketSC_StartToPlay const& InPacket); \
	virtual bool CS_RecvPacket_CmdBookmark_Validate(FT4GamePacketCS_CmdBookmark const& ); \
	virtual void CS_RecvPacket_CmdBookmark_Implementation(FT4GamePacketCS_CmdBookmark const& InPacket); \
	virtual bool CS_RecvPacket_CmdTeleport_Validate(FT4GamePacketCS_CmdTeleport const& ); \
	virtual void CS_RecvPacket_CmdTeleport_Implementation(FT4GamePacketCS_CmdTeleport const& InPacket); \
	virtual bool CS_RecvPacket_CmdLeave_Validate(FT4GamePacketCS_CmdLeave const& ); \
	virtual void CS_RecvPacket_CmdLeave_Implementation(FT4GamePacketCS_CmdLeave const& InPacket); \
	virtual bool CS_RecvPacket_CmdRespawn_Validate(FT4GamePacketCS_CmdRespawn const& ); \
	virtual void CS_RecvPacket_CmdRespawn_Implementation(FT4GamePacketCS_CmdRespawn const& InPacket); \
	virtual bool CS_RecvPacket_CmdItemEnter_Validate(FT4GamePacketCS_CmdItemEnter const& ); \
	virtual void CS_RecvPacket_CmdItemEnter_Implementation(FT4GamePacketCS_CmdItemEnter const& InPacket); \
	virtual bool CS_RecvPacket_CmdNPCEnter_Validate(FT4GamePacketCS_CmdNPCEnter const& ); \
	virtual void CS_RecvPacket_CmdNPCEnter_Implementation(FT4GamePacketCS_CmdNPCEnter const& InPacket); \
	virtual bool CS_RecvPacket_CmdPCEnter_Validate(FT4GamePacketCS_CmdPCEnter const& ); \
	virtual void CS_RecvPacket_CmdPCEnter_Implementation(FT4GamePacketCS_CmdPCEnter const& InPacket); \
	virtual bool CS_RecvPacket_CmdChangePlayer_Validate(FT4GamePacketCS_CmdChangePlayer const& ); \
	virtual void CS_RecvPacket_CmdChangePlayer_Implementation(FT4GamePacketCS_CmdChangePlayer const& InPacket); \
	virtual bool CS_RecvPacket_CmdWorldTimeSync_Validate(FT4GamePacketCS_CmdWorldTimeSync const& ); \
	virtual void CS_RecvPacket_CmdWorldTimeSync_Implementation(FT4GamePacketCS_CmdWorldTimeSync const& InPacket); \
	virtual bool CS_RecvPacket_CmdWorldTravel_Validate(FT4GamePacketCS_CmdWorldTravel const& ); \
	virtual void CS_RecvPacket_CmdWorldTravel_Implementation(FT4GamePacketCS_CmdWorldTravel const& InPacket); \
	virtual bool CS_RecvPacket_CmdQuestFinish_Validate(FT4GamePacketCS_CmdQuestFinish const& ); \
	virtual void CS_RecvPacket_CmdQuestFinish_Implementation(FT4GamePacketCS_CmdQuestFinish const& InPacket); \
	virtual bool CS_RecvPacket_CmdQuestStart_Validate(FT4GamePacketCS_CmdQuestStart const& ); \
	virtual void CS_RecvPacket_CmdQuestStart_Implementation(FT4GamePacketCS_CmdQuestStart const& InPacket); \
	virtual bool CS_RecvPacket_CmdGameStart_Validate(FT4GamePacketCS_CmdGameStart const& ); \
	virtual void CS_RecvPacket_CmdGameStart_Implementation(FT4GamePacketCS_CmdGameStart const& InPacket); \
	virtual bool CS_RecvPacket_DialogueAnswer_Validate(FT4GamePacketCS_DialogueAnswer const& ); \
	virtual void CS_RecvPacket_DialogueAnswer_Implementation(FT4GamePacketCS_DialogueAnswer const& InPacket); \
	virtual bool CS_RecvPacket_SkillTarget_Validate(FT4GamePacketCS_SkillTarget const& ); \
	virtual void CS_RecvPacket_SkillTarget_Implementation(FT4GamePacketCS_SkillTarget const& InPacket); \
	virtual bool CS_RecvPacket_SkillCancel_Validate(FT4GamePacketCS_SkillCancel const& ); \
	virtual void CS_RecvPacket_SkillCancel_Implementation(FT4GamePacketCS_SkillCancel const& InPacket); \
	virtual bool CS_RecvPacket_SkillCasting_Validate(FT4GamePacketCS_SkillCasting const& ); \
	virtual void CS_RecvPacket_SkillCasting_Implementation(FT4GamePacketCS_SkillCasting const& InPacket); \
	virtual bool CS_RecvPacket_ExchangeItem_Validate(FT4GamePacketCS_ExchangeItem const& ); \
	virtual void CS_RecvPacket_ExchangeItem_Implementation(FT4GamePacketCS_ExchangeItem const& InPacket); \
	virtual bool CS_RecvPacket_UnequipItem_Validate(FT4GamePacketCS_UnequipItem const& ); \
	virtual void CS_RecvPacket_UnequipItem_Implementation(FT4GamePacketCS_UnequipItem const& InPacket); \
	virtual bool CS_RecvPacket_EquipItem_Validate(FT4GamePacketCS_EquipItem const& ); \
	virtual void CS_RecvPacket_EquipItem_Implementation(FT4GamePacketCS_EquipItem const& InPacket); \
	virtual bool CS_RecvPacket_Stance_Validate(FT4GamePacketCS_Stance const& ); \
	virtual void CS_RecvPacket_Stance_Implementation(FT4GamePacketCS_Stance const& InPacket); \
	virtual bool CS_RecvPacket_AnimSet_Validate(FT4GamePacketCS_AnimSet const& ); \
	virtual void CS_RecvPacket_AnimSet_Implementation(FT4GamePacketCS_AnimSet const& InPacket); \
	virtual bool CS_RecvPacket_LockOff_Validate(FT4GamePacketCS_LockOff const& ); \
	virtual void CS_RecvPacket_LockOff_Implementation(FT4GamePacketCS_LockOff const& InPacket); \
	virtual bool CS_RecvPacket_LockOn_Validate(FT4GamePacketCS_LockOn const& ); \
	virtual void CS_RecvPacket_LockOn_Implementation(FT4GamePacketCS_LockOn const& InPacket); \
	virtual bool CS_RecvPacket_Rotation_Validate(FT4GamePacketCS_Rotation const& ); \
	virtual void CS_RecvPacket_Rotation_Implementation(FT4GamePacketCS_Rotation const& InPacket); \
	virtual bool CS_RecvPacket_Jump_Validate(FT4GamePacketCS_Jump const& ); \
	virtual void CS_RecvPacket_Jump_Implementation(FT4GamePacketCS_Jump const& InPacket); \
	virtual bool CS_RecvPacket_Move_Validate(FT4GamePacketCS_Move const& ); \
	virtual void CS_RecvPacket_Move_Implementation(FT4GamePacketCS_Move const& InPacket); \
	virtual bool CS_RecvPacket_ReadyToPlay_Validate(FT4GamePacketCS_ReadyToPlay const& ); \
	virtual void CS_RecvPacket_ReadyToPlay_Implementation(FT4GamePacketCS_ReadyToPlay const& InPacket); \
 \
	DECLARE_FUNCTION(execSC_RecvPacket_DebugAIStatus); \
	DECLARE_FUNCTION(execSC_RecvPacket_Resurrect); \
	DECLARE_FUNCTION(execSC_RecvPacket_Die); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectStun); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectAirborne); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectKnockback); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectArea); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectHit); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectDebuff); \
	DECLARE_FUNCTION(execSC_RecvPacket_EffectBuff); \
	DECLARE_FUNCTION(execSC_RecvPacket_SkillTarget); \
	DECLARE_FUNCTION(execSC_RecvPacket_SkillCancel); \
	DECLARE_FUNCTION(execSC_RecvPacket_SkillCasting); \
	DECLARE_FUNCTION(execSC_RecvPacket_ExchangeItem); \
	DECLARE_FUNCTION(execSC_RecvPacket_UnequipItem); \
	DECLARE_FUNCTION(execSC_RecvPacket_EquipItem); \
	DECLARE_FUNCTION(execSC_RecvPacket_Stance); \
	DECLARE_FUNCTION(execSC_RecvPacket_AnimSet); \
	DECLARE_FUNCTION(execSC_RecvPacket_LockOff); \
	DECLARE_FUNCTION(execSC_RecvPacket_LockOn); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveSpeedSync); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveStop); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveSegments); \
	DECLARE_FUNCTION(execSC_RecvPacket_Teleport); \
	DECLARE_FUNCTION(execSC_RecvPacket_Rotation); \
	DECLARE_FUNCTION(execSC_RecvPacket_Jump); \
	DECLARE_FUNCTION(execSC_RecvPacket_MoveStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemLeave); \
	DECLARE_FUNCTION(execSC_RecvPacket_ItemEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCLeave); \
	DECLARE_FUNCTION(execSC_RecvPacket_NPCEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_PCLeave); \
	DECLARE_FUNCTION(execSC_RecvPacket_PCEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_MyPCChange); \
	DECLARE_FUNCTION(execSC_RecvPacket_MyPCEnter); \
	DECLARE_FUNCTION(execSC_RecvPacket_WorldExplore); \
	DECLARE_FUNCTION(execSC_RecvPacket_WorldTimeSync); \
	DECLARE_FUNCTION(execSC_RecvPacket_WorldTravel); \
	DECLARE_FUNCTION(execSC_RecvPacket_InventoryAdd); \
	DECLARE_FUNCTION(execSC_RecvPacket_DialogueFinish); \
	DECLARE_FUNCTION(execSC_RecvPacket_DialogueUpdate); \
	DECLARE_FUNCTION(execSC_RecvPacket_DialogueStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_MissionFinish); \
	DECLARE_FUNCTION(execSC_RecvPacket_MissionStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_QuestFinish); \
	DECLARE_FUNCTION(execSC_RecvPacket_QuestStart); \
	DECLARE_FUNCTION(execSC_RecvPacket_StartToPlay); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdBookmark); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdTeleport); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdLeave); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdRespawn); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdItemEnter); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdNPCEnter); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdPCEnter); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdChangePlayer); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdWorldTimeSync); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdWorldTravel); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdQuestFinish); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdQuestStart); \
	DECLARE_FUNCTION(execCS_RecvPacket_CmdGameStart); \
	DECLARE_FUNCTION(execCS_RecvPacket_DialogueAnswer); \
	DECLARE_FUNCTION(execCS_RecvPacket_SkillTarget); \
	DECLARE_FUNCTION(execCS_RecvPacket_SkillCancel); \
	DECLARE_FUNCTION(execCS_RecvPacket_SkillCasting); \
	DECLARE_FUNCTION(execCS_RecvPacket_ExchangeItem); \
	DECLARE_FUNCTION(execCS_RecvPacket_UnequipItem); \
	DECLARE_FUNCTION(execCS_RecvPacket_EquipItem); \
	DECLARE_FUNCTION(execCS_RecvPacket_Stance); \
	DECLARE_FUNCTION(execCS_RecvPacket_AnimSet); \
	DECLARE_FUNCTION(execCS_RecvPacket_LockOff); \
	DECLARE_FUNCTION(execCS_RecvPacket_LockOn); \
	DECLARE_FUNCTION(execCS_RecvPacket_Rotation); \
	DECLARE_FUNCTION(execCS_RecvPacket_Jump); \
	DECLARE_FUNCTION(execCS_RecvPacket_Move); \
	DECLARE_FUNCTION(execCS_RecvPacket_ReadyToPlay);


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_EVENT_PARMS \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_AnimSet_Parms \
	{ \
		FT4GamePacketCS_AnimSet InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdBookmark_Parms \
	{ \
		FT4GamePacketCS_CmdBookmark InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdChangePlayer_Parms \
	{ \
		FT4GamePacketCS_CmdChangePlayer InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdGameStart_Parms \
	{ \
		FT4GamePacketCS_CmdGameStart InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdItemEnter_Parms \
	{ \
		FT4GamePacketCS_CmdItemEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdLeave_Parms \
	{ \
		FT4GamePacketCS_CmdLeave InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdNPCEnter_Parms \
	{ \
		FT4GamePacketCS_CmdNPCEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdPCEnter_Parms \
	{ \
		FT4GamePacketCS_CmdPCEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdQuestFinish_Parms \
	{ \
		FT4GamePacketCS_CmdQuestFinish InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdQuestStart_Parms \
	{ \
		FT4GamePacketCS_CmdQuestStart InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdRespawn_Parms \
	{ \
		FT4GamePacketCS_CmdRespawn InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdTeleport_Parms \
	{ \
		FT4GamePacketCS_CmdTeleport InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdWorldTimeSync_Parms \
	{ \
		FT4GamePacketCS_CmdWorldTimeSync InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_CmdWorldTravel_Parms \
	{ \
		FT4GamePacketCS_CmdWorldTravel InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_DialogueAnswer_Parms \
	{ \
		FT4GamePacketCS_DialogueAnswer InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_EquipItem_Parms \
	{ \
		FT4GamePacketCS_EquipItem InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_ExchangeItem_Parms \
	{ \
		FT4GamePacketCS_ExchangeItem InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_Jump_Parms \
	{ \
		FT4GamePacketCS_Jump InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_LockOff_Parms \
	{ \
		FT4GamePacketCS_LockOff InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_LockOn_Parms \
	{ \
		FT4GamePacketCS_LockOn InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_Move_Parms \
	{ \
		FT4GamePacketCS_Move InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_ReadyToPlay_Parms \
	{ \
		FT4GamePacketCS_ReadyToPlay InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_Rotation_Parms \
	{ \
		FT4GamePacketCS_Rotation InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_SkillCancel_Parms \
	{ \
		FT4GamePacketCS_SkillCancel InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_SkillCasting_Parms \
	{ \
		FT4GamePacketCS_SkillCasting InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_SkillTarget_Parms \
	{ \
		FT4GamePacketCS_SkillTarget InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_Stance_Parms \
	{ \
		FT4GamePacketCS_Stance InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventCS_RecvPacket_UnequipItem_Parms \
	{ \
		FT4GamePacketCS_UnequipItem InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_AnimSet_Parms \
	{ \
		FT4GamePacketSC_AnimSet InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_DebugAIStatus_Parms \
	{ \
		FT4GamePacketSC_DebugAIStatus InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_DialogueFinish_Parms \
	{ \
		FT4GamePacketSC_DialogueFinish InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_DialogueStart_Parms \
	{ \
		FT4GamePacketSC_DialogueStart InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_DialogueUpdate_Parms \
	{ \
		FT4GamePacketSC_DialogueUpdate InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_Die_Parms \
	{ \
		FT4GamePacketSC_Die InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectAirborne_Parms \
	{ \
		FT4GamePacketSC_EffectAirborne InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectArea_Parms \
	{ \
		FT4GamePacketSC_EffectArea InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectBuff_Parms \
	{ \
		FT4GamePacketSC_EffectBuff InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectDebuff_Parms \
	{ \
		FT4GamePacketSC_EffectDebuff InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectHit_Parms \
	{ \
		FT4GamePacketSC_EffectHit InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectKnockback_Parms \
	{ \
		FT4GamePacketSC_EffectKnockback InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EffectStun_Parms \
	{ \
		FT4GamePacketSC_EffectStun InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_EquipItem_Parms \
	{ \
		FT4GamePacketSC_EquipItem InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_ExchangeItem_Parms \
	{ \
		FT4GamePacketSC_ExchangeItem InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_InventoryAdd_Parms \
	{ \
		FT4GamePacketSC_InventoryAdd InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_ItemEnter_Parms \
	{ \
		FT4GamePacketSC_ItemEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_ItemLeave_Parms \
	{ \
		FT4GamePacketSC_ItemLeave InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_Jump_Parms \
	{ \
		FT4GamePacketSC_Jump InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_LockOff_Parms \
	{ \
		FT4GamePacketSC_LockOff InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_LockOn_Parms \
	{ \
		FT4GamePacketSC_LockOn InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MissionFinish_Parms \
	{ \
		FT4GamePacketSC_MissionFinish InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MissionStart_Parms \
	{ \
		FT4GamePacketSC_MissionStart InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MoveSegments_Parms \
	{ \
		FT4GamePacketSC_MoveSegments InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MoveSpeedSync_Parms \
	{ \
		FT4GamePacketSC_MoveSpeedSync InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MoveStart_Parms \
	{ \
		FT4GamePacketSC_MoveStart InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MoveStop_Parms \
	{ \
		FT4GamePacketSC_MoveStop InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MyPCChange_Parms \
	{ \
		FT4GamePacketSC_MyPCChange InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_MyPCEnter_Parms \
	{ \
		FT4GamePacketSC_MyPCEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_NPCEnter_Parms \
	{ \
		FT4GamePacketSC_NPCEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_NPCLeave_Parms \
	{ \
		FT4GamePacketSC_NPCLeave InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_PCEnter_Parms \
	{ \
		FT4GamePacketSC_PCEnter InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_PCLeave_Parms \
	{ \
		FT4GamePacketSC_PCLeave InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_QuestFinish_Parms \
	{ \
		FT4GamePacketSC_QuestFinish InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_QuestStart_Parms \
	{ \
		FT4GamePacketSC_QuestStart InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_Resurrect_Parms \
	{ \
		FT4GamePacketSC_Resurrect InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_Rotation_Parms \
	{ \
		FT4GamePacketSC_Rotation InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_SkillCancel_Parms \
	{ \
		FT4GamePacketSC_SkillCancel InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_SkillCasting_Parms \
	{ \
		FT4GamePacketSC_SkillCasting InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_SkillTarget_Parms \
	{ \
		FT4GamePacketSC_SkillTarget InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_Stance_Parms \
	{ \
		FT4GamePacketSC_Stance InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_StartToPlay_Parms \
	{ \
		FT4GamePacketSC_StartToPlay InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_Teleport_Parms \
	{ \
		FT4GamePacketSC_Teleport InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_UnequipItem_Parms \
	{ \
		FT4GamePacketSC_UnequipItem InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_WorldExplore_Parms \
	{ \
		FT4GamePacketSC_WorldExplore InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_WorldTimeSync_Parms \
	{ \
		FT4GamePacketSC_WorldTimeSync InPacket; \
	}; \
	struct T4BuiltinPlayerController_eventSC_RecvPacket_WorldTravel_Parms \
	{ \
		FT4GamePacketSC_WorldTravel InPacket; \
	};


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_CALLBACK_WRAPPERS
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4BuiltinPlayerController(); \
	friend struct Z_Construct_UClass_AT4BuiltinPlayerController_Statics; \
public: \
	DECLARE_CLASS(AT4BuiltinPlayerController, AT4PlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Gameplay"), NO_API) \
	DECLARE_SERIALIZER(AT4BuiltinPlayerController)


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAT4BuiltinPlayerController(); \
	friend struct Z_Construct_UClass_AT4BuiltinPlayerController_Statics; \
public: \
	DECLARE_CLASS(AT4BuiltinPlayerController, AT4PlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Gameplay"), NO_API) \
	DECLARE_SERIALIZER(AT4BuiltinPlayerController)


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4BuiltinPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4BuiltinPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4BuiltinPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4BuiltinPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4BuiltinPlayerController(AT4BuiltinPlayerController&&); \
	NO_API AT4BuiltinPlayerController(const AT4BuiltinPlayerController&); \
public:


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4BuiltinPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4BuiltinPlayerController(AT4BuiltinPlayerController&&); \
	NO_API AT4BuiltinPlayerController(const AT4BuiltinPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4BuiltinPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4BuiltinPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4BuiltinPlayerController)


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_27_PROLOG \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_EVENT_PARMS


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_RPC_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_CALLBACK_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_INCLASS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_CALLBACK_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4BuiltinPlayerController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4GAMEPLAY_API UClass* StaticClass<class AT4BuiltinPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Classes_Player_T4BuiltinPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
