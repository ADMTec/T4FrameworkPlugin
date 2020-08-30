// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayTypes.h"
#include "UI/T4BuiltinUserWidget.h"
#include "T4Framework/Public/T4FrameworkTypes.h" // #126
#include "GameFramework/PlayerInput.h" // #104
#include "Engine/DeveloperSettings.h"
#include "T4GameplaySettings.generated.h"

/**
  * #43 : Plugins/T4Framework/Config/DefaultT4Framework.ini
 */
class UDataTable;
class UTexture2D;
UCLASS(config = T4Framework, meta = (DisplayName = "T4Gameplay"))
class T4GAMEPLAY_API UT4GameplaySettings : public UDeveloperSettings
{
public:
	GENERATED_UCLASS_BODY()

	// Begin UDeveloperSettings Interface
	FName GetCategoryName() const override;
#if WITH_EDITOR
	FText GetSectionText() const override;
#endif
	// END UDeveloperSettings Interface

#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnGameplaySettingsChanged, const FString&, const UT4GameplaySettings*);

	static FT4OnGameplaySettingsChanged& OnSettingsChanged();
#endif

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini
	UPROPERTY(EditAnywhere, config, Category = "Game DB")
	TSoftObjectPtr<UDataTable> DefaultGameMasterTablePath; // #48, #135

	UPROPERTY(EditAnywhere, config, Category = "Game DB")
	FName DefaultGameContentName; // #135 : def = Default

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	TSubclassOf<UT4BuiltinUserWidget> DefaultUserWidgetClass;

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	ET4ControlModeType DefaultControlMode;

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	ET4ControlModeType MobileControlMode;

	UPROPERTY(config, EditAnywhere, Category = "Game Mode")
	FSoftObjectPath LeftVirtualKoysticksPath; // #151

	UPROPERTY(config, EditAnywhere, Category = "Game Mode")
	FSoftObjectPath DefaultVirtualKoysticksPath; // #151

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	TSoftObjectPtr<UTexture2D> DefaultCrosshairTexturePath; // #121

	UPROPERTY(EditAnywhere, config, Category = "Game Mode")
	float DefaultCrosshairTextureScale;

	UPROPERTY(EditAnywhere, config, Category = "Indicator Outline")
	FLinearColor IndicatorDefaultSelectOutlineColor; // #115

	UPROPERTY(EditAnywhere, config, Category = "Indicator Outline")
	FLinearColor IndicatorAttackTargetOutlineColor; // #115

	UPROPERTY(EditAnywhere, config, Category = "Game Control")
	float ControlCameraPitchMinAngle; // #151

	UPROPERTY(EditAnywhere, config, Category = "Game Control")
	float ControlCameraPitchMaxAngle; // #151

	UPROPERTY(EditAnywhere, config, Category = "Game Control")
	float ControlGamepadRightYAttenuation; // #153

	UPROPERTY(EditAnywhere, config, Category = "Gameplay Network")
	float DefaultNetworkLatencySec; // #52

	UPROPERTY(config, EditAnywhere, Category = "Bindings")
	TArray<FInputActionKeyMapping> ActionMappings;

	UPROPERTY(config, EditAnywhere, Category = "Bindings")
	TArray<FInputAxisKeyMapping> AxisMappings;

protected:
#if WITH_EDITOR
	static FT4OnGameplaySettingsChanged SettingsChangedDelegate;
#endif
};