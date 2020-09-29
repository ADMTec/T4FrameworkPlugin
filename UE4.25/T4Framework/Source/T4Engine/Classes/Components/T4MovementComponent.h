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
	Move_Ready,

	Move_Walking,
	Move_Falling,
	Move_Custom,

	Move_None,
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

	void StartGame();  // #161 : 로딩 단계에서는 스폰 위치에 그대로 유지하도록 처리.로딩이 완료되거나, 이동이 발생하면 Falling or Walking 으로 변경함

	bool IsZeroGravity() const { return (0.0f == GravityZ) ? true : false; } // #165 : add bGoalOnNavMesh : Zone Waypoint
	void SetGravityZ(float InGravityZ) { GravityZ = InGravityZ; } // #165 : add bGoalOnNavMesh : Zone Waypoint

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

	bool IsWalkable(const FHitResult& Hit) const;

	FVector ComputeGroundMovementDelta(const FVector& Delta, const FHitResult& RampHit, const bool bHitFromLineTrace) const;
	FVector NewFallVelocity(const FVector& InInitialVelocity, const FVector& InGravity, float InDeltaTime) const;

	void HandleImpact(const FHitResult& Impact, float TimeSlice, const FVector& MoveDelta);

	IT4WorldSystem* GetWorldSystem();
	IT4WorldCollision* GetWorldCollision();
	IT4WorldActor* GetOwnerActor();

public:
	ET4LayerType LayerType;
	FT4ActorID OwnerActorID;

	ET4MovementMode MovementMode;

	float GravityZ;

	float MaxMoveSpeed;
	FVector Acceleration;

	bool bHasRequestedVelocity;
	FVector RequestedVelocity;
};
