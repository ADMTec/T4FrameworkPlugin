// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Framework/Classes/T4GameModeBase.h"
#include "T4GameplayMode.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
class AController;
UCLASS()
class T4GAMEPLAY_API AT4GameplayMode : public AT4GameModeBase
{
	GENERATED_UCLASS_BODY()

public:
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	void InitGameState() override;

protected:
	void NotifyStartPlay() override; // #144
	void NotifyServerTravel(const FString& URL, bool bAbsolute) override; // #144

	bool NotifyPreLogin(
		const FString& Options,
		const FString& Address,
		const FUniqueNetIdRepl& UniqueId,
		FString& ErrorMessage
	) override // #146
	{
		return true; // #146
	}
	void NotifyPostLogin(APlayerController* NewPlayer) override {} // #146
	void NotifyLogout(AController* Exiting) override {} // #146
};
