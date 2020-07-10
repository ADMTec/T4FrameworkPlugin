// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */
class IT4WorldActor;
class T4EDITORCOMMON_API FT4EditorViewTargetSelector
	: public TSharedFromThis<FT4EditorViewTargetSelector>
{
public:
	FT4EditorViewTargetSelector();
	~FT4EditorViewTargetSelector();

	void Reset();

	bool IsNull() const { return (nullptr == ViewTarget) ? true : false; }

	void SetViewTarget(IT4WorldActor* InViewTarget, bool bForceUpdate);
	IT4WorldActor* GetViewTarget() const { return ViewTarget; }

	DECLARE_MULTICAST_DELEGATE_OneParam(FT4OnViewTargetChanged, IT4WorldActor*);

	FT4OnViewTargetChanged& GetOnViewTargetChanged()
	{
		return OnViewTargetChanged;
	}

private:
	IT4WorldActor* ViewTarget;
	FT4OnViewTargetChanged OnViewTargetChanged;
};
