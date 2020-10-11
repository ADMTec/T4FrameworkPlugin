// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4ActorEntityAsset.h"
#include "T4PropEntityAsset.generated.h"

/**
  * #35
 */
struct FT4PropEntityCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		CommonPropertyNameChanged, // #126

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4PropEntityCustomVersion() {}
};

class UStaticMesh;
class USkeletalMesh;
class UParticleSystem;

USTRUCT()
struct T4ASSET_API FT4EntityPropPhysicalData : public FT4EntityPhysicalData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropPhysicalData()
		: bCanEverAffectNavigation(true)
	{
		bUseOverlapEvents = false; // #47, #161
		BoundHeight = 200.0f;
		BoundRadius = 50.0f;
	}

	// CustomizePropEntityDetails // #126
	UPROPERTY(EditAnywhere, Category = Asset)
	bool bCanEverAffectNavigation; // #126 : Nav Burn 사용 여부
};

USTRUCT()
struct T4ASSET_API FT4EntityPropRenderingData : public FT4EntityRenderingData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropRenderingData()
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4EntityPropMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere, Category= Common)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UStaticMesh> StaticMeshAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Override Material Data"))
	FT4EntityMaterialData StaticMeshOverrideMaterialData; // #80

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Override Material Data"))
	FT4EntityMaterialData SkeletalMeshOverrideMaterialData; // #80

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UParticleSystem> ParticleSystemAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	FTransform RelativeTransform; // #106
};

// #126
class USkeleton;
class UAnimMontage;
class UAnimBlueprint;
USTRUCT()
struct T4ASSET_API FT4EntityPropAnimationData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropAnimationData()
		: bUseAnimation(false)
		, AnimClassType(ET4EntityPropAnimationClass::Prop_Basic)
		, bAnimMontageAutoGen(true)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "bUseAnimation"))
	bool bUseAnimation;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TSoftObjectPtr<USkeleton> SkeletonAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	ET4EntityPropAnimationClass AnimClassType; // #158 : AnimBPAsset 에서 Public Class 로 변경

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	FT4EntityIdleAnimSequenceData IdleAnimSequenceData; // #142 : BS 에서 AnimSequence 로 변경

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation", DisplayName = "bAutoGen"))
	bool bAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation", DisplayName = "Anim Montage Asset"))
	TSoftObjectPtr<UAnimMontage> AnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TArray<FT4AnimsetAnimSequenceData> AnimSequenceArray;
};

// #162
USTRUCT()
struct T4ASSET_API FT4EntityPropCompositeData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropCompositeData()
	{
	}

	UPROPERTY(EditAnywhere, Category= Common)
	FT4EntityPropMeshData MeshData;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4EntityPropAnimationData AnimationData; // #126

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	FT4EntityPropRenderingData Rendering;

	UPROPERTY(EditAnywhere, Category= ClientOnly)
	FT4EntityImportSettingData ImportSettings;
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4PropEntityAsset : public UT4ActorEntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Prop; }

#if WITH_EDITOR
	virtual bool IsSpawnable() override // #131
	{
		if (ET4EntityMeshType::None == DefaultCompositeData.MeshData.MeshType)
		{
			return false;
		}
		if (ET4EntityMeshType::StaticMesh == DefaultCompositeData.MeshData.MeshType)
		{
			if (DefaultCompositeData.MeshData.StaticMeshAsset.IsNull())
			{
				return false;
			}
		}
		else if (ET4EntityMeshType::SkeletalMesh == DefaultCompositeData.MeshData.MeshType)
		{
			if (DefaultCompositeData.MeshData.SkeletalMeshAsset.IsNull())
			{
				return false;
			}
		}
		else if (ET4EntityMeshType::ParticleSystem == DefaultCompositeData.MeshData.MeshType)
		{
			if (DefaultCompositeData.MeshData.ParticleSystemAsset.IsNull())
			{
				return false;
			}
		}
		return true;
	}
#endif

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4EntityPropCompositeData DefaultCompositeData;

	UPROPERTY(EditAnywhere, Category= Common)
	FT4EntityPropPhysicalData Physical;
};
