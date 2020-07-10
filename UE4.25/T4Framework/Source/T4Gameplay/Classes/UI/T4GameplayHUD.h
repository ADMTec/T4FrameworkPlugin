// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "GameFramework/HUD.h"
#include "T4Framework/Classes/T4HUDBase.h"
#include "T4GameplayHUD.generated.h"

/**
  * https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html
 */
class UTexture2D;
class ST4GameplayHUDWidget;
UCLASS()
class T4GAMEPLAY_API AT4GameplayHUD : public AT4HUDBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void DrawHUD() override; // #121 : Crosshair

	void SetCrosshairTexture(UTexture2D* InTexture) { CrosshairTexture = InTexture; } // #121
	void SetCrosshairTextureScale(float InScale) { Scale = InScale; }

protected:
	void NotifyBeginPlay() override;

protected:
	TSharedPtr<ST4GameplayHUDWidget> HUDWidgetPtr;

	UTexture2D* CrosshairTexture; // #121
	float Scale;
};
