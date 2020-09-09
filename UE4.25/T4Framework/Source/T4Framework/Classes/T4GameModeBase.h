// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Engine/Public/T4EngineLayer.h"
#include "GameFramework/GameMode.h"
#include "T4GameModeBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

static const FName T4Const_GameModeDefaultWidgetName = TEXT("Default"); // #164
static const FName T4Const_NotificationWidgetName = TEXT("Notification"); // #164

class UUserWidget;
class APlayerController;
UCLASS(Transient, BlueprintType, Blueprintable)
class T4FRAMEWORK_API AT4GameModeBase : public AGameMode
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
	void StartToLeaveMap() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Lobby")
	FText GetNotificationText() const; // #164

	void SetNotificationText(const FText& InNotificationText);

	bool HasUserWidget(FName InWidgetName); // #164
	UUserWidget* GetUserWidget(FName InWidgetName);
	bool AddUserWidget(FName InWidgetName, TSubclassOf<UUserWidget> InWidgetClass, bool bInShow);
	void RemoveUserWidget(FName InWidgetName);
	void ShowUserWidget(FName InWidgetName, bool bInShow); // #164

protected:
	virtual void NotifyStartPlay() {}
	virtual void NotifyStartToLeaveMap() {}

	APlayerController* GetLocalPlayerController(UObject* InWorldContextObject);

protected:
	UPROPERTY()
	TMap<FName, UUserWidget*> UserWidgetMap; // #164

protected:
	ET4LayerType LayerType;
	FText NotificationText; // #164
};
