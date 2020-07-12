// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  *
 */
class IT4EditorViewModel;
class UTexture2D;
class UT4EditorActionReplayController;
class T4EDITORCOMMON_API FT4EditorToolkitBase
{
public:
	FT4EditorToolkitBase();
	virtual ~FT4EditorToolkitBase();

	void OnInitialize(
		const EToolkitMode::Type InMode,
		const TSharedPtr<IToolkitHost>& InInitToolkitHost,
		UObject* InAsset
	); // #118

	void OnFinialize(); // #118

	virtual ET4LayerType GetLayerType() const { return ET4LayerType::Max; }

	virtual IT4EditorViewModel* GetMainViewModelInterface() const { return nullptr; } // #104

	virtual bool HasActionReplaySystem() const { return false; } // #68
	virtual UT4EditorActionReplayController* GetActionReplaySystem() const { return nullptr; } // #68

protected:
	virtual void Initialize(
		const EToolkitMode::Type InMode,
		const TSharedPtr<IToolkitHost>& InInitToolkitHost,
		UObject* InAsset
	) // #118
	{
	}

	virtual void Finailize() {} // #118

	void CommonSetupCommands(TSharedRef<FUICommandList> InCommandList);
	void CommonExtendToolbar(FToolBarBuilder& InToolbarBuilder);

	virtual void ExecuteSaveAsset() {} // #118
	virtual void ExecuteCloseWindow() {} // #118

	virtual void HandleOnDespawnAll(); // #129

private:
	void HandleOnMapChangedEvent(UWorld* InOldWorld, EMapChangeType InMapChangeType); // #118

	// #68
	void HandleOnActionReplayRec();

	void HandleOnActionReplayPlay();
	TSharedRef<SWidget> HandleOnActionReplayPlayMenu();
	void HandleOnToogleActionReplayRepeatEnable();
	bool HandleOnIsActionReplayRepeatEnabled() const;
	void HandleOnToogleActionReplayPlayerPossessed();
	bool HandleOnIsActionReplayPlayerPossessed() const;

	void HandleOnActionReplayPause();
	void HandleOnActionReplayStop();

	bool HandleOnCanExecuteActionReplayRec();
	bool HandleOnCanExecuteActionReplayPlay();
	bool HandleOnCanExecuteActionReplayPause();
	bool HandleOnCanExecuteActionReplayStop();
	// ~#68

private:
	FDelegateHandle OnMapChangedEventHandle; // #118
};