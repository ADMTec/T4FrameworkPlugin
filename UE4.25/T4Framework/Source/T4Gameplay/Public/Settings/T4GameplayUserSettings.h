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
	FName PlayerDBKeyName_Key1;
	
	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key2;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key3;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key4;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key5;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key6;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key7;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key8;

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDBKeyName_Key9;

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key1; // #50
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key2;

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key3; // #104
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key4; // #104

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key5; // #109
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key6; // #109

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key7; // #112

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key8; // #112

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDBKeyName_Key9; // #112

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key1; // #45

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key2; // #48

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key3; // #109

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key4; // #109

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key5; // #109

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key6; // #109

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key7; // #109

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key8; // #109

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (KEY 1 ~ 9)")
	FName WeaponDBKeyName_Key9; // #109

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};