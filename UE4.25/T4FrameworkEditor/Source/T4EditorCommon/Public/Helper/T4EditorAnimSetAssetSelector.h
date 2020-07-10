// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */
class UT4AnimSetAsset;
class T4EDITORCOMMON_API FT4EditorAnimSetAssetSelector
	: public TSharedFromThis<FT4EditorAnimSetAssetSelector>
{
public:
	FT4EditorAnimSetAssetSelector();
	~FT4EditorAnimSetAssetSelector();

	void Reset();

	bool HasAnimSetAsset() const { return (nullptr == AnimSetAsset) ? true : false; }

	void SetAnimSetAsset(UT4AnimSetAsset* InAnimSetAsset, bool bForceUpdate);
	UT4AnimSetAsset* GetAnimSetAsset() const { return AnimSetAsset; }

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnAnimSetChanged, UT4AnimSetAsset*, bool);

	FT4OnAnimSetChanged& GetOnAnimSetChanged()
	{
		return OnAnimSetChanged;
	}

private:
	UT4AnimSetAsset* AnimSetAsset;
	FT4OnAnimSetChanged OnAnimSetChanged;
};
