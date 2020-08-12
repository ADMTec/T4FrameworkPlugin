// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4Asset/Public/Entity/T4EntityKey.h" // #114
#include "T4Asset/Public/T4AssetTypes.h" // #140
#include "T4Engine/Public/T4EngineTypes.h" // #63

#if WITH_EDITOR
#include "DragAndDrop/DecoratedDragDropOp.h" // #135, #140
#endif

#include "T4FrameworkEditor.generated.h"

/**
  * #60 : Only Editor
 */
UENUM()
enum class ET4EditorPlayRole : uint8
{
	Attacker,
	Defender,

	None UMETA(Hidden),
};

UENUM()
enum class ET4EditorAttackType : uint8 // #63
{
	Swing,
	Throw,
	Launch, // #135, 특수, 발사체와 반동이 함께 있음 (TODO : 적당한 이름이 있다면 수정할 것)

	Air, // #135 : Jump Attack
	Dash, // #135

	None,
};

UENUM()
enum class ET4EditorEffectType : uint8 // #68
{
	DirectDamage,
	AreaDamage,

	Knockback, // CC
	Airborne, // CC
	Stun, // CC

	Mis, // #135, #142

	None UMETA(Hidden),
};

UENUM()
enum class ET4EditorFindTarget : uint8 // #117 : 공객 대상을 찾을 경우에 대한 옵션 (TODO : Tribe or Enemy)
{
	All,
	Static,
	Dynamic,

	None UMETA(Hidden),
};

class UT4ActionPackAsset;


USTRUCT()
struct FT4EditorNPCDataInfo // #135
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Common)
	FName InitializeSkinName;

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName InitializeAnimSetName; // #142

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName InitializeStanceName; // #142
};

USTRUCT()
struct FT4EditorSkillDataInfo
{
	GENERATED_USTRUCT_BODY()

public:
	// #T4_ADD_SKILL_CONTENT_TAG 

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName Name;

	UPROPERTY(VisibleAnywhere, Category = Common)
	ET4EditorAttackType AttackType; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere, Category = Common)
	float DurationSec;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4MoveAngleType MoveAngleType; // #135

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveMaxDistance; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveMaxHeight; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveMaxHeightSpeed; // #140

	UPROPERTY(EditAnywhere, Category = Common)
	float ProjectileSpeed; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	bool bMoveable;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bLockOn; // #113

	UPROPERTY(EditAnywhere, Category = Common)
	float RotationRateSpeed; // #112, #113 : 캐릭터 InPlaceRotationRate * Speed (1 일 경우 기본값 사용)

	UPROPERTY(EditAnywhere, Category = Common)
	ET4EditorFindTarget FindTargetType; // #117 : 공객 대상을 찾을 경우에 대한 옵션 (TODO : Tribe or Enemy)

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bCasting; // #113, #135

	UPROPERTY(EditAnywhere, Category = ClientOnly, meta = (EditCondition = "bCasting", ClampMin = "-45.0", ClampMax = "45.0"))
	float AimingPitchAngle; // #127

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> DefaultActionPackAsset;

	UPROPERTY(VisibleAnywhere, Category = ClientOnly, meta = (EditCondition = "bCasting"))
	TSoftObjectPtr<UT4ActionPackAsset> CastingActionPackAsset;

	UPROPERTY(VisibleAnywhere, Category = ClientOnly, meta = (EditCondition = "bCasting"))
	TSoftObjectPtr<UT4ActionPackAsset> CancelActionPackAsset; // #135

	UPROPERTY(VisibleAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4ActionPackAsset> IndicateActionPackAsset; // #116

public:
	FT4EditorSkillDataInfo()
	{
		Reset();
	}

	void Reset()
	{
		Name = NAME_None;
		AttackType = ET4EditorAttackType::Swing;
		HitDelayTimeSec = 0.0f;
		DurationSec = 0.0f;;
		MoveAngleType = ET4MoveAngleType::None; // #135
		MoveMaxDistance = 0.0f; // #140
		MoveMaxHeight = 0.0f; // #140
		MoveMaxHeightSpeed = 0.0f; // #140
		ProjectileSpeed = 0.0f; // #63
		bMoveable = false;
		bLockOn = false; // #113
		bCasting = false; // #113
		AimingPitchAngle = 0.0f; // #127
		RotationRateSpeed = 1.0f; // #113
		FindTargetType = ET4EditorFindTarget::All; // #117
	}
};

USTRUCT()
struct FT4EditorEffectDataInfo
{
	GENERATED_USTRUCT_BODY()

public:
	// #T4_ADD_EFFECT_TAG_DATA

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName Name;

	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4EditorEffectType EffectType;

	UPROPERTY(EditAnywhere, Category = Common)
	float HitDelayTimeSec;

	UPROPERTY(EditAnywhere, Category = Common)
	float DurationSec;

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	ET4MoveAngleType MoveAngleType; // #135

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxDistance; // #140 : 최대거리 / 시간으로 MovementSpeed 를 구한다. XY

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxHeight; // #135 : ET4GameAttackType Air

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float MoveMaxHeightSpeed; // #140 : 높이 속도 (이 속도로 최대 높이까지 시간을 구해서 포물선 공식 처리)

	UPROPERTY(EditAnywhere, Category = Common)
	float MinAreaRange; // #114 : ET4GameEffectType::AreaDamage

	UPROPERTY(EditAnywhere, Category = Common)
	float MaxAreaRange; // #114 : ET4GameEffectType::AreaDamage

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName ChainEffectDBKey;

	UPROPERTY(VisibleAnywhere, Category = Default)
	TSoftObjectPtr<UT4ActionPackAsset> ActionPackAsset;

public:
	FT4EditorEffectDataInfo()
	{
		Reset();
	}

	void Reset()
	{
		Name = NAME_None;
		EffectType = ET4EditorEffectType::None;
		HitDelayTimeSec = 0.0f;
		DurationSec = 0.0f;
		MoveAngleType = ET4MoveAngleType::None; // #135
		MoveMaxDistance = 0.0f;
		MoveMaxHeight = 0.0f; // #135
		MoveMaxHeightSpeed = 0.0f; // #140
		MinAreaRange = 0.0f; // #114 : ET4GameEffectType::AreaDamage
		MaxAreaRange = 0.0f; // #114 : ET4GameEffectType::AreaDamage
		ChainEffectDBKey = NAME_None;
	}
};

#if WITH_EDITOR

enum ET4EditorDataType
{
	EdData_PC,
	EdData_NPC,
	EdData_Weapon,
	EdData_Costume,
	EdData_SkillSet, // #120
	EdData_Skill,
	EdData_Effect,
};

struct FWorldContext;
class FViewport;
class IT4EditorViewportClient
{
public:
	virtual ~IT4EditorViewportClient() {}

	virtual FViewport* GetViewport() const = 0; // #68
	virtual FSceneView* GetSceneView() = 0; // #142

	virtual bool IsPreviewMode() const = 0;

	virtual void SetCustomCameraControl(bool bEnable) = 0; // #79

	virtual void SetMouseLocation(const int InX, const int InY) = 0;
	virtual bool GetMousePosition(float& InLocationX, float& InLocationY) = 0;

	virtual bool GetScreenCenterToWorldRay(const FVector2D& InScreenOffset, FRay& OutWorldRay) = 0; // #121 : Mode 에 따라 마우스 또는 화면 중앙(FPS)의 Ray 를 리턴
	virtual bool GetScreenPositionToWorldRay(const FVector2D& InScreenPosition, FRay& OutWorldRay) = 0; // #131
	virtual bool GetMousePositionToWorldRay(FRay& OutWorldRay) = 0;

	virtual bool IsShownMouseCursor() const = 0;
	virtual void ShowMouseCursor(bool InShow) = 0;
	virtual void SetMouseCursorType(EMouseCursor::Type InMouseCursorType) = 0;

	virtual void SetInitialLocationAndRotation(const FVector& InLocation, const FRotator& InRotation) = 0; // #86

	virtual void ShowDragBox(bool bInShow) = 0; // #142
	virtual bool GetDragBoxFrustum(bool bInUseBoxFrustum, FConvexVolume& OutFrustum) = 0; // #142

	virtual bool IsRealtimeOption() const = 0; // 4.25
	virtual void SetRealtimeOption(bool bInEnable) = 0; // 4.25

	virtual bool IsEditWidgetFocusing() const = 0; // #142
	virtual bool IsEditWidgetModeEnabled() const = 0; // #94, #118
	virtual void SetEditWidgetModeEnable(bool bInEnable) = 0; // #94, #118
	virtual void SetEditWidgetModeActiveAxisMode(bool bInLocationOnly) = 0; // #125 : Zone entity

	virtual bool IsKeyDeleteClicked() const = 0; // #142
	virtual bool IsKeyEndClicked() const = 0; // #142
	virtual bool IsKeySpaceBarClicked() const = 0; // #142

	virtual bool IsKeyLeftControlPressed() const = 0; // #142
	virtual bool IsKeyLeftAltPressed() const = 0; // #142
	virtual bool IsKeyLeftShiftPressed() const = 0; // #118

	virtual bool IsMouseLeftButtonPressed() const = 0; // #111
	virtual bool IsMouseLeftButtonClicked() const = 0; // #142 : 매프레임 Reset 됨
	virtual bool IsMouseRightButtonPressed() const = 0; // #111, #119
	virtual bool IsMouseRightButtonClicked() const = 0; // #142 : 매프레임 Reset 됨
};

// #114 : 에디터에서 N종의 게임 컨텐츠 데이터에서 정보를 얻기 위한 인터페이스
//        컨텐츠 쪽에서 구현해주어야 에디터에서 사용할 수 있음 (T4Gameplay 을 사용하지 않을 경우를 위함)
class UT4EntityAsset;
class UT4ActionPackAsset;
class T4FRAMEWORK_API IT4EditorGameData // #60
{
public:
	virtual ~IT4EditorGameData() {}

	virtual FName GetDataTypeName(ET4EditorDataType InEditorDataType) = 0; // #118
	virtual void GetDataNamesByDataType(ET4EditorDataType InEditorDataType, TArray<FName>& OutDBKeyNames) = 0;

	virtual UT4EntityAsset* GetEntityAssetInGameData(ET4EditorDataType InEditorDataType, const FName& InDataName) = 0;
	virtual UT4EntityAsset* GetWeaponEntityAssetInGameData(ET4EditorDataType InEditorDataType, const FName& InDataName) = 0; // #120
	virtual UT4ActionPackAsset* GetActionPackAssetInGameData(ET4EditorDataType InEditorDataType, const FName& InDataName) = 0; // #120

	virtual bool GetNPCDataInfo(const FName& InDataName, FT4EditorNPCDataInfo& OutData) = 0; // #135
	virtual bool GetSkillDataInfo(const FName& InDataName, FT4EditorSkillDataInfo& OutData) = 0;
	virtual bool GetEffectDataInfo(const FName& InDataName, FT4EditorEffectDataInfo& OutData) = 0;
};

// #114 : 에디터에서 N종의 게임 로직을 컨트롤 하기 위해 에디터상에서 구현해야 할 인터페이스
//        (T4Gameplay 을 사용하지 않을 경우를 위함)
class T4FRAMEWORK_API IT4EditorGameplayHandler
{
public:
	virtual ~IT4EditorGameplayHandler() {}

	virtual bool IsEnabled() const = 0; // #104 : conti 에서만 true, world 에서는 false, 아래 옵션 사용 여부
	virtual bool IsSimulating() const = 0; // #102

	virtual float GetDefaultMoveSpeed() const = 0; // #114

	virtual bool IsAISystemDisabled() const = 0;

	virtual bool IsSandbagAttackable() const = 0;
	virtual bool IsSandbagOneHitDie() const = 0; // #76

	virtual bool IsOverrideSkillData() const = 0; // #63
	virtual bool IsOverrideEffectData() const = 0; // #68

	virtual FName GetOverrideSkillDataName() const = 0;
	virtual FName GetOverrideEffectDataName() const = 0;

	virtual const FT4EditorSkillDataInfo& GetOverrideSkillDataInfo() const = 0;
	virtual const FT4EditorEffectDataInfo& GetOverrideEffectDataInfo() const = 0;

	virtual const FSoftObjectPath& GetOverrideActionPackPath() const = 0;
};

// #114 : 에디터에서 N종의 게임 로직을 사용하기 위한 인터페이스
//        (T4Gameplay 을 사용하지 않을 경우를 위함)
class UT4ContentSpawnAsset;
class T4FRAMEWORK_API IT4EditorGameplayCommand
{
public:
	virtual ~IT4EditorGameplayCommand() {}

	virtual bool DoWorldTravel(const FName& InWorldDataNameID) = 0; // #144

	virtual bool DoSpawn(
		ET4EditorDataType InGameDBType, // #126
		const FName& InDataNameID, 
		const FVector& InLocation, 
		const FRotator& InRotation, 
		const FT4ObjectID& InReservedObjectID
	) = 0; // #60 : to player

	virtual bool DoSpawnFromSpawnAsset(
		UT4ContentSpawnAsset* InSpawnAsset, 
		const FName& InSpawnActorID, 
		const FT4ObjectID& InReservedObjectID
	) = 0; // #126
	virtual bool DoSpawnFromSpawnAsset(UT4ContentSpawnAsset* InSpawnAsset) = 0; // #126

	virtual bool DoDespawn(const FT4ObjectID& InObjectID) = 0; // #114
	virtual bool DoDespawnAll(bool bClearPlayerActor) = 0; // #68

	// #114, #134 : 툴용도의 Server Send => Client Recv 대체 처리. 즉, 아래 코드에서 C/S 모드를 처리하고 있음에 유의!!
	virtual bool DoSpawnByEntityKey(
		const FT4ObjectID& InReservedObjectID, // #134 : GetPlayerController()->GetObjectID() 로 비교해 Player 를 판단한다.
		const FT4EntityKey& InEntityKey,
		const FVector& InLocation,
		const FRotator& InRotation,
		bool bInClientOnly
	) = 0;
	virtual bool DoDespawnWithEditorOnly(const FT4ObjectID& InObjectID, bool bInClientOnly) = 0;

	virtual bool DoChangeAnimSet(FName InAnimSetName) = 0;// #73, #114
	virtual bool DoChangeStance(FName InStanceName) = 0; // #106, #114

	virtual bool DoEquipWeaponItem(const FName& InWeaponDataNameID, bool bInUnequip) = 0; // #60 : to player
	virtual bool DoExchangeCostumeItem(const FName& InCostumeDataNameID) = 0; // #60 : to player
};

// #135, #140
class T4FRAMEWORK_API FT4DecoratedDragDropOp : public FDecoratedDragDropOp
{
public:
	const TArray<FName>& GetItemNames() const { return ItemNames; }
	uint8 GetParamValue() const { return ParamValue; } // #135

protected:
	TArray<FName> ItemNames;
	uint32 ParamValue;
};

#endif
