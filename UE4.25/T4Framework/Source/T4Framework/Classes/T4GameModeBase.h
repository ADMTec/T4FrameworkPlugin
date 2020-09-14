// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Engine/Public/T4EngineLayer.h"
#include "GameFramework/GameMode.h"
#include "T4GameModeBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

// TEMP
static const FName T4Const_GameModeLayoutWidgetName = TEXT("Default"); // #164
static const FName T4Const_QuestInfoWidgetName = TEXT("QuestInfo"); // #164

static const FName T4Const_QuestInfoWidgetStartTitleText = TEXT("QuestStartTitle"); // #164
static const FName T4Const_QuestInfoWidgetCompletedTitleText = TEXT("QuestCompletedTitle"); // #164
static const FName T4Const_QuestInfoWidgetSubTitleText = TEXT("QuestSubTitle"); // #164
static const FName T4Const_QuestInfoWidgetSubBodyText = TEXT("QuestSubBody"); // #164

class UUserWidget;
class AController;
class APlayerController;
UCLASS(Transient, BlueprintType, Blueprintable)
class T4FRAMEWORK_API AT4GameModeBase : public AGameMode
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
	void StartToLeaveMap() override;

	void Tick(float DeltaSeconds) override; // #164

public:
	// #164 : GameMode 외 다른 곳으로 옮긴다. 임시 사용 (TODO)
	UFUNCTION(BlueprintCallable, Category = TextMap)
	ESlateVisibility GetTextVisibility(FName InKeyName) const; // #164

	UFUNCTION(BlueprintCallable, Category = TextMap)
	FText GetText(FName InKeyName) const; // #164

	void SetTextInfo(FName InKeyName, const FText& InText, float InDelayTimeSec, float InDurationSec); // #164 : 0.0f >= InDurationSec ? Infinity
	void ClearTextInfo(FName InKeyName);

	bool HasUserWidget(FName InWidgetName); // #164
	UUserWidget* GetUserWidget(FName InWidgetName);
	bool RegisterUserWidget(FName InWidgetName, TSubclassOf<UUserWidget> InWidgetClass, bool bInShow);
	void UnregisterUserWidget(FName InWidgetName);
	void UnregisterUserWidgets(); // #164
	void ShowUserWidget(FName InWidgetName, bool bInShow, int32 ZOrder); // #164

protected:
	virtual void NotifyStartPlay() {}
	virtual void NotifyStartToLeaveMap() {}

	APlayerController* GetLocalPlayerController(UObject* InWorldContextObject);

protected:
	UPROPERTY()
	TMap<FName, UUserWidget*> UserWidgetMap; // #164

protected:
	ET4LayerType LayerType;

	struct FT4UserWidgetTextInfo
	{
		FText Text;
		float TimeSec;
		float DurationSec;
	};
	TMap<FName, FT4UserWidgetTextInfo> UserWidgetTextInfoMap; // #164
};
