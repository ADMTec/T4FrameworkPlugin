// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4ActionCommandBase.h"
#include "T4ActionEditorCommands.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CMD

// ET4ActionCommandType::Editor

USTRUCT()
struct T4ENGINE_API FT4EditorActionCommand : public FT4ActionCommandBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	ET4EditorAction EditorActionType;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4PlayTagType PlayTagType; // #81 : PlayTagSet, PlayTagClear

	UPROPERTY(EditAnywhere, Category = Common)
	FName PlayTagName; // #81 : PlayTagSet, PlayTagClear

public:
	FT4EditorActionCommand()
		: FT4ActionCommandBase(StaticActionType())
		, EditorActionType(ET4EditorAction::None)
		, PlayTagType(ET4PlayTagType::All) // #81 : PlayTagSet, PlayTagClear
		, PlayTagName(NAME_None) // #81 : PlayTagSet, PlayTagClear
	{
	}

	static ET4ActionCommandType StaticActionType() { return ET4ActionCommandType::Editor; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EditorAction::None == EditorActionType)
		{
			OutMsg = TEXT("Not set EditorActionType");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("EditorAction"));
	}
};
