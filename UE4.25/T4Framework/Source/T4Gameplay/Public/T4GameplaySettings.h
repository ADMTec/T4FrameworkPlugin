// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayTypes.h"
#include "T4Framework/Public/T4FrameworkTypes.h" // #126
#include "GameFramework/PlayerInput.h" // #104
#include "T4GameplaySettings.generated.h"

/**
  * #43 : Plugins/T4Framework/Config/DefaultT4Framework.ini
 */
class UDataTable;
class UTexture2D;
UCLASS(config = T4Framework, defaultconfig)
class T4GAMEPLAY_API UT4GameplaySettings : public UObject
{
	GENERATED_BODY()

public:
	UT4GameplaySettings();

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini
	UPROPERTY(EditAnywhere, config, Category = "Game ContentName")
	FName GameContentName; // #135 : def = Default

	UPROPERTY(EditAnywhere, config, Category = "Game Data Table")
	TSoftObjectPtr<UDataTable> GameMasterTablePath; // #48, #135

	UPROPERTY(config, EditAnywhere, Category = "Game Constant Table")
	FSoftObjectPath RacesConstantTablePath; // #114

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	ET4ControlModeType DefaultControlMode;

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	TSoftObjectPtr<UTexture2D> DefaultCrosshairTexturePath; // #121

	UPROPERTY(EditAnywhere, config, Category = "Indicator Outline")
	FLinearColor IndicatorDefaultSelectOutlineColor; // #115

	UPROPERTY(EditAnywhere, config, Category = "Indicator Outline")
	FLinearColor IndicatorAttackTargetOutlineColor; // #115

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDataRowName_Key1;
	
	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDataRowName_Key2;

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key0; // #146

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key1; // #50
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key2;

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key3; // #104
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key4; // #104

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key5; // #109
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key6; // #109

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key7; // #112

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key8; // #112

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (Player Spawned + 1 ~ 9)")
	FName WeaponDataRowName_Key1; // #45

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (Player Spawned + 1 ~ 9)")
	FName WeaponDataRowName_Key2; // #48

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (Player Spawned + 1 ~ 9)")
	FName WeaponDataRowName_Key3; // #109

	UPROPERTY(EditAnywhere, config, Category = "Gameplay Network")
	float DefaultNetworkLatencySec; // #52

	UPROPERTY(config, EditAnywhere, Category = "Bindings")
	TArray<FInputActionKeyMapping> ActionMappings;

	UPROPERTY(config, EditAnywhere, Category = "Bindings")
	TArray<FInputAxisKeyMapping> AxisMappings;

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};