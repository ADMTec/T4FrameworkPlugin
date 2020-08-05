// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4EditorReplaySystemController.generated.h"

/**
  * #68
 */
class UT4ReplaySystemAsset;
UCLASS()
class T4EDITORCOMMON_API UT4EditorReplaySystemController : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	// UObject
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

public:
	void Set(ET4LayerType InLayerType, const FString& InAssetName, const FString& InFolderName);

	bool IsPlayed(); // #104

	bool CanRec();
	bool DoRec();

	bool CanPlay();
	bool DoPlay();

	bool CanPause();
	bool DoPause();

	bool CanStop();
	bool DoStop();

	void TooglePlayRepeat();
	void TooglePlayerPossessed();

public:
	UPROPERTY(EditAnywhere, Transient, Category = ReplaySystem)
	TSoftObjectPtr<UT4ReplaySystemAsset> SelectReplaySystemAsset;

	UPROPERTY(EditAnywhere, Transient, Category = ReplaySystem)
	bool bPlayRepeat;

	UPROPERTY(EditAnywhere, Transient, Category = ReplaySystem)
	bool bPlayerPossessed;

private:
	ET4LayerType LayerType;
	FString AssetName;
	FString FolderName;
};
