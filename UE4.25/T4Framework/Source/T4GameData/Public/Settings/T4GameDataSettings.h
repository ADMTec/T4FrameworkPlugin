// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "T4GameDataSettings.generated.h"

/**
  * #172 : Plugins/T4Framework/Config/DefaultT4Framework.ini
 */
class UDataTable;
UCLASS(config = T4Framework, meta = (DisplayName = "T4GameData"))
class T4GAMEDATA_API UT4GameDataSettings : public UDeveloperSettings
{
public:
	GENERATED_UCLASS_BODY()

	// Begin UDeveloperSettings Interface
	FName GetCategoryName() const override;
#if WITH_EDITOR
	FText GetSectionText() const override;
#endif
	// END UDeveloperSettings Interface

#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnGameDataSettingsChanged, const FString&, const UT4GameDataSettings*);

	static FT4OnGameDataSettingsChanged& OnSettingsChanged();
#endif

public:
	// Plugins/T4Framework/Config/DefaultT4Framework.ini
	UPROPERTY(EditAnywhere, config, Category = "Game Master")
	TSoftObjectPtr<UDataTable> GameMasterDataTableAsset; // #48, #135

protected:
#if WITH_EDITOR
	static FT4OnGameDataSettingsChanged SettingsChangedDelegate;
#endif
};