// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GamePacketTypes.generated.h"

/**
  *
 */

// WARN : Packet 추가 시는 아래 테그를 찾아 추가된 패킷을 모두 구현해주어야 함!!
// #T4_ADD_PACKET_TAG_CS

UENUM()
enum class ET4GamePacketCS : uint32
{
	ReadyToPlay, // #146 : 클라이언트 PC::BeginPlay 시 서버로 접속 완료 통보!

	Move,
	Jump,
	Rotation, // #40

	LockOn, // #40
	LockOff, // #40

	AnimSet, // #73
	Stance, // #106

	EquipItem, // #22
	UnequipItem, // #22

	ExchangeItem, // #37

	SkillCasting, // #113, #116
	SkillCancel, // #113, #116
	SkillTarget, // #116

	// Test
	CmdQuestStart, // #146
	CmdQuestFinish, // #164

	CmdWorldTravel,
	CmdWorldTimeSync, // #146

	CmdChangePlayer, // #11, #52

	CmdPCEnter,
	CmdNPCEnter, // #31
	CmdItemEnter, // #41

	CmdRespawn, // #140

	CmdLeave, // #68

	CmdTeleport,
	CmdBookmark, // #140

	None,
};

// #T4_ADD_PACKET_TAG_SC
UENUM()
enum class ET4GamePacketSC : uint32
{
	StartToPlay, // #164 : 클라측 ReadyToPlay 에 대한 응답. Server/Client Object 생성!

	QuestStart, // #164
	QuestFinish, // #164

	MissionStart, // #164
	MissionFinish, // #164

	DialogueStart, // #163
	DialogueUpdate, // #163
	DialogueFinish, // #163

	InventoryAdd, // #168

	WorldTravel,
	WorldTimeSync, // #146
	WorldExplore, // #140 : 특정 위치로 카메라 이동

	MyPCEnter,
	MyPCChange, // #11, #52

	PCEnter,
	PCLeave,

	NPCEnter, // #31
	NPCLeave, // #31

	ItemEnter, // #41
	ItemLeave, // #41

	Move,
	Jump,
	Rotation, // #40
	Teleport,

	MoveStop, // #52
	MoveSpeedSync, // #52

	LockOn, // #40
	LockOff, // #40

	AnimSet, // #73
	Stance, // #106

	EquipItem,
	UnequipItem,

	ExchangeItem, // #37

	SkillCasting, // #113, #116
	SkillCancel, // #113, #116
	SkillTarget, // #116

	EffectBuff, // #158 : Zone Weather
	EffectDebuff, // #158 : Zone Weather
	EffectDirect,
	EffectArea, // #68
	EffectKnockback, // #135
	EffectAirborne, // #135
	EffectStun, // #135

	Die, // #76
	Resurrect, // #76

	DebugAIStatus, // #164

	None,
};
