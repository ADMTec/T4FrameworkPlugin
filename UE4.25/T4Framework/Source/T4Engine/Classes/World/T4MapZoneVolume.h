// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"

#include "T4EngineTypes.h"

#include "GameFramework/Volume.h" // #98
#include "Interfaces/Interface_PostProcessVolume.h" // #98

#include "T4MapZoneVolume.generated.h"

/**
  * #92
 */
// #98 : APostProcessVolume 이 MinimalAPI 를 사용중이라 직접 구현한다.
class UT4EnvironmentAsset;
struct FPostProcessSettings; // #98
UCLASS(ClassGroup = T4Framework, Category = "T4Framework", hidecategories = (Advanced, Collision, Volume, Brush, Attachment))
class T4ENGINE_API AT4MapZoneVolume : public AVolume, public IInterface_PostProcessVolume
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void BeginPlay() override;

	void Serialize(FArchive& Ar) override;
	void PostLoad() override;

	//~ Begin IInterface_PostProcessVolume Interface
	bool EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) override;
	FPostProcessVolumeProperties GetProperties() const override;
	//~ End IInterface_PostProcessVolume Interface

	//~ Begin AActor interface
	void PostUnregisterAllComponents() override; // #98

protected:
	void PostRegisterAllComponents() override; // #98

public:
	void Update(float InDeltaTime);

	void Enter();
	void Leave();

	bool IsEntered() const { return bEntered; }
	bool IsGlobalZone() const;

	int32 GetBlendPriority() const { return (IsGlobalZone()) ? -1 : BlendPriority; }
	float GetBlendWeight() const;

	void CheckGlobalPostProcessSettings(); // #104

#if WITH_EDITOR
	FColor GetPaintColor() const { return DebugColor; } // #92 : WorldMap 에서 사용하는 Color 값, 보통 Alpha 를 사용한다.

	virtual bool IsSelectable() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	virtual FColor GetWireColor() const override;

	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; } // #92
#endif

public:
	UPROPERTY(VisibleAnywhere, Category = Common)
	FName ZoneName;

	UPROPERTY(VisibleAnywhere, Category = Common)
	ET4ZoneType ZoneType; // #94

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4EnvironmentAsset> EnvironmentAsset; // #90, #92

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0", UIMin = "0", UIMax = "5"))
	int32 BlendPriority; // #92

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "10.0"))
	float BlendInTimeSec; // #92

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "10.0"))
	float BlendOutTimeSec; // #92

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FColor DebugColor; // #92
#endif

public:
	bool bEntered;
	bool bBlendStart;
	float BlendRemainingTimeSec;

	FPostProcessSettings* PostProcessingSettings; // #98 : T4WorldEnvironmentControl 에서 Global 만 값을 채운다.

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate; // #92
#endif
};