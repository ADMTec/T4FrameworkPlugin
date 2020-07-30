// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4ActorEntityAsset.h"
#include "T4AssetConstants.h" // #74
#include "T4CharacterEntityAsset.generated.h"

/**
  * #35
 */
struct FT4CharacterEntityCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		CommonPropertyNameChanged, // #124
		CommonPropertyNameV2Changed, // #124
		FullbodySkinSetAdded, // #130

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4CharacterEntityCustomVersion() {}
};

class USkeleton;
class UPhysicsAsset; // #76
class UMaterialInterface; // #80
class USkeletalMesh;
class UAnimBlueprint;
class UAnimMontage;
class UBlendSpace;
class UT4AnimsetAsset; // #39
class UT4ActionPackAsset; // #74
class UT4WeaponEntityAsset; // #74
class UT4CostumeEntityAsset;

USTRUCT()
struct T4ASSET_API FT4EntityCharacterPhysicalData : public FT4EntityPhysicalData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterPhysicalData()
		: InPlaceRotationRate(300.0f)
		, MoveRotationRateScale(1.2f)
	{
		BoundType = ET4EntityBoundType::Capsule; // #126
	}

	// CustomizeCharacterEntityDetails

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1500"))
	float InPlaceRotationRate;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "0.1", ClampMax = "10"))
	float MoveRotationRateScale;
};

USTRUCT()
struct T4ASSET_API FT4EntityCharacterRenderingData : public FT4EntityRenderingData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterRenderingData()
	{
	}

	// CustomizeCharacterEntityDetails
};

class UT4MapEntityAsset;
USTRUCT()
struct T4ASSET_API FT4EntityCharacterTestingData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterTestingData()
		: TestDefaultSpeed(500.0f) // #108
		, TestCombatSpeed(500.0f) // #109
		, TestSprintSpeed(1000.0f) // #131
		, TestJumpMaxHeight(200.0f) // #140
		, TestJumpHeightSpeed(500.0f) // #140
	{
	}

	// FT4CharacterEntityDetails::SubCustomizeDetails

	UPROPERTY(EditAnywhere, Category = Testing)
	TSoftObjectPtr<UT4MapEntityAsset> TestMapEntityAsset; // #140

	UPROPERTY(EditAnywhere, Category = Testing, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float TestDefaultSpeed; // #108

	UPROPERTY(EditAnywhere, Category = Testing, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float TestCombatSpeed; // #109

	UPROPERTY(EditAnywhere, Category = Testing, meta = (ClampMin = "10.0", ClampMax = "1500"))
	float TestSprintSpeed; // #131

	UPROPERTY(EditAnywhere, Category = Testing, meta = (ClampMin = "50.0", ClampMax = "5000"))
	float TestJumpMaxHeight; // #140

	UPROPERTY(EditAnywhere, Category = Testing, meta = (ClampMin = "50", ClampMax = "2000.0"))
	float TestJumpHeightSpeed; // #140
};

USTRUCT()
struct T4ASSET_API FT4EntityCharacterFullBodySkinData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterFullBodySkinData()
		: SkinName(NAME_None)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (SkinName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EntityCharacterFullBodySkinData& InRhs) const
	{
		return (SkinName == InRhs.SkinName) ? true : false;
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName SkinName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset;

	UPROPERTY(EditAnywhere, Category = Hide)
	FT4EntityMaterialData OverrideMaterialData; // #80

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UPhysicsAsset> OverridePhysicsAsset; // #76 : Fullbody SK 라면 기본 세팅된 PhsycisAsset 을 그대로 사용하고, Override 할 경우만 재설정한다.
};

// #130
USTRUCT()
struct T4ASSET_API FT4EntityCharacterFullBodyMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterFullBodyMeshData()
		: DefaultSkinName(NAME_None)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName DefaultSkinName; // #130

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4EntityCharacterFullBodySkinData> SkinDatas; // #130 : SkinMesh 로 정리
};

// #37
USTRUCT()
struct T4ASSET_API FT4EntityCharacterCompositePartMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterCompositePartMeshData()
		: PartName(NAME_None)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (PartName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EntityCharacterCompositePartMeshData& InRhs) const
	{
		return (PartName == InRhs.PartName) ? true : false;
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName PartName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4CostumeEntityAsset> CostumeEntityAsset;
};

// #37
USTRUCT()
struct T4ASSET_API FT4EntityCharacterCompositeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterCompositeMeshData()
		: ModularType(ET4EntityCharacterModularType::MasterPose)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4EntityCharacterModularType ModularType; // #72

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4EntityCharacterCompositePartMeshData> DefaultPartsDatas; // #37, #124
};

// #73
USTRUCT()
struct T4ASSET_API FT4EntityCharacterAnimSetData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterAnimSetData()
		: AnimSetName(NAME_None)
		, ActivePlayTag(NAME_None)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (AnimSetName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EntityCharacterAnimSetData& InRhs) const
	{
		return (AnimSetName == InRhs.AnimSetName) ? true : false;
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName AnimSetName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4AnimsetAsset> AnimsetAsset; // #39

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ActivePlayTag; // #74, #73
};

// #76
USTRUCT()
struct T4ASSET_API FT4EntityCharacterReactionPhysicsBlendData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterReactionPhysicsBlendData()
		: TargetWeight(1.0f)
		, BlendInTimeSec(0.0f)
		, BlendOutTimeSec(0.0f)
	{
	}

	UPROPERTY(EditAnywhere, Category = Property)
	float TargetWeight;

	UPROPERTY(EditAnywhere, Category = Property)
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = Property)
	float BlendOutTimeSec;
};

// #76
USTRUCT()
struct T4ASSET_API FT4EntityCharacterReactionPhysicsStartData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterReactionPhysicsStartData()
		: bUsePhysicsStart(false)
		, DelayTimeSec(0.0f)
		, ImpulseMainActionPoint(NAME_None)
		, ImpulseSubActionPoint(NAME_None)
		, ImpulsePower(0.0f)
		, CenterOfMass(FVector::ZeroVector)
		, MassOverrideInKg(100.0f)
		, bSimulateBodiesBelow(false)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bUsePhysicsStart;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	float DelayTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	FName ImpulseMainActionPoint;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	FName ImpulseSubActionPoint;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	float ImpulsePower;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	FVector CenterOfMass;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	float MassOverrideInKg;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	bool bSimulateBodiesBelow;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStart"))
	FT4EntityCharacterReactionPhysicsBlendData BlendData;
};

// #76
USTRUCT()
struct T4ASSET_API FT4EntityCharacterReactionPhysicsStopData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterReactionPhysicsStopData()
		: bUsePhysicsStop(false)
		, DelayTimeSec(0.0f)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bUsePhysicsStop;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUsePhysicsStop"))
	float DelayTimeSec;
};

// #76
USTRUCT()
struct T4ASSET_API FT4EntityCharacterReactionAnimationData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterReactionAnimationData()
		: bUseAnimation(false)
		, DelayTimeSec(0.0f)
		, bUseAdditive(false) // #138
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bUseAnimation;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	float DelayTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	bool bUseAdditive; // #138

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	FT4EntityPlayAnimationData StartAnimationData;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	FT4EntityPlayAnimationData LoopAnimationData;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseAnimation"))
	FT4EntityPlayAnimationData EndAnimationData;
};

// #76
USTRUCT()
struct T4ASSET_API FT4EntityCharacterReactionData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterReactionData()
		: ReactionType(ET4EntityReactionType::None)
		, ReactionName(NAME_None)
		, MaxPlayTimeSec(0.0f)
#if WITH_EDITOR
		, TestShootDirection(FVector::UpVector) // #76
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (ReactionName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4EntityCharacterReactionData& InRhs) const
	{
		return (ReactionName == InRhs.ReactionName) ? true : false;
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4EntityReactionType ReactionType;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ReactionName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float MaxPlayTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EntityCharacterReactionAnimationData AnimationData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EntityCharacterReactionPhysicsStartData PhysicsStartData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4EntityCharacterReactionPhysicsStopData PhysicsStopData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	FVector TestShootDirection; // #76
#endif
};

USTRUCT()
struct T4ASSET_API FT4EntityCharacterReactionSetData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterReactionSetData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4EntityCharacterReactionData> ReactionDatas; // #124;
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4CharacterEntityAsset : public UT4ActorEntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Character; }

#if WITH_EDITOR
	virtual bool IsSpawnable() override // #131
	{ 
		if (SkeletonAsset.IsNull())
		{
			return false;
		}
		else if (ET4EntityCharacterMeshType::None == MeshType)
		{
			return false;
		}
		else if (ET4EntityCharacterMeshType::FullBody == MeshType)
		{
			if (FullBodyMeshData.DefaultSkinName == NAME_None)
			{
				return false;
			}
			else if (0 >= FullBodyMeshData.SkinDatas.Num())
			{
				return false;
			}
			const FT4EntityCharacterFullBodySkinData* FullbodySkinData = FullBodyMeshData.SkinDatas.FindByKey(
				FullBodyMeshData.DefaultSkinName
			);
			if (nullptr == FullbodySkinData)
			{
				return false;
			}
			if (FullbodySkinData->SkeletalMeshAsset.IsNull())
			{
				return false;
			}
		}
		else if (ET4EntityCharacterMeshType::Composite == MeshType)
		{
			if (0 >= CopmpositeMeshData.DefaultPartsDatas.Num())
			{
				return false;
			}
		}
		return true; 
	} 

	virtual USkeletalMesh* GetPrimarySkeletalMeshAsset() const override // #81
	{
		if (ET4EntityCharacterMeshType::FullBody != MeshType)
		{
			return nullptr;
		}
		if (0 >= FullBodyMeshData.SkinDatas.Num())
		{
			return nullptr;
		}
		const FName SkinSelected = (FullBodyMeshData.DefaultSkinName != NAME_None) 
			? FullBodyMeshData.DefaultSkinName : T4Const_DefaultFullBodySkinName;
		const FT4EntityCharacterFullBodySkinData* FullbodySkinData = FullBodyMeshData.SkinDatas.FindByKey(SkinSelected);
		if (nullptr == FullbodySkinData)
		{
			return nullptr;
		}
		if (FullbodySkinData->SkeletalMeshAsset.IsNull())
		{
			return nullptr;
		}
		return FullbodySkinData->SkeletalMeshAsset.LoadSynchronous();
	}
#endif

public:
	UPROPERTY(EditAnywhere, Category=Default, AssetRegistrySearchable)
	TSoftObjectPtr<USkeleton> SkeletonAsset; // #39

	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<UAnimBlueprint> AnimBlueprintAsset;

	UPROPERTY(EditAnywhere, Category= Default)
	ET4EntityCharacterMeshType MeshType;

	UPROPERTY(EditAnywhere, Category=FullbodyMesh)
	FT4EntityCharacterFullBodyMeshData FullBodyMeshData;

	UPROPERTY(EditAnywhere, Category=CompositeMesh)
	FT4EntityCharacterCompositeMeshData CopmpositeMeshData; // #37

	UPROPERTY(EditAnywhere, Category=AnimSet)
	TArray<FT4EntityCharacterAnimSetData> AnimSetDatas; // #39, #73, #124;

	UPROPERTY(EditAnywhere, Category=Reaction)
	FT4EntityCharacterReactionSetData ReactionSetData; // #76

	UPROPERTY(EditAnywhere, Category= Physical)
	FT4EntityCharacterPhysicalData Physical;

	UPROPERTY(EditAnywhere, Category= Rendering)
	FT4EntityCharacterRenderingData Rendering;

	UPROPERTY(EditAnywhere, Category= Testing)
	FT4EntityCharacterTestingData Testing;
};
