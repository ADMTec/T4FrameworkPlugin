// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IDetailCustomization.h"
#include "DetailCategoryBuilder.h"

/**
  * #124
 */
class IT4EditorViewModel;
class T4EDITORCOMMON_API FT4EditorBookmarkDataDetails : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance(
		IT4EditorViewModel* InViewModel
	);

	FT4EditorBookmarkDataDetails(IT4EditorViewModel* InViewModel)
		: ViewModel(InViewModel)
	{
	}

	void CustomizeDetails(IDetailLayoutBuilder& InBuilder);

protected:
	bool CustomizePropertyOverride(
		IDetailLayoutBuilder& InBuilder,
		IDetailCategoryBuilder& InDetailCategoryBuilder,
		TSharedRef<IPropertyHandle> InPropertyHandle
	);

private:
	IT4EditorViewModel* ViewModel;
};
