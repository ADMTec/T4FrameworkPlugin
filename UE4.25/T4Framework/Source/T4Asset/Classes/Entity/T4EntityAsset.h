// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "Common/T4CommonAssetStructs.h" // #103
#include "AnimSet/T4AnimsetAsset.h" // #107
#include "T4AssetDefinitions.h"
#include "Entity/T4EntityTypes.h"
#include "Entity/T4EntityKey.h"
#include "T4EntityAsset.generated.h"

/**
  * #35
 */
USTRUCT()
struct T4ASSET_API FT4EntityEditorThumbnailData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityEditorThumbnailData()
#if WITH_EDITORONLY_DATA
		: Rotation(FRotator(0.0f, 180.0f, 0.0f))
		, Location(FVector(500.0f, 0.0f, 110.0f))
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, Category = Editor)
	FVector Location;
#endif
};

USTRUCT()
struct T4ASSET_API FT4EntityPhysicalData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPhysicalData()
		: bCollisionDisabled(false) // #118
		, BoundType(ET4EntityBoundType::Box) // #126
		, BoundHeight(200.0f)
		, BoundRadius(25.0f)

	{
	}

	// CustomizeCharacterEntityDetails
	// CustomizePropEntityDetails
	// CustomizeItemCommonEntityDetails

	UPROPERTY(EditAnywhere, Category = Common)
	bool bCollisionDisabled; // #118

	UPROPERTY(EditAnywhere, Category = Common)
	ET4EntityBoundType BoundType; // #126

	UPROPERTY(EditAnywhere, Category = Common, meta = (ClampMin = "0.0", ClampMax = "1000"))
	float BoundHeight; // #126

	UPROPERTY(EditAnywhere, Category = Common, meta = (ClampMin = "10.0", ClampMax = "500"))
	float BoundRadius; // #126
};

USTRUCT()
struct T4ASSET_API FT4EntityRenderingData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityRenderingData()
		: Scale(1.0f)
		, ImportRotationYaw(-90.0f)
		, bReceivesDecals(false) // #54
	{
	}

	// CustomizeCharacterEntityDetails
	// CustomizePropEntityDetails
	// CustomizeItemCommonEntityDetails

	UPROPERTY(EditAnywhere, Category = Common, meta = (ClampMin = "0.1", ClampMax = "10"))
	float Scale;

	UPROPERTY(EditAnywhere, Category = Common, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
	float ImportRotationYaw;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bReceivesDecals; // #54
};

// #80
class UMaterialInterface;
USTRUCT()
struct T4ASSET_API FT4EntityMaterialSlotData // #124
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityMaterialSlotData()
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (SlotName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EntityMaterialSlotData& InRhs) const
	{
		return (SlotName == InRhs.SlotName) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	FName SlotName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UMaterialInterface> MaterialAsset;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Editor)
	TSoftObjectPtr<UMaterialInterface> OriginalMaterialAsset;
#endif
};

USTRUCT()
struct T4ASSET_API FT4EntityMaterialData // #124
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityMaterialData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4EntityMaterialSlotData> MaterialSlotDatas;
};

// #131
USTRUCT()
struct T4ASSET_API FT4EntityPlayAnimationData // #131
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPlayAnimationData()
		: SectionName(NAME_None)
		, BlendInTimeSec(T4Const_DefaultAnimBlendTimeSec)
		, BlendOutTimeSec(T4Const_DefaultAnimBlendTimeSec)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName SectionName; // only System layer

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float BlendOutTimeSec;
};

class UAnimSequence;
USTRUCT()
struct T4ASSET_API FT4EntityIdleAnimSequenceData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityIdleAnimSequenceData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TSoftObjectPtr<UAnimSequence> DefaultIdleAsset; // #142 : BS 에서 AnimSequence 로 변경

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TSoftObjectPtr<UAnimSequence> CombatIdleAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TSoftObjectPtr<UAnimSequence> CrouchIdleAsset;
};

// #126
class USkeleton;
class UAnimMontage;
class UAnimBlueprint;
USTRUCT()
struct T4ASSET_API FT4EntityAnimationData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityAnimationData()
		: bUseAnimation(false)
		, bAnimMontageAutoGen(true)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (DisplayName = "bUseAnimation"))
	bool bUseAnimation;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TSoftObjectPtr<USkeleton> SkeletonAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TSoftObjectPtr<UAnimBlueprint> AnimBlueprintAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	FT4EntityIdleAnimSequenceData IdleAnimSequenceData; // #142 : BS 에서 AnimSequence 로 변경

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation", DisplayName = "bAutoGen"))
	bool bAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation", DisplayName = "Anim Montage Asset"))
	TSoftObjectPtr<UAnimMontage> AnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	TArray<FT4AnimsetAnimSequenceData> AnimSequenceArray;
};

// #74
class UT4WeaponEntityAsset;
USTRUCT()
struct T4ASSET_API FT4EntityPlayTagAttachmentData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPlayTagAttachmentData()
		: PlayTag(T4Const_DefaultPlayTagName)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName PlayTag;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName EquipPoint;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4WeaponEntityAsset> WeaponEntityAsset;
};

// #74
class UT4ActionPackAsset;
USTRUCT()
struct T4ASSET_API FT4EntityPlayTagActionData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPlayTagActionData()
		: PlayTag(T4Const_DefaultPlayTagName)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName PlayTag;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> ActionPackAsset;
};

// #80
USTRUCT()
struct T4ASSET_API FT4EntityPlayTagMaterialData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPlayTagMaterialData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName PlayTag;

	UPROPERTY(EditAnywhere, Category = Hide)
	FT4EntityMaterialData OverrideMaterialData;
};

// #74
USTRUCT()
struct T4ASSET_API FT4EntityPlayTagData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPlayTagData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4EntityPlayTagMaterialData> MaterialTags; // #80

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4EntityPlayTagAttachmentData> AttachmentTags;

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4EntityPlayTagActionData> ActionTags;
};

class UTexture2D;
class UStaticMesh; // #81
class USkeletalMesh; // #81
UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4EntityAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	virtual ET4EntityType GetEntityType() const { return ET4EntityType::None; }
	FName GetEntityKeyPath() const; // #37 : Make FT4EntityKey, ObjectPath
	FT4EntityKey GetEntityKey() const; // #142

	FString GetEntityDisplayName() const; // #87
	const TCHAR* GetEntityTypeString() const; // #87

#if WITH_EDITOR
	virtual bool IsSpawnable() { return false; } // #131

	virtual UStaticMesh* GetPrimaryStaticMeshAsset() const { return nullptr; } // #81
	virtual USkeletalMesh* GetPrimarySkeletalMeshAsset() const { return nullptr; } // #81

	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4EntityPlayTagData PlayTagData; // #74, #81

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FT4EditorTestAutomationData TestAutomation; // #100, #103

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4EntityEditorThumbnailData ThumbnailData;

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
