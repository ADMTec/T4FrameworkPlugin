// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4PathSegmentData.generated.h"

/**
  * #155
 */
struct FT4PathSegmentDataCustomVersion
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
	FT4PathSegmentDataCustomVersion() {}
};

UENUM(BlueprintType)
enum class ET4PathMovementType : uint8 // #156
{
	Run,
	Walk,
	Jump,

	Idle,
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
	{
	}

	UPROPERTY(EditAnywhere, Category = Common)
	FVector Location;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4PathMovementType MovementType; // #156

	UPROPERTY(EditAnywhere, Category = Common)
	bool bOnNavMesh; // #156
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4PathSegmentData : public UObject
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
