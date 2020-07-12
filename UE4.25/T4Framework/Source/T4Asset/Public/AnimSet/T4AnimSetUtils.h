// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"

#include "Animset/T4AnimsetTypes.h"
#include "AnimSet/T4AnimsetAsset.h"

/**
  * #39, #129
 */
#if WITH_EDITOR

class USkeleton;
class UAnimMontage;
class UT4AnimsetAsset;

namespace T4AssetUtil
{
	T4ASSET_API bool AnimSetAnimMontageGenerate(
		const FString InOwnerPathName,
		const FName InAnimSetName, // #73, #111 : AnimSetName 를 포함한 AnimMontage 를 Gen 한다.
		const FName InMontageName,
		const FName InAnimMontageGroupSlotName,
		USkeleton* InSkeleton,
		TArray<FT4AnimsetAnimSequenceData>& InOutAnimSequenceArray,
		TSoftObjectPtr<UAnimMontage>& InOutAnimMontage
	); // #107

	T4ASSET_API bool AnimSetAnimMontageGenerate(
		UT4AnimsetAsset* InAnimsetAsset,
		ET4AnimationLayer InAnimationLayer, // #124
		const FName InAnimSetName, // #73, #111 : AnimSetName 를 포함한 AnimMontage 를 Gen 한다.
		FString& OutMessage
	);

	T4ASSET_API bool AnimSetAnimMontageSave(
		UT4AnimsetAsset* InAnimsetAsset,
		ET4AnimationLayer InAnimationLayer, // #124
		FString& OutMessage
	);

	T4ASSET_API bool AnimSetSaveAll(UT4AnimsetAsset* InAsset, FString& OutMessage); // #69
}

#endif
