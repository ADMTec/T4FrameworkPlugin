// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionCommandBase.h"
#include "T4ActionCommonCommands.generated.h"

/**
  *
 */
// #T4_ADD_ACTION_TAG_CMD

// ET4ActionCommandType::ActionPack
// ET4ActionCommandType::Stop

USTRUCT()
struct T4ENGINE_API FT4ActionPackActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<class UT4ActionPackAsset> ActionPackAsset;

public:
	FT4ActionPackActionCommand()
		: FT4ActionCommandBase(StaticActionType())
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::ActionPack; }

	FString ToString() const override
	{
		return FString(TEXT("SetAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4StopActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	bool bSameKeyNameRemoveAll; // #20 : primary 가 아닌 Action 도 모두 삭제!

public:
	FT4StopActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, bSameKeyNameRemoveAll(false)
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Stop; }

	FString ToString() const override
	{
		return FString(TEXT("StopAction"));
	}
};
