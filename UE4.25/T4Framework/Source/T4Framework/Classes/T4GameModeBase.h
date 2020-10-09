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
static const FName T4Const_GameMainLayoutWidgetName = TEXT("QuestInfo"); // #164

static const FName T4Const_MainWidgetQuestTitleText = TEXT("QuestTitle"); // #164
static const FName T4Const_MainWidgetMissionTitleText = TEXT("MissionTitle"); // #164
static const FName T4Const_MainWidgetActiveMissionsText = TEXT("ActiveMissions"); // #164

static const FName T4Const_MainWidgetDialogueTitleText = TEXT("DialogueTitle"); // #163
static const FName T4Const_MainWidgetDialogueTalkText = TEXT("DialogueTalk"); // #163

static const FName T4Const_MainWidgetInventoryNoticeText = TEXT("InventoryNotice"); // #168
static const FName T4Const_MainWidgetInventoryStatusText = TEXT("InventoryStatus"); // #168

class UTexture2D;
class UUserWidget;
class AController;
class APlayerController;
class FDeferredCleanupSlateBrush;
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
	UFUNCTION(BlueprintCallable, Category = GameMode)
	ESlateVisibility GetTextVisibility(FName InKeyName) const; // #164

	UFUNCTION(BlueprintCallable, Category = GameMode)
	FText GetText(FName InKeyName) const; // #164

	UFUNCTION(BlueprintCallable, Category = GameMode)
	const FSlateBrush GetBrush(FName InKeyName) const; // #163

public:
	void SetTextInfo(FName InKeyName, const FText& InText, float InDelayTimeSec, float InDurationSec); // #164 : 0.0f >= InDurationSec ? Infinity
	void ClearTextInfo(FName InKeyName);

	void SetBrushInfo(FName InKeyName, UTexture2D* InImage, float InDelayTimeSec, float InDurationSec); // #164 : 0.0f >= InDurationSec ? Infinity
	void ClearBrushInfo(FName InKeyName); // #163

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

	struct FT4UserWidgetBrushInfo
	{
		const FSlateBrush* SlatBrushRef;
		TSharedPtr<FDeferredCleanupSlateBrush> DynamicBrushPtr;
		float TimeSec;
		float DurationSec;
	};
	TMap<FName, FT4UserWidgetBrushInfo> UserWidgetBrushInfoMap; // #163
};
