// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"

/**
  * #114
 */
class IT4PlayerController;
struct FT4GamePacketSC_Base;
class T4GAMEPLAY_API IT4ClientPacketHandler
{
public:
	virtual ~IT4ClientPacketHandler() {}

#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4GameplayMinimal.h)
	virtual bool RPC_SC_SendPacket(IT4PlayerController* InRecvPC, FT4GamePacketSC_Base* InPacket) = 0;
	virtual bool RPC_SC_BroadcastPacket(FT4GamePacketSC_Base* InPacket) = 0; // #50
#endif

	virtual bool OnProcessPacket(const FT4GamePacketSC_Base* InPacket) = 0; // #146 : for server
};

struct FT4GamePacketCS_Base;
class T4GAMEPLAY_API IT4ServerPacketHandler
{
public:
	virtual ~IT4ServerPacketHandler() {}

	virtual bool RPC_CS_SendPacket(FT4GamePacketCS_Base* InPacket) = 0; // Client, Reliable

	virtual bool OnRecvPacket_Validation(const FT4GamePacketCS_Base* InPacket) = 0;
	virtual bool OnRecvPacket(const FT4GamePacketCS_Base* InPacket, IT4PlayerController* InSenderPC) = 0;

#if WITH_EDITOR
	// #140 : Content Editor 에서 Packet 전송 처리 (툴용)
	// WARN : RPC 처리는 World Iteration 순서에 맞아 정상 전달이 됨으로 Queue 에 넣고, Server World 시점에 전송한다.
	virtual bool OnAddPacketQueue(const FT4GamePacketCS_Base* InPacket) = 0;
	virtual void FlushPacketQueue() = 0;
#endif
};

T4GAMEPLAY_API IT4ClientPacketHandler* GetClientPacketHandler(ET4LayerType InLayerType); // #49
T4GAMEPLAY_API IT4ServerPacketHandler* GetServerPacketHandler(ET4LayerType InLayerType); // #114