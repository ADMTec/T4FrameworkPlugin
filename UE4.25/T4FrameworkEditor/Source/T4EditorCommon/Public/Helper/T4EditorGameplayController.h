// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/Action/T4ActionParameters.h"
#include "T4Framework/Public/T4FrameworkEditor.h"
#include "T4EditorGameplayController.generated.h"

/**
  * #60
 */
struct FT4ActionTestSettings;
class UT4EntityAsset;
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
	bool IsUsePlaySettings() const override { return bSettingsUsed; } // #104 : Action 에서만 true, 기타는 False. 즉 Override 를 사용하지 않음

	float GetDefaultMoveSpeed() const override { return DefaultMoveSpeed; } // #114

	bool IsNPCAIDisabled() const override { return (bSimulating) ? bNPCAIDisabled : false; } // #102
	void SetDisableNPCAI(bool bInDisable) override { bNPCAIDisabled = bInDisable; } // #161

	bool IsSandbagAttackable() const override { return (SandbagRole == ET4EditorPlayRole::Attacker) ? true : false; }

	bool IsOverrideSkillData() const override { return bOverrideSkillData; } // #63
	bool IsOverrideEffectData() const override { return bOverrideEffectData; } // #68

	FName GetOverrideSkillDataName() const override { return SkillContentNameIDSelected; }
	FName GetOverrideEffectDataName() const override { return EffectContentNameIDSelected; }

	const FT4EditorSkillDataInfo& GetOverrideSkillDataInfo() const override { return SkillDataInfo; }
	const FT4EditorEffectDataInfo& GetOverrideEffectDataInfo() const override { return EffectDataInfo; }
	const FSoftObjectPath& GetEditActionPackPath() const override;

public:
	void SetLayerType(ET4LayerType InLayerType) { LayerType = InLayerType; } // #60
	
	void SetSimulationEnabled(bool bInEnable) { bSimulating = bInEnable; } // #102
	void SetUseSettings(bool bInEnable) { bSettingsUsed = bInEnable; } // #104 : conti 에서만 true, world 에서는 false

	FT4ActionParameters& GetActionParameters() { return ContiParameter; }

	DECLARE_MULTICAST_DELEGATE(FT4OnEditorGameplayControllerChanged);
	FT4OnEditorGameplayControllerChanged& GetEditorGameplayHandlerChanged()
	{
		return OnEditorGameplayControllerChanged;
	}

	UT4EntityAsset* GetNPCEntityAsset(); // #164
	UT4EntityAsset* GetWeaponEntityAsset(); // #164
	UT4EntityAsset* GetCostumeEntityAsset(); // #164

	bool LoadSkillDataFromGameDB(); // #164
	bool LoadEffectDataFromGameDB(); // #164

	void LoadFrom(const FT4ActionTestSettings* InActionTestSettings); // #158
	void SaveTo(FT4ActionTestSettings* OutActionTestSettings); // #158

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
	ET4EditorPlayRole SandbagRole; // #63

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

	TSoftObjectPtr<UT4ActionPackAsset> ThisActionPackAsset;

private:
	ET4LayerType LayerType; // #60
	bool bSimulating; // #102
	bool bSettingsUsed; // #104 : conti 에서만 true, world 에서는 false
	bool bNPCAIDisabled;
	FT4ActionParameters ContiParameter;
	FT4OnEditorGameplayControllerChanged OnEditorGameplayControllerChanged;
};
