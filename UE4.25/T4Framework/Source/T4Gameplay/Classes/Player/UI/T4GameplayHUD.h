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
class ST4GameplayOverlayWidget;
UCLASS()
class T4GAMEPLAY_API AT4GameplayHUD : public AT4HUDBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void DrawHUD() override; // #121 : Crosshair

public:
	void ShowCrosshair(bool bInShow) { bShowCrosshair = bInShow; } // #151 : HUD 와 Crosshair 분리!

	void ResetCrosshairTexture();

	void SetCrosshairTexture(const FSoftObjectPath& InObjectPath); // #121
	void SetCrosshairTextureScale(float InScale) { CrosshairScale = InScale; }

protected:
	void NotifyBeginPlay() override;

private:
	void DrawCrosshair(); // #151 : HUD 와 Crosshair 분리!

public:
	UPROPERTY(EditAnywhere, Transient, Category = HUD)
	UTexture2D* CrosshairTexture; // #121

protected:
	TSharedPtr<ST4GameplayOverlayWidget> OverlayWidgetPtr;
	bool bShowCrosshair; // #151 : HUD 와 Crosshair 분리!
	float CrosshairScale;
};
