// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IDetailCustomization.h"
#include "IDetailGroup.h"
#include "Input/Reply.h"

/**
  * #98, #158
 */
class IStructureDetailsView;
class FT4EditorViewModelBase;
class UT4PostProcessAsset;
class T4EDITORCOMMON_API FT4PostProcessDetails : public FEditorUndoClient, public TSharedFromThis<FT4PostProcessDetails>
{
public:
	FT4PostProcessDetails(FT4EditorViewModelBase* InViewModelBase);
	~FT4PostProcessDetails();

	//~ FEditorUndoClient interface
	void PostUndo(bool bSuccess) override; // #125
	void PostRedo(bool bSuccess) override { PostUndo(bSuccess); } // #125
	//~ FEditorUndoClient interface

	void CustomizePostProcessDetails(
		IDetailGroup& InDetailGroup,
		UT4PostProcessAsset* InPostProcessAsset
	); // #94

	void OnApplyPostProcessAsset(UT4PostProcessAsset* InPostProcessAsset); // #94

protected:
	void HandleOnPostProcessDataChangingProperties(const FPropertyChangedEvent& InEvent);

private:
	void RefreshWidgets();

private:
	FT4EditorViewModelBase* ViewModelBaseRef;
	TWeakObjectPtr<UT4PostProcessAsset> PostProcessAssetPtr;

	TSharedPtr<IStructureDetailsView> PostProcessDataDetailsPtr; // #158
};
