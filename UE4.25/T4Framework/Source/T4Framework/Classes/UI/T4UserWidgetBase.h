// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Engine/Public/T4EngineLayer.h"
#include "Blueprint/UserWidget.h"
#include "T4UserWidgetBase.generated.h"

/**
  * #164
 */
class SWidget;
UCLASS()
class T4FRAMEWORK_API UT4UserWidgetBase : public UUserWidget
{
	GENERATED_UCLASS_BODY()

protected:
	virtual bool Initialize() override;
	virtual void BeginDestroy() override;

	virtual void AddToScreen(ULocalPlayer* LocalPlayer, int32 ZOrder) override;
	virtual void RemoveFromParent() override;

protected:
	ET4LayerType LayerType;

#if WITH_EDITOR
	TWeakPtr<SWidget> OverrideFullScreenWidgetPtr; // #164 : EditorViewportClient 지원
#endif
};
