// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/Action/T4ActionParameters.h"
#include "T4Framework/Public/T4FrameworkEditor.h"
#include "T4EditorGameplayController.generated.h"

/**
  * #60
 */
UCLASS()
class T4EDITORCOMMON_API UT4EditorGameplayController : public UObject, public IT4EditorGameplayHandler
{
	GENERATED_UCLASS_BODY()

public:
	// UObject
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

public:
	// IT4EditorGameplayHandler
	bool IsSimulating() const override { return bSimulating; } // #102

	float GetDefaultMoveSpeed() const { return DefaultMoveSpeed; } // #114

	bool IsEnabled() const override { return bGameplaySettingsUsed; } // #104 : conti 에서만 true, world 에서는 false

	bool IsAISystemDisabled() const override { return (bSimulating) ? bAIDisabled : false; } // #102

	bool IsSandbagAttackable() const override { return (SandbagRole == ET4EditorPlayRole::Attacker) ? true : false; }
	bool IsSandbagOneHitDie() const override { return bSandbagOneHitDie; } // #76

	bool IsOverrideSkillData() const override { return bOverrideSkillData; } // #63
	bool IsOverrideEffectData() const override { return bOverrideEffectData; } // #68

	FName GetOverrideSkillDataName() const override { return SkillContentNameIDSelected; }
	FName GetOverrideEffectDataName() const override { return EffectContentNameIDSelected; }

	const FT4EditorSkillDataInfo& GetOverrideSkillDataInfo() const override { return SkillDataInfo; }
	const FT4EditorEffectDataInfo& GetOverrideEffectDataInfo() const override { return EffectDataInfo; }
	const FSoftObjectPath& GetOverrideActionSetPath() const override;

public:
	void SetLayerType(ET4LayerType InLayerType) { LayerType = InLayerType; } // #60
	
	void SetSimulationEnabled(bool bInEnable) { bSimulating = bInEnable; } // #102
	void SetUseGameplaySettings(bool bInEnable) { bGameplaySettingsUsed = bInEnable; } // #104 : conti 에서만 true, world 에서는 false

	FT4ActionParameters& GetActionParameters() { return ContiParameter; }

	DECLARE_MULTICAST_DELEGATE(FT4OnEditorGameplayControllerChanged);
	FT4OnEditorGameplayControllerChanged& GetEditorGameplayHandlerChanged()
	{
		return OnEditorGameplayControllerChanged;
	}

	class IT4EditorGameData* GetEditorGameData();

public:
	// #T4_ADD_EDITOR_PLAY_TAG

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FName WeaponContentNameIDSelected;

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FName CostumeContentNameIDSelected;

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	float DefaultMoveSpeed; // #114

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FName NPCContentNameIDSelected;

	UPROPERTY(VisibleAnywhere, Category = Default, Transient)
	TSoftObjectPtr<UT4EntityAsset> NPCEntityAsset; // #76

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	bool bAIDisabled;

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	ET4EditorPlayRole SandbagRole; // #63

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	bool bSandbagOneHitDie; // #76

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	bool bOverrideSkillData; // #63 : 사용중인 Conti 를 덮어 씌울 것인가

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	bool bOverrideEffectData; // #68 : 사용중인 Conti 를 덮어 씌울 것인가

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FName SkillContentNameIDSelected;

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FT4EditorSkillDataInfo SkillDataInfo;

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FName EffectContentNameIDSelected;

	UPROPERTY(EditAnywhere, Category = Default, Transient)
	FT4EditorEffectDataInfo EffectDataInfo;

	TSoftObjectPtr<UT4ActionSetAsset> ThisActionSetAsset;

private:
	ET4LayerType LayerType; // #60
	bool bSimulating; // #102
	bool bGameplaySettingsUsed; // #104 : conti 에서만 true, world 에서는 false
	FT4ActionParameters ContiParameter;
	FT4OnEditorGameplayControllerChanged OnEditorGameplayControllerChanged;
};
