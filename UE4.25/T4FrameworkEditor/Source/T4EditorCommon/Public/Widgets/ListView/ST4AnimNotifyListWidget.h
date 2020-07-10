// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "ST4ListViewWidget.h"

/**
  * #111
 */
class UAnimSequence;
class T4EDITORCOMMON_API ST4AnimNotifyListWidget : public ST4ListViewWidget
{
public:
	SLATE_BEGIN_ARGS(ST4AnimNotifyListWidget) {}
		SLATE_EVENT(FT4OnSelected, OnSelected)
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs);

	ST4AnimNotifyListWidget();
	~ST4AnimNotifyListWidget();

	void SetAnimSequenceAsset(const UAnimSequence* InAnimSequenceAsset);

	UObject* GetAnimNotifySelected() const;

protected:
	void UpdateLists() override;

private:
	TWeakObjectPtr<const UAnimSequence> AnimSequenceAssetPtr;
};
