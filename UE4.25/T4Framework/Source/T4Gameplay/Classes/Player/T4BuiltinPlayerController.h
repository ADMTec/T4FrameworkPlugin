// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "Protocol/Server/T4GamePacketCS_Status.h"
#include "Protocol/Server/T4GamePacketCS_Move.h"
#include "Protocol/Server/T4GamePacketCS_Action.h"
#include "Protocol/Server/T4GamePacketCS_Command.h"

#include "Protocol/Client/T4GamePacketSC_Action.h"
#include "Protocol/Client/T4GamePacketSC_Move.h"
#include "Protocol/Client/T4GamePacketSC_Status.h"
#include "Protocol/Client/T4GamePacketSC_World.h"
#include "Protocol/Client/T4GamePacketSC_Game.h" // #164
#include "Protocol/Client/T4GamePacketSC_Debug.h" // #164

#include "T4Framework/Classes/Player/T4PlayerControllerBase.h"

#include "T4BuiltinPlayerController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html
 */
UCLASS()
class T4GAMEPLAY_API AT4BuiltinPlayerController : public AT4PlayerControllerBase
{
	GENERATED_UCLASS_BODY()

public:
	void ShowCrosshair(bool bInShow); // #151
	void SetCrosshairZoomRatio(float InRatio); // #121

protected:
	void NotifyPostInitializeComponents() override; // #151

	void NotifyAdvance(float InDeltaTime) override; // #49
	void NotifyBeginPlay() override; // #114

	void NotifyPossess(IT4WorldActor* InNewWorldActor) override; // #49
	void NotifyUnPossess(IT4WorldActor* InOldWorldActor) override; // #49

	void NotifySetInputMode(ET4InputMode InMode) override; // #121, #151

protected:
	// #27 : Protocol
	bool CS_RecvPacket_Validate(const FT4GamePacketCS_Base* InPacket);
	void CS_RecvPacket_Implementation(const FT4GamePacketCS_Base* InPacket);

	void SC_RecvPacket_Implementation(const FT4GamePacketSC_Base* InPacket);

private:
	friend class FT4ServerPacketHandler;

	// #T4_ADD_PACKET_TAG_CS
	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_ReadyToPlay(const FT4GamePacketCS_ReadyToPlay& InPacket); // #146

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Move(const FT4GamePacketCS_Move& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Jump(const FT4GamePacketCS_Jump& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Rotation(const FT4GamePacketCS_Rotation& InPacket); // #40

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_LockOn(const FT4GamePacketCS_LockOn& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_LockOff(const FT4GamePacketCS_LockOff& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_AnimSet(const FT4GamePacketCS_AnimSet& InPacket); // #73

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Stance(const FT4GamePacketCS_Stance& InPacket); // #106

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_EquipItem(const FT4GamePacketCS_EquipItem& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_UnequipItem(const FT4GamePacketCS_UnequipItem& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_ExchangeItem(const FT4GamePacketCS_ExchangeItem& InPacket); // #37

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_SkillCasting(const FT4GamePacketCS_SkillCasting& InPacket); // #113, #116

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_SkillCancel(const FT4GamePacketCS_SkillCancel& InPacket); // #113, #116

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_SkillTarget(const FT4GamePacketCS_SkillTarget& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdQuestStart(const FT4GamePacketCS_CmdQuestStart& InPacket); // #146

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdQuestFinish(const FT4GamePacketCS_CmdQuestFinish& InPacket); // #164

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdWorldTravel(const FT4GamePacketCS_CmdWorldTravel& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdWorldTimeSync(const FT4GamePacketCS_CmdWorldTimeSync& InPacket); // #146

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdChangePlayer(const FT4GamePacketCS_CmdChangePlayer& InPacket); // #11, #52

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdPCEnter(const FT4GamePacketCS_CmdPCEnter& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdNPCEnter(const FT4GamePacketCS_CmdNPCEnter& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdItemEnter(const FT4GamePacketCS_CmdItemEnter& InPacket); // #41

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdRespawn(const FT4GamePacketCS_CmdRespawn& InPacket); // #140

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdLeave(const FT4GamePacketCS_CmdLeave& InPacket); // #68

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdTeleport(const FT4GamePacketCS_CmdTeleport& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdBookmark(const FT4GamePacketCS_CmdBookmark& InPacket); // #140

private:
	friend class FT4ClientPacketHandler;

	// #T4_ADD_PACKET_TAG_SC
	UFUNCTION(Reliable, client)
	void SC_RecvPacket_StartToPlay(const FT4GamePacketSC_StartToPlay& InPacket); // #164

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_QuestStart(const FT4GamePacketSC_QuestStart& InPacket); // #164

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_QuestFinish(const FT4GamePacketSC_QuestFinish& InPacket); // #164
	
	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MissionStart(const FT4GamePacketSC_MissionStart& InPacket); // #164

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MissionFinish(const FT4GamePacketSC_MissionFinish& InPacket); // #164

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_DialogueStart(const FT4GamePacketSC_DialogueStart& InPacket); // #163

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_DialogueUpdate(const FT4GamePacketSC_DialogueUpdate& InPacket); // #163

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_DialogueFinish(const FT4GamePacketSC_DialogueFinish& InPacket); // #163

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_InventoryAdd(const FT4GamePacketSC_InventoryAdd& InPacket); // #168

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_WorldTravel(const FT4GamePacketSC_WorldTravel& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_WorldTimeSync(const FT4GamePacketSC_WorldTimeSync& InPacket); // #146

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_WorldExplore(const FT4GamePacketSC_WorldExplore& InPacket); // #140

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MyPCEnter(const FT4GamePacketSC_MyPCEnter& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MyPCChange(const FT4GamePacketSC_MyPCChange& InPacket); // #11, #52

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_PCEnter(const FT4GamePacketSC_PCEnter& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_PCLeave(const FT4GamePacketSC_PCLeave& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_NPCEnter(const FT4GamePacketSC_NPCEnter& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_NPCLeave(const FT4GamePacketSC_NPCLeave& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ItemEnter(const FT4GamePacketSC_ItemEnter& InPacket); // #41

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ItemLeave(const FT4GamePacketSC_ItemLeave& InPacket); // #41

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MoveStart(const FT4GamePacketSC_MoveStart& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Jump(const FT4GamePacketSC_Jump& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Rotation(const FT4GamePacketSC_Rotation& InPacket); // #40

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Teleport(const FT4GamePacketSC_Teleport& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MoveSegments(const FT4GamePacketSC_MoveSegments& InPacket); // #161

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MoveStop(const FT4GamePacketSC_MoveStop& InPacket); // #52

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MoveSpeedSync(const FT4GamePacketSC_MoveSpeedSync& InPacket); // #52

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_LockOn(const FT4GamePacketSC_LockOn& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_LockOff(const FT4GamePacketSC_LockOff& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_AnimSet(const FT4GamePacketSC_AnimSet& InPacket); // #73

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Stance(const FT4GamePacketSC_Stance& InPacket); // #106

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EquipItem(const FT4GamePacketSC_EquipItem& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_UnequipItem(const FT4GamePacketSC_UnequipItem& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ExchangeItem(const FT4GamePacketSC_ExchangeItem& InPacket); // #37

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_SkillCasting(const FT4GamePacketSC_SkillCasting& InPacket); // #113, #116

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_SkillCancel(const FT4GamePacketSC_SkillCancel& InPacket); // #113, #116

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_SkillTarget(const FT4GamePacketSC_SkillTarget& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectBuff(const FT4GamePacketSC_EffectBuff& InPacket); // #158 : Zone Weather

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectDebuff(const FT4GamePacketSC_EffectDebuff& InPacket); // #158 : Zone Weather

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectDirect(const FT4GamePacketSC_EffectDirect& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectArea(const FT4GamePacketSC_EffectArea& InPacket); // #68

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectKnockback(const FT4GamePacketSC_EffectKnockback& InPacket); // #135

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectAirborne(const FT4GamePacketSC_EffectAirborne& InPacket); // #135

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_EffectStun(const FT4GamePacketSC_EffectStun& InPacket); // #135

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Die(const FT4GamePacketSC_Die& InPacket); // #76

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Resurrect(const FT4GamePacketSC_Resurrect& InPacket); // #76

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_DebugAIStatus(const FT4GamePacketSC_DebugAIStatus& InPacket); // #164
};
