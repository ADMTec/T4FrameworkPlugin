// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"

/**
  * #39
 */
#if WITH_EDITOR

class UObject;
class UTexture2D;
class UT4EntityAsset;

struct FT4EditorTestAutomationData; // #103
struct FT4EditorBookmarkData; // #103

namespace T4AssetUtil
{
	T4ASSET_API UObject* NewAsset(
		UClass* InAssetClass,
		const FString& InAssetName,
		const FString& InPackagePath
	);

	T4ASSET_API bool HasDirtyAsset(
		UObject* InCheckObject
	); // #56

	T4ASSET_API void SetModifyAsset(
		UObject* InCheckObject,
		bool bDirtyFlag
	); // #56, #88

	T4ASSET_API bool SaveAsset(
		UObject* InSaveObject,
		bool bInCheckDirty
	);

	T4ASSET_API bool BookmarkGet(
		FT4EditorTestAutomationData* InTestAutomation,
		int32 InSelectIndex,
		FT4EditorBookmarkData* OutData
	); // #103

	T4ASSET_API bool BookmarkUpdate(
		UObject* InSaveObject,
		FT4EditorTestAutomationData* InTestAutomation,
		int32 InSelectIndex,
		FT4EditorBookmarkData* InUpdateData
	); // #103

	T4ASSET_API bool BookmarkAdd(
		UObject* InSaveObject,
		FT4EditorTestAutomationData* InTestAutomation,
		FT4EditorBookmarkData* InNewData
	); // #103

	T4ASSET_API bool BookmarkRemove(
		UObject* InSaveObject,
		FT4EditorTestAutomationData* InTestAutomation,
		int32 InRemoveIndex
	); // #103

}

// #88 : 호출 시점에 Asset 이 Dirty 가 아니라면 수정후 다시 DirtyFlag 를 돌려준다. (즉, 에디터용 수정)
class FT4ScopedTransientTransaction
{
public:
	FT4ScopedTransientTransaction(UObject* InObject)
	{
		bAlreadyDirty = T4AssetUtil::HasDirtyAsset(InObject); // #88
		OwnerObjectPtr = InObject;
	}
	~FT4ScopedTransientTransaction()
	{
		if (OwnerObjectPtr.IsValid())
		{
			if (!bAlreadyDirty)
			{
				T4AssetUtil::SetModifyAsset(OwnerObjectPtr.Get(), bAlreadyDirty); // #88
			}
			OwnerObjectPtr.Reset();
		}
	}

private:
	bool bAlreadyDirty;
	TWeakObjectPtr<UObject> OwnerObjectPtr;
};

#endif
