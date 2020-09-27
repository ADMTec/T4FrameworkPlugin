// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionTypes.generated.h"

/**
  * #134
 */
UENUM()
enum class ET4ActionCommandType : uint32
{
	// #62 : Start Code Format

	// begin World

	WorldTravel,
	WorldTimeSync, // #146

	WorldSpawn,
	WorldDespawn,

	// begin Object / #68 : #T4_ADD_ACTION_TAG_CMD

	MoveAsync, // #40
	MoveSync, // #40
	MoveStop, // #52
	MoveSpeedSync, // #52
	MoveSegments, // #161

	Jump,
	Teleport,
	Rotation, // #137 : WorldActor 회전 (C/S 동기화!)
	Turn, // #131 : 캐릭터의 회전 연출(애니) 처리

	Aim, // #113
	LockOn,

	AnimSet, // #73
	Stance, // #106

	EquipWeapon, // #22
	UnequipWeapon, // #48
	Costume, // #37
	Skin, // #130 : Fullbody Skin

	Hit, // #76

	CrowdControl, // #131
	Die, // #76
	Resurrect, // #76
	ReactionStop, // #132

	ActionPack, // #24, #127 : ActionPackAsset

	Stop,

	// begin Editor
	Editor, // #37

	// #62 : End Code Format

	None,
};
