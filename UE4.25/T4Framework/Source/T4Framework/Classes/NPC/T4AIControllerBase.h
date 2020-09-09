// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"

#include "T4Framework.h" // #25, #42

#include "T4Engine/Public/T4Engine.h"

#include "AIController.h"
#include "T4AIControllerBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */

enum ET4AIDataLoadState // #50
{
	AIDataLoad_Ready,
	AIDataLoad_Loading,
	AIDataLoad_Loaded,
	AIDataLoad_NoData,
};

UCLASS()
class T4FRAMEWORK_API AT4AIControllerBase : public AAIController, public IT4AIControllerBase
{
	GENERATED_UCLASS_BODY()

public:
	void TickActor(float InDeltaTime, enum ELevelTick InTickType, FActorTickFunction& InThisTickFunction) override;

	/** If true, actor is ticked even if TickType==LEVELTICK_ViewportsOnly	 */
	bool ShouldTickIfViewportsOnly() const override; // #17

	void EndPlay(const EEndPlayReason::Type InEndPlayReason) override;

	FPathFollowingRequestResult MoveTo(const FAIMoveRequest& MoveRequest, FNavPathSharedPtr* OutPath = nullptr) override; // #144

	void StopMovement() override; // #144
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override; // #34, #144

	void HandleOnPostProcessMove(UPathFollowingComponent* InComponent, FVector& InVelocity); // #144

protected:
	void BeginPlay() override;

	// Begin AController interface
	void GameHasEnded(class AActor* EndGameFocus = NULL, bool bIsWinner = false) override;
	void OnPossess(class APawn* InPawn) override;
	void OnUnPossess() override;
	void BeginInactiveState() override;
	// End AController interface

public:
	// IT4ObjectController
	ET4LayerType GetLayerType() const override { return LayerType; }
	ET4ControllerType GetType() const override { return ET4ControllerType::NPC; } // #114

	bool SetPossessActor(const FT4ActorID& InNewTargetID) override;
	void ResetPossessActor(bool bInSetDefaultPawn) override;

	bool HasPossessActor() const override  { return ControlActorID.IsValid(); }
	const FT4ActorID& GetPossessActorID() const override { return ControlActorID; }
	IT4WorldActor* GetPossessActor() const override;

	bool HasObserverActor() const override { return false; } // #52
	bool SetObserverActor(const FT4ActorID& InNewObserverID) override { return false; } // #52 : 서버는 필요없다!
	void ClearObserverActor() override {} // #52 : 서버는 필요없다!

#if WITH_EDITOR
	bool IsFreeCameraModeEnabled() const override { return false; } // #133
	void SetFreeCameraMode(bool bInEnable) override {} // #133
#endif

	bool HasAction(const FT4ActionKey& InActionKey) const override; // #20
	bool IsPlayingAction(const FT4ActionKey& InActionKey) const override; // #20 : Playing 중인지를 체크. Paused 면 False 가 리턴됨!

	AController* GetAController() override;
	APlayerCameraManager* GetCameraManager() const override { return nullptr; } // #100

	IT4WorldSystem* GetWorldSystem() const override; // #52
	UT4GameObjectBase* GetGameObjectBase() const override; // #114

public:
	// IT4AIControllerBase
	const FT4ObjectID& GetGameObjectID() const override { return GameObjectID; }
	void SetGameObjectID(const FT4ObjectID& InObjectID) override { check(InObjectID.IsValid()); GameObjectID = InObjectID; }

	virtual AAIController* GetAIController() override; // #104

public:
	IT4WorldActor* FindWorldActor(const FT4ActorID& InActorID) const; // #104

protected:
	virtual void NotifyAdvance(float InDeltaTime) {} // #114
	virtual void NotifyBeginPlay() {} // #50
	virtual void NotifyEndPlay() {} // #50
	virtual void NotifyAIStart() {} // #50
	virtual void NotifyAIEnd() {} // #50

	virtual void NotifyMoveStart(const FVector& InGoalLocation) {} // #42, #34, #52, #144
	virtual void NotifyMoveStop() {} // #52, #144

protected:
	ET4LayerType LayerType;

	FT4ObjectID GameObjectID; // #15
	FT4ActorID ControlActorID;
};
