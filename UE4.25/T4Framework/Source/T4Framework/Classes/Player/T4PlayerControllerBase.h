// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4FrameworkMinimal.h"

#include "T4Framework.h" // #25, #42

#include "T4Engine/Public/Action/T4ActionKey.h"

#include "GameFramework/PlayerController.h"

#include "T4PlayerControllerBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html
 */

class APawn;
class AT4GameHUDBase;
class UT4SpringArmComponent;
class UT4CameraComponent;
class UT4SceneComponent;
class IT4WorldActor;

UCLASS()
class T4FRAMEWORK_API AT4PlayerControllerBase : public APlayerController, public IT4PlayerController
{
	GENERATED_UCLASS_BODY()

public:
	void SetupInputComponent() override;
	void PostInitializeComponents() override;

	void TickActor(
		float InDeltaTime, 
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

	/** If true, actor is ticked even if TickType==LEVELTICK_ViewportsOnly	 */
	bool ShouldTickIfViewportsOnly() const override; // #17

	void Destroyed() override; // #144 :: 서버가 아닐 경우 Framework Reset 등의 처리!! (매우중요!!)
	
	// #116 : 마우스 우클릭으로 카메라 조정시 bShowMouseCursor flag 를 켜주면 자연스러운 움직임을 캡처할 수가 없어
	//        bShowMouseCursor flag 를 끄고, bMouseMoveLocked flag 로 MouseCursor 를 사용하도록 제어 
	EMouseCursor::Type GetMouseCursor() const override;

protected:
	void BeginPlay() override;

	void OnPossess(APawn* InPawn) override;
	void OnUnPossess() override;

public:
	// IT4ObjectController
	ET4LayerType GetLayerType() const override { return LayerType; }
	ET4ControllerType GetType() const override { return ET4ControllerType::Player; } // #114

	bool SetPossessActor(const FT4ActorID& InNewTargetID) override;
	void ResetPossessActor(bool bInSetDefaultPawn) override;

	bool HasPossessActor() const override { return PossessActorID.IsValid(); }
	const FT4ActorID& GetPossessActorID() const override { return PossessActorID; }
	IT4WorldActor* GetPossessActor() const override;

	bool HasObserverActor() const override { return ObserverActorID.IsValid(); } // #52
	bool SetObserverActor(const FT4ActorID& InNewObserverID) override; // #52
	void ClearObserverActor() override; // #52

#if WITH_EDITOR
	bool IsFreeCameraModeEnabled() const override { return bFreeCameraModeEnabled; } // #133
	void SetFreeCameraMode(bool bInEnable) override; // #133
#endif

	bool HasAction(const FT4ActionKey& InActionKey) const override; // #20
	bool IsPlayingAction(const FT4ActionKey& InActionKey) const override; // #20 : Playing 중인지를 체크. Paused 면 False 가 리턴됨!

	AController* GetAController() override;
	APlayerCameraManager* GetCameraManager() const override; // #100

	IT4WorldSystem* GetWorldSystem() const override; // #52
	UT4GameObjectBase* GetGameObjectBase() const override; // #114

public:
	// IT4PlayerController
	const FT4ObjectID& GetGameObjectID() const override { return GameObjectID; }
	void SetGameObjectID(const FT4ObjectID& InObjectID) override { check(InObjectID.IsValid()); GameObjectID = InObjectID; } // #114

	bool CheckAuthority() const override { return HasAuthority(); }

	void OnSetInputMode(ET4InputMode InMode) override;

	FViewport* GetViewport() const override; // #68

	APawn* GetDefaultPawn() const override; // #86

	bool IsHMDConnected() const override; // #153
	bool IsGamepadAttached() const override; // #151

	FRotator GetViewControlRotation() const override;
	
#if WITH_EDITOR
	ET4CameraType GetCameraType() const override { return (bFreeCameraModeEnabled) ? ET4CameraType::Free : CameraTypeSelected; } // #40
#else
	ET4CameraType GetCameraType() const override { return CameraTypeSelected; } // #40
#endif
	float GetCameraFOV() const override { return CameraFOV; } // #40
	FVector GetCameraLocation() const override;
	FRotator GetCameraRotation() const override;
	FVector GetCameraLookAtLocation() const override; // #30

	void SwitchCameraType(ET4CameraType InCameraType) override; // #40

	void SetCameraZoom(float InAmount) override;
	void SetCameraZoomMaxScale(float InScale) override { CameraZoomMaxScale = InScale; } // #86
	void SetCameraPitch(float InAmount) override;
	void SetCameraYaw(float InAmount) override;
	void SetCameraBlend(const FRotator& InTargetRotation, bool bInImmediate) override; // #126, #139 : UT4EngineSettings::CameraAngleBlendRate

	void SetFreeCameraMoveDirection(const FVector& InLocation) override;
	void SetFreeCameraLocationAndRotation(const FVector& InLocation, const FRotator& InRotation) override; // #94, #86

	void GetCameraInfoCached(FRotator& OutRotation, float& OutDistance) override; // #87
	void SetCameraInfoCached(const FRotator& InRotation, const float& InDistance) override; // #87

	bool GetScreenCenterToWorldRay(const FVector2D& InScreenOffset, FRay& OutWorldRay) override; // #121 : Mode 에 따라 마우스 또는 화면 중앙(FPS)의 Ray 를 리턴
	bool GetScreenPositionToWorldRay(const FVector2D& InScreenPosition, FRay& OutWorldRay) override; // #131

	bool GetMousePositionToWorldRay(FRay& OutWorldRay) override;
	bool GetTouchPositionToWorldRay(ETouchIndex::Type InFingerIndex, FRay& OutWorldRay) override; // #151 : Only Client

	void SetMouseCursorLock(bool bInLock) override;
	bool IsMouseCursorLocked() const override { return bMouseCursorLocked; }

	void SetMouseCursorType(EMouseCursor::Type InCursorType) override;
	void ShowMouseCursor(bool InShow) override;

	void SetMouseCursorPosition(const FVector2D& InPosition) override; // #30, #113 : ScreenSpace
	bool GetMouseCursorPosition(FVector2D& OutLocation) const override; // #30, #113

	bool GetTouchPosition(ETouchIndex::Type InFingerIndex, FVector2D& OutPosition) const override; // #151

#if WITH_EDITOR
	// see UGameViewportClient::InputKey
	bool EditorInputKey(FKey InKey, EInputEvent InEvent, float InAmountDepressed, bool bInGamepad) override; // #30

	// see UGameViewportClient::InputAxis
	bool EditorInputAxis(FKey InKey, float InDelta, float InDeltaTime, int32 InNumSamples, bool bInGamepad) override; // #30
	void EditorSetViewportClient(IT4EditorViewportClient* InEditorViewportClient) override;

	FT4OnViewTargetPreChanged& GetOnViewTargetPreChanged() override { return OnViewTargetPreChanged; } // #162
	FT4OnViewTargetChanged& GetOnViewTargetChanged() override { return OnViewTargetChanged; } // #39
#endif

protected:
	virtual void NotifyPostInitializeComponents() {} // #151

	virtual void NotifyAdvance(float InDeltaTime) {} // #49
	virtual void NotifyBeginPlay() {} // #114
	virtual void NotifyPossess(IT4WorldActor* InNewWorldActor) {} // #49
	virtual void NotifyUnPossess(IT4WorldActor* InOldWorldActor) {} // #49

	virtual void NotifySetInputMode(ET4InputMode InMode) {} // #151

	IT4WorldActor* FindWorldActor(const FT4ActorID& InActorID) const; // #49

#if WITH_EDITOR
	IT4EditorGameplayHandler* GetEditorGameplayHandler() const; // #60
#endif

	virtual void OnInstallPlayerSettings(); // #153
	virtual void OnUninstallPlayerSettings(); // #153

private:
	void AttachCameraComponent(APawn* InOwner);
	void DetachCameraComponent();

#if TECH4_ENGINE_HMD_USED
	void AttachHMDComponent(APawn* InOwner); // #153
	void DetachHMDComponent(); // #153
#endif

	APawn* GetTargetPawnSelected(); // #52

protected:
	ET4LayerType LayerType;
	FT4ObjectID GameObjectID; // #114

	UPROPERTY(Transient)
	UT4SpringArmComponent* CameraSpringArmComponent;

	UPROPERTY(Transient)
	UT4CameraComponent* CameraComponent;

	UPROPERTY(Transient)
	UT4SceneComponent* VROriginComponent; // #153

private:
	FT4ActorID PossessActorID;
	FT4ActorID ObserverActorID; // #52

	TWeakObjectPtr<APawn> CachedDefaultPawnPtr;

	ET4InputMode InputModeSelected; // #133

	bool bCameraTypeDirty; // #40
	ET4CameraType CameraTypeSelected; // #40

	bool bMouseCursorLocked; // #116
	FVector2D SaveMousePosition;

	float CachedCameraSpringTargetArmLength;
	FRotator CachedCameraRotation;

	// #40
	float CameraFOV;
	float CameraZoomSpeed;
	float CameraZoomDistanceMin;
	float CameraZoomDistanceMax;
	float CameraZoomMaxScale; // #86
	// ~#40

	bool bCameraBlendEnabled; // #139
	FRotator CameraBlendTargetRotation; // #139

#if WITH_EDITOR
	bool bFreeCameraModeEnabled; // #133
	ET4CameraType PrevCameraTypeSelected; // #133
	IT4EditorViewportClient* EditorViewportClient; // #30
	FT4OnViewTargetPreChanged OnViewTargetPreChanged; // #162
	FT4OnViewTargetChanged OnViewTargetChanged; // #39
#endif
};
