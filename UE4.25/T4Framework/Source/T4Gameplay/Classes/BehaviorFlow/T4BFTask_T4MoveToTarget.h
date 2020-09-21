// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

#include "UObject/ObjectMacros.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "AITypes.h"

#include "BehaviorTree/BTTaskNode.h"
#include "T4BFTask_T4MoveToTarget.generated.h"

/**
 * #50, #114 : refer BTTask_MoveTo
 */

class UAITask_MoveTo;
class UBehaviorTreeComponent;
class UNavigationQueryFilter;

struct FT4BFMoveToTaskMemory
{
	/** Move request ID */
	FAIRequestID MoveRequestID;

	FVector PreviousGoalLocation;

	TWeakObjectPtr<UAITask_MoveTo> Task;

	uint8 bWaitingForPath : 1;
	uint8 bObserverCanFinishTask : 1;
};

/**
 * Move To task node.
 * Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.
 */
UCLASS(config=Game, hidecategories = (Node, Task))
class T4GAMEPLAY_API UT4BFTask_T4MoveToTarget : public UBTTaskNode
{
	GENERATED_UCLASS_BODY()

	/** fixed distance added to threshold between AI and goal location in destination reach test */
	UPROPERTY(config, Category = Node, EditAnywhere, meta=(ClampMin = "0.0", UIMin="0.0"))
	float AcceptableRadius;

	/** "None" will result in default filter being used */
	UPROPERTY(Category = Node, EditAnywhere)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

	UPROPERTY(Category = Node, EditAnywhere)
	uint32 bAllowStrafe : 1;

	/** if set, use incomplete path when goal can't be reached */
	UPROPERTY(Category = Node, EditAnywhere, AdvancedDisplay)
	uint32 bAllowPartialPath : 1;

	/** if set, path to goal actor will update itself when actor moves */
	UPROPERTY(Category = Node, EditAnywhere, AdvancedDisplay)
	uint32 bTrackMovingGoal : 1;

	/** if set, goal location will be projected on navigation data (navmesh) before using */
	UPROPERTY(Category = Node, EditAnywhere, AdvancedDisplay)
	uint32 bProjectGoalLocation : 1;

	/** if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test  */
	UPROPERTY(Category = Node, EditAnywhere)
	uint32 bReachTestIncludesAgentRadius : 1;
	
	/** if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test  */
	UPROPERTY(Category = Node, EditAnywhere)
	uint32 bReachTestIncludesGoalRadius : 1;

	/** DEPRECATED, please use combination of bReachTestIncludes*Radius instead */
	UPROPERTY(Category = Node, VisibleInstanceOnly)
	uint32 bStopOnOverlap : 1;

	UPROPERTY()
	uint32 bStopOnOverlapNeedsUpdate : 1;

	/** if set, move will use pathfinding. Not exposed on purpose, please use BTTask_MoveDirectlyToward */
	uint32 bUsePathfinding : 1;

	/** set automatically if move should use GameplayTasks */
	uint32 bUseGameplayTasks : 1;

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;
	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory) override;
	void OnTaskFinished(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, EBTNodeResult::Type TaskResult) override;
	void TickTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory, float DeltaSeconds) override;
	uint16 GetInstanceMemorySize() const override;
	void PostLoad() override;

	void OnGameplayTaskDeactivated(UGameplayTask& Task) override;
	void OnMessage(
		UBehaviorTreeComponent& InOwnerComp,
		uint8* InNodeMemory,
		FName Message, 
		int32 RequestID, 
		bool bSuccess
	) override;

#if WITH_EDITOR
	FName GetNodeIconName() const override;
	void OnNodeCreated() override;
#endif // WITH_EDITOR

protected:
	EBTNodeResult::Type PerformMoveTask(UBehaviorTreeComponent& InOwnerComp, uint8* InNodeMemory);
};
