// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IDetailCustomization.h"
#include "DetailCategoryBuilder.h"
#include "Input/Reply.h"

/**
  * #94
 */
class IDetailsView;
class ST4EnvTimeTagListWidget; // #90
class FT4EditorViewModelBase;
class UT4EnvironmentAsset;
class UT4EditorEnvironmentController;
class T4EDITORCOMMON_API FT4EnvironmentDetails : public FEditorUndoClient, public TSharedFromThis<FT4EnvironmentDetails>
{
public:
	FT4EnvironmentDetails(FT4EditorViewModelBase* InViewModelBase);
	~FT4EnvironmentDetails();

	//~ FEditorUndoClient interface
	void PostUndo(bool bSuccess) override; // #125
	void PostRedo(bool bSuccess) override { PostUndo(bSuccess); } // #125
	//~ FEditorUndoClient interface

	void CustomizeEnvironmentDetails(
		IDetailCategoryBuilder& InDetailCategoryBuilder,
		UT4EnvironmentAsset* InEnvironmentAsset
	); // #94

	void OnApplyEnvironmentAsset(UT4EnvironmentAsset* InEnvironmentAsset, bool bAutoSelect); // #94

	void OnApplyTimeTag(); // #95

private:
	void RefreshWidgets();
	void RefreshWithAutoSelected();

	TSharedRef<IDetailCustomization> MakeEnvironmentTimeTagDetailInstance();

	void HandleOnTimeTagDetailsPropertiesChanged(const FPropertyChangedEvent& InChangedEvent); // #95

	void HandleOnEnvTimeTagSelected(const FName InName); // #90
	void HandleOnEnvTimeTagAdd(); // #90
	void HandleOnEnvTimeTagRemove(const FName InName); // #90
	FReply HandleOnTimeTagCopyClipboardSelected(); // #104
	FReply HandleOnTimeTagPasteClipboardSelected(); // #104
	FReply HandleOnTimeTagGetEnvronmentSettings(); // #90 : 현재 에디터 레벨의 정보로 TimeTagData 를 채운다.
	FReply HandleOnTimeTagOverrideSourceSettings(); // #147 : 에디터 초기화시 저장한 UWorld 의 원본 TimeTagData 를 덮어씌운다.

private:
	FT4EditorViewModelBase* ViewModelBaseRef;
	TWeakObjectPtr<UT4EnvironmentAsset> EnvironmentAssetPtr;

	TSharedPtr<ST4EnvTimeTagListWidget> EnvTimeTagListWidgetPtr; // #90
	TSharedPtr<IDetailsView> EnvTimeTagDetailsPtr; // #90
};
