// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4AssetTypes.h"
#include "Engine/Scene.h" // #98
#include "Components/ExponentialHeightFogComponent.h" // #90
#include "Components/SkyLightComponent.h" // #97
#include "T4EnvironmentAsset.generated.h"

/**
  * #90
 */
struct FT4EnvironmentCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		CommonPropertyNameChanged, // #123

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4EnvironmentCustomVersion() {}
};

// WARN : Envrionment Data 추가 시는 아래 테그를 찾아 추가 구현을 해주어야 함! // #93
// #T4_ADD_TOD_TAG

// #93
USTRUCT()
struct T4ASSET_API FT4EnvDirectionalData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvDirectionalData()
		: bEnabled(false)
		, Rotation(FRotator::ZeroRotator)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendDirectional 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FRotator Rotation;
};


// #90
USTRUCT()
struct T4ASSET_API FT4EnvDirectionalLightData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvDirectionalLightData()
		: bEnabled(false)
		, Intensity(10.0f)
		, LightColor(FColor::White)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendDirectionalLight 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float Intensity;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FColor LightColor;
};

// #97
USTRUCT()
struct T4ASSET_API FT4EnvBPSkySphereData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvBPSkySphereData()
		: bEnabled(false)
		, SunBrightness(5.0f) // #97
		, CloudSpeed(1.0f) // #97
		, CloudOpacity(0.7f) // #97
		, StarsBrightness(0.1f) // #97
		, bColorsDeterminedBySunPosition(true) // #97
		, ZenithColor(FLinearColor(0.034046f, 0.102947f, 0.295f, 1.0f)) // #97
		, HorizonColor(FLinearColor(1.979559f, 2.586644f, 3.0f, 1.0f)) // #97
		, CloudColor(FLinearColor(0.855778f, 0.91902f, 1.0f, 1.0f)) // #97
		, OverallColor(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f)) // #97
	{

	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendBPSkySphere 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float SunBrightness; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float CloudSpeed; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float CloudOpacity; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float StarsBrightness; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	bool bColorsDeterminedBySunPosition;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FLinearColor ZenithColor; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FLinearColor HorizonColor; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FLinearColor CloudColor; // #98

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FLinearColor OverallColor; // #98
};

// #90
class UTextureCube;
USTRUCT()
struct T4ASSET_API FT4EnvSkyLightData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvSkyLightData()
		: bEnabled(false)
		, SourceType(ESkyLightSourceType::SLS_CapturedScene) // #97
		, CubemapResolution(1024)
		, Intensity(10.0f)
		, LightColor(FColor::White)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendSkyLight 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	TEnumAsByte<enum ESkyLightSourceType> SourceType; // #97

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	TSoftObjectPtr<UTextureCube> CubemapPtr;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	int32 CubemapResolution;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float Intensity;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FColor LightColor;
};

// #90
// https://docs.unrealengine.com/ko/Engine/Actors/FogEffects/AtmosphericFog/index.html
USTRUCT()
struct T4ASSET_API FT4EnvAtmosphericFogData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvAtmosphericFogData()
		: bEnabled(false)
		, SunMultiplier(0.0f)
		, FogMultiplier(0.0f)
		, DensityMultiplier(0.0f)
		, DensityOffset(0.0f)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendAtmosphericFog 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float SunMultiplier;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float FogMultiplier;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float DensityMultiplier;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float DensityOffset;
};

// #90
USTRUCT()
struct T4ASSET_API FT4EnvExponentialHeightFogData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvExponentialHeightFogData()
		: bEnabled(false)
		, FogDensity(0.02f)
		, FogHeightFalloff(0.2f)
		, FogInscatteringColor(FLinearColor::White)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendExponentialHeightFog 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float FogDensity;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	float FogHeightFalloff;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FExponentialHeightFogData SecondFogData;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FLinearColor FogInscatteringColor;
};

// #98
USTRUCT()
struct T4ASSET_API FT4EnvPostProcessData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvPostProcessData()
		: bEnabled(false)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnabled;

	// #92 : 프로퍼티 추가시 FT4WorldEnvironmentControl::BlendPostProcess 구현 필요!!

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnabled"))
	FPostProcessSettings Settings; // #98
};

// #90
USTRUCT()
struct T4ASSET_API FT4EnvTimeTagData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvTimeTagData()
		: Name(NAME_None)
		, TimeBlendCurve(ET4BuiltInEasing::QuintIn) // #123
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EnvTimeTagData& InRhs) const
	{
		return (Name == InRhs.Name) ? true : false;
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName Name;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing TimeBlendCurve; // #123

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvDirectionalData DirectionalData; // #93

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvDirectionalLightData DirectionalLightData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvSkyLightData SkyLightData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvBPSkySphereData BPSkySphereData; // #97

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvAtmosphericFogData AtmosphericFogData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvExponentialHeightFogData ExponentialHeightFogData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EnvPostProcessData PostProcessData; // #98
};

// #90
USTRUCT()
struct T4ASSET_API FT4EnvTimeTagSetData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EnvTimeTagSetData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4EnvTimeTagData> TimeTagDatas; // #123
};

class UTexture2D;
class UT4WorldExploreAsset;
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4EnvironmentAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Time of Day"))
	FT4EnvTimeTagSetData TimeTagSetData; // #90 : 이후 별도 Asset 으로 분리!

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4WorldExploreAsset> PreviewWorldAsset;
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
