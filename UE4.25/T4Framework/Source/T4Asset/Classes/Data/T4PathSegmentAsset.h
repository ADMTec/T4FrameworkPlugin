// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4PathSegmentAsset.generated.h"

/**
  * #155
 */
struct FT4PathSegmentCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4PathSegmentCustomVersion() {}
};

UENUM(BlueprintType)
enum class ET4PathMovementType : uint8 // #156
{
	Run,
	Jump,
};

USTRUCT()
struct T4ASSET_API FT4PathSegmentPoint
{
	GENERATED_USTRUCT_BODY()

public:
	FT4PathSegmentPoint()
		: Location(FVector::ZeroVector)
		, MovementType(ET4PathMovementType::Run)
		, bOnNavMesh(true)
		, SpeedScale(1.0f)
		, RangeSpread(0.0f)
	{
	}

	// #T4_ADD_PATH_SEGMENT_TAG_DATA

	UPROPERTY(EditAnywhere, Category = Common)
	FVector Location;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4PathMovementType MovementType; // #156

	UPROPERTY(EditAnywhere, Category = Common)
	bool bOnNavMesh; // #156

	UPROPERTY(EditAnywhere, Category = Common, meta = (ClampMin = "0.1", ClampMax = "5"))
	float SpeedScale; // #161

	UPROPERTY(EditAnywhere, Category = Common, meta = (ClampMin = "0.0", ClampMax = "500"))
	float RangeSpread; // #161
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4PathSegmentAsset : public UObject
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
	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4PathSegmentPoint> PathSegmentPoints;

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
