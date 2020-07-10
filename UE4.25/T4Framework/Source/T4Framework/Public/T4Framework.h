// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"
#include "T4FrameworkTypes.h"
#include "T4FrameworkStructs.h"

#if WITH_EDITOR
#include "T4FrameworkEditor.h" // #60
#endif

#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Engine/Public/Action/T4ActionKey.h"
#include "T4Engine/Public/T4Engine.h" // #63 : IT4AController

#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "GenericPlatform/ICursor.h"

/**
  *
 */
class APawn; // #86
class UTexture2D; // #121
class UWorld;
class FCanvas;
class FViewport;
struct FWorldContext;
class AController;
class AAIController;
class UInputComponent;
class IT4WorldActor;
class IT4WorldSystem;
class AT4PlayerControllerBase;
class IT4EditorViewportClient;
class UT4MapEntityAsset; // #87
class UT4GameObjectBase;
class IT4Framework;
class IT4WorldActor;

#if WITH_EDITOR
DECLARE_MULTICAST_DELEGATE_OneParam(FT4OnViewTargetChanged, IT4WorldActor*);
#endif

class AAIController;

// #34, #63, #114
class T4FRAMEWORK_API IT4ObjectController
{
public:
	virtual ~IT4ObjectController() {}

	virtual ET4LayerType GetLayerType() const = 0;
	virtual ET4ControllerType GetType() const = 0; // #114

	virtual const FT4ObjectID& GetObjectID() const = 0; // #114 : GameObject and Controller ID (WARN : 서버는 모두, 클라는 Player 만 존재)

	virtual bool SetControlActor(const FT4ActorID& InNewTargetID) = 0;
	virtual void ResetControlActor(bool bInSetDefaultPawn) = 0;

	virtual bool HasControlActor() const = 0;
	virtual const FT4ActorID& GetControlActorID() const = 0;
	virtual IT4WorldActor* GetControlActor() const = 0;

	virtual bool HasObserverActor() const = 0; // #52
	virtual bool SetObserverActor(const FT4ActorID& InNewObserverID) = 0; // #52
	virtual void ClearObserverActor() = 0; // #52

#if WITH_EDITOR
	virtual bool IsFreeCameraModeEnabled() const = 0; // #133
	virtual void SetFreeCameraMode(bool bInEnable) = 0; // #133
#endif

	virtual bool HasAction(const FT4ActionKey& InActionKey) const = 0; // #102 : 존재만 해도 true 리턴
	virtual bool IsPlayingAction(const FT4ActionKey& InActionKey) const = 0; // #20 : Playing 중인지를 체크. Paused 면 False 가 리턴됨!

	virtual AController* GetAController() = 0;
	virtual APlayerCameraManager* GetCameraManager() const = 0; // #100

	virtual IT4WorldSystem* GetWorldSystem() const = 0; // #52
	virtual UT4GameObjectBase* GetGameObjectBase() const = 0; // #114
};

class T4FRAMEWORK_API IT4AIControllerBase : public IT4ObjectController
{
public:
	virtual ~IT4AIControllerBase() {}

	virtual AAIController* GetAIController() = 0; // #104
};

class T4FRAMEWORK_API IT4PlayerController : public IT4ObjectController
{
public:
	virtual ~IT4PlayerController() {}

	// #15 : Editor 환경에서 HasAuthority 를 명시적으로 구분하기 위해 도입
	//       동일 프로세스에서 Player 의 Role 이 바뀌며 C/S Player 로 바뀌기 때문에 혼란스러운 점이 있기 때문
	virtual bool CheckAuthority() const = 0; // return HasAuthority()
	virtual void SetObjectIDFromServer(const FT4ObjectID& InObjectID) = 0; // #114 : 서버에서 보내준 ObjectID 를 Controller 에 설정해준다. (Only Client)

	virtual UInputComponent* NewInputComponent() = 0;
	virtual void SetInputComponent(UInputComponent* InInputComponent) = 0;
	virtual void OnSetInputMode(ET4InputMode InMode) = 0;

	virtual FViewport* GetViewport() const = 0; // #68

	virtual APawn* GetDefaultPawn() const = 0; // #86

	virtual FRotator GetViewControlRotation() const = 0;

	virtual ET4CameraType GetCameraType() const = 0;
	virtual float GetCameraFOV() const = 0; // #40
	virtual FVector GetCameraLocation() const = 0;
	virtual FRotator GetCameraRotation() const = 0;
	virtual FVector GetCameraLookAtLocation() const = 0; // #30

	virtual void SwitchCameraType(ET4CameraType InCameraType) = 0; // #40
	virtual void SetCameraZoom(float InAmount) = 0;
	virtual void SetCameraZoomMaxScale(float InScale) = 0; // #86
	virtual void SetCameraPitch(float InAmount) = 0;
	virtual void SetCameraYaw(float InAmount) = 0;
	virtual void SetCameraYawBlend(float InYawTarget, bool bInImmediate) = 0; // #126, #139

	virtual void SetFreeCameraMoveDirection(const FVector& InDirection) = 0;
	virtual void SetFreeCameraLocationAndRotation(const FVector& InLocation, const FRotator& InRotation) = 0; // #94, #86

	virtual void GetCameraInfoCached(FRotator& OutRotation, float& OutDistance) = 0; // #87
	virtual void SetCameraInfoCached(const FRotator& InRotation, const float& InDistance) = 0; // #87

	virtual bool GetScreenCenterToWorldRay(const FVector2D& InScreenOffset, FRay& OutWorldRay) = 0; // #121 : Mode 에 따라 마우스 또는 화면 중앙(FPS)의 Ray 를 리턴
	virtual bool GetScreenPositionToWorldRay(const FVector2D& InScreenPosition, FRay& OutWorldRay) = 0; // #131
	virtual bool GetMousePositionToWorldRay(FRay& OutWorldRay) = 0;

	virtual void SetMouseCursorLock(bool bInLock) = 0;
	virtual bool IsMouseCursorLocked() const = 0;

	virtual void SetMouseCursorType(EMouseCursor::Type InCursorType) = 0;
	virtual void ShowMouseCursor(bool InShow) = 0;

	virtual void SetMouseCursorPosition(const FVector2D& InPosition) = 0; // #30, #113
	virtual bool GetMouseCursorPosition(FVector2D& OutPosition) const = 0; // #30, #113

#if WITH_EDITOR
	virtual bool EditorInputKey(FKey InKey, EInputEvent InEvent, float InAmountDepressed, bool bInGamepad) = 0; // #30
	virtual bool EditorInputAxis(FKey InKey, float InDelta, float InDeltaTime, int32 InNumSamples, bool bInGamepad) = 0; // #30

	virtual void EditorSetViewportClient(IT4EditorViewportClient* InEditorViewportClient) = 0;

	virtual FT4OnViewTargetChanged& GetOnViewTargetChanged() = 0;
#endif
};

// #42
class T4FRAMEWORK_API IT4GameMainFrame
{
public:
	virtual ~IT4GameMainFrame() {}

	virtual ET4FrameworkType GetFrameworkType() const = 0;

	virtual bool OnInitialize(ET4LayerType InLayerType) = 0;
	virtual void OnFinalize() = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay() = 0;
	virtual void OnPlayerSpawned(IT4PlayerController* InOwnerPC) = 0;

	virtual void OnProcessPre(float InDeltaTime) = 0;
	virtual void OnProcessPost(float InDeltaTime) = 0;

	virtual void ChangeControlMode(ET4ControlModeType InControlModeType) = 0; // #40, #126

#if WITH_EDITOR
	virtual bool AddServerSpawnGroup(const FGuid& InGuid, const FSoftObjectPath& InSpawnAssetPath) = 0; // #118
	virtual void RemoveServerSpawnGroup(const FGuid& InGuid) = 0; // #118

	virtual IT4EditorGameData* GetEditorGameData() = 0; // #60
	virtual IT4EditorGameplayCommand* GetEditorGameplayCommand() = 0; // #114
#endif
};

class UT4GameObjectBase;
class T4FRAMEWORK_API IT4Framework
{
public:
	virtual ~IT4Framework() {}

	virtual ET4LayerType GetLayerType() const = 0;
	virtual ET4FrameworkType GetType() const = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay() = 0;

	virtual void OnProcessPre(float InDeltaTime) = 0; // #34 : OnWorldPreActorTick
	virtual void OnProcessPost(float InDeltaTime) = 0; // #34 : OnWorldPostActorTick

	virtual void OnDrawHUD(FViewport* InViewport, FCanvas* InCanvas, FT4HUDDrawInfo& InOutDrawInfo) = 0; // #68 : Only Client

	virtual bool HasBegunPlay() const = 0;

	virtual UWorld* GetWorld() const = 0;
	virtual IT4WorldSystem* GetWorldSystem() const = 0;

	virtual void RegisterGameMainFrame(IT4GameMainFrame* InLayerInstance) = 0; // #42
	virtual IT4GameMainFrame* GetGameMainFrame() const = 0; // #42

	virtual void OnAddDisplayMessage(int32 InKey, float InTimeToDisplay, FColor InColor, const FString& InMessage) = 0; // #133 : Cli => Screen, Srv (TODO) : Console display

	virtual uint32 GetWorldTravelCount() const = 0; // #146

	virtual bool SetWorldTravel(const UT4MapEntityAsset* InMapEntityAsset) = 0; // #87
	virtual bool SetWorldTravel(
		const FSoftObjectPath& InMapEntityPath,
		FName InWorldKeyName,  // #146
		float InWorldTimeHour,
		float InWorldTimeScale
	) = 0; // #146

	virtual void SetWorldTimeSync(FName InWorldTimeTag, float InWorldTimeScale) = 0; // #146
	virtual void SetWorldTimeSync(float InWorldTimeHour, float InWorldTimeScale) = 0; // #146

	virtual bool QueryLineTraceLocation(ET4CollisionChannel InChannel, const FRay& InWorldRay, FVector& OutLocation) = 0; // #121

	// Client
	//
	virtual UT4GameObjectBase* GetPlayerClientObject() const = 0; // #114 : Only Client
	virtual IT4PlayerController* GetPlayerController() const = 0;

	virtual bool GetScreenCenterToWorldRay(const FVector2D& InScreenOffset, FRay& OutWorldRay) = 0; // #121 : Mode 에 따라 마우스 또는 화면 중앙(FPS)의 Ray 를 리턴
	virtual bool GetScreenPositionToWorldRay(const FVector2D& InScreenPosition, FRay& OutWorldRay) = 0; // #131
	virtual bool GetMousePositionToWorldRay(FRay& OutWorldRay) = 0; // #113

	virtual bool GetScreenPositionToWorldLocation(const FVector2D& InScreenPosition, FVector& OutWorldLocation) = 0; // #131

	virtual IT4WorldActor* GetMousePickingActor() = 0;
	virtual IT4WorldActor* GetWorldRayPickingActor(const FRay& InWorldRay, FVector& OutHitLocation) = 0; // #111

	virtual bool GetMousePickingLocation(FVector& OutLocation) = 0;

	virtual FViewport* GetViewport() const = 0; // #68

	virtual void ClearOutline() = 0; // #115
	virtual void SetOutlineTarget(const FT4ActorID& InActorID, const FLinearColor& InColor) = 0; // #115

	// #114 : Client/Server 모두 사용!
	virtual bool AddClientObject(const FT4ObjectID& InObjectID, UT4GameObjectBase* InGameObject) = 0; // #114
	virtual void RemoveClientObject(const FT4ObjectID& InObjectID) = 0; // #114
	virtual void RemoveAllClientObjects() = 0; // #114
	virtual UT4GameObjectBase* GetClientObject(const FT4ObjectID& InObjectID) const = 0; // #114
	virtual uint32 GetNumClientObjects() const = 0; // #114

#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4FrameworkMinimal.h)
	// Server
	//
	virtual FT4ObjectID GenerateObjectIDForServer() = 0; // #41

#if WITH_EDITOR
	virtual FT4ObjectID ReservedObjectIDForEditor() = 0; // #114 : 미리 잡아놓는다. (툴용)
#endif

	virtual bool AddObjectController(const FT4ObjectID& InObjectID, IT4AIControllerBase* InAIController) = 0; // #31
	virtual void RemoveObjectController(const FT4ObjectID& InObjectID) = 0; // #31
	virtual IT4AIControllerBase* GetObjectController(const FT4ObjectID& InObjectID) const = 0; // #31
	virtual uint32 GetNumObjectControllers() const = 0; // #114

	virtual bool AddServerObject(const FT4ObjectID& InObjectID, UT4GameObjectBase* InGameObject) = 0; // #114
	virtual void RemoveServerObject(const FT4ObjectID& InObjectID) = 0; // #114
	virtual UT4GameObjectBase* GetServerObject(const FT4ObjectID& InObjectID) const = 0; // #114
	virtual uint32 GetNumServerObjects() const = 0; // #114

	virtual void AddLoginPlayerForServer() = 0; // #146
	virtual uint32 GetLoginPlayerCountForServer() = 0; // #146

	virtual uint32 GetNumPlayerForServer() const = 0; // #140
	virtual bool GetPlayerObjectIDsForServer(TArray<FT4ObjectID>& OutObjectIds) = 0; // #140
	virtual bool GetNPCObjectIDsForServer(TArray<FT4ObjectID>& OutObjectIds) = 0; // #140
#endif

#if WITH_EDITOR
	// Tool
	//
	virtual void SetInitializeEditor(IT4EditorViewportClient* InViewportClient) = 0; // #30, #144 : Editor 용 PlayerController 가 스폰됨

	virtual IT4EditorViewportClient* GetEditorViewportClient() const = 0; // #79

	virtual IT4EditorGameplayHandler* GetEditorGameplayHandler() const = 0; // #60
	virtual void SetEditorGameplayHandler(IT4EditorGameplayHandler* bInGameplayHandler) = 0; // #60

	virtual AT4PlayerControllerBase* GetEditorPlayerController() const = 0; // #79
	virtual void SetEditorPlayerController(AT4PlayerControllerBase* InPlayerController) = 0; // #42

	virtual bool IsPreviewMode() const = 0; // #68

	virtual bool IsEditMode() const = 0; // #132 : T4Framework 에디터에서 Simulation 사용 여부
	virtual void SetEditMode(bool bInEnable) = 0; // #132 : T4Framework 에디터에서 Simulation 사용 여부

	virtual bool IsVerifyMode() const = 0; // #129 : Entity 에디터에서 데이터 검증
	virtual void SetVerifyMode(bool bInEnable) = 0; // #129 : Entity 에디터에서 데이터 검증

	virtual float GetGlboalTimeScale() const = 0; // #117
	virtual void SetGlobalTimeScale(float InTimeScale) = 0; // #117

	virtual bool IsInputControlLocked() const = 0;
	virtual void SetLockInputControl(bool bInLock) = 0; // #30

	virtual bool IsChangePlayerDisabled() const = 0;
	virtual void SetDisableChangePlayer(bool bInDisable) = 0; // #72

	virtual bool IsEditorAISystemPaused() const = 0;
	virtual void SetEditorPauseAISystem(bool bInPause) = 0; // #52
#endif
};

// #42
DECLARE_DELEGATE_TwoParams(FT4OnPreCreateFramework, ET4FrameworkType, IT4Framework*); // #42
DECLARE_DELEGATE_TwoParams(FT4OnPostCreateFramework, ET4FrameworkType, IT4Framework*); // #42
#if WITH_EDITOR
DECLARE_DELEGATE_OneParam(FT4OnCreateEditorPlayerController, IT4Framework*); // #42
#endif
class T4FRAMEWORK_API FT4FrameworkDelegates
{
public:
	static FT4OnPreCreateFramework OnPreCreateFramework;
	static FT4OnPreCreateFramework OnPostCreateFramework;

#if WITH_EDITOR
	static FT4OnCreateEditorPlayerController OnCreateEditorPlayerController;
#endif

private:
	FT4FrameworkDelegates() {}
};

namespace T4Framework
{
	T4FRAMEWORK_API IT4Framework* CreateFramework(
		ET4FrameworkType InFrameType,
		const FT4WorldConstructionValues& InWorldConstructionValues // #87
	);
	T4FRAMEWORK_API void DestroyFramework(IT4Framework* InFramework);

	T4FRAMEWORK_API bool HasFramework(ET4LayerType InLayerType);
	T4FRAMEWORK_API IT4Framework* GetFramework(ET4LayerType InLayerType);
}