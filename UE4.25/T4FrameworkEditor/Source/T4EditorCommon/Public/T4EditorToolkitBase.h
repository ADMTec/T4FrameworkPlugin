// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Viewport/T4EditorViewportDelegates.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  *
 */
class IT4EditorViewModel;
class UTexture2D;
class UT4EditorReplaySystemController;
class T4EDITORCOMMON_API FT4EditorToolkitBase
{
public:
	FT4EditorToolkitBase();
	virtual ~FT4EditorToolkitBase();

	void OnInitialize(const EToolkitMode::Type InMode, const TSharedPtr<IToolkitHost>& InInitToolkitHost, UObject* InAsset); // #118
	void OnFinialize(); // #118

	virtual ET4LayerType GetLayerType() const { return ET4LayerType::Max; }

	virtual IT4EditorViewModel* GetMainViewModelInterface() const { return nullptr; } // #104

	virtual bool HasReplaySystem() const { return false; } // #68
	virtual UT4EditorReplaySystemController* GetReplaySystem() const { return nullptr; } // #68

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

	bool ReplayIsPlaying();

private:
	void HandleOnMapChangedEvent(UWorld* InOldWorld, EMapChangeType InMapChangeType); // #118

	// #68
	void HandleOnReplayRec();

	void HandleOnReplayPlay();
	TSharedRef<SWidget> HandleOnReplayPlayMenu();
	void HandleOnToogleReplayRepeatEnable();
	bool HandleOnIsReplayRepeatEnabled() const;
	void HandleOnToogleReplayPlayerPossessed();
	bool HandleOnIsReplayPlayerPossessed() const;

	void HandleOnReplayPause();
	void HandleOnReplayStop();

	bool HandleOnCanExecuteReplayRec();
	bool HandleOnCanExecuteReplayPlay();
	bool HandleOnCanExecuteReplayPause();
	bool HandleOnCanExecuteReplayStop();
	// ~#68

protected:
	FT4EditorViewportDelegates PreviewViewportDelegates; // #155
	FT4EditorViewportDelegates MainViewportDelegates; // #155

	FDelegateHandle OnMapChangedEventHandle; // #118
};