// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "T4FrameworkEditorSettings.generated.h"

/**
  *
 */
UCLASS(config = T4FrameworkEditor)
class UT4FrameworkEditorSettings : public UDeveloperSettings
{
public:
	GENERATED_UCLASS_BODY()
	
	// Begin UDeveloperSettings Interface
	FName GetCategoryName() const override;
	FText GetSectionText() const override;
	// END UDeveloperSettings Interface

	void PostInitProperties() override;
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnContentEditorSettingsChanged, const FString&, const UT4FrameworkEditorSettings*);

	static FT4OnContentEditorSettingsChanged& OnSettingsChanged();

public:
	// Plugins/T4FrameworkEditor/Config/DefaultT4FrameworkEditor.ini

	UPROPERTY(config, noclear, EditAnywhere, Category= PlayMode)
	FSoftClassPath BuiltinGameInstanceClass; // #56

	UPROPERTY(config, noclear, EditAnywhere, Category= PlayMode)
	FSoftClassPath BuiltinGameModeClass; // #56

	UPROPERTY(config, EditAnywhere, Category=DataTable)
	FSoftObjectPath MapZoneConstantTablePath; // #92

	UPROPERTY(config, EditAnywhere, Category=DataTable)
	FSoftObjectPath TimeTagConstantTablePath; // #90

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath CharacterSystemAnimationConstantTablePath; // #39

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath CharacterBasicSkillAnimationConstantTablePath; // #39

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath CharacterParagonSkillAnimationConstantTablePath; // #131

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath PropAnimationConstantTablePath; // #126

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath WeaponAnimationConstantTablePath; // #107

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath ActionPointConstantTablePath; // #57

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath EquipPointConstantTablePath; // #72

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath CompositePartConstantTablePath; // #71

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath FullBodySkinConstantTablePath; // #130

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath PlayTagMaterialConstantTablePath; // #74

	UPROPERTY(config, EditAnywhere, Category = ConstantTable)
	FSoftObjectPath PlayTagAttachmentConstantTablePath; // #74

	UPROPERTY(config, EditAnywhere, Category = ConstantTable)
	FSoftObjectPath PlayTagActionConstantTablePath; // #74

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath AnimSetConstantTablePath; // #73

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath StanceConstantTablePath; // #106

	UPROPERTY(config, EditAnywhere, Category=ConstantTable)
	FSoftObjectPath ReactionConstantTablePath; // #76

protected:
	static FT4OnContentEditorSettingsChanged SettingsChangedDelegate;
};
