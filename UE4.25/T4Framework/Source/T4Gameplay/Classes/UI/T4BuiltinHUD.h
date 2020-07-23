// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "GameFramework/HUD.h"
#include "T4Framework/Classes/HUD/T4GameHUDBase.h"
#include "T4BuiltinHUD.generated.h"

/**
  * https://docs.unrealengine.com/ko/Gameplay/Framework/UIAndHUD/index.html
 */
class UTexture2D;
class ST4BuiltinHUDWidget;
UCLASS()
class T4GAMEPLAY_API AT4BuiltinHUD : public AT4GameHUDBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void DrawHUD() override; // #121 : Crosshair

public:
	bool IsShownHUDWidget() const;
	void ShowHUDWidget(bool bInShow);

	void ShowCrosshair(bool bInShow) { bShowCrosshair = bInShow; } // #151 : HUD 와 Crosshair 분리!

	void ResetCrosshairTexture();

	void SetCrosshairTexture(const FSoftObjectPath& InObjectPath); // #121
	void SetCrosshairTextureScale(float InScale) { CrosshairScale = InScale; }

protected:
	virtual void NotifyBeginPlay() override;
	virtual void NotifyEndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	void DrawCrosshair(); // #151 : HUD 와 Crosshair 분리!

public:
	UPROPERTY(EditAnywhere, Transient, Category = HUD)
	UTexture2D* CrosshairTexture; // #121

protected:
	TSharedPtr<ST4BuiltinHUDWidget> HUDWidgetPtr;
	bool bShowCrosshair; // #151 : HUD 와 Crosshair 분리!
	float CrosshairScale;
};
