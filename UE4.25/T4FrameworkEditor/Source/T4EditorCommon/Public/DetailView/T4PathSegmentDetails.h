// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IDetailCustomization.h"
#include "DetailCategoryBuilder.h"
#include "Input/Reply.h"

/**
  * #155
 */
class IDetailsView;
class ST4PathSegmentPointListWidget;
class FT4EditorViewModelBase;
class UT4PathSegmentAsset;
class UT4EditorPathSegmentController;
class T4EDITORCOMMON_API FT4PathSegmentDetails : public FEditorUndoClient, public TSharedFromThis<FT4PathSegmentDetails>
{
public:
	FT4PathSegmentDetails(FT4EditorViewModelBase* InViewModelBase);
	~FT4PathSegmentDetails();

	//~ FEditorUndoClient interface
	void PostUndo(bool bSuccess) override; // #125
	void PostRedo(bool bSuccess) override { PostUndo(bSuccess); } // #125
	//~ FEditorUndoClient interface

	void CustomizeDetails(
		IDetailCategoryBuilder& InDetailCategoryBuilder,
		UT4PathSegmentAsset* InPathSegmentAsset
	);

private:
	TSharedRef<IDetailCustomization> MakePathSegmentPointDetailInstance();

	void HandleOnItemRefresh(); // #155 : ViewModel 에서 호출

	void HandleOnPathSegmentPointSelected(const FName InName);
	void HandleOnPathSegmentPointDoubleClicked(const FName InName); // 카메라 At 이동
	
	FReply HandleOnPathSegmentPointInsert();
	FReply HandleOnPathSegmentPointAddTail();
	FReply HandleOnPathSegmentPointRemove();

	void HandleOnPathSegmentPointDetailsPropertiesChanged(const FPropertyChangedEvent& InChangedEvent);

private:
	FT4EditorViewModelBase* ViewModelBaseRef;
	TWeakObjectPtr<UT4PathSegmentAsset> PathSegmentAssetPtr;

	TSharedPtr<ST4PathSegmentPointListWidget> PathSegmentPointListWidgetPtr;
	TSharedPtr<IDetailsView> PathSegmentPointDetailsPtr;

	bool bUpdating; // #71 : 자기 이벤트에 대한 업데이트 방지
};
