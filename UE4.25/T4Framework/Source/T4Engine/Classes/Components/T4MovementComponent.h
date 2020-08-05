// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4Engine.h"
#include "GameFramework/PawnMovementComponent.h"
#include "T4MovementComponent.generated.h"

/**
  * #136
 */
enum ET4MovementMode
{
	Move_None,
	Move_Walking,
	Move_Falling,
	Move_Custom,
};

UCLASS()
class T4ENGINE_API UT4MovementComponent : public UPawnMovementComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

	void OnRegister() override; // #149

	float GetMaxSpeed() const override;
	void StopActiveMovement() override;

	bool IsFalling() const override;
	bool IsMovingOnGround() const override;

	// #144 : NPCAIController 는 PathFollowingComponent 를 통해 PawnActor 의 MovemenComponent::RequestDirectMove 를
	//        호출해 NPC를 이동한다. T4Framework 는 Packet 을 통해 이동 처리를 함으로 RequestDirectMove 를 무력화하고
	//        MoveSync Packet 을 RequestMoveSync 을 통해 이동할 수 있도록 처리하였다.
	//        즉, Replication 에 의존한 언리얼 구조에서 탈피하기 위한 것!
	void RequestDirectMove(const FVector& InMoveVelocity, bool bInForceMaxSpeed) override {} // #144 : Skip
	void RequestMoveSync(const FVector& InMoveVelocity); // #144

public:
	void Init(ET4LayerType InLayerType, const FT4ActorID& InActorID);

	bool IsSpecialMoves() const;

	bool DoCustom(bool bInEnabled); // #132

protected:
	void BeginPlay() override;

private:
	void PerformMovement(float InDeltaTime);
	void ProcessWalking(float InDeltaTime, int32 InIterations);
	void ProcessFalling(float InDeltaTime, int32 InIterations);

	void AdjustMovement(float InDeltaTime, int32 InIterations);

	void SimulatedTick(float InDeltaTime);

	bool IsMovementMode(ET4MovementMode InMovementMode) const { return (InMovementMode == MovementMode) ? true : false; }
	void SetMovementMode(ET4MovementMode InMovementMode);

	bool FindFloor(FT4HitSingleResult& OutHitResult);
	bool FloorSweepTest(const FVector& InStart, const FVector& InEnd, FT4HitSingleResult& OutHitResult);

	float GetSimulationTimeStep(float InRemainingTime, int32 InIterations) const;
	FVector NewFallVelocity(const FVector& InInitialVelocity, const FVector& InGravity, float InDeltaTime) const;

	IT4WorldSystem* GetWorldSystem();
	IT4WorldCollision* GetWorldCollision();
	IT4WorldActor* GetOwnerActor();

public:
	ET4LayerType LayerType;
	FT4ActorID OwnerActorID;

	ET4MovementMode MovementMode;

	float MaxMoveSpeed;
	FVector Acceleration;

	bool bHasRequestedVelocity;
	FVector RequestedVelocity;
};
