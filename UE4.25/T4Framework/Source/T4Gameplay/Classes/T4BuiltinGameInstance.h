// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Framework/Classes/T4GameInstanceBase.h"
#include "T4BuiltinGameInstance.generated.h"

/**
  * #150
 */
UCLASS(Transient, BlueprintType, Blueprintable)
class T4GAMEPLAY_API UT4BuiltinGameInstance : public UT4GameInstanceBase
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "T4Game")
	TArray<FString>& GetStartQuestList() { return QuestTitles; } // #161

	UFUNCTION(BlueprintCallable, Category = "T4Game")
	void SetStartQuestSelected(FString InQuestTitle); // #161

	UFUNCTION(BlueprintCallable, Category = "T4Game")
	TArray<FString>& GetCharacterClassNameList() { return PlayerTitles; } // #161

	UFUNCTION(BlueprintCallable, Category = "T4Game")
	void SetCharacterClassSelected(FString InClassName); // #161

	UFUNCTION(BlueprintCallable, Category = "T4Game")
	void ReplayPlay(); // #150

	UFUNCTION(BlueprintCallable, Category = "T4Game")
	void ReplayStop(); // #150

	UFUNCTION(BlueprintCallable, Category = "T4Game")
	void ToggleQuickMenu(); // #151

protected:
	virtual void NotifyInit() override;
	virtual void NotifyShutdown() override;

protected:
	TArray<FString> QuestTitles; // #161
	TArray<FString> PlayerTitles; // #161

	FName QuestDBKeyNameSelected;
	FName PlayerDBKeyNameSelected;
};
