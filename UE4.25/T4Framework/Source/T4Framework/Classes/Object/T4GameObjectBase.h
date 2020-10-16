// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Framework.h" // #25, #42
#include "T4GameObjectBase.generated.h"

/**
  * #114
 */
class UWorld;
class IT4GameDBInstance; // #172
class IT4Framework;
class IT4WorldActor;
class IT4WorldSystem;
UCLASS()
class T4FRAMEWORK_API UT4GameObjectBase : public UObject
{
	GENERATED_UCLASS_BODY()
		
	// Disable compiler-generated deprecation warnings by implementing our own destructor
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	virtual ~UT4GameObjectBase();
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

public:
	void OnInitialize(ET4LayerType InLayerType, const FT4ObjectID& InObjectID);
	void OnFinalize();

	void OnProcessPre(float InDeltaTime);
	void OnProcessPost(float InDeltaTime);

	ET4LayerType GetLayerType() const { return LayerType; }

	const FT4ObjectID& GetGameObjectID() const { return GameObjectID; } // #114

	virtual FName GetTeamName() const { return NAME_None; } // #142 : Temp => RaceName
	virtual FName GetNameID() const { return NAME_None; } // #142 : Temp => DBKey.RowName

	virtual bool IsServerObject() const { return false; }
	virtual bool IsClientObject() const { return false; }

	virtual bool IsObjectEntered() const { return bObjectEntered; } // #134

	virtual IT4ObjectController* GetController() const { return nullptr; } // #114 : Server All, Client Player Only
	virtual IT4WorldActor* GetControlActor() const;

	bool IsValidControlActorID() const { return ControlActorID.IsValid(); } // #146
	const FT4ActorID& GetControlActorID() const { return ControlActorID; } // #114 : ActorID 기억! 현재는 ObjectID.Value 와 같다. 이후 교체가 되어야 할 수 있음
	void SetControlActorID(const FT4ActorID& InControlActorID) { ControlActorID = InControlActorID; } // #131
	void ResetControlActorID() { ControlActorID.Empty(); }

#if WITH_EDITOR
	// #172 : ContentName 을 변경했을 경우 GameDB 변경 대응 (에디터만 사용)
	void EditorSetGameName(FName InGameName) { GameObjectID.GameName = InGameName; }

	virtual const FString GetAIDebugString() const { return FString(); } // #114 : Only ServerObject
	virtual const FColor GetDebugColor() const { return FColor::Green; } // #140
#endif

protected:
	virtual void Initialize() {}
	virtual void Finalize() {}

	virtual void ProcessPre(float InDeltaTime) {}
	virtual void ProcessPost(float InDeltaTime) {}

	UWorld* GetWorld() const;
	IT4Framework* GetFramework() const;
	IT4WorldSystem* GetWorldSystem() const;

	IT4WorldActor* FindWorldActor(const FT4ActorID& InActorID) const;
	bool FindNearestWorldActors(
		const float InMinDistance,
		const float InMaxDistance, 
		const float InHeightRange, // Range = +-, 0.0f = infinity
		TArray<IT4WorldActor*>& OutActors
	); // #114

private:
	ET4LayerType LayerType;
	FT4ObjectID GameObjectID;

protected:
	bool bObjectEntered;
	FT4ActorID ControlActorID; // #114 : ActorID 기억! 현재는 ObjectID.Value 와 같다. 이후 교체가 되어야 할 수 있음
};
