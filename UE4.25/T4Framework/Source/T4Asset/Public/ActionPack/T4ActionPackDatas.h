// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4ActionBase.h"
#include "T4AssetDefinitions.h"
#include "Entity/T4EntityTypes.h"
#include "Engine/Scene.h" // #100
#include "Camera/CameraShake.h" // #101
#include "T4ActionPackDatas.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_DATA

// ET4ActionDataType::Branch // #54
// ET4ActionDataType::Movement // #132
// ET4ActionDataType::Animation
// ET4ActionDataType::Mesh // #108
// ET4ActionDataType::Particle
// ET4ActionDataType::Decal // #52
// ET4ActionDataType::Projectile // #63
// ET4ActionDataType::Reaction // #76
// ET4ActionDataType::PlayTag // #81
// ET4ActionDataType::TimeScale // #102
// ET4ActionDataType::CameraWork // #58
// ET4ActionDataType::CameraShake // #101
// ET4ActionDataType::PostProcess // #100
// ET4ActionDataType::Environment // #99

class UT4ActionPackAsset;

USTRUCT()
struct T4ASSET_API FT4ActionDataBase : public FT4ActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Common)
	ET4ActionDataType ActionDataType;

public:
	// #39 : FT4ActionDetails::CustomizeCommonActionDetails
	// #24 : Composite 일 경우 사용됨!
	// #65 : Property 추가시에는 FT4ActionCompositeData::CloneAndAddAction 에도 반영할 것! (FT4ActionCompositeData::CopyAction)
	UPROPERTY(VisibleAnywhere, Category = Common)
	int32 HeaderKey;

	UPROPERTY(VisibleAnywhere, Category = Common)
	int32 SortOrder; // #56 : lower win

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Common)
	FName DisplayName;

	UPROPERTY(EditAnywhere, Category = Common)
	FColor DebugColorTint;
#endif

public:
	FT4ActionDataBase()
		: ActionDataType(ET4ActionDataType::None)
		, HeaderKey(INDEX_NONE) // #24
		, SortOrder(TNumericLimits<int32>::Max()) // #56 : lower win
#if WITH_EDITORONLY_DATA
		, DisplayName(NAME_None)
		, DebugColorTint(FColor::Black)
#endif
	{
	}

	FT4ActionDataBase(ET4ActionDataType InActionDataType)
		: ActionDataType(InActionDataType)
		, HeaderKey(INDEX_NONE) // #24
		, SortOrder(TNumericLimits<int32>::Max()) // #56 : lower win
#if WITH_EDITORONLY_DATA
		, DisplayName(NAME_None)
		, DebugColorTint(FColor::Black)
#endif
	{
	}

	virtual ~FT4ActionDataBase() {}

	ET4ActionBaseType GetActionBaseType() const override { return ET4ActionBaseType::Data; } // #52

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("ActionData"));
	}

	virtual FString ToDisplayText()
	{
		return FString(TEXT("Untitled")); // #54
	}
};

// #54
USTRUCT()
struct T4ASSET_API FT4BranchActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeBranchActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BranchCondition Contition;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ConditionName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> ActionPackAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4BranchActionData()
		: FT4ActionDataBase(StaticActionType())
		, Contition(ET4BranchCondition::Default)
		, ConditionName(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Branch; }

	FString ToString() const override
	{
		return FString(TEXT("BranchAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Branch '%s'"), *(ActionPackAsset.GetAssetName())); // #54
	}
};

// #132 : 네이밍에 명시적으로 Test prefix 를 붙일 것! 사용중 혼란을 야기할 수 있음
USTRUCT()
struct T4ASSET_API FT4MovementTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4MovementTestSettings()
#if WITH_EDITORONLY_DATA
		: TestMoveAngleType(ET4MoveAngleType::Back)
		, TestMaxDistance(0.0f)
		, TestMaxMoveSpeed(0.0f)
		, TestMaxHeight(0.0f)
		, TestMaxHeightSpeed(0.0f) // #140 : MaxHeight / HeightSpeed 로 최대 높이까지의 시간을 구한다.
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4MoveAngleType TestMoveAngleType;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float TestMaxDistance; // #140 : 테스트용 최대 거리

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float TestMaxMoveSpeed; // #132 : 테스트용 속도

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "5.0", UIMin = "5.0", UIMax = "1500.0"))
	float TestMaxHeight; // #127, #132 : 테스트용 포물선에서 사용될 최대 높이

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float TestMaxHeightSpeed; // #140 : MaxHeight / HeightSpeed 로 최대 높이까지의 시간을 구한다.
#endif
};

// #132
USTRUCT()
struct T4ASSET_API FT4MovementActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeMovementActionDetails

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4MovementType MovementType; // #132

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4AcceleratedMotion AcceleratedMotion; // #127

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "1.0"))
	float AirborneFlightTimeRatio; // #132 : 정점에서 유지할 체공시간 비율

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4MovementTestSettings TestSettings; // #132
#endif

public:
	FT4MovementActionData()
		: FT4ActionDataBase(StaticActionType())
		, MovementType(ET4MovementType::Straight)
		, AcceleratedMotion(ET4AcceleratedMotion::Uniform) // #127
		, AirborneFlightTimeRatio(0.0f) // #132 : 정점에서 유지할 체공시간
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Movement; }

	FString ToString() const override
	{
		return FString(TEXT("MovementAction"));
	}

	FString ToDisplayText() override
	{
#if WITH_EDITOR
		FString DisplayString;
		switch (MovementType)
		{
			case ET4MovementType::Straight:
				DisplayString += TEXT("Straight");
				break;

			case ET4MovementType::Parabola:
				DisplayString += TEXT("Parabola");
				break;

			case ET4MovementType::Howitzer:
				DisplayString += TEXT("Howitzer");
				break;

			case ET4MovementType::Mortar:
				DisplayString += TEXT("Mortar");
				break;

			case ET4MovementType::Airborne:
				DisplayString += TEXT("Airborne");
				break;

			default:
				DisplayString += TEXT("None");
				break;
		};
		switch (AcceleratedMotion)
		{
			case ET4AcceleratedMotion::Uniform:
				DisplayString += TEXT(" (Uniform)");
				break;
				
#if 0 // #140 : 타이밍 오류로 막아둠
			case ET4AcceleratedMotion::Acceleration:
				DisplayString += TEXT(" (Accel)");
				break;

			case ET4AcceleratedMotion::Deceleration:
				DisplayString += TEXT(" (Decel)");
				break;
#endif

			default:
				DisplayString += TEXT(" (None)");
				break;
		}
		return FString::Printf(TEXT("Movement '%s'"), *DisplayString); // #132
#else
		return FString();
#endif
	}
};

// #134
USTRUCT()
struct T4ASSET_API FT4ActionAnimSequenceData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName SectionName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayCount PlayCount;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float PlayRate;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float PlayCutOffTimeSec; // #134 : 플레이중인 애니를 짜르고 들어간다. Sequential 에서만 사용됨

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendOutTimeSec;

public:
	FT4ActionAnimSequenceData()
		: SectionName(NAME_None)
		, PlayCount(ET4PlayCount::OneShot)
		, PlayRate(1.0f)
		, PlayCutOffTimeSec(0.0f) // #134 : 플레이중인 애니를 짜르고 들어간다. Sequential 에서만 사용됨
		, BlendInTimeSec(T4Const_DefaultAnimBlendTimeSec)
		, BlendOutTimeSec(T4Const_DefaultAnimBlendTimeSec)
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4AnimationActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeAnimationActionDetails

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4ActionAnimSequenceData> AnimSequenceDatas; // #134

	void AddAnimSequenceData(
		FName InSectionName, 
		ET4PlayCount InPlayCount,
		float InBlendInTimeSec, 
		float InBlendOutTimeSec
	) // #134
	{
		FT4ActionAnimSequenceData& AnimSequenceData = AnimSequenceDatas.AddDefaulted_GetRef();
		AnimSequenceData.SectionName = InSectionName;
		AnimSequenceData.PlayCount = InPlayCount;
		AnimSequenceData.BlendInTimeSec = InBlendInTimeSec;
		AnimSequenceData.BlendOutTimeSec = InBlendOutTimeSec;
	}

public:
	FT4AnimationActionData()
		: FT4ActionDataBase(StaticActionType())
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Animation; }

	FString ToString() const override
	{
		return FString(TEXT("AnimationAction"));
	}

	FString ToDisplayText() override
	{
		if (0 >= AnimSequenceDatas.Num())
		{
			return FString(TEXT("Empty"));
		}
		FString DisplayString;
		int32 NumDatas = 0;
		for (const FT4ActionAnimSequenceData& Data : AnimSequenceDatas)
		{
			if (0 < NumDatas)
			{
				DisplayString += TEXT(" => ");
			}
			DisplayString += Data.SectionName.ToString();
			if (ET4PlayCount::Looping == Data.PlayCount)
			{
				DisplayString += TEXT(" (Loop)");
			}
			NumDatas++;
		}
		return FString::Printf(TEXT("Animation '%s'"), *DisplayString); // #54
	}
};

// #108
USTRUCT()
struct T4ASSET_API FT4MeshActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeMeshActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4AttachParent AttachParent;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bParentInheritPoint; // #76 : Parent ActionPoint 가 없다면 본래 세팅을 따르도록...

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ActionPoint; // #57

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UStaticMesh> StaticMeshAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector LocalOffset; // #112

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FRotator LocalRotation; // #108

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector LocalScale; // #54

public:
	FT4MeshActionData()
		: FT4ActionDataBase(StaticActionType())
		, AttachParent(ET4AttachParent::Default) // #54
		, bParentInheritPoint(false) // #76
		, ActionPoint(T4Const_DefaultActionPointName)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, LocalOffset(FVector::ZeroVector) // #112
		, LocalRotation(FRotator::ZeroRotator) // #112
		, LocalScale(FVector::OneVector) // #54
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Mesh; }

	FString ToString() const override
	{
		return FString(TEXT("MeshAction"));
	}

	FString ToDisplayText() override
	{
		if (!StaticMeshAsset.IsNull())
		{
			return FString::Printf(TEXT("StaticMesh '%s'"), *(StaticMeshAsset.GetAssetName())); // #54
		}
		return FString::Printf(TEXT("Not Set Mesh")); // #54
	}
};

class UParticleSystem;

USTRUCT()
struct T4ASSET_API FT4ParticleActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeParticleActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4AttachParent AttachParent;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bParentInheritPoint; // #76 : Parent ActionPoint 가 없다면 본래 세팅을 따르도록...

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ActionPoint; // #57

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UParticleSystem> ParticleAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector LocalOffset; // #112

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FRotator LocalRotation; // #112

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector LocalScale; // #54

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float PlayRate;

public:
	FT4ParticleActionData()
		: FT4ActionDataBase(StaticActionType())
		, AttachParent(ET4AttachParent::Default) // #54
		, bParentInheritPoint(false) // #76
		, ActionPoint(T4Const_DefaultActionPointName)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, LocalOffset(FVector::ZeroVector) // #112
		, LocalRotation(FRotator::ZeroRotator) // #112
		, LocalScale(FVector::OneVector) // #54
		, PlayRate(1.0f)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Particle; }

	FString ToString() const override
	{
		return FString(TEXT("ParticleAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Particle '%s'"), *(ParticleAsset.GetAssetName())); // #54
	}
};

// #54
class UMaterialInterface;

USTRUCT()
struct T4ASSET_API FT4DecalActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeDecalActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4AttachParent AttachParent;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bParentInheritPoint; // #76 : Parent ActionPoint 가 없다면 본래 세팅을 따르도록...

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ActionPoint;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UMaterialInterface> DecalMaterial;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector Scale; // #54

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	int32 DecalSortOrder;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector DecalSize;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float FadeInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float FadeOutTimeSec;

public:
	FT4DecalActionData()
		: FT4ActionDataBase(StaticActionType())
		, AttachParent(ET4AttachParent::Default)
		, bParentInheritPoint(false) // #76
		, ActionPoint(T4Const_DefaultActionPointName)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, Scale(FVector::OneVector)
		, DecalSortOrder(0)
		, DecalSize(128.0f, 256.0f, 256.0f)
		, FadeInTimeSec(0.5f)
		, FadeOutTimeSec(0.5f)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Decal; }

	FString ToString() const override
	{
		return FString(TEXT("DecalAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Decal '%s'"), *(DecalMaterial.GetAssetName())); // #54
	}
};

// #132 : 네이밍에 명시적으로 Test prefix 를 붙일 것! 사용중 혼란을 야기할 수 있음
USTRUCT()
struct T4ASSET_API FT4ProjectileTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ProjectileTestSettings()
#if WITH_EDITORONLY_DATA
		: TestInitializeSpeed(0.0f)
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float TestInitializeSpeed; // #132 : 테스트용 초기 속도, AcceleratedMotion 에 따라 반응함
#endif
};

// #63
USTRUCT()
struct T4ASSET_API FT4ProjectileActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeProjectileActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ActionPoint; // 어딘가에 붙어야 할 경우. 예) 오른손...

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> CastingActionPackAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> HeadActionPackAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> EndActionPackAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4MovementType ProjectileMotion; // #127

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4AcceleratedMotion AcceleratedMotion; // #127

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "1000"))
	float MaxHeight; // #127 : 포물선(Parabola) 에서 사용될 최대 높이

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bRandomRollAngle; // #127

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "!bRandomRollAngle"))
	float InitialRollAngle; // #127

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnableHitAttached; // #112 : 충돌 지점에 잔상을 남길지 여부 (Arrow : true, Fireball : false)

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnableHitAttached"))
	float HitAttachedTimeSec; // #112 : 충돌 지점에 잔상 시간

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bEnableBounceOut; // #127 : 명확한 타겟없이 무한대로 발사될 경우 부딪히는 효과 처리 사용 여부

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bEnableBounceOut"))
	TSoftObjectPtr<UT4ActionPackAsset> BounceOutActionPackAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bUseOscillate; // #127 : 흔들림 여부

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bUseOscillate", UIMin = "0.0", UIMax = "45"))
	float OscillateRange; // #127 : 흔들림 크기

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float ProjectileLength; // #112 : Projectile 의 길이, 충돌 계산에서 Offset 으로 사용. (원점 에서의 길이)

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float ThrowDelayTimeSec; // Play 이후 ActionPoint 에서 떨어지는 시간!

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float CastingStopDelayTimeSec; // ThrowDelayTimeSec 이후 Casting ActionPack 가 삭제될 시간

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4ProjectileTestSettings TestSettings; // #132
#endif

public:
	FT4ProjectileActionData()
		: FT4ActionDataBase(StaticActionType())
		, ActionPoint(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, ProjectileMotion(ET4MovementType::Straight) // #127
		, AcceleratedMotion(ET4AcceleratedMotion::Uniform) // #127
		, MaxHeight(0.0f) // #127 : 포물선(Parabola) 에서 사용될 최대 높이
		, bRandomRollAngle(false) // #127
		, InitialRollAngle(0.0f) // #127
		, bEnableHitAttached(false)// #112
		, HitAttachedTimeSec(1.0f) // #112
		, bEnableBounceOut(false) // #127 : 명확한 타겟없이 무한대로 발사될 경우 부딪히는 효과 처리 사용 여부
		, bUseOscillate(false) // #127
		, OscillateRange(0.0f) // #127
		, ProjectileLength(50.0f) // #112
		, ThrowDelayTimeSec(0.0f)
		, CastingStopDelayTimeSec(0.2f)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Projectile; }

	FString ToString() const override
	{
		return FString(TEXT("ProjectileAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Projectile '%s'"), *(HeadActionPackAsset.GetAssetName()));
	}
};

// #135 : 
USTRUCT()
struct T4ASSET_API FT4ReactionTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4ReactionTestSettings()
#if WITH_EDITORONLY_DATA
		: bTestReverseRotation(false)
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float bTestReverseRotation; // #135 : 테스트시 이동 방향과 애니메이션을 달리하고 싶을 경우 체크!
#endif
};

// #76
USTRUCT()
struct T4ASSET_API FT4ReactionActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeReactionActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4EntityReactionType ReactionType;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ReactionName_A; // hit : Back (뒤로 기울임), knockback : Back (뒤로 밀림)

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ReactionName_B; // hit : Front (앞으로 기울임), knockback : Front (앞으로 밀림)

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ReactionName_C; // hit : Right (우측으로), knockback : Up (공중으로)

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ReactionName_D; // hit : Left (좌측으로)

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bUseRotation; // #132 : Shoot 방향으로 회전 사용 여부

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4ReactionTestSettings TestSettings; // #135
#endif

public:
	FT4ReactionActionData()
		: FT4ActionDataBase(StaticActionType())
		, ReactionType(ET4EntityReactionType::None) // #135
		, ReactionName_A(NAME_None)
		, ReactionName_B(NAME_None)
		, ReactionName_C(NAME_None)
		, ReactionName_D(NAME_None)
		, bUseRotation(false) // #132 : 맞는 방향으로 회전한다. (방향이 있는 넉백류만 사용)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Reaction; }

	FString ToString() const override
	{
		return FString(TEXT("ReactionAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Reaction '%s'"), *(ReactionName_A.ToString())); // #67
	}
};

// #81
USTRUCT()
struct T4ASSET_API FT4PlayTagActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizePlayTagActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName PlayTagName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayTagType PlayTagType;

public:
	FT4PlayTagActionData()
		: FT4ActionDataBase(StaticActionType())
		, PlayTagName(NAME_None)
		, PlayTagType(ET4PlayTagType::All)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::PlayTag; }

	FString ToString() const override
	{
		return FString(TEXT("PlayTagAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("PlayTag '%s'"), *(PlayTagName.ToString()));
	}
};

// #102
USTRUCT()
struct T4ASSET_API FT4TimeScaleActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeTimeScaleActionDetails

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayTarget PlayTarget;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing BlendInCurve;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing BlendOutCurve;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float BlendOutTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.1", UIMin = "0.1", UIMax = "5"))
	float TimeScale;

public:
	FT4TimeScaleActionData()
		: FT4ActionDataBase(StaticActionType())
		, PlayTarget(ET4PlayTarget::Default)
		, BlendInCurve(ET4BuiltInEasing::Linear)
		, BlendInTimeSec(0.0f)
		, BlendOutCurve(ET4BuiltInEasing::Linear)
		, BlendOutTimeSec(0.0f)
		, TimeScale(1.0f)
	{
		LifecycleType = ET4LifecycleType::Duration; // Duration 만!, 시스템으로 제어 필요
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::TimeScale; }

	FString ToString() const override
	{
		return FString(TEXT("TimeScaleAction"));
	}

#if WITH_EDITOR
	void Reset()
	{
		PlayTarget = ET4PlayTarget::Default;
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("TimeScale 'x%.1f'"), TimeScale);
	}
#endif
};

// #58
USTRUCT()
struct T4ASSET_API FT4CameraWorkSectionKeyData
{
	GENERATED_USTRUCT_BODY()

public:
	// #58 : Property 수정시 UT4CameraWorkSectionKeyObject 에도 추가해줄 것!
	//       SaveCameraSectionKeyObject, UpdateCameraSectionKeyObject
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	int32 ChannelKey; // Track Section 의 FFrameNumber 즉, FrameNumber 가 Unique Key 가 됨으로 저장해준다.

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float StartTimeSec; // FrameNumber 를 Sec 으로 변환

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing EasingCurve; // #102 : Droplist 선택시 PropertyChanged event 가 와서 변경을 못하는 문제가 있어 하드코딩한 처리가 있음. 이름으로 검색!!

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName LookAtPoint; // ActionPoint

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bInverse; // LookAtPoint Inverse

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVector ViewDirection; // Local

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float Distance;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float FOVDegree;

public:
	FT4CameraWorkSectionKeyData()
		: ChannelKey(INDEX_NONE)
		, StartTimeSec(0.0f)
		, EasingCurve(ET4BuiltInEasing::Linear)
		, LookAtPoint(NAME_None)
		, bInverse(false)
		, ViewDirection(FVector::BackwardVector)
		, Distance(100.0f)
		, FOVDegree(0.0f)
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4CameraWorkSectionData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4CameraWorkSectionKeyData> KeyDatas;

public:
	FT4CameraWorkSectionData()
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4CameraWorkActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeCameraWorkActionDetails

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayTarget PlayTarget;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing BlendInCurve;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing BlendOutCurve;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendOutTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4CameraWorkSectionData SectionData;

public:
	FT4CameraWorkActionData()
		: FT4ActionDataBase(StaticActionType())
		, PlayTarget(ET4PlayTarget::Default)
		, BlendInCurve(ET4BuiltInEasing::Linear)
		, BlendInTimeSec(0.0f)
		, BlendOutCurve(ET4BuiltInEasing::Linear)
		, BlendOutTimeSec(0.0f)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::CameraWork; }

	FString ToString() const override
	{
		return FString(TEXT("CameraWorkAction"));
	}

#if WITH_EDITOR
	void Reset()
	{
		PlayTarget = ET4PlayTarget::Default;
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("")); // SectionKey 가 여려개 생성됨으로 출력을 제외!
	}
#endif
};

// #101
USTRUCT()
struct T4ASSET_API FT4CameraShakeOscillationData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendOutTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FROscillator RotOscillation;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FVOscillator LocOscillation;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FFOscillator FOVOscillation;

public:
	FT4CameraShakeOscillationData()
		: BlendInTimeSec(0.0f)
		, BlendOutTimeSec(0.0f)
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4CameraShakeAnimData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = ClientOnly, meta=(ClampMin = "0.001"))
	float AnimPlayRate;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta=(ClampMin = "0.0"))
	float AnimScale;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta=(ClampMin = "0.0"))
	float AnimBlendInTime;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta=(ClampMin = "0.0"))
	float AnimBlendOutTime;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	uint32 bRandomAnimSegment : 1;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0", editcondition = "bRandomAnimSegment"))
	float RandomAnimSegmentDuration;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	class UCameraAnim* CameraAnim;

public:
	FT4CameraShakeAnimData()
		: AnimPlayRate(1.0f)
		, AnimScale(0.0f)
		, AnimBlendInTime(0.0f)
		, AnimBlendOutTime(0.0f)
		, bRandomAnimSegment(0)
		, RandomAnimSegmentDuration(0.0f)
		, CameraAnim(nullptr)
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4CameraShakeActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeShakeActionDetails

	// #101 : UCameraShake : Property

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayTarget PlayTarget; // #100

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	float PlayScale;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FRotator UserDefinedPlaySpace;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4CameraShakeOscillationData OscillationData;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FT4CameraShakeAnimData AnimData;

public:
	FT4CameraShakeActionData()
		: FT4ActionDataBase(StaticActionType())
		, PlayTarget(ET4PlayTarget::Default)
		, PlayScale(1.0f)
		, PlaySpace(ECameraAnimPlaySpace::CameraLocal)
		, UserDefinedPlaySpace(ForceInitToZero)
	{
		LifecycleType = ET4LifecycleType::Duration; // Duration 만!, 시스템으로 제어 필요
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::CameraShake; }

	FString ToString() const override
	{
		return FString(TEXT("CameraShakeAction"));
	}

#if WITH_EDITOR
	void Reset()
	{
		PlayTarget = ET4PlayTarget::Default;
		PlayScale = 1.0f;
		PlaySpace = ECameraAnimPlaySpace::CameraLocal;
		UserDefinedPlaySpace = FRotator::ZeroRotator;
		OscillationData = FT4CameraShakeOscillationData();
		AnimData = FT4CameraShakeAnimData();
	}

	FString ToDisplayText() override
	{
		return FString::Printf(
			TEXT("CameraShake 'PlayTarget => %s'"), 
			(ET4PlayTarget::All == PlayTarget) ? TEXT("All") : TEXT("Player")
		);
	}
#endif
};

// #100
USTRUCT()
struct T4ASSET_API FT4PostProcessActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizePostProcessActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayTarget PlayTarget; // #100

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing BlendInCurve;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4BuiltInEasing BlendOutCurve;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (ClampMin = "0.0"))
	float BlendOutTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FPostProcessSettings PostProcessSettings; // #98 에서는 Zone 처리,

public:
	FT4PostProcessActionData()
		: FT4ActionDataBase(StaticActionType())
		, PlayTarget(ET4PlayTarget::Default)
		, BlendInCurve(ET4BuiltInEasing::Linear)
		, BlendInTimeSec(0.0f)
		, BlendOutCurve(ET4BuiltInEasing::Linear)
		, BlendOutTimeSec(0.0f)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::PostProcess; }

	FString ToString() const override
	{
		return FString(TEXT("PostProcessAction"));
	}

#if WITH_EDITOR
	void Reset()
	{
		PlayTarget = ET4PlayTarget::Default;
		BlendInTimeSec = 0.0f;
		BlendOutTimeSec = 0.0f;
		PostProcessSettings.SetBaseValues();
	}

	FString ToDisplayText() override
	{
		return FString::Printf(
			TEXT("PostProcess 'PlayTarget => %s'"), 
			(ET4PlayTarget::All == PlayTarget) ? TEXT("All") : TEXT("Player")
		);
	}
#endif
};

// #99
class UT4ZoneEntityAsset;
USTRUCT()
struct T4ASSET_API FT4EnvironmentActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeEnvironmentActionDetails
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4AttachParent AttachParent;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bParentInheritPoint; // #76 : Parent ActionPoint 가 없다면 본래 세팅을 따르도록...

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	FName ActionPoint;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	ET4PlayTarget PlayTarget; // #100

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ZoneEntityAsset> ZoneEntityAsset;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bOverrideBlendTime;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bOverrideBlendTime", ClampMin = "0.0"))
	float OverrideBlendInTimeSec;

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bOverrideBlendTime", ClampMin = "0.0"))
	float OverrideBlendOutTimeSec;

public:
	FT4EnvironmentActionData()
		: FT4ActionDataBase(StaticActionType())
		, AttachParent(ET4AttachParent::Default)
		, bParentInheritPoint(false) // #76
		, ActionPoint(T4Const_DefaultActionPointName)
		, PlayTarget(ET4PlayTarget::Default)
		, bOverrideBlendTime(false)
		, OverrideBlendInTimeSec(1.0f)
		, OverrideBlendOutTimeSec(1.0f)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Environment; }

	FString ToString() const override
	{
		return FString(TEXT("EnvironmentAction"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Environment '%s'"), *(ZoneEntityAsset.GetAssetName()));
	}
};

// #56, #134: Action Editor 에서 Invisible or Isolate 로 출력을 제어할 때 더미용으로 사용 (delay, duration 동작 보장)
// WARN : 시스탬에서 사용하는 예약된 Struct 임으로 Action Editor 와 연계한 작업을 할 필요가 없음!
USTRUCT()
struct T4ASSET_API FT4VoidActionData : public FT4ActionDataBase
{
	GENERATED_USTRUCT_BODY()

public:
	const FT4ActionDataBase* SourceDataBase;

public:
	FT4VoidActionData()
		: FT4ActionDataBase(StaticActionType())
		, SourceDataBase(nullptr)
	{
	}

	static ET4ActionDataType StaticActionType() { return ET4ActionDataType::Void; }

	FString ToString() const override
	{
		return FString(TEXT("VoidAction"));
	}
};
