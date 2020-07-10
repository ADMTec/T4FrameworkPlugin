// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4ItemEntityAsset.h"
#include "T4CostumeEntityAsset.generated.h"

/**
  * #35, #37
 */
struct FT4CostumeEntityCustomVersion
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
	FT4CostumeEntityCustomVersion() {}
};

class USkeleton;
class UPhysicsAsset; // #76
class USkeletalMesh;

// #80
USTRUCT()
struct T4ASSET_API FT4EntityItemCostumeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemCostumeMeshData()
		: CompositePartName(NAME_None)
		//, bUseDropMesh(true) // #80
	{
	}

	UPROPERTY(EditAnywhere, Category=Default, AssetRegistrySearchable)
	TSoftObjectPtr<USkeleton> SkeletonAsset; // #39

	UPROPERTY(EditAnywhere, Category=Default)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset; // #37

	UPROPERTY(EditAnywhere, Category = Default, AssetRegistrySearchable)
	FName CompositePartName; // #72

	UPROPERTY(EditAnywhere, Category = Common)
	FT4EntityMaterialData OverrideMaterialData; // #80

	//UPROPERTY(EditAnywhere, Category = Common)
	//bool bUseDropMesh; // #80
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4CostumeEntityAsset : public UT4ItemEntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Costume; }

#if WITH_EDITOR
	virtual USkeletalMesh* GetPrimarySkeletalMeshAsset() const override // #81
	{
		if (MeshData.SkeletalMeshAsset.IsNull())
		{
			return nullptr;
		}
		return MeshData.SkeletalMeshAsset.LoadSynchronous();
	}
#endif

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4EntityItemCostumeMeshData MeshData;
};
