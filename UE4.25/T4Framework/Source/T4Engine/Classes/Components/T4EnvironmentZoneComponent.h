// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineStructs.h"
#include "T4Asset/Classes/Entity/T4ZoneEntityAsset.h"
#include "Components/SceneComponent.h"
#include "T4EnvironmentZoneComponent.generated.h"

/**
  * #99, #94
 */
class UT4ZoneEntityAsset;
UCLASS()
class T4ENGINE_API UT4EnvironmentZoneComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:
	void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

public:
	void Initialize(
		FName InZoneName,
		ET4ZoneType InZoneType,
		TWeakObjectPtr<const UT4ZoneEntityAsset> InZoneEntityAsset,
		float InOffsetTimeSec // #99 : 일반적으로 Env 는 Blending 때문에 OffsetTime 이 0이 되어야 하나, 타이밍을 맞추기 위한 처리도 필요할 것이다. Action Play/Pause
	);
	void Reset();

	void SetPlayRate(float InPlayRate) { PlayRate = InPlayRate; } // #102

	void LeaveOut(float InOffsetTimeSec); // #99 : 강제로 Leave 한다. Action 연계한 FadeOut 처리
	void SetOverrideBlendTime(float InBlendInTimeSec, float InBlendOutTimeSec); // #99

	bool TestEncompassesPoint(const FVector& InLocation); // #94
	void GetEnvironmentZoneInfo(FT4EnvironmentZoneInfo& OutZoneInfo); // #94

protected:
	void BeginPlay() override;

private:
	void Enter(); // #94
	void Leave(float InOffsetTimeSec); // #94

	bool EncompassesPoint(const FVector& InLocation); // #94
	float GetBlendWeight(); // #94

public:
	FName ZoneName;
	ET4ZoneType ZoneType;
	
	TWeakObjectPtr<const UT4ZoneEntityAsset> EntityAssetPtr;

	float PlayRate; // #102

	bool bEntered;
	bool bBlendStart;
	float BlendRemainingTimeSec;

	float InitializeOffsetTimeSec; // #99 : 일반적으로 Env 는 Blending 때문에 OffsetTime 이 0이 되어야 하나, 타이밍을 맞추기 위한 처리도 필요할 것이다. Action Play/Pause

	bool bLeaveOut; // #99
	bool bOverrideBlendTime; // #99
	float OverrideBlendInTimeSec; // #99
	float OverrideBlendOutTimeSec; // #99
};
