// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "T4EngineSettings.generated.h"

/**
  * #40
 */

UCLASS(config = T4Framework, meta = (DisplayName = "T4Engine"))
class T4ENGINE_API UT4EngineSettings : public UDeveloperSettings
{
public:
	GENERATED_UCLASS_BODY()
	
	// Begin UDeveloperSettings Interface
	FName GetCategoryName() const override;
#if WITH_EDITOR
	FText GetSectionText() const override;
#endif
	// END UDeveloperSettings Interface

#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnEngineSettingsChanged, const FString&, const UT4EngineSettings*);

	static FT4OnEngineSettingsChanged& OnSettingsChanged();
#endif

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini
	UPROPERTY(config, EditAnywhere, Category = GeneralRenderingSettting)
	FSoftObjectPath MPCGlobalPath; // #115

	UPROPERTY(config, EditAnywhere, Category = GeneralRenderingSettting)
	FSoftObjectPath MaterialPostProcessOutlinerPath; // #115

	UPROPERTY(config, EditAnywhere, Category = GeneralRenderingSettting)
	FName MPCGlobalOutlineColorName; // #115

	UPROPERTY(config, EditAnywhere, Category = GeneralRenderingSettting)
	FName MaterialParameterOpacityName; // #78, #108
	
	UPROPERTY(config, EditAnywhere, Category = GeneralWorldSettting)
	int32 WorldTimeHoursPerDay; // #93

	UPROPERTY(config, EditAnywhere, Category = GeneralControlSettting)
	float SkillComboKeepTimeSec; // #45 : Skill 연속기 사용을 위한 허용 시간

	UPROPERTY(config, EditAnywhere, Category = GeneralControlSettting)
	float SkillPressedKeepTimeSec; // #116 : Skill Block 이후 Pressed 사용을 위한 허용 시간

	UPROPERTY(config, EditAnywhere, Category = GeneralControlSettting)
	float JumpHoldTimeSec; // #46

	UPROPERTY(config, EditAnywhere, Category=GeneralCameraSettting)
	float CameraRotateHoldTimeSec;

	UPROPERTY(config, EditAnywhere, Category=GeneralCameraSettting)
	float CameraLagSpeed;

	UPROPERTY(config, EditAnywhere, Category=GeneralCameraSettting)
	float CameraZoomSpeed;

	UPROPERTY(config, EditAnywhere, Category = GeneralCameraSettting)
	float CameraAngleBlendRate; // #139

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_FieldOfViewDegree;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_DefaultZoomDistance;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_MinZoomDistance;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_MaxZoomDistance;

	UPROPERTY(config, EditAnywhere, Category = TPSCameraSettting)
	float TPS_DefaultPitchDegree;

	UPROPERTY(config, EditAnywhere, Category=QuarterViewCameraSettting)
	float QV_FieldOfViewDegree;

	UPROPERTY(config, EditAnywhere, Category=QuarterViewCameraSettting)
	float QV_DefaultPitchDegree;

	UPROPERTY(config, EditAnywhere, Category=QuarterViewCameraSettting)
	float QV_DefaultYawDegree;

	UPROPERTY(config, EditAnywhere, Category = QuarterViewCameraSettting)
	float QV_FixedDistance;

	UPROPERTY(config, EditAnywhere, Category=QuarterViewCameraSettting)
	FVector QV_SocketOffset;

	UPROPERTY(config, EditAnywhere, Category=ShoulderViewCameraSettting)
	float SV_FieldOfViewDegree;

	UPROPERTY(config, EditAnywhere, Category=ShoulderViewCameraSettting)
	float SV_DefaultZoomDistance;

	UPROPERTY(config, EditAnywhere, Category= ShoulderViewCameraSettting)
	float SV_MinZoomDistance;

	UPROPERTY(config, EditAnywhere, Category= ShoulderViewCameraSettting)
	float SV_MaxZoomDistance;

	UPROPERTY(config, EditAnywhere, Category= ShoulderViewCameraSettting)
	FVector SV_SocketOffset;

	UPROPERTY(config, EditAnywhere, Category= FPSCameraSettting)
	float FPS_FieldOfViewDegree;

	UPROPERTY(config, EditAnywhere, Category= FPSCameraSettting)
	FVector FPS_SocketOffset; // #121

	UPROPERTY(config, EditAnywhere, Category= FPSCameraSettting)
	float FPS_ZoomInDistance; // #121

	UPROPERTY(config, EditAnywhere, Category= FPSCameraSettting)
	float FPS_RotationSpeed; // #121

	UPROPERTY(config, EditAnywhere, Category=HMD)
	FVector HMDOriginOffset; // #153

	UPROPERTY(config, EditAnywhere, Category=HMD)
	FVector HMDCameraOffset; // #153

	UPROPERTY(config, EditAnywhere, Category=HMD)
	FSoftObjectPath HMDHandSkeletalMeshPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossBeamStaticMeshPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossEndStaticMeshPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossGoalStaticMeshPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossBeamLeftMaterialPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossBeamRightMaterialPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossArcEndLeftMaterialPath; // #153

	UPROPERTY(config, EditAnywhere, Category = HMD)
	FSoftObjectPath HMDAcrossArcEndRightMaterialPath; // #153

	UPROPERTY(config, EditAnywhere, Category=Common)
	FSoftObjectPath FallbackErrorEntityAssetPath; // #126

protected:
#if WITH_EDITOR
	static FT4OnEngineSettingsChanged SettingsChangedDelegate;
#endif
};
