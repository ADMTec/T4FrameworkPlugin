// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "T4GameplayTypes.h"
#include "T4GameDBTypes.h" // #48

#include "T4Framework/Classes/Controller/AI/T4AIControllerBase.h"
#include "T4NPCAIController.generated.h"

/**
  * WARN : AI Controller 는 서버에서만 사용하고, 클라리언트에서는 사용하지 않음에 유의할 것!
  * #114
 */
class UBehaviorTree;
class IT4WorldActor;
class UT4NPCServerObject;
class FT4BehaviorTreeAssetLoader;
UCLASS()
class T4GAMEPLAY_API AT4NPCAIController : public AT4AIControllerBase
{
	GENERATED_UCLASS_BODY()

public:
	void AIUpdate(float InDeltaTime); // #114 : from BTTree

	bool CheckCancelWaitTask();

public:
	bool Bind(const FT4GameDBKey& InNPCDBKey); // #31, #50

	UT4NPCServerObject* GetServerObject() const; // #114
	IT4ObjectController* GetObjectController(const FT4ObjectID& InObjectID) const; // #114

protected:
	void NotifyAdvance(float InDeltaTime) override; // #114
	void NotifyBeginPlay() override; // #50
	void NotifyEndPlay() override; // #50
	void NotifyAIStart() override; // #50
	void NotifyAIEnd() override; // #50

	void NotifyMoveTo(const FVector& InMoveVelocity, bool bInForceMaxSpeed) override; // #42, #34, #52, #144 : MovementComponet::MaxSpeed 를 사용할지에 대한 Flag, 기본값이 false 로 Velocity 에서 Speed 를 얻는다. 동기화 이슈!!
	void NotifyMoveStop() override; // #52, #144

private:
	bool CheckAsyncLoading();

private:
	ET4AIDataLoadState AIDataLoadState; // #50
	FT4BehaviorTreeAssetLoader* BehaviorTreeAssetLoader;

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTree* BehaviorTreeAsset;
};
