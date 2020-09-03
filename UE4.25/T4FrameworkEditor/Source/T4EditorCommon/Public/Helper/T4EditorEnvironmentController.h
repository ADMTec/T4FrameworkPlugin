// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Classes/World/T4EnvironmentAsset.h"
#include "T4EditorEnvironmentController.generated.h"

/**
  * #90
 */
UCLASS()
class T4EDITORCOMMON_API UT4EditorEnvironmentController : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

public:
	void Reset();

	bool CopyTo(FT4EnvTimeTagData& OutData, bool bInCopyDataOnly = false);
	bool CopyFrom(const FT4EnvTimeTagData& InData, bool bInCopyDataOnly = false);

	void SyncFrom(UWorld* InWorld);
	void SyncTo(UWorld* InWorld); // #123 : SyncFrom 한 설정을 다시 복원해준다.

	bool ApplyWorld(UWorld* InWorld, FName InTimeTagName, FString& OutErrorMessage);
	void ApplyWorld(UWorld* InTargetWorld); // #147 : 현재의 값을 Target World 에 적용한다. (bEnabled 옵션 체크, 주로 에디터 월드 적용시 사용)
	void ApplyWorld(UWorld* InSourceWorld, UWorld* InTargetWorld); // #93 : Preview 월드의 설정을 Editor 월드로 세팅해준다. 작업 편의 지원

public:
	// #T4_ADD_TOD_TAG
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName Name; // #123

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing TimeBlendCurve; // #123

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvDirectionalData DirectionalData; // #93

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvDirectionalLightData DirectionalLightData; // #90

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvSkyLightData SkyLightData; // #90

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvBPSkySphereData BPSkySphereData; // #97

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvAtmosphericFogData AtmosphericFogData; // #90

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvExponentialHeightFogData ExponentialHeightFogData; // #90

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvPostProcessData PostProcessData; // #98

private:
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
};
