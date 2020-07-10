// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #94
 */
class UT4MapEntityAsset;
class FObjectThumbnail;
struct FT4LevelThumbnailData; // #104

namespace T4AssetUtil
{

	// #84
	T4EDITORCOMMON_API const FT4LevelThumbnailData* MapEntityGetSubLevelThumbnail(
		UT4MapEntityAsset* InMapEntityAsset,
		const FName InLevelAssetName
	);

	T4EDITORCOMMON_API bool MapEntityAddOrUpdateSubLevelThumbnail(
		UT4MapEntityAsset* InMapEntityAsset,
		const FName InLevelAssetName,
		FObjectThumbnail* InObjectThumbnail
	);
	// ~#84

}
