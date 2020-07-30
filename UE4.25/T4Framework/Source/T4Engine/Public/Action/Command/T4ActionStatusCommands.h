// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionCommandBase.h"
#include "T4Asset/Public/Entity/T4EntityTypes.h" // #132
#include "T4ActionStatusCommands.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CMD

// ET4ActionCommandType::Aim // #113
// ET4ActionCommandType::LockOn
// ET4ActionCommandType::AnimSet // #73
// ET4ActionCommandType::Stance // #106
// ET4ActionCommandType::EquipWeapon
// ET4ActionCommandType::UnequipWeapon
// ET4ActionCommandType::Costume // #72
// ET4ActionCommandType::Hit // #76
// ET4ActionCommandType::CrowdControl // #131
// ET4ActionCommandType::Die // #76
// ET4ActionCommandType::Resurrect // #76
// ET4ActionCommandType::ReactionStop // #132

// #113
USTRUCT()
struct T4ENGINE_API FT4AimActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	bool bClear;

	UPROPERTY(EditAnywhere, Category = Common)
	float HeadYawAngle; // #40

	UPROPERTY(EditAnywhere, Category = Common)
	FVector TargetDirection;

public:
	FT4AimActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, bClear(false)
		, HeadYawAngle(T4Const_EmptyYawAngle)
		, TargetDirection(FVector::ZeroVector)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Aim; }

	FString ToString() const override
	{
		return FString(TEXT("AimAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4LockOnActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	bool bSetLocked;

	UPROPERTY(EditAnywhere, Category = Common)
	float HeadYawAngle; // #40

public:
	FT4LockOnActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, bSetLocked(false)
		, HeadYawAngle(T4Const_EmptyYawAngle)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::LockOn; }

	FString ToString() const override
	{
		return FString(TEXT("LockOnAction"));
	}
};

// #73
USTRUCT()
struct T4ENGINE_API FT4AnimSetActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName AnimSetName;

	UPROPERTY(EditAnywhere, Category = Common)
	bool bImmediate; // #111

	UPROPERTY(EditAnywhere, Category = Common)
	bool bOnlyFlush; // #116 : 스탠스 전환중이면 강제로 Flush 해준다. (이후 필요하다면 별도 Action 으로 뺄 것!)

public:
	FT4AnimSetActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, AnimSetName(NAME_None)
		, bImmediate(false) // #111
		, bOnlyFlush(false) // #116 : 스탠스 전환중이면 강제로 Flush 해준다. (이후 필요하다면 별도 Action 으로 뺄 것!)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::AnimSet; }

	FString ToString() const override
	{
		return FString(TEXT("AnimSetAction"));
	}
};

// #106
USTRUCT()
struct T4ENGINE_API FT4StanceActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName StanceName;

	UPROPERTY(EditAnywhere, Category = Common)
	float MoveSpeed; // #140 : InMoveSpeed per Stance

	UPROPERTY(EditAnywhere, Category = Common)
	bool bImmediate; // #111

public:
	FT4StanceActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, StanceName(NAME_None)
		, MoveSpeed(0.0f) // #140 : InMoveSpeed per Stance
		, bImmediate(false)  // #111
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Stance; }

	FString ToString() const override
	{
		return FString(TEXT("StanceAction"));
	}
};

// #111
USTRUCT()
struct T4ENGINE_API FT4EquipWeaponEntityData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<class UT4WeaponEntityAsset> WeaponEntityAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	FName OverrideEquipPoint; // #57 : BoneOrSocketName;

public:
	FT4EquipWeaponEntityData()
		: OverrideEquipPoint(NAME_None)
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4EquipWeaponActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActionKey EquipmentActionKey; // #111 : 내부에서 아이템 관리 용도로 사용될 Equip 에서 넣어준 ActionKey

	UPROPERTY(EditAnywhere, Category = Common)
	FT4EquipWeaponEntityData MainWeaponData;

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4EquipWeaponEntityData> SubWeaponDatas; // #111

	UPROPERTY(EditAnywhere, Category = Common)
	bool bChangeAnimSetInEntity; // #110 : Weapon Entity 에 설정된 AnimSet 도 함께 설정해준다.

	UPROPERTY(EditAnywhere, Category = Common)
	bool bChangeAnimSetSync; // #111 : 스탠스 변경과 동기화한다.

public:
	FT4EquipWeaponActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, bChangeAnimSetInEntity(false) // #110 : Weapon Entity 에 설정된 AnimSet 도 함께 설정해준다.
		, bChangeAnimSetSync(false) // #111 : 스탠스 변경과 동기화한다.
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::EquipWeapon; }

	bool Validate(FString& OutMsg) override
	{
		if (MainWeaponData.WeaponEntityAsset.IsNull())
		{
			OutMsg = TEXT("Invalid Main WeaponEntityAsset");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("EquipWeaponAction"));
	}
};

// #48
USTRUCT()
struct T4ENGINE_API FT4UnequipWeaponActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActionKey EquipmentActionKey; // #111 : 내부에서 아이템 관리 용도로 사용될 Equip 에서 넣어준 ActionKey

	UPROPERTY(EditAnywhere, Category = Common)
	bool bChangeDefaultAnimSet; // #110 : Default AnimSet 로 변경해준다.

	UPROPERTY(EditAnywhere, Category = Common)
	bool bChangeAnimSetSync; // #111 : 스탠스 변경과 동기화한다.

public:
	FT4UnequipWeaponActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, bChangeDefaultAnimSet(false) // #110 : Default AnimSet 로 변경해준다.
		, bChangeAnimSetSync(false) // #111 : 스탠스 변경과 동기화한다.
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::UnequipWeapon; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("UnequipWeaponAction"));
	}
};

// #37
USTRUCT()
struct T4ENGINE_API FT4CostumeActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<class UT4CostumeEntityAsset> CostumeEntityAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	FName TargetPartsName;
	
	UPROPERTY(EditAnywhere, Category = Common)
	bool bClearDefault; // #72 : Character Entity 에 지정된 기본값으로 변경

public:
	FT4CostumeActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, TargetPartsName(NAME_None)
		, bClearDefault(false)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Costume; }

	bool Validate(FString& OutMsg) override
	{
		if (!bClearDefault && CostumeEntityAsset.IsNull())
		{
			OutMsg = TEXT("Invalid CostumeEntityAsset");
			return false;
		}
		if (TargetPartsName == NAME_None)
		{
			OutMsg = TEXT("Not set TargetParts");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CostumeAction"));
	}
};

// #130
USTRUCT()
struct T4ENGINE_API FT4SkinActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName TargetSkinName;

public:
	FT4SkinActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, TargetSkinName(NAME_None)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Skin; }

	bool Validate(FString& OutMsg) override
	{
		if (TargetSkinName == NAME_None)
		{
			OutMsg = TEXT("Not set TargetSkin");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SkinAction"));
	}
};

// #76
USTRUCT()
struct T4ENGINE_API FT4HitActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName ReactionName;

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ShootDirection;

public:
	FT4HitActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, ReactionName(NAME_None)
		, ShootDirection(FVector::ZeroVector)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Hit; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	virtual FString ToString() const override
	{
		return FString(TEXT("HitAction"));
	}
};

// #131
USTRUCT()
struct T4ENGINE_API FT4CrowdControlActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName ReactionName;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4EntityReactionType ReactionType; // #135 : Knockback & Airborne & Stun

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ShootDirection;

public:
	FT4CrowdControlActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, ReactionName(NAME_None)
		, ReactionType(ET4EntityReactionType::None) // #135 : Knockback & Airborne & Stun
		, ShootDirection(FVector::ZeroVector)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::CrowdControl; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	virtual FString ToString() const override
	{
		return FString(TEXT("CrowdControlAction"));
	}
};

// #76
USTRUCT()
struct T4ENGINE_API FT4DieActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName ReactionName;

	UPROPERTY(EditAnywhere, Category = Common)
	FVector ShootDirection;

public:
	FT4DieActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, ReactionName(NAME_None)
		, ShootDirection(FVector::ZeroVector)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Die; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	virtual FString ToString() const override
	{
		return FString(TEXT("DieAction"));
	}
};

// #76
USTRUCT()
struct T4ENGINE_API FT4ResurrectActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName ReactionName;

public:
	FT4ResurrectActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, ReactionName(NAME_None)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Resurrect; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	virtual FString ToString() const override
	{
		return FString(TEXT("ResurrectAction"));
	}
};

// #132
USTRUCT()
struct T4ENGINE_API FT4ReactionStopActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FName ReactionName;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4EntityReactionType ReactionType;

public:
	FT4ReactionStopActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, ReactionName(NAME_None)
		, ReactionType(ET4EntityReactionType::None)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::ReactionStop; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	virtual FString ToString() const override
	{
		return FString(TEXT("ReactionStopAction"));
	}
};
