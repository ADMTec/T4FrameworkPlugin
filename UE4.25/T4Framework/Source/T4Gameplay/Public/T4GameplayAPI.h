// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayTypes.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4GameData/Public/T4GameDBTypes.h" // #48

/**
  * #151
 */
class T4GAMEPLAY_API FT4GameplayAPI
{
public:
	static FT4GameplayAPI& Get();

	FT4GameplayAPI();
	~FT4GameplayAPI();

	bool IsInitialized() const { return bInitialized; }

	void Initialize(const FName InProjectGameName); // #158
	void Finalize(); // #158

	void ReplayPlay(ET4LayerType InLayerType, FName InPlayAssetName, FName InFolderName, bool bInPlayerPossessed, bool bInPlayRepeat); // #68
	void ReplayRecording(ET4LayerType InLayerType, FName InRecAssetName, FName InFolderName); // #68

	void ReplayStop(ET4LayerType InLayerType, bool bInPlayStop, bool bInRecStop); // #68

	bool ReplayIsPlaying(ET4LayerType InLayerType); // #68
	bool ReplayIsRecording(ET4LayerType InLayerType); // #68

#if !UE_BUILD_SHIPPING
	void AddDevHotKey_PlayerHotKeyValue(int32 InKeyIndex, FName InPlayerDBKeyName);
	void AddDevHotKey_NPCHotKeyValue(int32 InKeyIndex, FName InNPCDBKeyName);
	void AddDevHotKey_WeaponHotKeyValue(int32 InKeyIndex, FName InWeaponDBKeyName);

	FName GetDevHotKey_PlayerHotKeyValue(int32 InHotKeyIndex); // #150
	FName GetDevHotKey_NPCHotKeyValue(int32 InHotKeyIndex); // #150
	FName GetDevHotKey_WeaponHotKeyValue(int32 InHotKeyIndex); // #150

	void SetDevHUD_PlayQuestUIDs(const TArray<uint32>& InUIDs) { DevHUD_PlayQuestUIDs = InUIDs; }
	void SetDevHUD_WorldTravelUIDs(const TArray<uint32>& InUIDs) { DevHUD_WorldTravelUIDs = InUIDs; }
	void SetDevHUD_PCSpawnUIDs(const TArray<uint32>& InUIDs) { DevHUD_PCSpawnUIDs = InUIDs; }
	void SetDevHUD_NPCSpawnUIDs(const TArray<uint32>& InUIDs) { DevHUD_NPCSpawnUIDs = InUIDs; }

	const TArray<uint32>& GetDevHUD_PlayQuestUIDs() const { return DevHUD_PlayQuestUIDs; } // #161 : HUD PlayContent UID
	const TArray<uint32>& GetDevHUD_WorldTravelUIDs() const { return DevHUD_WorldTravelUIDs; } // #161 : HUD WorldTravel UID
	const TArray<uint32>& GetDevHUD_PCSpawnUIDs() const { return DevHUD_PCSpawnUIDs; } // #161 : HUD PC Spawn UID
	const TArray<uint32>& GetDevHUD_NPCSpawnUIDs() const { return DevHUD_NPCSpawnUIDs; } // #161 : HUD NPC Spawn UID
#endif

private:
	bool bInitialized; // #158

#if !UE_BUILD_SHIPPING
	// #158 : T4GameplayUserSettings 에서 옮겨옮!
	TMap<int32, FName> DevHotKey_PlayerDBKeyNameMap; // Player QuickSpawn (ALT + 1 ~ 9)
	TMap<int32, FName> DevHotKey_NPCDBKeyNameMap; // #50 : NPC QuickSpawn (CTRL + 1 ~ 9)
	TMap<int32, FName> DevHotKey_WeaponDBKeyNameMap; // #45 : Equip Weapon (KEY 1 ~ 9)

	TArray<uint32> DevHUD_PlayQuestUIDs; // #161 : HUD PlayContent UID
	TArray<uint32> DevHUD_WorldTravelUIDs; // #161 : HUD WorldTravel UID
	TArray<uint32> DevHUD_PCSpawnUIDs; // #161 : HUD PC Spawn UID
	TArray<uint32> DevHUD_NPCSpawnUIDs; // #161 : HUD NPC Spawn UID
#endif
};