// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Framework/Classes/T4GameModeBase.h"
#include "T4GameplayGameMode.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */
class AController;
UCLASS()
class T4GAMEPLAY_API AT4GameplayGameMode : public AT4GameModeBase
{
	GENERATED_UCLASS_BODY()

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
