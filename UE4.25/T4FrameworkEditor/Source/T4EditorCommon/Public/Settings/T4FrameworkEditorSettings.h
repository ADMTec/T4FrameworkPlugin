// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "T4FrameworkEditorSettings.generated.h"

/**
  *
 */
UCLASS(config = T4FrameworkEditor)
class T4EDITORCOMMON_API UT4FrameworkEditorSettings : public UDeveloperSettings
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

	UPROPERTY(config, EditAnywhere, Category= ConstantTable)
	TSoftObjectPtr<UDataTable> BuiltinConstantMasterDataTable; // #158

	UPROPERTY(config, EditAnywhere, Category = ConstantTable)
	FName BuiltinConstantMasterLanguage; // #158

protected:
	static FT4OnContentEditorSettingsChanged SettingsChangedDelegate;
};
