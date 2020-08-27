// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayUserSettings.generated.h"

/**
  * #150
 */
class UDataTable;
UCLASS(config = T4Framework)
class T4GAMEPLAY_API UT4GameplayUserSettings : public UObject
{
	GENERATED_BODY()

public:
	UT4GameplayUserSettings();

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini
	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	TArray<FName> PlayerDBKeyNames;

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	TArray<FName> NPCDBKeyNames; // #50
	
	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	TArray<FName> WeaponDBKeyNames; // #45

	UPROPERTY(EditAnywhere, config, Category = "HUD PlayContent UID")
	TArray<uint32> PlayContentUIDs; // #161

	UPROPERTY(EditAnywhere, config, Category = "HUD WorldTravel UID")
	TArray<uint32> WorldTravelUIDs; // #161

	UPROPERTY(EditAnywhere, config, Category = "HUD PC Spawn UID")
	TArray<uint32> PCSpawnUIDs; // #161

	UPROPERTY(EditAnywhere, config, Category = "HUD NPC Spawn UID")
	TArray<uint32> NPCSpawnUIDs; // #161

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};