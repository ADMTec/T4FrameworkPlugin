// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ViewModel/T4EditorViewModelBase.h"

#include "UObject/GCObject.h"
#include "TickableEditorObject.h"
#include "EditorUndoClient.h"

/**
  * #83
 */
class UWorld;
class UT4MapEntityAsset;
struct T4EDITORCOMMON_API FT4WorldPreviewViewModelOptions
{
	FT4WorldPreviewViewModelOptions();

	UT4MapEntityAsset* MapEntityAsset; // #104
	ET4ViewModelEditMode EditMode; // #118
	FString ActionReplayAssetName; // #104
	FString ActionReplayFolderName; // #104
};

class UT4EditorGameplayController; // #60, #104
struct FT4ActionParameters;
class T4EDITORCOMMON_API FT4WorldPreviewViewModel
	: public TSharedFromThis<FT4WorldPreviewViewModel>
	, public FGCObject
	, public FEditorUndoClient
	, public FTickableEditorObject
	, public FT4EditorViewModelBase
{
public:
	DECLARE_MULTICAST_DELEGATE(FT4OnSubLevelUpdate); // #86

public:
	FT4WorldPreviewViewModel(const FT4WorldPreviewViewModelOptions& InOptions);
	~FT4WorldPreviewViewModel();

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
	ET4ViewModelEditMode GetEditMode() const override { return ViewModelEditMode; }

	void NotifyActionReplayRec() override; // #104
	void NotifyActionReplayPlay() override; // #104

public:
	FT4OnSubLevelUpdate& GetOnSubLevelUpdate() { return OnSubLevelUpdate; } // #86

	void OnRefreshWorld(); // #83
	void OnDisplayEditorWorldModified(); // #83
	void OnSubLevelSelection(const TArray<FName>& InSubLevelPackageNames, bool bFlushLevelStreaming); // #83, #86

	void ToggleEditMode() { bEditModeEnabled = !bEditModeEnabled; } // #118
	bool IsEditModelEnabled() const { return bEditModeEnabled; } // #118

	void ToggleMouseStatus() { bMouseStatus = !bMouseStatus; } // #118

	bool IsNpcAIModeEnabled() const { return bNPCAIDisabled; } // #142
	void ToggleNPCAIMode(); // #114

	void SetMapEntityAsset(UT4MapEntityAsset* InMapEntityAsset) { MapEntityAsset = InMapEntityAsset; } // #104

	void SetCameraLookAt(const FVector& InLocation); // #85
	void SetCameraLookAt(const FVector& InLocation, const FRotator& InRotator, float InDistance); // #85
	void SetCameraLocation(const FVector2D& InLocation); // #90
	void SetCameraLocationAndRotation(const FVector& InLocation, const FRotator& InRotation); // #90, #103

	bool GetPlayerViewPoint(
		FVector& OutCameraLocation,
		FRotator& OutCameraRotation,
		FVector& OutPlayerLocation
	);
	bool GetWorldActorLocations(TArray<FVector2D>& OutLocations, TArray<FColor>& OutDebugColors); // #104

	const FVector& GetCaptureMouseLocation() const { return CaptureMouseLocation; } // #118

	void HandleOnUpdateSubLevel(ULevel* InSubLevel, UWorld* InWorld); // #86

protected:
	void Cleanup() override; // #85
	void Reset() override; // #79
	void StartPlay() override; // #76, #86
	void RestartPlay(); // #94, #104 : 월드 이동후 호출

	void DrawHUD(FViewport* InViewport, FCanvas* InCanvas, FT4HUDDrawInfo* InOutDrawInfo) override; // #59, #83

	// #87 : ViewModel 시작시 특정 레벨을 열고 싶다면, MapEntityAssetPath 를 채울 것!
	void SetupStartWorld(FT4WorldConstructionValues& InWorldConstructionValues) override;

	void NotifyServerMonitoringChanged(bool bInServerMonitoring) override; // #140
	void NotifySimulationModeChanged(bool bInSimulating) override; // #86, #118

	FString GetActionReplayAssetName() const override { return ActionReplayAssetName; } // #68, #104
	FString GetActionReplayFolderName() const override { return ActionReplayFolderName; } // #68, #104
	
	void SetSimulationMode(bool bInSimulating); // #86

private:
	void UpdateManualLevelStreaming(UWorld* InPersistentWorld, float InDeltaTime); // #86

private:
	UT4MapEntityAsset* MapEntityAsset;
	UT4EditorGameplayController* EditorGameplayController; // #60, #104

	TArray<FName> VisibleSubLevelPackageNames;

	FT4OnSubLevelUpdate OnSubLevelUpdate; // #86

	FDelegateHandle LevelAddedToWorldHandle; // #86
	FDelegateHandle LevelRemovedFromWorldHandle; // #86

	ET4ViewModelEditMode ViewModelEditMode; // #118

	bool bEditModeEnabled; // #118
	bool bNPCAIDisabled; // #114
	bool bUpdatingReload;
	bool bMouseStatus; // #118

	FVector CaptureMouseLocation; // #118

	bool bDisplayEditorWorldModified;
	FName LastValidSubLevelPackageName; // #85

	bool bPendingRefreshWorld; // #86
	bool bPendingPlayerRespawn;
	FT4EntityKey PlayerEntityKey; // #83
	FName PlayerStanceName; // #83
	FName PlayerPostureName; // #106, #111
	FVector PlayerLocationCached; // #83
	FRotator PlayerRotationCached; // #83
	
	FString ActionReplayAssetName; // #104
	FString ActionReplayFolderName; // #104

	float CachedTimeHour; // #104 : RefreshWorld 시 Time 복구
	float CachedTimeScale; // #104 : RefreshWorld 시 Time 복구
};

