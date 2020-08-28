// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4EntityAsset.h"
#include "T4ItemEntityAsset.generated.h"

/**
  * #35
 */
class UStaticMesh;
class USkeletalMesh;
class UParticleSystem;
class UMaterialInterface;

USTRUCT()
struct T4ASSET_API FT4EntityItemPhysicalData : public FT4EntityPhysicalData
{
	GENERATED_USTRUCT_BODY()

	// CustomizeItemCommonEntityDetails

public:
	FT4EntityItemPhysicalData()
	{
		BoundHeight = 50.0f;
		BoundRadius = 10.0f;
	}
};

USTRUCT()
struct T4ASSET_API FT4EntityItemRenderingData : public FT4EntityRenderingData
{
	GENERATED_USTRUCT_BODY()

	// CustomizeItemCommonEntityDetails

public:
	FT4EntityItemRenderingData()
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4EntityItemDropMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemDropMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UStaticMesh> StaticMeshAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Override Material Data"))
	FT4EntityMaterialData StaticMeshOverrideMaterialData; // #80

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Override Material Data"))
	FT4EntityMaterialData SkeletalMeshOverrideMaterialData; // #80

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UParticleSystem> ParticleSystemAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FTransform RelativeTransform; // #106
};

// #107
USTRUCT()
struct T4ASSET_API FT4EditorTestItemData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EditorTestItemData()
#if WITH_EDITOR
		: ItemSpawnType(ET4EntityEditorViewportItemSpawn::DropMesh)
		, ParentAnimSetName(NAME_None)
		, ParentStanceName(NAME_None)
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	ET4EntityEditorViewportItemSpawn ItemSpawnType;

	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4EntityAsset> ParentEntityAsset;

	UPROPERTY(EditAnywhere, Category = Editor)
	FName ParentAnimSetName;

	UPROPERTY(EditAnywhere, Category = Editor)
	FName ParentStanceName;
#endif
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4ItemEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

#if WITH_EDITOR
	virtual bool IsSpawnable() override // #131
	{
		if (ET4EntityEditorViewportItemSpawn::EquipOrExchange == EditorTestItemData.ItemSpawnType) // #158
		{
			if (!EditorTestItemData.ParentEntityAsset.IsNull())
			{
				return true;
			}
		}
		if (ET4EntityMeshType::None == DropMeshData.MeshType)
		{
			return false;
		}
		if (ET4EntityMeshType::StaticMesh == DropMeshData.MeshType)
		{
			if (DropMeshData.StaticMeshAsset.IsNull())
			{
				return false;
			}
		}
		else if (ET4EntityMeshType::SkeletalMesh == DropMeshData.MeshType)
		{
			if (DropMeshData.SkeletalMeshAsset.IsNull())
			{
				return false;
			}
		}
		else if (ET4EntityMeshType::ParticleSystem == DropMeshData.MeshType)
		{
			if (DropMeshData.ParticleSystemAsset.IsNull())
			{
				return false;
			}
		}
		return true;
	}
#endif

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Mesh Data"))
	FT4EntityItemDropMeshData DropMeshData;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Physical"))
	FT4EntityItemPhysicalData DropMeshPhysical;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "Rendering"))
	FT4EntityItemRenderingData DropMeshRendering;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "ImportSettings"))
	FT4EntityImportSettingData DropMeshImportSettings;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor, meta = (DisplayName = "Test"))
	FT4EditorTestItemData EditorTestItemData; // #107
#endif
};
