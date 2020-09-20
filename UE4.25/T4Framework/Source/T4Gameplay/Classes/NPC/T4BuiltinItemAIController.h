// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "T4GameplayTypes.h"

#include "T4Framework/Classes/NPC/T4AIControllerBase.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "T4BuiltinItemAIController.generated.h"

/**
  * WARN : AI Controller 는 서버에서만 사용하고, 클라리언트에서는 사용하지 않음에 유의할 것!
  * #161
 */
class UBehaviorTree;
class IT4WorldActor;
class UT4ItemServerObject;
class FT4BehaviorTreeAssetLoader;
UCLASS()
class T4GAMEPLAY_API AT4BuiltinItemAIController : public AT4AIControllerBase
{
	GENERATED_UCLASS_BODY()

public:
	void UpdateBTService(float InDeltaTime) override; // #114 : from BTTree

	bool CheckCancelWaitTask();

public:
	bool Bind(const FT4GameDBKey& InItemDBKey); // #31, #50

	UT4ItemServerObject* GetServerObject() const; // #114
	IT4ObjectController* GetObjectController(const FT4ObjectID& InObjectID) const; // #114

protected:
	void NotifyAdvance(float InDeltaTime) override; // #114
	void NotifyBeginPlay() override; // #50
	void NotifyEndPlay() override; // #50
	void NotifyAIStart() override; // #50
	void NotifyAIEnd() override; // #50

	void NotifyMoveStart(const FVector& InGoalLocation) override; // #42, #34, #52, #144
	void NotifyMoveStop() override; // #52, #144

private:
	bool CheckAsyncLoading();

private:
	ET4AIDataLoadState AIDataLoadState; // #50 // TODO : 이후 서버라면 Sync Load 하도록 처리할 것!
	FT4BehaviorTreeAssetLoader* BehaviorTreeAssetLoader; // TODO : 이후 서버라면 Sync Load 하도록 처리할 것!

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTree* BehaviorTreeAsset;
};
