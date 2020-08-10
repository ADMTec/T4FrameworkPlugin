// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EditorViewModelInterface.h"

#include "T4Asset/Public/Entity/T4EntityKey.h"
#include "T4Asset/Public/Entity/T4EntityTypes.h"
#include "T4Asset/Public/ActionPack/T4ActionPackTypes.h"

#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Engine/Public/T4EngineStructs.h" // #87
#include "T4Engine/Public/Action/T4ActionKey.h"

#include "T4Framework/Public/T4FrameworkEditor.h" // #126

/**
  * #76
 */
class FViewport;
class FCanvas;
class UWorld;
struct FT4ActionParameters;
class UAnimSequence;
class UT4ActionPackAsset;
class UT4EntityAsset;
class UT4ContentSpawnAsset;
class IT4WorldActor;
class IT4WorldSystem; // #93
class IT4PlayerController;
class IT4EditorGameplayCommand; // #114
class IT4Framework;
class UT4EditorEnvironmentTimeObject; // #94
class UT4EditorReplaySystemController;
struct FT4ActionBase;
struct FT4HUDDrawInfo;
struct FPostProcessSettings; // #100
struct FT4EditorTestAutomationData; // #103
struct FT4EditorBookmarkData; // #103
class T4EDITORCOMMON_API FT4EditorViewModelBase : public IT4EditorViewModel
{
public:
	DECLARE_MULTICAST_DELEGATE(FT4OnViewModelChanged); // #77, #85

	DECLARE_MULTICAST_DELEGATE_OneParam(FT4OnEditWidgetTargetChanged, bool); // #125
	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnEditWidgetTargetUpdating, ET4EditWidgetUpdateType, const FVector&); // #118: PRS (rot or loc or scale)

public:
	FT4EditorViewModelBase();
	virtual ~FT4EditorViewModelBase();

	// IT4EditorViewModel
	virtual ET4LayerType GetLayerType() const override { return LayerType; } // #104 : World Editor 는 WorldMapViewModel 에서 별도 처리

	virtual ET4ViewModelEditMode GetEditMode() const override { return ET4ViewModelEditMode::Default; }
	bool IsPreviewMode() const override { return (ET4ViewModelEditMode::Preview == GetEditMode()) ? true : false; } // #118

	virtual const FString GetAssetPath() override { return FString(); } // #79

	void OnReset() override; // #79
	void OnStartPlay(FT4EditorViewportClient* InViewportClient) override;

	void OnDrawHUD(FViewport* InViewport, FCanvas* InCanvas, FT4HUDDrawInfo* InOutDrawInfo) override; // #59, #83

	void OnPlayerReload() override; // #87, #107, #130 : 모든 ViewModel 의 Player Respawn/Reload 는 이 메소드를 호출하는 것으로 정리할 것!
	void OnPlayerRespawn() override; // #136

	IT4Framework* CreateFramework() override; // #87
	IT4Framework* GetFramework() const override { return FrameworkOwner; } // #79
	IT4WorldSystem* GetWorldSystem() const override; // #93
	IT4WorldActor* GetPlayerActor() const; // #58
	IT4PlayerController* GetPlayerController() const;

	virtual AActor* GetEditWidgetModeTarget() const override; // #94

	virtual void NotifyEditWidgetTargetChanged(bool bInStart) override; // #125
	virtual void NotifyEditWidgetTargetUpdating(ET4EditWidgetUpdateType InUpdateType, const FVector& InPRS) override; // #118 : PRS (rot or loc or scale)

	virtual UT4EditorEnvironmentTimeObject* GetEditorEnvironmentTimeObject() override { return nullptr; } // #90, #94
	virtual UT4EditorEnvironmentTimeObject* GetBackupEditorEnvironmentTimeObject() override { return nullptr; } // #147

	virtual void ChangeWorldEnvironment(FName InTimeTagName) override {} // #94

	void SetViewportOptionShowActorBound(bool bShow) override; // #76
	bool IsShownViewportOptionActorBound() const override; //#76

	void SetViewportOptionShowNPCAIInfo(bool bShow) override; // #140
	bool IsShownViewportOptionShowNPCAIInfo() const override; // #140

	void SetViewportOptionShowServerLocation(bool bShow) override; // #140
	bool IsShownViewportOptionServerLocation() const override; // #140

	void SetViewportOptionShowMovementTrajectory(bool bShow) override; // #140
	bool IsShownViewportOptionMovementTrajectory() const override; // #140

	void SetWorldSystemTimeStop(bool bPause) override; // #94
	bool IsWorldSystemTimeStopped() const override; // #94

	void SetWorldSystemTimelapseScale(float inScale) override; // #93
	float GetWorldSystemTimelapseScale() const override; // #93

	void SetWorldSystemTimeHour(float InHour) override; // #93
	float GetWorldSystemTimeHour() const override; // #93

	virtual void NotifyReplayRec() override {} // #104
	virtual void NotifyReplayPlay() override {} // #104

public:
	void OnCleanup(); // #85

	FT4OnViewModelChanged& GetOnViewModelChanged() { return OnViewModelChanged; } // #77, #85

	FT4OnEditWidgetTargetChanged& GetOnEditWidgetTargetChanged() { return OnEditWidgetTargetChanged; } // #125
	FT4OnEditWidgetTargetUpdating& GetOnEditWidgetTargetUpdating() { return OnEditWidgetTargetUpdating; } // #118

	bool HasReplaySystem() const { return EditorReplaySystemPtr.IsValid(); } // #104
	UT4EditorReplaySystemController* GetReplaySystem(); // #60, #68, #104

	FT4EditorViewportClient* GetViewportClient() const { return ViewportClientRef; }

	bool IsServerMonitoring() const { return bServerMonitoring; } // #140
	void ToggleServerMonitoring(); // #140

	bool IsSimulationMode() const { return bSimulating; } // #86
	void ToggleSimulationMode(); // #86, #118 : NotifySimulation

	bool IsVerificationMode() const { return bVerifying; } // #129 : Entity 에디터에서 데이터 검증
	void ToggleVerificationMode(); // #129 : Entity 에디터에서 데이터 검증

	// Common
	bool GetValidSpawnLocation(const FVector& InOriginLocation, float InDistance, int32 InTryCount, FVector& OutSpawnLocation); // #76
	bool GetValidViewPoint(FVector& OutCameraLocation, FRotator& OutCameraRotation, FVector& OutPlayerLocation);

	void UpdateBookmark(int32 InIndex); // #100, #103
	void TravelBookmark(int32 InIndex); // #100, #103
	int32 AddBookmark(); // #100, #103
	void RemoveBookmark(int32 InIndex); // #100, #103

	void SetEditWidgetTargetActorID(const FT4ActorID& InActorID); // #94, #118
	void ClearEditWidgetTargetActorID(); // #94, #118
	const FT4ActorID& GetEditWidgetTargetActorID() const; // #118

public:

	// Server => Client
	virtual void ServerDespawnAll(bool bClearPlayerActor); // #68
	virtual bool ServerSpawnObjectByDataID(
		ET4EditorDataType InGameDBType, // #126
		const FName& InGameDBKey, 
		float InSpawnDistance = 0.0f
	); // #60
	bool ServerSpawnObjectByDataIDEx(
		ET4EditorDataType InGameDBType, // #126
		const FName& InGameDBKey, 
		const FVector& InLocation, 
		const FRotator& InRotation, 
		const FT4ObjectID& InReservedObjectID
	); // #118
	bool ServerSpawnObjectByEntityKey(
		const FT4ObjectID& InReservedObjectID, // #134 : GetPlayerController()->GetObjectID() 로 비교해 Player 를 판단한다.
		const FT4EntityKey& InEntityKey,
		const FVector& InLocation,
		const FRotator& InRotation
	); // #114
	
	bool ServerSpawnObjectByContentSpawnEx(
		UT4ContentSpawnAsset* InSpawnAsset,
		const FName& InSpawnActorID,
		const FT4ObjectID& InReservedObjectID
	); // #126
	bool ServerSpawnObjectByContentSpawn(UT4ContentSpawnAsset* InSpawnAsset); // #126

	void ServerDespawnObject(const FT4ObjectID& InObjectID); // #118
	void ServerDespawnObjectWithEditorOnly(const FT4ObjectID& InObjectID); // #134

	void ServerChangeAnimSet(FName InAnimSetName); // #73, #114
	void ServerChangeStance(FName InStanceName); // #106, #114

	virtual bool ServerEquipWeapon(const FName& InWeaponDBKey, bool bInUnequip); // #60
	bool ServerEquipWeapon(ET4LayerType InLayerType, const FName& InWeaponDBKey, bool bInUnequip); // #60

	// Client
	virtual bool ClientIsPlayingAction(const FT4ActionKey& InActionKey); // #54

	virtual void ClientSetPauseObject(bool bInPause); // #54
	void ClientSetPauseObject(ET4LayerType InLayerType, bool bInPause); // #54

	virtual void ClientStopAction(const FT4ActionKey& InActionKey);
	void ClientStopAction(ET4LayerType InLayerType, const FT4ActionKey& InActionKey);

	virtual bool ClientSpawnActorByEntityAsset(UT4EntityAsset* InEntityAsset); // #36, #30, #73
	virtual IT4WorldActor* ClientSpawnActorByEntityKey(
		const FT4EntityKey& InEntityKey,
		const FVector& InLocation,
		const FRotator& InRotation,
		const FName InAnimSetName,
		const FName InStanceName,
		bool bPlayer
	); // #83, #106, #111 

	virtual void ClientDespawnActor(const FT4ActorID& InActorID); // #67

	virtual bool ClientPlayAnimation(
		FName InSectionName, 
		ET4PlayCount InPlayCount,
		float InBlendInTimeSec = 0.02f,
		float InBlendOutTimeSec = 0.02f
	); // #107
	bool ClientPlayAnimSequence(
		UAnimSequence* InAnimSequence, 
		FName InSectionName, 
		float InBlendInTimeSec = 0.02f, 
		float InBlendOutTimeSec = 0.02f
	); // #39

	virtual void ClientPlayAction(
		UT4ActionPackAsset* InActionPackAsset, 
		float InStartTimeSec, 
		const FT4ActionParameters* InActionParameters
	); // #39, #56

	void ClientPlayAction(
		UT4ActionPackAsset* InActionPackAsset, 
		float InStartTimeSec, 
		const FT4ActionKey& InActionKey, 
		const FT4ActionParameters* InActionParameters, 
		bool bOverride
	); // #39, #56

	void ClientPlayAction(
		ET4LayerType InLayerType, 
		UT4ActionPackAsset* InActionPackAsset, 
		float InStartTimeSec, 
		const FT4ActionKey& InActionKey, 
		const FT4ActionParameters* InActionParameters, 
		bool bOverride
	); // #39, #56

	virtual void ClientEquipWeapon(
		const FT4ActionKey& InActionKey,
		UT4EntityAsset* InWeaponEntity,
		FName InOverrideEquipPointName,
		bool bInChangeAnimSetSync, // #72, #111 : 스탠스 변경과 동기화한다.
		bool bInChangeAnimSetInEntity = false // #120 : Weapon 에 설정된 AnimSet 자동 적용 
	);
	void ClientUnequipWeapon(const FT4ActionKey& InActionKey, FName InOverrideEquipPointName, bool bInChangeAnimSetSync); // #111 : 스탠스 변경과 동기화한다.

	void ClientExchangeCostume(UT4EntityAsset* InCostumeEntity, FName InCompositePartName, bool bSet); // #72
	virtual void ClientExchangeSkin(FName InSkinName); // #130

	virtual void ClientChangeAnimSet(FName InAnimSetName, bool bInImmediate); // #73
	virtual void ClientChangeStance(FName InStanceName, bool bInImmediate); // #106

	virtual void ClientPlayReaction(FName InReactionName, ET4EntityReactionType InReactionType, const FVector& InShootDirection); // #76

	bool ClientTeleport(const FVector& InLocation); // #86
	bool ClientTeleport(const FVector2D& InLocation); // #90

	bool ClientHasActivePlayTag(FName InPlayTagName, ET4PlayTagType InPlayTagType) const; // #81, #124
	void ClientActivePlayTag(FName InPlayTagName, ET4PlayTagType InPlayTagType); // #81
	void ClientInactivePlayTag(FName InPlayTagName, ET4PlayTagType InPlayTagType); // #81

	bool ClientWorldTravel(const UT4EntityAsset* InEntityAsset); // #79
	bool ClientWorldTravel(const FT4EntityKey& InMapEntityKey); // #87

	virtual void ClientEditorAction(ET4EditorAction InEditorActionType); // #71

	IT4WorldActor* ClientGetWorldActor(const FT4ActorID& InActorID) const; // #114

	UWorld* GetWorld() const;

	bool TryValidSpawnObjectLocation(FVector& OutLocation); // #87

protected:
	virtual void Cleanup() {} // #85
	virtual void Reset() {} // #79
	virtual void StartPlay() {} // #86
	virtual void RestartPlay() {} // #94 : 월드 이동후 호출

	virtual void DrawHUD(FViewport* InViewport, FCanvas* InCanvas, FT4HUDDrawInfo* InOutDrawInfo) {} // #59, #83

	virtual void PlayerReload() {} // #130
	virtual void PlayerRespawn() {} // #136

	// #87 : ViewModel 시작시 특정 레벨을 열고 싶다면, MapEntityAssetPath 를 채울 것!
	virtual void SetupStartWorld(FT4WorldConstructionValues& InWorldConstructionValues) {}

	virtual void NotifyViewTargetChanged(IT4WorldActor* InViewTarget) {} // #87, #99 : SubClass 별로 처리해야 할 기능이 있다면...구현

	virtual void NotifyServerMonitoringChanged(bool bInServerMonitoring) {} // #140
	virtual void NotifySimulationModeChanged(bool bInSimulating) {} // #86, #102, #111, #118
	virtual void NotifyVerificationModeChanged(bool bInVerifying) {} // #129 : Entity 에디터에서 데이터 검증

	virtual UObject* GetEditObject() const { return nullptr; } // #103
	virtual FT4EditorTestAutomationData* GetTestAutomation() const { return nullptr; } // #103

	virtual void TravelBookmarkFromData(FT4EditorBookmarkData* InBookmarkData); // #100, #103
	virtual bool GetBookmarkInfo(FT4EditorBookmarkData* OutBookmarkData); // #100, #103

	// #99 : SubClass 별로 처리해야 할 기능이 있다면...구현
	virtual void ViewTargetChanged(IT4WorldActor* InViewTarget) {} // #79, #83, #99

	virtual FString GetReplaySystemAssetName() const { return TEXT("ReplaySystemAsset"); } // #68, #104
	virtual FString GetReplayFolderName() const { return TEXT("Default"); } // #68, #104

	IT4WorldActor* GetPlayerActor(ET4LayerType InLayerType) const;

	IT4EditorGameplayCommand* GetEditorGameplayCommand() const;

	bool IsPreviewSpawnable(ET4EntityType InType) const { return (ET4EntityType::Map != InType && ET4EntityType::Zone != InType) ? true : false; } // #94
	bool IsSpawnable(ET4EntityType InType) const { return (ET4EntityType::Map != InType) ? true : false; } // #94
	bool IsControllable(ET4EntityType InType) const { return (ET4EntityType::Map != InType && ET4EntityType::Zone != InType) ? true : false; } // #94

	void SavePlayerSettingsInfo(); // #87
	void RestorePlayerSettingsInfo(); // #87

	void ExecuteVerification(const FT4ActionBase* InAction); // #129 : Entity 에디터에서 데이터 검증

private:
	void RegisterPlayerViewTargetChanged();

	void HandleOnDestroyViewportClient(); // #79
	void HandleOnViewTargetChanged(IT4WorldActor* InViewTarget); // #79, #83

private: // #79 : 월드 교체로 Framework 가 변경될 수 있음으로 관리를 위하 private 로 변경함
	ET4LayerType LayerType;
	IT4Framework* FrameworkOwner;
	FT4EditorViewportClient* ViewportClientRef;

	FDelegateHandle ViewportClientResetHandle;

	FT4OnViewModelChanged OnViewModelChanged; // #77, #85

	FT4OnEditWidgetTargetChanged OnEditWidgetTargetChanged; // #125
	FT4OnEditWidgetTargetUpdating OnEditWidgetTargetUpdating; // #118

	TWeakObjectPtr<UT4EditorReplaySystemController> EditorReplaySystemPtr; // #68, #104

	bool bServerMonitoring; // #140
	bool bSimulating; // #86
	bool bVerifying; // #129 : Entity 에디터에서 데이터 검증

	FT4ActorID EditWidgetTargetActorID; // #94

protected:
	// #87
	bool bCachedPlayerSettingsSaved;
	float CachedCameraZoomDistance;
	FRotator CachedCameraControlRotation;
	FRotator CachedPlayerRotation;
	FVector CachedPlayerLocation; // #116

	bool bTestAutomation; // #100, #103
	float TestAutomationWorldTimeHour; // #100, #103
	FVector TestAutomationSpawnLocation; // #100, #103
	FRotator TestAutomationSpawnRotation; // #100, #103
};