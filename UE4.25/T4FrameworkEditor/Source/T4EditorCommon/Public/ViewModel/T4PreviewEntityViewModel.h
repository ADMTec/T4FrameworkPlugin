// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ViewModel/T4EditorViewModelBase.h"

#include "T4Framework/Public/T4FrameworkEditor.h"
#include "T4GameData/Public/T4GameDBTypes.h"

#include "UObject/GCObject.h"
#include "TickableEditorObject.h"
#include "EditorUndoClient.h"

static const float T4Editor_PreviewFreezeLeftTimeSec = 5.0f;

/**
  *
 */

class UT4EntityAsset;
class UT4ActionPackAsset;
struct T4EDITORCOMMON_API FT4PreviewEntityViewModelOptions
{
	FT4PreviewEntityViewModelOptions();

	UT4EntityAsset* EntityAsset;
};

struct FT4EquipWeaponActionCommand; // #169
struct FT4ActionParameters;
class T4EDITORCOMMON_API FT4PreviewEntityViewModel
	: public TSharedFromThis<FT4PreviewEntityViewModel>
	, public FGCObject
	, public FEditorUndoClient
	, public FTickableEditorObject
	, public FT4EditorViewModelBase
{
public:
	FT4PreviewEntityViewModel(const FT4PreviewEntityViewModelOptions& InOptions);
	~FT4PreviewEntityViewModel();

	//~ FGCObject interface
	void AddReferencedObjects(FReferenceCollector& Collector) override;

	//~ FEditorUndoClient interface
	void PostUndo(bool bSuccess) override;
	void PostRedo(bool bSuccess) override { PostUndo(bSuccess); }

	// ~ FTickableEditorObject
	void Tick(float DeltaTime) override;
	bool IsTickable() const override { return true; }
	TStatId GetStatId() const override;

	// FT4EditorViewModelBase
	ET4ViewModelEditMode GetEditMode() const override { return ET4ViewModelEditMode::Preview; }

public:
	UT4EntityAsset* GetSelectedEntityAsset() { return EntityAssetOwner; }

	void OnSpawnPreview(UT4EntityAsset* InEntityAsset, float InKeepUpdateTimeSec);
	void OnSpawnPreview(
		UT4EntityAsset* InEntityAsset,
		FName InGameDBKey,
		FName InSkinName, 
		FName InAnimSetName, // #142
		FName InStanceName, // #142
		float InKeepUpdateTimeSec
	);
	void OnSpawnPreview(const UT4ActionPackAsset* InActionPackAsset, float InDurationSec, float InDelayTimeSec);
	void OnSpawnPreview(const FT4GameDBKey& InGameDBKey); // #120

	void HandleOnEntityPropertiesChanged();

public:
	void RefreshAll();

	void SaveThumbnailData();

	void SetPropertiesChangedDelegate(bool bRegister);

protected:
	void Cleanup() override; // #85
	void Reset() override; // #79
	void StartPlay() override; // #76, #86

	bool GetWeaponEntityAssetByGameDB(const FT4GameDBKey& InGameDBKey, FT4EquipWeaponActionCommand* OutActionCommand); // #120, #169
	const UT4ActionPackAsset* GetActionPackAssetInGameDB(const FT4GameDBKey& InGameDBKey); // #120

private:
	UT4EntityAsset* EntityAssetOwner;
};
