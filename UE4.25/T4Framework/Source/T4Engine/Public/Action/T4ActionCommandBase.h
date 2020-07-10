// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionKey.h"
#include "T4ActionTypes.h"
#include "T4EngineTypes.h"
#include "T4Asset/Public/ActionSet/T4ActionBase.h"
#include "T4ActionCommandBase.generated.h"

/**
  *
 */
USTRUCT()
struct T4ENGINE_API FT4ActionCommandBase : public FT4ActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	ET4ActionCommandType ActionCommandType;

	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActionKey ActionKey;

	UPROPERTY(EditAnywhere, Category = Common)
	float OffsetTimeSec; // 지정 시간을 건너띄어 플레이

	UPROPERTY(Transient)
	bool bTransient; // #110 : 예) true 일 경우 Action Replay 녹화에 포함되지 않는다.

public:
	FT4ActionCommandBase()
		: ActionCommandType(ET4ActionCommandType::None)
		, OffsetTimeSec(0.0f) // 지정 시간을 건너띄어 플레이
		, bTransient(false) // #110
	{
	}

	FT4ActionCommandBase(ET4ActionCommandType InActionCommandType)
		: ActionCommandType(InActionCommandType)
		, OffsetTimeSec(0.0f) // 지정 시간을 건너띄어 플레이
		, bTransient(false) // #110
	{
	}

	virtual ~FT4ActionCommandBase() {}

	ET4ActionBaseType GetActionBaseType() const override { return ET4ActionBaseType::Command; } // #52

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("ActionCommand"));
	}

	virtual FString ToDisplayText()
	{
		return FString(TEXT("Untitled")); // #54
	}
};
