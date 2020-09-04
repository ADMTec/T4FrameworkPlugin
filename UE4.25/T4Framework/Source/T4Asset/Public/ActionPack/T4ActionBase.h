// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4ActionPackTypes.h"
#include "T4ActionBase.generated.h"

/**
  *
 */
USTRUCT()
struct T4ASSET_API FT4ActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ActionDetails::CustomizeCommonActionDetails

	UPROPERTY(EditAnywhere, Category = Common)
	ET4ActionPlayMode ActionPlayMode;

	UPROPERTY(EditAnywhere, Category = Common)
	float StartTimeSec; // Delay Time, 즉 이 시간 후 플레이되는 것, Offset 개념과 다름에 유의! (Offset = 지정 시간을 건너띄어 플레이)

	UPROPERTY(EditAnywhere, Category = Common)
	float DurationSec; // #20 : TotalTimeSec = StartTimeSec + DurationSec;

	UPROPERTY()
	ET4LifecycleType LifecycleType_DEPRECATED; // #152 : Use the ActionPlayMode

public:
	FT4ActionBase()
		: ActionPlayMode(ET4ActionPlayMode::Default) // Default => Auto
		, StartTimeSec(0.0f)
		, DurationSec(0.0f)
	{
	}

	virtual ~FT4ActionBase() {}

	virtual ET4ActionBaseType GetActionBaseType() const // #62
	{
		return ET4ActionBaseType::None;
	}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("ActionStruct"));
	}

	virtual FString ToDisplayText()
	{
		return FString(TEXT("Untitled")); // #54
	}
};
