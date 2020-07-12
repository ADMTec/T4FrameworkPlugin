// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */
class UT4AnimsetAsset;
class T4EDITORCOMMON_API FT4EditorAnimsetAssetSelector
	: public TSharedFromThis<FT4EditorAnimsetAssetSelector>
{
public:
	FT4EditorAnimsetAssetSelector();
	~FT4EditorAnimsetAssetSelector();

	void Reset();

	bool HasAnimsetAsset() const { return (nullptr == AnimsetAsset) ? true : false; }

	void SetAnimsetAsset(UT4AnimsetAsset* InAnimsetAsset, bool bForceUpdate);
	UT4AnimsetAsset* GetAnimsetAsset() const { return AnimsetAsset; }

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnAnimsetChanged, UT4AnimsetAsset*, bool);

	FT4OnAnimsetChanged& GetOnAnimsetChanged()
	{
		return OnAnimsetChanged;
	}

private:
	UT4AnimsetAsset* AnimsetAsset;
	FT4OnAnimsetChanged OnAnimsetChanged;
};
