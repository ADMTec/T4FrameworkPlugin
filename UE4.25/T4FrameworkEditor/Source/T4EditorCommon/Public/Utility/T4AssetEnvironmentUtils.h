// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #94
 */
#if WITH_EDITOR

struct FT4EnvTimeTagData; // #90
class UT4EnvironmentAsset; // #90

namespace T4AssetUtil
{

	T4EDITORCOMMON_API bool EnviromentTimeTagUpdate(
		UT4EnvironmentAsset* InEnvironmentAsset,
		FName InTimeTagName,
		const FT4EnvTimeTagData* InData,
		FString& OutErrorMessage
	); // #90, #95

	T4EDITORCOMMON_API FName EnviromentTimeTagAdd(
		UT4EnvironmentAsset* InEnvironmentAsset,
		FName InSourceName,
		const FT4EnvTimeTagData* InData,
		FString& OutErrorMessage
	); // #90

	bool T4EDITORCOMMON_API EnviromentTimeTagRemove(
		UT4EnvironmentAsset* InEnvironmentAsset,
		FName InTimeTagName,
		FString& OutErrorMessage
	); // #90

	bool T4EDITORCOMMON_API EnviromentTimeTagCopyToClipboard(
		UT4EnvironmentAsset* InEnvironmentAsset,
		FName InTimeTagName,
		FString& OutJsonTimeTagDataString,
		FString& OutErrorMessage
	); // #104

	bool T4EDITORCOMMON_API EnviromentTimeTagPastToClipboard(
		UT4EnvironmentAsset* InEnvironmentAsset,
		FName InTimeTagName,
		const FString& InJsonTimeTagDataString,
		FString& OutErrorMessage
	); // #104

	bool T4EDITORCOMMON_API EnviromentAssetSave(
		UT4EnvironmentAsset* InEnvironmentAsset,
		FString& OutErrorMessage
	); // #90

}

#endif
