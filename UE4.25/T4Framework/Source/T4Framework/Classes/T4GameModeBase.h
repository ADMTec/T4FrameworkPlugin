// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "GameFramework/GameMode.h"
#include "T4GameModeBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/
 */

UCLASS()
class T4FRAMEWORK_API AT4GameModeBase : public AGameMode
{
	GENERATED_UCLASS_BODY()
	
public:
	void StartPlay() override;
	void StartToLeaveMap() override;

	void ProcessServerTravel(const FString& URL, bool bAbsolute) override; // #144

	void PreLogin(
		const FString& Options, 
		const FString& Address, 
		const FUniqueNetIdRepl& UniqueId, 
		FString& ErrorMessage
	) override; // #146

	void PostLogin(APlayerController* NewPlayer) override; // #146
	void Logout(AController* Exiting) override; // #146

protected:
	virtual void NotifyStartPlay() {}
	virtual void NotifyStartToLeaveMap() {}

	virtual void NotifyServerTravel(const FString& URL, bool bAbsolute) {}

	virtual bool NotifyPreLogin(
		const FString& Options,
		const FString& Address,
		const FUniqueNetIdRepl& UniqueId,
		FString& ErrorMessage
	)
	{
		return true; // #146
	}
	virtual void NotifyPostLogin(APlayerController* NewPlayer) {} // #146
	virtual void NotifyLogout(AController* Exiting) {} // #146
};
