// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayTypes.h"
#include "T4GameplayStructs.h"

#include "T4Asset/Public/Entity/T4EntityKey.h" // #114
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4GameData/Public/T4GameDBTypes.h" // #48

/**
  * #151
 */
struct FT4EquipWeaponActionCommand; // #169
class UT4SpawnAsset;
class IT4PlayerController;
class UT4GameClientObject;
class T4GAMEPLAY_API FT4GameplayStatics
{
public:
	static FT4GameplayStatics& Get();

	FT4GameplayStatics();
	~FT4GameplayStatics();

	IT4PlayerController* GetPlayerController(ET4LayerType InLayerType) const;
	UT4GameClientObject* GetPlayerClientObject(ET4LayerType InLayerType) const;

	float GeMaxMoveSpeedByStance(const FT4GameDBKey& InDBKey, FName InStanceName);
	bool GetJumpProperties(const FT4GameDBKey& InDBKey, float& OutJumpMaxHeight, float& OutJumpHeightSpeed);
	bool GetSkillSetInfo(const FT4SkillSetDBKey& InDBKey, FT4GameplaySkillSetInfo& OutSkillSetInfo);

	bool MakeEquipWeaponActionCommand(const FT4WeaponDBKey& InDBKey, FT4EquipWeaponActionCommand* OutActionCommand); // #169

	bool DoExecuteByUID(ET4LayerType InLayerType, const FT4GameUID& InGameUID); // #150

	bool DoMissionStart(ET4LayerType InLayerType, const FT4GameDBKey& InQuestDBKey); // #146 : 월드 이동과 재스폰까지 처리
	bool DoContentCompleted(ET4LayerType InLayerType, ET4GameQuestTarget InQuestTarget, const FGuid& InQuestKey); // #164
#if WITH_EDITOR
	bool DoContentStopAll(ET4LayerType InLayerType);
#endif

	bool DoWorldTravel(ET4LayerType InLayerType, const FT4GameDBKey& InWorldDBKey); // #144

	bool DoSpawnPlayer(ET4LayerType InLayerType, const FT4GameDBKey& InPlayerDBKey, bool bInRandomLocation); // #43
	bool DoSpawnPlayer(ET4LayerType InLayerType,const FT4GameDBKey& InPlayerDBKey, const FVector& InLocation, const FRotator& InRotation); // #126

	bool DoSpawnNPCRandom(ET4LayerType InLayerType, bool bInRandomLocation); // #43
	bool DoSpawnNPC(ET4LayerType InLayerType, const FT4GameDBKey& InNPCDBKey, bool bInRandomLocation); // #43
	bool DoSpawnNPC(
		ET4LayerType InLayerType,
		const FT4GameDBKey& InNPCDBKey,
		const FVector& InLocation,
		const FRotator& InRotation,
		const FT4ObjectID& InReservedObjectID // #118
	); // #60

	bool DoSpawnWeapon(
		ET4LayerType InLayerType,
		const FT4GameDBKey& InWeaponBKey,
		const FVector& InLocation,
		const FRotator& InRotation,
		const FT4ObjectID& InReservedObjectID // #118
	); // #158

	bool DoSpawnCostume(
		ET4LayerType InLayerType,
		const FT4GameDBKey& InWeaponBKey,
		const FVector& InLocation,
		const FRotator& InRotation,
		const FT4ObjectID& InReservedObjectID // #118
	); // #158

#if WITH_EDITOR
	bool DoSpawn(ET4LayerType InLayerType, UT4SpawnAsset* InSpawnAsset); // #126
	bool DoSpawnBy(
		ET4LayerType InLayerType,
		UT4SpawnAsset* InSpawnAsset,
		const FName& InSpawnActorID,
		const FT4ObjectID& InReservedObjectID
	); // #126
#endif

	bool DoDespawn(ET4LayerType InLayerType, const FT4ObjectID& InObjectID); // #114
	bool DoDespawnAll(ET4LayerType InLayerType, bool bClearPlayerActor); // #68

#if WITH_EDITOR
	// #114 : 툴에서만 호출됨!! Server 류는 Entity 정보가 테이블에 있기 때문에 테이블 데이터 없이 스폰하기 위한 처리임!
	// #134 : 툴용도의 Server Send => Client Recv 대체 처리. 즉, 아래 코드에서 C/S 모드를 처리하고 있음에 유의!!
	bool DoSpawnEditor(
		ET4LayerType InLayerType,
		const FT4ObjectID& InReservedObjectID, // #134 : GetPlayerController()->GetObjectID() 로 비교해 Player 를 판단한다.
		const FT4EntityKey& InEntityKey,
		const FVector& InLocation,
		const FRotator& InRotation,
		bool bInClientOnly
	);
	bool DoDespawnEditor(ET4LayerType InLayerType, const FT4ObjectID& InObjectID, bool bInClientOnly);
#endif

	bool DoChangeAnimSet(ET4LayerType InLayerType, FName InAnimSetName);// #73, #114
	bool DoChangeStance(ET4LayerType InLayerType, FName InStanceName); // #106, #109, #114

	bool DoEquipWeapon(ET4LayerType InLayerType, const FT4GameDBKey& InWeaponDBKey, bool bUnequip, bool bInMainWeapon); // #48
};